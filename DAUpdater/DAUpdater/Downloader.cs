﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace DAUpdater
{
    public delegate void DownloadProgress(string name, float receivedMB, float totalMB, float precent);
    public delegate void DownloadAdded(int value);
    public delegate void DownloadDone();
    public delegate void DownloadFileDone();

    class Downloader
    {
        WebClient client = new WebClient();
        Stack<string> dlStack = new Stack<string>();
        string destination;

        public event DownloadProgress Progress;
        public event DownloadAdded Added;
        public event DownloadDone Done;
        public event DownloadFileDone FileDone;

        public bool Downloading
        {
            get
            {
                return client.IsBusy;
            }
        }

        public string ReadString(string url)
        {
            try
            {
                Stream stream = client.OpenRead(url);
                StreamReader reader = new StreamReader(stream);
                String content = reader.ReadToEnd();

                return content;
            }
            catch (Exception e)
            {
                MessageBox.Show(e.Message);
            }

            return "ERROR";
        }

        public Stream GetStream(string url)
        {
            try
            {
                return client.OpenRead(url);
            }
            catch (Exception e)
            {
                MessageBox.Show(e.Message);
            }

            return null;
        }

        public Downloader()
        {
            client.DownloadProgressChanged += downloadProgress;
            client.DownloadFileCompleted += downloadDone;
        }

        private void downloadDone(object sender, AsyncCompletedEventArgs e)
        {
            if (downloadStack())
            {
                Application.Current.Dispatcher.Invoke(new Action(() =>
                {
                    FileDone();
                }));
            }
            else
            {
                Application.Current.Dispatcher.Invoke(new Action(() =>
                {
                    Done();
                }));
            }
        }

        private void downloadProgress(object sender, DownloadProgressChangedEventArgs e)
        {

            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                Progress((string)e.UserState, (e.BytesReceived / 1024f / 1024f), (e.TotalBytesToReceive / 1024f / 1024f), e.ProgressPercentage);
            }));
        }


        private void downloadFile(string file)
        {
            var url = new System.Uri(string.Format(@"http://dayzawaken.euknetworks.com/updater/@DayzAwaken/{0}", file));
            var location = string.Format(@"{0}/{1}", destination, file);
            var dir = System.IO.Path.GetDirectoryName((location));

            if (!Directory.Exists(dir))
                Directory.CreateDirectory(dir);

            Console.WriteLine("Url: " + url + " location: " + location);
            File.Delete(location);
            client.DownloadFileAsync(url, location, System.IO.Path.GetFileName(file));
        }

        private bool downloadStack()
        {
            if (dlStack.Count > 0)
            {
                downloadFile(dlStack.Pop());
                return true;
            }

            return false;
        }

        /// <summary>
        /// Add single file to the stack
        /// </summary>
        /// <param name="path"></param>
        public void AddDownload(string path)
        {
            dlStack.Push(path);
            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                Added(dlStack.Count);
            }));
        }

        public void AddDownloads(IEnumerable<string> paths)
        {
            foreach (var item in paths)
            {
                dlStack.Push(item);
            }

            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                Added(dlStack.Count);
            }));
        }

        public void StartDownload(string location)
        {
            destination = location;
            if (!Downloading)
            {
                downloadStack();
            }
        }
    }
}
