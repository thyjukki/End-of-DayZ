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
    public partial class frmRemoveGUID : Form
    {
        private frmMain parentForm;

        public frmRemoveGUID(frmMain mainForm)
        {
            InitializeComponent();
            parentForm = mainForm;
        }

        private void btnRemoveFromWhitelist_Click(object sender, EventArgs e)
        {

        }
    }
}
