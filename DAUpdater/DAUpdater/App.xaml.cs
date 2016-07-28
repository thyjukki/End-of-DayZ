using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;

namespace DAUpdater
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        private void Application_Startup(object sender, StartupEventArgs e)
        {
            //add some bootstrap or startup logic 
            if (DAUpdater.Properties.Settings.Default.FirstTime)
            {
                Settings settings = new Settings();
                settings.Show();
            }
            else
            {
                MainWindow mainView = new MainWindow();
                mainView.Show();
            }
        }
    }
}
