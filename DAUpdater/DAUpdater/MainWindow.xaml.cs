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

        private Downloader downloader;
        
        #endregion

        #region public getters
        public string ModPath
        {
            get
            {
                return Properties.Settings.Default.ModPath + @"\@DayZAwaken";
            }
        }

        public string InstallPath
        {
            get
            {
                return Properties.Settings.Default.ModPath;
            }
        }

        public int LiveVersion
        {
            get
            {
                try
                {
                    int version = int.Parse(downloader.ReadString(@"http://dayzawaken.euknetworks.com/updater/version"));

                    return version;
                }
                catch (Exception e)
                {
                    MessageBox.Show(e.Message);
                }


                return -1;
            }
        }

        public int Version
        {
            get
            {
                return Properties.Settings.Default.modVersion;
            }
            set
            {
                Properties.Settings.Default.modVersion = value;
                Properties.Settings.Default.Save();
            }
        }

        public string FullLiveVersion
        {
            get
            {
                try
                {

                    return downloader.ReadString(@"http://dayzawaken.euknetworks.com/updater/version");
                }
                catch (Exception e)
                {
                    MessageBox.Show(e.Message);
                }


                return "";
            }
        }

        public string FullVersion
        {
            get
            {
                return Properties.Settings.Default.fullVersion;
            }
            set
            {
                Properties.Settings.Default.fullVersion = value;
                Properties.Settings.Default.Save();
            }
        }


        public Dictionary<string, string> LiveList
        {
            get
            {
                Dictionary<string, string> files = new Dictionary<string, string>();
                StreamReader reader = new StreamReader(downloader.GetStream(@"http://dayzawaken.euknetworks.com/updater/files"));
                while (reader.Peek() >= 0)
                {
                    var line = reader.ReadLine();
                    string[] entry = line.Split(':');
                    files.Add(entry[0], entry[1]);
                }

                return files;
            }
        }

        public bool UpdateRequired
        {
            get
            {
                return Properties.Settings.Default.modVersion < LiveVersion;
            }
        }

        public bool InstallRequired
        {
            get
            {
                return !Directory.Exists(ModPath);
            }
        }
        #endregion

        #region constructor
        public MainWindow()
        {
            InitializeComponent();

            downloader = new Downloader();
            RefreshUpdater();

            downloader.Progress += Downloader_Progress;
            downloader.Added += Downloader_Added;
            downloader.FileDone += Downloader_FileDone;
            downloader.Done += Downloader_Done;
            downloader.Canceled += Downloader_Canceled;
        }
        #endregion

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


        private string fileChecksum(string path)
        {
            using (var md5 = MD5.Create())
            {
                var stream = File.OpenRead(path);

                return BitConverter.ToString(md5.ComputeHash(stream)).Replace("-", string.Empty);
            }
        }
        #endregion

        #region Logic



        public void CheckFiles()
        {
            //localProgress.IsIndeterminate = true;
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
            string[] files = Directory.GetFiles(ModPath, "*", SearchOption.AllDirectories);

            var liveFiles = LiveList;
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
                    Console.WriteLine("have to download " + item.Key);
                    downloader.AddDownload(@"@DayzAwaken/" + item.Key);
                }
            }


            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                launchButton.IsEnabled = true;
                settingsButton.IsEnabled = true;
                progressBar.Value = 0;
                progressBox.Text = "Mod file integrity checking complete.";

                if (downloader.HasDownloads)
                {
                    if (MessageBox.Show("Do you want to download them?", "Missing or broken files detected!", MessageBoxButton.YesNo, MessageBoxImage.Warning) == MessageBoxResult.Yes)
                    {
                        downloader.StartDownload(ModPath);
                    }
                    else
                    {
                        RefreshUpdater();
                    }
                }
                else
                {
                    Downloader_Done();
                }
            }));
        }

        public void UpdateFiles()
        {
            //localProgress.IsIndeterminate = true;
            launchButton.IsEnabled = false;
            settingsButton.IsEnabled = false;
            BackgroundWorker worker = new BackgroundWorker();
            worker.WorkerReportsProgress = true;
            worker.DoWork += UpdateWork;
            worker.ProgressChanged += worker_ProgressChanged;

            worker.RunWorkerAsync();
        }

        void UpdateWork(object sender, DoWorkEventArgs e)
        {
            string[] files = Directory.GetFiles(ModPath, "*", SearchOption.AllDirectories);

            var liveFiles = LiveList;
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
                    Console.WriteLine("have to download " + item.Key);
                    downloader.AddDownload(@"@DayzAwaken/" + item.Key);
                }
            }


            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                launchButton.IsEnabled = true;
                settingsButton.IsEnabled = true;
                progressBar.Value = 0;
                progressBox.Text = "Mod file integrity checking complete.";

                if (downloader.HasDownloads)
                {
                    downloader.StartDownload(ModPath);
                }
                else
                {
                    Downloader_Done();
                }
            }));
        }

        public void Install()
        {
            try
            {
                downloader.Addpackage();
                launchButton.Content = "Cancel";
                settingsButton.IsEnabled = false;

                downloader.Done -= Downloader_Done;
                downloader.Done += Downloader_Zip_Done;
                downloader.StartDownload(InstallPath);
            }
            catch (Exception e)
            {
                MessageBox.Show(e.Message);
            }
        }


        private void Launch()
        {
            string extra = "-nosplash -world=chernarus -skipIntro" + Properties.Settings.Default.Paremeters;

            if (Properties.Settings.Default.Windowed)
            {
                extra += " -windowed";
            }
            
            string parms = string.Format(@"-applaunch 33930 -mod=@DayzAwaken {0}", extra);

            Console.WriteLine(parms);
            Process.Start(Properties.Settings.Default.SteamPath, parms);

        }



        private void Downloader_Canceled()
        {
            MessageBox.Show("Download canceled!");
            
            RefreshUpdater();
        }

        private void Downloader_Done()
        {
            Console.WriteLine("Downloader_Done");
            Version = LiveVersion;
            FullVersion = FullLiveVersion;
            RefreshUpdater();
        }
        private void Downloader_Zip_Done()
        {
            Console.WriteLine("Downloader_Zip_Done");
            downloader.Done -= Downloader_Zip_Done;
            downloader.Done += Downloader_Done;
            progressBar.IsIndeterminate = true;
            downloadBar.Value = 0;
            progressBox.Text = string.Empty;

            var zip = new Zipper(InstallPath + @"/@DayzAwaken.zip");
            zip.Progress += Zip_Progress;
            zip.Done += Zip_Done;
            zip.ExtractAll(InstallPath);
            launchButton.IsEnabled = false;
        }
        #endregion

        #region loading bars
        void worker_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            progressBar.Value = e.ProgressPercentage;
        }


        private void Downloader_Progress(string name, float receivedMB, float totalMB, float precent)
        {
            Console.WriteLine("Downloader_Progress");
            downloadBar.Value = precent;
            progressBox.Text = string.Format("Downloading {0} {1} Mbs / {2} Mbs"
                , name
                , receivedMB.ToString("0.00")
                , totalMB.ToString("0.00"));
        }

        private void Downloader_Added(int value)
        {
            progressBar.Maximum = value;
        }

        private void Downloader_FileDone()
        {
            Console.WriteLine("Downloader_FileDone");
            progressBar.Value++;
        }



        private void Zip_Progress(string name, float receivedMB, float totalMB)
        {
            Console.WriteLine("Zip_Progress");

            int precentage = (int)((totalMB / receivedMB) * 100);
            downloadBar.Value = precentage;
            progressBox.Text = string.Format("Extracting {0} {1} Mbs / {2} Mbs"
                , name
                , receivedMB.ToString("0.00")
                , totalMB.ToString("0.00"));
        }

        private void Zip_Done(Zipper zip)
        {
            Console.WriteLine("Zip_Done");
            Version = LiveVersion;
            FullVersion = FullLiveVersion;

            zip.Delete();
            RefreshUpdater();
        }

        private void RefreshUpdater()
        {
            launchButton.IsEnabled = true;
            settingsButton.IsEnabled = true;

            progressBar.IsIndeterminate = false;
            progressBar.Maximum = 100;
            progressBar.Value = 0;

            downloadBar.IsIndeterminate = false;
            downloadBar.Maximum = 100;
            downloadBar.Value = 0;

            progressBox.Text = string.Empty;

            launchButton.Content = "Launch";
            if (UpdateRequired)
            {
                UpdateNotification();
                launchButton.Content = "Update";
            }

            if (InstallRequired)
            {
                launchButton.Content = "Install";
            }

            
        }

        private void UpdateNotification()
        {
            string curVersion = FullVersion;
            string newVersion = FullLiveVersion;
            string message = downloader.ReadString(@"http://dayzawaken.euknetworks.com/updater/updatemessage");
            MessageBox.Show(string.Format("Update {0} is avaible to download!\nYou have {1}\n\nChanges are:\n{2}", newVersion, curVersion, message), "Update avaible");
        }
        #endregion

        #region Buttons
        private void settingsButton_Click(object sender, RoutedEventArgs e)
        {
            Settings settings = new Settings();
            settings.parent = this;
            settings.Show();
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
                Console.WriteLine("Test");
                UpdateFiles();
            }
            else if (mode == "Launch")
            {
                Launch();
            }
            else if (mode == "Cancel")
            {
                downloader.Canel();
            }
        }
        #endregion

        private void Window_Closing(object sender, CancelEventArgs e)
        {
            //downloading.Clear();
            //Console.WriteLine(client);
            //client.CancelAsync();
        }
    }
}
