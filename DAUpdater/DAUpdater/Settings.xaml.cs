using dnGREP;
using System;
using System.Collections.Generic;
using System.Linq;
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
        public Settings()
        {
            InitializeComponent();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            arma2PathBox.Text = Properties.Settings.Default.ArmaPath;
            modPathBox.Text = Properties.Settings.Default.ModPath;
            parametersBox.Text = Properties.Settings.Default.Paremeters;
        }

        private void saveButton_Click(object sender, RoutedEventArgs e)
        {
            Properties.Settings.Default.ArmaPath = arma2PathBox.Text;
            Properties.Settings.Default.ModPath = modPathBox.Text;
            Properties.Settings.Default.Paremeters = parametersBox.Text;
            DAUpdater.Properties.Settings.Default.FirstTime = false;
            DAUpdater.Properties.Settings.Default.Save();
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

            this.Close();
        }

        private void armaPathSelect_Click(object sender, RoutedEventArgs e)
        {
            var dialog = new FileFolderDialog();
            dialog.SelectedPath = arma2PathBox.Text;
            dialog.ShowDialog();

            arma2PathBox.Text = dialog.SelectedPath;
        }

        private void modPathSelect_Click(object sender, RoutedEventArgs e)
        {
            var dialog = new FileFolderDialog();
            dialog.SelectedPath = modPathBox.Text;
            dialog.ShowDialog();

            modPathBox.Text = dialog.SelectedPath;
        }

        private void cancelButton_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }
    }
}
