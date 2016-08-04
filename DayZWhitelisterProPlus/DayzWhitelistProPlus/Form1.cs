using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.Odbc;
using System.Drawing;
using System.Linq;
using MySql.Data.MySqlClient;
using Microsoft.VisualBasic;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;
using BattleNET;
using System.Diagnostics;
using System.Net;
using System.IO;

namespace Awakener
{
    public partial class frmMain : Form
    {
        // Load rcon credentials
        public static string ip = Properties.Settings.Default.rconIP;
        public static int port = Properties.Settings.Default.rconPort;
        public static string password = Properties.Settings.Default.rconPass;

        // Load database credentials
        #region gameservr database
        public static string gameDBHost
        {
            get
            {
                return Properties.Settings.Default.gameDBHost;
            }
        }
        public static string gameDBUser
        {
            get
            {
                return Properties.Settings.Default.gameDBUser;
            }
        }
        public static string gameDBPort
        {
            get
            {
                return Properties.Settings.Default.gameDBPort.ToString();
            }
        }
        public static string gameDBDatabase
        {
            get
            {
                return Properties.Settings.Default.gameDBDatabase;
            }
        }
        public static string gameDBPassword
        {
            get
            {
                return Properties.Settings.Default.gameDBPass;
            }
        }
        #endregion
        #region whitelist database
        public static string whitelistDBHost
        {
            get
            {
                return Properties.Settings.Default.whitelistDBHost;
            }
        }
        public static string whitelistDBUser
        {
            get
            {
                return Properties.Settings.Default.whitelistDBUser;
            }
        }
        public static string whitelistDBPort
        {
            get
            {
                return Properties.Settings.Default.whitelistDBPort.ToString();
            }
        }
        public static string whitelistDBDatabase
        {
            get
            {
                return Properties.Settings.Default.whitelistDBDatabase;
            }
        }
        public static string whitelistDBPassword
        {
            get
            {
                return Properties.Settings.Default.whitelistDBPass;
            }
        }
        #endregion

        #region gamesettings
        public static string Arma2ServerPath
        {
            get
            {
                return Properties.Settings.Default.exePath;
            }
        }
        public static string rptArchive
        {
            get
            {
                return Properties.Settings.Default.logDir;
            }
        }
        public static string rptPath
        {
            get
            {
                return Properties.Settings.Default.rptPath;
            }
        }

        public static string CommandLineOptions
        {
            get
            {
                return Properties.Settings.Default.parameters;
            }
        }
        
        #endregion
        static BattlEyeClient b;

        private Timer keepAliveTimer;
        private Timer mainRebootTimer;
        private Timer triggeredRebootTimer;
        private Timer playerCheckTimer;

        private Dictionary<int, string> received = new Dictionary<int, string>();
        Color bgcolor;

        private List<int> restartTimes;
        int nextRestart;
        private static bool isConnected
        {
            get
            {
                if (b == null)
                {
                    return false;
                }

                return b.Connected;
            }
        }

        private bool autoConnect = false;

        /* Options: need loading from config file eventually */
        private static bool showChat = true;
        private static bool showWelcomeMsg = false;
        private static bool showStartupMsg = false;
        private static bool whiteListEnabled = true;
        private static bool addNewPlayersWhenDisabled = false;
        private static String serverURL = "http://dayzawaken.com/";
        private List<int> sent = new List<int>();

        delegate void DisconnectCallback(string text);
        delegate void DumpMessageCallback(string text);
        delegate void printLineInConsoleCallback(string text);

        public frmMain()
        {
            InitializeComponent();

            keepAliveTimer = new Timer();
            mainRebootTimer = new Timer();
            triggeredRebootTimer = new Timer();
            playerCheckTimer = new Timer();

            restartTimes = new List<int>();
            restartTimes.Add(0);
            restartTimes.Add(6);
            restartTimes.Add(12);
            restartTimes.Add(18);
        }

        private void frmMain_Load(object sender, EventArgs e)
        {
            if (Properties.Settings.Default.firstTimeOpening)
            {
                frmSettings frmS = new frmSettings(this);
                frmS.ShowDialog();

                Properties.Settings.Default.Upgrade();
                Properties.Settings.Default.firstTimeOpening = false;
                Properties.Settings.Default.Save();
            }

            this.FormClosing += FrmMain_FormClosing;
            this.FormClosed += FrmMain_FormClosed;
        }

        private void FrmMain_FormClosing(object sender, FormClosingEventArgs e)
        {
            keepAliveTimer.Stop();
            mainRebootTimer.Stop();
            triggeredRebootTimer.Stop();
        }
        private void FrmMain_FormClosed(object sender, FormClosedEventArgs e)
        {
            keepAliveTimer.Dispose();
            keepAliveTimer = null;
            mainRebootTimer.Dispose();
            mainRebootTimer = null;
            triggeredRebootTimer.Dispose();
            triggeredRebootTimer = null;
        }

        /* DISCONNECT EVENT */
        private void Disconnected(BattlEyeDisconnectEventArgs args)
        {
            mnuConnect.Enabled = true;
            doDisconnect(args.Message);
        }

        private void doDisconnect(String msg)
        {
            if (this.rtbDisplay.InvokeRequired)
            {
                DisconnectCallback d = new DisconnectCallback(doDisconnect);
                this.Invoke(d, new object[] { msg + "\n" });
            }
            else
            {
                AppendTextEx(msg + "\n", Color.Gray);

                mnuConnect.Enabled = true;
                if (autoConnect)
                {
                    mnuConnect.Text = "Stop";
                    mainRebootTimer.Stop();
                    mainRebootTimer = new Timer();
                    mainRebootTimer.Tick += new EventHandler(tryConnecting);
                    mainRebootTimer.Interval = 10000; // in miliseconds
                    mainRebootTimer.Start();
                }
            }
        }

        /* DUMP MESSAGE EVENT */
        private void DumpMessage(BattlEyeMessageEventArgs args)
        {
            // Logging received packet
            if (!received.ContainsKey(args.Id))
            {
                received.Add(args.Id, args.Message);
            }
            if (!sent.Contains(args.Id))
            {
                doDumpMessage(args.Message);
            }
        }

        private void doDumpMessage(String msg)
        {
            setTextColor(msg);

            if (this.rtbDisplay.InvokeRequired)
            {
                DumpMessageCallback d = new DumpMessageCallback(doDumpMessage);
                this.Invoke(d, new object[] { msg });
            }
            else
            {
                // Show chat messages if enabled
                if (showChat == true)
                {
                    AppendTextEx(msg, bgcolor);
                }

                if (parseChatMessage(msg))
                {
                    return;
                }

                try
                {
                    Match matchString;
                    Console.WriteLine("trying ");
                    // Grab the user data if it matches our regular expresion - Thanks to mmmmk for this Regex!
                    matchString = Regex.Match(msg, @"Player #(?<player_id>[0-9]{1,3})\s(?<user>.+) - GUID: (?<guid>.+)\W\D\S", RegexOptions.IgnoreCase);
                    if (matchString.Success)
                    {
                        Console.WriteLine("succes ");
                        // new clien tobj
                        DayzClient client = new DayzClient();

                        client.GUID = matchString.Groups["guid"].Value.Trim();
                        client.playerNo = Convert.ToInt32(matchString.Groups["player_id"].Value);
                        client.UserName = matchString.Groups["user"].Value;

                        Console.WriteLine(string.Format("Succes {0}", client.GUID, client.playerNo, client.UserName));
                        // did we get a valid result? verify
                        if (client.GUID != null && client.UserName != null)
                        {
                            if (VerifyWhiteList(client) == false)
                            {
                                // user is not white listed kick and send message
                                KickPlayer(client);
                                //addPlayer(client);

                                // log event
                                client.logType = DayzClient.LogTypes.Kick;
                                LogPlayer(client);
                            }
                            else
                            {
                                // display welcome message
                                WelcomeMessage(client);

                                // log event;
                                client.logType = DayzClient.LogTypes.Success;
                                LogPlayer(client);
                            }
                        }

                        // destroy client obj
                        client = null;

                        //Console.WriteLine(matchString.Groups["player_id"].Value + "*" + matchString.Groups["guid"].Value + "*" + matchString.Groups["user"].Value);
                    }
                }
                catch (Exception e)
                {
                    Console.WriteLine("error ");
                    Console.Write(e.Message);
                    AppendTextEx("WARNINGWARNINGWARNING!!!!!!!!!! CONTACT JUKKI WHITELIST CHECK POTENTIALY BROKEN\n" + e.Message, Color.Red);
                    // do nothing
                }

            }

        }

        private enum ChatType
        {
            Direct,
            Vehicle,
            Group,
            Side
        }

        private bool parseChatMessage(string msg)
        {
            string text = msg.Substring(0, 5);

            try
            {
                int removeTo = 0;
                ChatType type;
                switch (text)
                {
                    case "(Side":
                        removeTo = 6;
                        type = ChatType.Side;
                        break;
                    case "(Dire":
                        removeTo = 8;
                        type = ChatType.Direct;
                        break;
                    case "(Vehi":
                        removeTo = 9;
                        type = ChatType.Vehicle;
                        break;
                    case "(Grou":
                        removeTo = 7;
                        type = ChatType.Group;
                        break;
                    default:
                        return false;
                }


                string trim = msg.Remove(0, removeTo);
                var name = trim.Split(':')[0].Trim();
                var message = trim.Split(':')[1].Trim();
                LogChatMessage(name, type, message);
                return true;

            }
            catch (Exception ex)
            {
                AppendTextEx(ex.ToString());
            }

            return false;
        }

        private void LogChatMessage(string name, ChatType side, string msg)
        {
            // call insert to log function
            string connStr = string.Format("server={0};user={1};database={2};port={3};password={4};", gameDBHost, gameDBUser, gameDBDatabase, gameDBPort, gameDBPassword);

            MySqlConnection conn = new MySqlConnection(connStr);
            MySqlCommand cmd = new MySqlCommand();

            try
            {
                conn.Open();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.CommandText = "proc_AddChatLog";

                cmd.Parameters.Add(new MySqlParameter("p_name", name));
                cmd.Parameters.Add(new MySqlParameter("p_msg", msg));
                cmd.Parameters.Add(new MySqlParameter("p_type", side.ToString("G")));

                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                AppendTextEx(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn = null;
                cmd = null;
            }

        }

        /* BATTLEYE FUNCTIONS */

        // Sends an empty packet to keep the connection alive
        private void sendKeepAlivePacket(object sender, EventArgs e)
        {
            b.SendCommand("");
        }

        /* WHITELIST FUNCTIONS */

        private static bool VerifyWhiteList(DayzClient client)
        {
            bool returnVal = false;

            string connStr = string.Format("server={0};user={1};database={2};port={3};password={4};", whitelistDBHost, whitelistDBUser, whitelistDBDatabase, whitelistDBPort, whitelistDBPassword);

            MySqlConnection conn = new MySqlConnection(connStr);
            MySqlCommand cmd = new MySqlCommand();
            MySqlDataReader rdr = null;

            try
            {
                conn.Open();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.CommandText = "proc_CheckWhiteList";

                cmd.Parameters.Add(new MySqlParameter("p_guid", client.GUID));

                rdr = cmd.ExecuteReader();

                if (rdr.HasRows == true)
                {
                    returnVal = true;
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
            }
            finally
            {
                rdr.Close();
                conn.Close();
                rdr = null;
                conn = null;
                cmd = null;
            }
            return returnVal;
        }

        private void WelcomeMessage(DayzClient client)
        {
            if (showWelcomeMsg == true)
            {
                b.SendCommand(BattlEyeCommand.Say, string.Format("-1 Welcome: {0}", client.UserName));
            }

            AppendTextEx(string.Format(" Verified Player {0}: {1} - {2}\n", client.playerNo.ToString(), client.GUID.ToString(), client.UserName.ToString()));
        }

        private void KickPlayer(DayzClient client)
        {
            if (whiteListEnabled == true)
            {
                b.SendCommand(BattlEyeCommand.Kick, string.Format(@"{0} not whitelisted! Signup @ {1}", client.playerNo.ToString(), serverURL));
                AppendTextEx(string.Format(" Kicked Player {0} : {1} - {2}\n", client.playerNo.ToString(), client.GUID.ToString(), client.UserName.ToString()));
            }
            else if (addNewPlayersWhenDisabled == true)
            {
                addPlayer(client);
            }
        }

        public void addPlayer(DayzClient client)
        {
            // call insert to log function
            string connStr = string.Format("server={0};user={1};database={2};port={3};password={4};", whitelistDBHost, whitelistDBUser, whitelistDBDatabase, whitelistDBPort, whitelistDBPassword);

            MySqlConnection conn = new MySqlConnection(connStr);
            MySqlCommand cmd = new MySqlCommand();

            string queryString = string.Format("call proc_CheckWhiteList('{0}')", client.GUID);

            try
            {
                conn.Open();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.CommandText = "proc_AddWhiteListed";

                cmd.Parameters.Add(new MySqlParameter("p_name", client.UserName));
                cmd.Parameters.Add(new MySqlParameter("p_email", client.email));
                cmd.Parameters.Add(new MySqlParameter("p_GUID", client.GUID));

                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                AppendTextEx(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn = null;
                cmd = null;
            }
            AppendTextEx(string.Format(" Added Player to whitelist {0} : {1} - {2}\n", client.playerNo.ToString(), client.GUID.ToString(), client.UserName.ToString()));
        }

        public void removePlayer(DayzClient client)
        {
            // call insert to log function
            string connStr = string.Format("server={0};user={1};database={2};port={3};password={4};", whitelistDBHost, whitelistDBUser, whitelistDBDatabase, whitelistDBPort, whitelistDBPassword);

            MySqlConnection conn = new MySqlConnection(connStr);
            MySqlCommand cmd = new MySqlCommand();

            string queryString = string.Format("call proc_CheckWhiteList('{0}')", client.GUID);

            try
            {
                conn.Open();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.CommandText = "proc_SetWhitelistedStatus";

                cmd.Parameters.Add(new MySqlParameter("p_GUID", client.GUID));
                cmd.Parameters.Add(new MySqlParameter("p_whitelisted", 0));

                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                AppendTextEx(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn = null;
                cmd = null;
            }
            AppendTextEx(string.Format(" Removed Player from whitelist - {0}\n", client.GUID.ToString()));
        }

        private void LogPlayer(DayzClient client)
        {
            // call insert to log function
            string connStr = string.Format("server={0};user={1};database={2};port={3};password={4};", whitelistDBHost, whitelistDBUser, whitelistDBDatabase, whitelistDBPort, whitelistDBPassword);

            MySqlConnection conn = new MySqlConnection(connStr);
            MySqlCommand cmd = new MySqlCommand();

            string queryString = string.Format("call proc_CheckWhiteList('{0}')", client.GUID);

            try
            {
                conn.Open();
                cmd.Connection = conn;
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.CommandText = "proc_LogWhiteList";

                cmd.Parameters.Add(new MySqlParameter("p_name", client.UserName));
                cmd.Parameters.Add(new MySqlParameter("p_GUID", client.GUID));
                cmd.Parameters.Add(new MySqlParameter("p_logtype", Convert.ToInt32(client.logType)));

                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                AppendTextEx(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn = null;
                cmd = null;
            }
        }

        /* MISC FUNCTIONS */

        // updates 'bgcolor' depending on type of text being recieved
        private void setTextColor(String msg)
        {
            String text = msg.Substring(0, 5);

            switch (text)
            {
                case "(Side":
                    bgcolor = Color.Cyan;
                    break;
                case "RCon ":
                    bgcolor = Color.Red;
                    break;
                case "(Dire":
                    bgcolor = Color.White;
                    break;
                case "(Vehi":
                    bgcolor = Color.Yellow;
                    break;
                default:
                    bgcolor = Color.Gray;
                    break;
            }
        }
        // Turning whitelist On/Off
        private void mnuWhitelistActiveChange_Click(object sender, EventArgs e)
        {
            if (whiteListEnabled == false)
            {
                whiteListEnabled = true;
                mnuWhitelistActiveChange.Text = "Turn Whitelist Off";
                AppendTextEx("Whitelist turned on.", Color.White);
            }
            else
            {
                whiteListEnabled = false;
                mnuWhitelistActiveChange.Text = "Turn Whitelist On";
                AppendTextEx("Whitelist turned off.", Color.White);
            }
        }
        // Turning welcome message On/Off
        private void mnuWelcomeChange_Click(object sender, EventArgs e)
        {
            if (showWelcomeMsg == false)
            {
                showWelcomeMsg = true;
                mnuWelcomeChange.Text = "Turn Welcome Off";
                AppendTextEx("Welcome turned on.", Color.White);
            }
            else
            {
                showWelcomeMsg = false;
                mnuWelcomeChange.Text = "Turn Welcome On";
                AppendTextEx("Welcome turned off.", Color.White);
            }
        }
        // Turning chat display On/Off
        private void mnuChatChange_Click(object sender, EventArgs e)
        {
            if (showChat == false)
            {
                showChat = true;
                mnuChatChange.Text = "Turn Chat Off";
                AppendTextEx("Chat turned on.", Color.White);
            }
            else
            {
                showChat = false;
                mnuChatChange.Text = "Turn Chat On";
                AppendTextEx("Chat turned off.", Color.White);
            }
        }
        // Turning chat display On/Off
        private void mnuAutoConnect_Click(object sender, EventArgs e)
        {
            if (autoConnect == false)
            {
                autoConnect = true;
                mnuChatChange.Text = "Turn Auto Connect Off";
                AppendTextEx("Auto Connect turned on.", Color.White);
            }
            else
            {
                autoConnect = false;
                mnuChatChange.Text = "Turn Auto Connect On";
                AppendTextEx("Auto Connect turned off.", Color.White);
            }
        }
        // Whether or not to add new players to whitelist when the whitelist is disabled
        private void mnuAddNewPlayersChange_Click(object sender, EventArgs e)
        {
            if (addNewPlayersWhenDisabled == false)
            {
                addNewPlayersWhenDisabled = true;
                mnuAddNewPlayersChange.Text = "Don't add new players when whitelist is diabled";
                AppendTextEx("New players will be automatically added to whitelist.", Color.White);
            }
            else
            {
                addNewPlayersWhenDisabled = false;
                mnuAddNewPlayersChange.Text = "Add new players when whitelist is diabled";
                AppendTextEx("New players will NOT be automatically added to whitelist.", Color.White);
            }
        }

        /* Loading of other forms */

        // Show settings
        private void mnuShowSettings(object sender, EventArgs e)
        {
            frmSettings frmSettings = new frmSettings(this);
            frmSettings.ShowDialog(this);
        }
        // Shows "Add GUID" form
        private void mnuAddGUID_Click(object sender, EventArgs e)
        {
            frmAddGUID frmAdd = new frmAddGUID(this);
            frmAdd.ShowDialog(this);
        }
        // Shows "Remove GUID" form
        private void mnuRemoveGUID_Click(object sender, EventArgs e)
        {
            frmRemoveGUID frmRemove = new frmRemoveGUID(this);
            frmRemove.ShowDialog(this);
        }

        private void mnuConnect_Click(object sender, EventArgs e)
        {
            if (isConnected == false)
            {
                if (mnuConnect.Text == "Stop")
                {
                    mnuConnect.Text = "Connect";
                    mainRebootTimer.Stop();
                    return;
                }
                else
                {
                    tryConnecting(sender, e);
                }

            }
        }

        private void tryConnecting(object sender, EventArgs e)
        {
            if (isConnected == false)
            {
                BattlEyeLoginCredentials logcred = new BattlEyeLoginCredentials { Host = IPAddress.Parse(ip), Password = password, Port = Convert.ToInt32(port) };
                b = new BattlEyeClient(logcred);

                AppendTextEx("\n Trying to connect...\n");

                // make the connection
                b.BattlEyeMessageReceived += DumpMessage;
                b.BattlEyeDisconnected += Disconnected;
                b.ReconnectOnPacketLoss = true;
                b.Connect();

                if (b.Connected == true)
                {
                    mnuConnect.Enabled = false;
                    sent.Clear();
                    received.Clear();

                    keepAliveTimer = new Timer();
                    keepAliveTimer.Tick += new EventHandler(sendKeepAlivePacket);
                    keepAliveTimer.Interval = 30000; // in miliseconds
                    b.SendCommand("");
                    keepAliveTimer.Start();

                    playerCheckTimer.Stop();
                    playerCheckTimer = new Timer();
                    playerCheckTimer.Tick += new EventHandler(checkPlayersWhitelist);
                    playerCheckTimer.Interval = 300000; // in miliseconds
                    playerCheckTimer.Start();
                    new System.Threading.Thread(() =>
                    {
                        System.Threading.Thread.CurrentThread.IsBackground = true;
                        /* run your code here */
                        checkPlayersWhitelist(null, null);
                    }).Start();

                    mainRebootTimer.Stop();
                    mainRebootTimer = new Timer();
                    mainRebootTimer.Tick += new EventHandler(restartTimerTick);
                    mainRebootTimer.Interval = 5000; // in miliseconds
                    mainRebootTimer.Start();

                    if (showStartupMsg == true)
                    {
                        b.SendCommand(BattlEyeCommand.Say, "-1 Whitelister started");
                    }

                    int hour = DateAndTime.Hour(DateAndTime.Now);

                    if (hour >= restartTimes.Last())
                    {
                        nextRestart = restartTimes.First();
                    }
                    else
                    {
                        for (int i = 0; i < restartTimes.Count; i++)
                        {
                            if (hour >= restartTimes[i])
                            {
                                nextRestart = restartTimes[i + 1];
                            }
                        }
                    }

                    Console.WriteLine(string.Format("Next restart is in {0}", nextRestart));
                    AppendTextEx(string.Format("Next restart is in {0}", nextRestart));
                }
            }
        }
        private string GetResponse(int id)
        {
            // Polling for response
            string response;
            if (received.TryGetValue(id, out response))
            {
                return response;
            }
            else
                return null;
        }
        //This code is from DaRT
        private void checkPlayersWhitelist(object sender, EventArgs e)
        {
            List<DayzClient> players = new List<DayzClient>();

            int id = b.SendCommand(BattlEyeCommand.Players);

            sent.Add(id);

            string response;
            int ticks = 0;
            
            while ((response = GetResponse(id)) == null && ticks < 1000)
            {
                System.Threading.Thread.Sleep(10);
                ticks++;
            }

            if (response == null)
            {
                AppendTextEx("Player request timed out.", Color.Red);
                return;
            }

            using (StringReader reader = new StringReader(response))
            {
                string line;
                int row = 0;
                while ((line = reader.ReadLine()) != null)
                {
                    row++;
                    if (row > 3 && !line.StartsWith("(") && line.Length > 0)
                    {
                        String[] items = line.Split(new char[] { ' ' }, 5, StringSplitOptions.RemoveEmptyEntries);

                        if (items.Length == 5)
                        {
                            int number = Int32.Parse(items[0]);
                            String ip = items[1].Split(':')[0];
                            String ping = items[2];
                            String guid = items[3].Replace("(OK)", "").Replace("(?)", "");
                            String name = items[4];
                            String status = "Unknown";

                            if (guid.Length == 32)
                            {
                                if (guid == "-")
                                {
                                    status = "Initializing";
                                }

                                if (name.EndsWith(" (Lobby)"))
                                {
                                    name = name.Replace(" (Lobby)", "");
                                    status = "Lobby";
                                }
                                else
                                    status = "Ingame";

                                if (status != "Initializing")
                                {
                                    var client = new DayzClient();
                                    client.playerNo = number;
                                    client.IP = ip;
                                    client.GUID = guid;
                                    client.UserName = name;
                                    players.Add(client);
                                }
                            }
                            else
                            {
                                // Received malformed player list
                                break;
                            }
                        }
                        else
                        {
                            // Received malformed player list
                            break;
                        }
                    }
                }

                foreach (var client in players)
                {
                    try
                    {
                        //Console.WriteLine(string.Format("Succes {0}", client.GUID, client.playerNo, client.UserName));
                        // did we get a valid result? verify
                        if (client.GUID != null && client.UserName != null)
                        {
                            if (VerifyWhiteList(client) == false)
                            {

                                // user is not white listed kick and send message
                                KickPlayer(client);
                                //addPlayer(client);

                                // log event
                                client.logType = DayzClient.LogTypes.Kick;
                                LogPlayer(client);
                            }
                            else
                            {
                                // display welcome message
                                WelcomeMessage(client);

                                // log event;
                                client.logType = DayzClient.LogTypes.Success;
                                LogPlayer(client);
                            }
                        }

                        //Console.WriteLine(matchString.Groups["player_id"].Value + "*" + matchString.Groups["guid"].Value + "*" + matchString.Groups["user"].Value);
                    }
                    catch (Exception ex)
                    {
                        Console.WriteLine("error ");
                        Console.Write(ex.Message);
                        AppendTextEx("WARNINGWARNINGWARNING!!!!!!!!!! CONTACT JUKKI WHITELIST CHECK POTENTIALY BROKEN\n" + ex.Message, Color.Red);
                        // do nothing
                    }
                }
            }
        }

        private void restartTimerTick(object sender, EventArgs e)
        {
            if (isConnected == true)
            {
                int hour = DateAndTime.Hour(DateAndTime.Now);

                if (hour == nextRestart)
                {
                    b.SendCommand(BattlEyeCommand.Say, "-1 Server will restart in 30 minutes");

                    mainRebootTimer.Stop();
                    triggeredRebootTimer.Stop();
                    triggeredRebootTimer = new Timer();
                    triggeredRebootTimer.Tick += new EventHandler(triggeredReboot10MinNotification);
                    triggeredRebootTimer.Interval = 1200000; // in miliseconds
                    triggeredRebootTimer.Start();
                    Console.WriteLine(string.Format("{0} Server will restart in 30 minute", DateAndTime.TimeOfDay));
                }
            }
        }

        private void triggeredReboot(object sender, EventArgs e)
        {
            if (isConnected == true)
            {
                mainRebootTimer.Stop();
                b.SendCommand(BattlEyeCommand.Say, "-1 Server restarting!");
                b.SendCommand("#shutdown", true);
                triggeredRebootTimer.Stop();
                Console.WriteLine(string.Format("{0} Rebooting!", DateAndTime.TimeOfDay));


                mainRebootTimer = new Timer();
                mainRebootTimer.Tick += new EventHandler(beginServerStartup);
                mainRebootTimer.Interval = 10000; // in miliseconds
                mainRebootTimer.Start();
            }
        }

        private void triggeredReboot10MinNotification(object sender, EventArgs e)
        {
            if (isConnected == true)
            {
                b.SendCommand(BattlEyeCommand.Say, "-1 Server will restart in 10 minutes");

                mainRebootTimer.Stop();
                triggeredRebootTimer.Stop();
                triggeredRebootTimer = new Timer();
                triggeredRebootTimer.Tick += new EventHandler(triggeredReboot5MinNotification);
                triggeredRebootTimer.Interval = 300000; // in miliseconds
                triggeredRebootTimer.Start();
                Console.WriteLine(string.Format("{0} Server will restart in 10 minute", DateAndTime.TimeOfDay));
            }
        }

        private void triggeredReboot5MinNotification(object sender, EventArgs e)
        {
            if (isConnected == true)
            {
                b.SendCommand(BattlEyeCommand.Say, "-1 Server will restart in 5 minutes");
                b.SendCommand("#lock", true);

                mainRebootTimer.Stop();
                triggeredRebootTimer.Stop();
                triggeredRebootTimer = new Timer();
                triggeredRebootTimer.Tick += new EventHandler(triggeredReboot1MinNotification);
                triggeredRebootTimer.Interval = 240000; // in miliseconds
                triggeredRebootTimer.Start();
                Console.WriteLine(string.Format("{0} Server will restart in 5 minute", DateAndTime.TimeOfDay));
            }
        }

        private void triggeredReboot1MinNotification(object sender, EventArgs e)
        {
            if (isConnected == true)
            {
                b.SendCommand(BattlEyeCommand.Say, "-1 Server will restart in 1 minute");
                b.SendCommand("#lock", true);

                mainRebootTimer.Stop();
                triggeredRebootTimer.Stop();
                triggeredRebootTimer = new Timer();
                triggeredRebootTimer.Tick += new EventHandler(triggeredReboot30SecNotification);
                triggeredRebootTimer.Interval = 30000; // in miliseconds
                triggeredRebootTimer.Start();
                Console.WriteLine(string.Format("{0} Server will restart in 1 minute", DateAndTime.TimeOfDay));
            }

        }

        private void triggeredReboot30SecNotification(object sender, EventArgs e)
        {
            if (isConnected == true)
            {
                b.SendCommand(BattlEyeCommand.Say, "-1 Server will restart in 30 seconds");
                b.SendCommand("#lock", true);

                mainRebootTimer.Stop();
                triggeredRebootTimer.Stop();
                triggeredRebootTimer = new Timer();
                triggeredRebootTimer.Tick += new EventHandler(triggeredReboot);
                triggeredRebootTimer.Interval = 30000; // in miliseconds
                triggeredRebootTimer.Start();
                Console.WriteLine(string.Format("{0} Server will restart in 30 seconds", DateAndTime.TimeOfDay));
            }

        }


        private void beginServerStartup(object sender, EventArgs e)
        {
            if (isConnected == false)
            {
                BackupLogs();
                mainRebootTimer.Stop();
                mainRebootTimer = new Timer();
                mainRebootTimer.Tick += new EventHandler(initDatabase);
                mainRebootTimer.Interval = 1000; // in miliseconds
                mainRebootTimer.Start();
                Console.WriteLine("Begin starting the server");
                AppendTextEx("\nBegin starting the server", Color.Gray);
            }
        }

        private void initDatabase(object sender, EventArgs e)
        {
            if (isConnected == false)
            {

                Console.WriteLine("Initializing database");
                AppendTextEx("\nInitializing database", Color.Gray);
                string connStr = string.Format("server={0};user={1};database={2};port={3};password={4};", gameDBHost, gameDBUser, gameDBDatabase, gameDBPort, gameDBPassword);

                MySqlConnection conn = new MySqlConnection(connStr);
                MySqlCommand cmd = new MySqlCommand();
                MySqlDataReader rdr = null;

                try
                {
                    conn.Open();
                    cmd.Connection = conn;
                    cmd.CommandType = CommandType.StoredProcedure;
                    cmd.CommandText = "pMain";

                    cmd.Parameters.Add(new MySqlParameter("i", 1));

                    rdr = cmd.ExecuteReader();
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.ToString());
                }
                finally
                {
                    rdr.Close();
                    conn.Close();
                    rdr = null;
                    conn = null;
                    cmd = null;
                }
                if (mainRebootTimer == null)
                    mainRebootTimer = new Timer();
                mainRebootTimer.Stop();
                mainRebootTimer = new Timer();
                mainRebootTimer.Tick += new EventHandler(startServer);
                mainRebootTimer.Interval = 1000; // in miliseconds
                mainRebootTimer.Start();
            }
        }

        private void startServer(object sender, EventArgs e)
        {
            if (isConnected == false)
            {
                mainRebootTimer.Stop();
                AppendTextEx("\nServer starting", Color.Gray);
                Process.Start(Arma2ServerPath, CommandLineOptions);


                mainRebootTimer = new Timer();
                mainRebootTimer.Tick += new EventHandler(tryConnecting);
                mainRebootTimer.Interval = 10000; // in miliseconds
                mainRebootTimer.Start();
            }
        }


        public void AppendTextEx(string text)
        {
            AppendTextEx(text, Color.White);
        }

        public void AppendTextEx(string text, Color color)
        {
            if (InvokeRequired)
            {
                Invoke((MethodInvoker)delegate { AppendTextEx(text, color); });
                return;
            }
            rtbDisplay.SelectionStart = rtbDisplay.TextLength;
            rtbDisplay.SelectionLength = 0;

            rtbDisplay.SelectionColor = color;
            rtbDisplay.AppendText(" " + text + "\n");
            rtbDisplay.SelectionColor = rtbDisplay.ForeColor;
            rtbDisplay.SelectionStart = rtbDisplay.Text.Length;
            rtbDisplay.ScrollToCaret();
        }



        public void BackupLogs()
        {
            try
            {
                var source = new FileInfo(rptPath);

                var date = source.CreationTime.ToString("yyyy-MM-dd-HH-mm");

                Directory.CreateDirectory(rptArchive);
                File.Move(source.FullName, string.Format(@"{0}\server_{1}.rpt", rptArchive, date));
            }
            catch (Exception e)
            {
                AppendTextEx(e.Message);
            }
        }
    }
}
