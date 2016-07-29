using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Awakener
{
    public partial class frmSettings : Form
    {
        private frmMain parentForm;

        public frmSettings(frmMain form1)
        {
            InitializeComponent();
            parentForm = form1;

            // Game DB settings
            txtSettingDbDatabase.Text = Properties.Settings.Default.gameDBDatabase;
            txtSettingDbIP.Text       = Properties.Settings.Default.gameDBHost;
            txtSettingDbPassword.Text = Properties.Settings.Default.gameDBPass;
            txtSettingDbUsername.Text = Properties.Settings.Default.gameDBUser;
            txtSettingDbPort.Text     = Properties.Settings.Default.gameDBPort.ToString();

            // Whitelist  DB settings
            textBox6.Text = Properties.Settings.Default.whitelistDBDatabase;
            textBox8.Text = Properties.Settings.Default.whitelistDBHost;
            textBox4.Text = Properties.Settings.Default.whitelistDBPass;
            textBox5.Text = Properties.Settings.Default.whitelistDBUser;
            textBox7.Text = Properties.Settings.Default.whitelistDBPort.ToString();

            // Rcon settings
            txtSettingRconIP.Text       = Properties.Settings.Default.rconIP;
            txtSettingRconPort.Text     = Properties.Settings.Default.rconPort.ToString();
            txtSettingRconPassword.Text = Properties.Settings.Default.rconPass;

            textBox2.Text = Properties.Settings.Default.exePath;
            textBox1.Text = Properties.Settings.Default.rptPath;
            textBox3.Text = Properties.Settings.Default.logDir;
            textBox9.Text = Properties.Settings.Default.parameters;
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void frmSettings_Load(object sender, EventArgs e)
        {

        }

        private void btnSaveSettings_Click(object sender, EventArgs e)
        {
            // Game  DB settings
            Properties.Settings.Default.gameDBDatabase = txtSettingDbDatabase.Text;
            Properties.Settings.Default.gameDBHost = txtSettingDbIP.Text;
            Properties.Settings.Default.gameDBPass = txtSettingDbPassword.Text;
            Properties.Settings.Default.gameDBUser = txtSettingDbUsername.Text;
            Properties.Settings.Default.gameDBPort = Convert.ToInt32(txtSettingDbPort.Text);

            // Whitelist  DB settings
            Properties.Settings.Default.whitelistDBDatabase = textBox6.Text;
            Properties.Settings.Default.whitelistDBHost = textBox8.Text;
            Properties.Settings.Default.whitelistDBPass = textBox4.Text;
            Properties.Settings.Default.whitelistDBUser = textBox5.Text;
            Properties.Settings.Default.whitelistDBPort = Convert.ToInt32(textBox7.Text);

            // Rcon settings
            Properties.Settings.Default.rconIP = txtSettingRconIP.Text;
            Properties.Settings.Default.rconPort = Convert.ToInt32(txtSettingRconPort.Text);
            Properties.Settings.Default.rconPass = txtSettingRconPassword.Text;

            // General settings
            Properties.Settings.Default.exePath = textBox2.Text;
            Properties.Settings.Default.rptPath = textBox1.Text;
            Properties.Settings.Default.logDir = textBox3.Text;
            Properties.Settings.Default.parameters = textBox9.Text;

            Properties.Settings.Default.Save();

            this.Close();
        }
    }
}
