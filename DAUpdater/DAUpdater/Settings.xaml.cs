using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.AccessControl;
using System.Security.Principal;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace DAUpdater
{
    /// <summary>
    /// Interaction logic for Settings.xaml
    /// </summary>
    public partial class Settings : Window
    {
        public MainWindow parent;

        private bool firstTime;
        public Settings(bool ft = false)
        {
            InitializeComponent();
            firstTime = ft;
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            steamPathBox.Text = Properties.Settings.Default.SteamPath;
            modPathBox.Text = Properties.Settings.Default.ModPath;
            parametersBox.Text = Properties.Settings.Default.Paremeters;

            if (firstTime || (parent != null && parent.InstallRequired))
            {
                verifyButton.Visibility = Visibility.Hidden;
            }
            else
            {
                verifyButton.Visibility = Visibility.Visible;
            }
        }

        private void saveButton_Click(object sender, RoutedEventArgs e)
        {
            if (!File.Exists(steamPathBox.Text))
            {
                MessageBox.Show("Steam path is not valid!\nPlease select steam.exe");
                return;
            }
            Properties.Settings.Default.SteamPath = steamPathBox.Text;
            if (!Directory.Exists(modPathBox.Text))
            {
                MessageBox.Show("Mod installation path is not a valid location!");
                return;
            }
            
            Properties.Settings.Default.ModPath = modPathBox.Text;
            Properties.Settings.Default.Paremeters = parametersBox.Text;
            bool windowed;
            if(windowedBox.IsChecked.HasValue)
            {
                windowed = windowedBox.IsChecked.Value;
            }
            else
            {
                windowed = false;
            }
            Properties.Settings.Default.Windowed = windowed;


            Properties.Settings.Default.FirstTime = false;
            Properties.Settings.Default.Save();


            if (firstTime)
            {
                MainWindow mainView = new MainWindow();
                mainView.Show();
            }
            this.Close();
        }

        private void armaPathSelect_Click(object sender, RoutedEventArgs e)
        {
            var dialog = new OpenFileDialog();
            dialog.DefaultExt = ".exe";
            dialog.Multiselect = false;
            dialog.CheckFileExists = true;
            dialog.Filter = "Steam exe |steam.exe";
            dialog.ShowDialog();

            steamPathBox.Text = dialog.FileName;
        }

        private void modPathSelect_Click(object sender, RoutedEventArgs e)
        {
            var dialog = new System.Windows.Forms.FolderBrowserDialog();
            dialog.SelectedPath = modPathBox.Text;
            dialog.ShowDialog();

            modPathBox.Text = dialog.SelectedPath;
        }

        private void cancelButton_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void verifyButton_Click(object sender, RoutedEventArgs e)
        {
            if (parent != null)
            {
                parent.CheckFiles();
                Close();
            }
        }
    }
}
