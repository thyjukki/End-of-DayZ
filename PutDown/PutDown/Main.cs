using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PutDown
{
    public static class Main
    {
        public static void Shutdown()
        {
            Process.Start("shutdown", "/s /t 0");
        }

        public static void Reboot()
        {
            Process.Start("shutdown.exe", "-r -t 0");
        }
    }
}
