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
                Settings settings = new Settings(true);
                settings.Show();
            }
            else
            {
                MainWindow mainView = new MainWindow();
                mainView.Show();
            }
        }

        public App()
        {
            AppDomain currentDomain = AppDomain.CurrentDomain;
            currentDomain.UnhandledException += new UnhandledExceptionEventHandler(MyHandler);
        }

        static void MyHandler(object sender, UnhandledExceptionEventArgs args)
        {
            Exception e = (Exception)args.ExceptionObject;
            Console.WriteLine("MyHandler caught : " + e.Message);
            Console.WriteLine("Runtime terminating: {0}", args.IsTerminating);

            MessageBox.Show(string.Format("MyHandler caught : {0}\nRuntime terminating: {1}", e.Message, args.IsTerminating));
        }
    }
}
