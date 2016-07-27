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

namespace DayzWhitelistProPlus
{
    public partial class frmSettings : Form
    {
        private frmMain parentForm;

        public frmSettings(frmMain form1)
        {
            InitializeComponent();
            parentForm = form1;

            // DB settings
            txtSettingDbDatabase.Text = Properties.Settings.Default.dbDatabase;
            txtSettingDbIP.Text       = Properties.Settings.Default.dbHost;
            txtSettingDbPassword.Text = Properties.Settings.Default.dbPass;
            txtSettingDbUsername.Text = Properties.Settings.Default.dbUser;
            txtSettingDbPort.Text     = Properties.Settings.Default.dbPort.ToString();

            // Rcon settings
            txtSettingRconIP.Text       = Properties.Settings.Default.rconIP;
            txtSettingRconPort.Text     = Properties.Settings.Default.rconPort.ToString();
            txtSettingRconPassword.Text = Properties.Settings.Default.rconPass;
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void frmSettings_Load(object sender, EventArgs e)
        {

        }

        private void btnSaveSettings_Click(object sender, EventArgs e)
        {
            // DB settings
            Properties.Settings.Default.dbDatabase = txtSettingDbDatabase.Text;
            Properties.Settings.Default.dbHost = txtSettingDbIP.Text;
            Properties.Settings.Default.dbPass = txtSettingDbPassword.Text;
            Properties.Settings.Default.dbUser = txtSettingDbUsername.Text;
            Properties.Settings.Default.dbPort = Convert.ToInt32(txtSettingDbPort.Text);

            // Rcon settings
            Properties.Settings.Default.rconIP = txtSettingRconIP.Text;
            Properties.Settings.Default.rconPort = Convert.ToInt32(txtSettingRconPort.Text);
            Properties.Settings.Default.rconPass = txtSettingRconPassword.Text;

            Properties.Settings.Default.Save();

            parentForm.updateSettings();

            this.Close();
        }
    }
}
