using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace DAUpdater
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        #region variables
        Stack<string> downloading = new Stack<string>();
        WebClient client = new WebClient();
        private int downloadingVersion;
        #endregion

        #region public getters
        public string modPath
        {
            get
            {
                return Properties.Settings.Default.ModPath + @"\@DayZAwaken";
            }
        }

        public int LiveVersion
        {
            get
            {
                try
                {
                    Stream stream = client.OpenRead(@"http://dayzawaken.euknetworks.com/updater/version");
                    StreamReader reader = new StreamReader(stream);
                    String content = reader.ReadToEnd();

                    int version = int.Parse(content);

                    return version;
                }
                catch (Exception e)
                {
                    MessageBox.Show(e.Message);
                }


                return -1;
            }
        }

        private bool updateRequired
        {
            get
            {
                return LiveVersion < LiveVersion;
            }
        }

        private bool installRequired
        {
            get
            {
                return !Directory.Exists(modPath);
            }
        }
        #endregion
        public MainWindow()
        {
            InitializeComponent();
            if (updateRequired)
            {
                launchButton.Content = "Update";
                checkFilesButton.IsEnabled = false;
            }

            if (installRequired)
            {
                launchButton.Content = "Install";
                checkFilesButton.IsEnabled = false;
            }
        }

        #region helper functions
        public static string RelativePath(string absPath, string relTo)
        {
            string[] absDirs = absPath.Split('\\');
            string[] relDirs = relTo.Split('\\');
            // Get the shortest of the two paths 
            int len = absDirs.Length < relDirs.Length ? absDirs.Length : relDirs.Length;
            // Use to determine where in the loop we exited 
            int lastCommonRoot = -1; int index;
            // Find common root 
            for (index = 0; index < len; index++)
            {
                if (absDirs[index] == relDirs[index])
                    lastCommonRoot = index;
                else break;
            }
            // If we didn't find a common prefix then throw 
            if (lastCommonRoot == -1)
            {
                throw new ArgumentException("Paths do not have a common base");
            }
            // Build up the relative path 
            StringBuilder relativePath = new StringBuilder();
            // Add on the .. 
            for (index = lastCommonRoot + 1; index < absDirs.Length; index++)
            {
                if (absDirs[index].Length > 0) relativePath.Append("..\\");
            }
            // Add on the folders 
            for (index = lastCommonRoot + 1; index < relDirs.Length - 1; index++)
            {
                relativePath.Append(relDirs[index] + "\\");
            }
            relativePath.Append(relDirs[relDirs.Length - 1]);
            return relativePath.ToString();
        }
        #endregion

        #region Logic



        private void CheckFileChecksums()
        {
            //localProgress.IsIndeterminate = true;
            checkFilesButton.IsEnabled = false;
            launchButton.IsEnabled = false;
            settingsButton.IsEnabled = false;
            BackgroundWorker worker = new BackgroundWorker();
            worker.WorkerReportsProgress = true;
            worker.DoWork += checkFilesWork;
            worker.ProgressChanged += worker_ProgressChanged;

            worker.RunWorkerAsync();
        }

        void checkFilesWork(object sender, DoWorkEventArgs e)
        {
            string[] files = Directory.GetFiles(modPath, "*", SearchOption.AllDirectories);

            var liveFiles = GetLiveList();
            downloadingVersion = LiveVersion;
            List<string> toDelete = new List<string>();
            List<string> md5s = new List<string>();

            
            for (int i = 0; i < files.Length; i++)
            {
                string file = files[i];

                Application.Current.Dispatcher.Invoke(new Action(() =>
                {
                    progressBar.Maximum = files.Length;
                    progressBox.Text = string.Format("Checking {0}", System.IO.Path.GetFileName(file));
                }));
                
    

                var md5 = fileChecksum(file);

                if (!liveFiles.ContainsValue(md5))
                {
                    toDelete.Add(file);
                }
                else
                {
                    md5s.Add(md5);
                }

                (sender as BackgroundWorker).ReportProgress(i);
            }


            foreach (var item in liveFiles)
            {
                if (!md5s.Contains(item.Value))
                {
                    downloading.Push(item.Key);
                }
            }


            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                checkFilesButton.IsEnabled = true;
                launchButton.IsEnabled = true;
                settingsButton.IsEnabled = true;
                progressBar.Value = 0;
                progressBox.Text = "Mod file integrity checking complete.";
                downloadStack();
            }));
        }


        private string fileChecksum(string path)
        {
            using (var md5 = MD5.Create())
            {
                var stream = File.OpenRead(path);

                return BitConverter.ToString(md5.ComputeHash(stream)).Replace("-", string.Empty);
            }
        }

        public Dictionary<string, string> GetLiveList()
        {

            Dictionary<string, string> files = new Dictionary<string, string>();
            Stream stream = client.OpenRead(@"http://dayzawaken.euknetworks.com/updater/files");
            StreamReader reader = new StreamReader(stream);
            while (reader.Peek() >= 0)
            {
                var line = reader.ReadLine();
                string[] entry = line.Split(':');
                files.Add(entry[0], entry[1]);
            }

            return files;
        }

        public void Install()
        {
            try
            {
                var files = GetLiveList();
                downloadingVersion = LiveVersion;
                client.DownloadProgressChanged += file_DownloadProessChanged;
                client.DownloadFileCompleted += file_DownloadFileCompleted;

                downloading = new Stack<string>(files.Keys);
                downloadStack();
            }
            catch (Exception e)
            {
                MessageBox.Show(e.Message);
            }
        }

        private void file_DownloadFileCompleted(object sender, AsyncCompletedEventArgs e)
        {
            if (!downloadStack())
            {
                launchButton.Content = "Launch";
                checkFilesButton.IsEnabled = true;
                launchButton.IsEnabled = true;
                settingsButton.IsEnabled = true;
                progressBar.Value = 0;
                progressBox.Text = "Mod has been downloaded.";
            }
        }

        private bool downloadStack()
        {
            if (downloading.Count > 0)
            {
                checkFilesButton.IsEnabled = false;
                launchButton.IsEnabled = false;
                settingsButton.IsEnabled = false;
                downloadFile(downloading.Pop());

                Properties.Settings.Default.modVersion = downloadingVersion;
                return true;
            }
            return false;
        }

        private void downloadFile(string file)
        {
            var url = string.Format(@"http://dayzawaken.euknetworks.com/updater/@DayzAwaken/{0}", file);
            var location = string.Format(@"{0}/{1}", modPath, file);
            var dir = System.IO.Path.GetDirectoryName((location));

            if (!Directory.Exists(dir))
                Directory.CreateDirectory(dir);

            Console.WriteLine("Url: " + url + " location: " + location);
            client.DownloadFileAsync(new System.Uri(url), location, System.IO.Path.GetFileName(file));
        }

        void file_DownloadProessChanged(object sender, DownloadProgressChangedEventArgs e)
        {
            progressBar.Value = e.ProgressPercentage;
            progressBox.Text = string.Format("Downloading {0} {1} Mbs / {2} Mbs"
                , (string)e.UserState
                , (e.BytesReceived / 1024d / 1024d).ToString("0.00")
                , (e.TotalBytesToReceive / 1024d / 1024d).ToString("0.00"));
        }
        #endregion

        #region loading bars
        void worker_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            progressBar.Value = e.ProgressPercentage;
        }
        #endregion

        #region Buttons
        private void settingsButton_Click(object sender, RoutedEventArgs e)
        {
            Settings settings = new Settings();
            settings.Show();
        }

        private void checkFilesButton_Click(object sender, RoutedEventArgs e)
        {
            CheckFileChecksums();
        }

        private void launchButton_Click(object sender, RoutedEventArgs e)
        {
            string mode = (string)launchButton.Content;

            if (mode == "Install")
            {
                Install();
            }
            else if (mode == "Update")
            {
                CheckFileChecksums();
            }
            else if (mode == "Launch")
            {
                string extra = "-nosplash -world=chernarus -skipIntro" + Properties.Settings.Default.Paremeters;

                if (Properties.Settings.Default.Windowed)
                {
                    extra += " -windowed";
                }
                
                Process.Start(Properties.Settings.Default.SteamPath, string.Format("-applaunch 33930 -mod={0}; {1}", modPath, extra));
            }
        }
        #endregion
    }
}
