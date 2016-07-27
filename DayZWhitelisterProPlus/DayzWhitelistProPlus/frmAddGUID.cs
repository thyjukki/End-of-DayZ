using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Awakener
{
    public partial class frmAddGUID : Form
    {
        private frmMain parentForm;

        public frmAddGUID(frmMain form1)
        {
            InitializeComponent();
            parentForm = form1;
        }

        private void btnAddToWhitelist_Click(object sender, EventArgs e)
        {
            DayzClient client = new DayzClient();

            client.UserName = txtNewName.Text;
            client.email    = txtNewEmail.Text;
            client.GUID     = txtNewGUID.Text;

            parentForm.addPlayer(client);

            lblResult.Text = client.UserName + " added to whitelist.";

            txtNewName.Text  = "";
            txtNewEmail.Text = "";
            txtNewGUID.Text  = "";

            client = null;
        }

        private void frmAddGUID_Load(object sender, EventArgs e)
        {

        }
    }
}
