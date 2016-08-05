using Ionic.Zip;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace DAUpdater
{
    public delegate void ExtractProgress(string name, float receivedMB, float totalMB);
    public delegate void ExtractDone(Zipper zip);
    public class Zipper
    {
        ZipFile zip;
        Task task;
        string path;

        public event ExtractProgress Progress;
        public event ExtractDone Done;
        public Zipper(string path)
        {
            this.path = path;
            zip = ZipFile.Read(path);

            zip.ExtractProgress += Zip_ExtractProgress;

        }

        private void Zip_ExtractProgress(object sender, ExtractProgressEventArgs e)
        {
            Application.Current.Dispatcher.Invoke(new Action(() =>
            {
                Console.WriteLine(e.EventType);
                switch (e.EventType)
                {
                    case ZipProgressEventType.Extracting_BeforeExtractEntry:
                        break;
                    case ZipProgressEventType.Extracting_AfterExtractEntry:
                        break;
                    case ZipProgressEventType.Extracting_ExtractEntryWouldOverwrite:
                        break;
                    case ZipProgressEventType.Extracting_EntryBytesWritten:
                        Progress(e.CurrentEntry.FileName, (e.BytesTransferred / 1024f / 1024f), (e.TotalBytesToTransfer / 1024f / 1024f));
                        break;
                    case ZipProgressEventType.Extracting_BeforeExtractAll:
                        break;
                    case ZipProgressEventType.Extracting_AfterExtractAll:
                        Done(this);
                        break;
                    case ZipProgressEventType.Error_Saving:
                        break;
                    default:
                        break;
                }
            }));
        }


        public void ExtractAll(string path)
        {
            task = new Task(() => { zip.ExtractAll(path, ExtractExistingFileAction.OverwriteSilently); });
            task.Start();
        }

        public void Delete()
        {
            
            zip.Dispose();
            File.Delete(path);
        }
    }
}
