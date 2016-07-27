namespace Awakener
{
    partial class frmRemoveGUID
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmRemoveGUID));
            this.label3 = new System.Windows.Forms.Label();
            this.txtNewGUID = new System.Windows.Forms.TextBox();
            this.btnRemoveFromWhitelist = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(18, 15);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(38, 17);
            this.label3.TabIndex = 10;
            this.label3.Text = "GUID";
            // 
            // txtNewGUID
            // 
            this.txtNewGUID.Location = new System.Drawing.Point(67, 12);
            this.txtNewGUID.Name = "txtNewGUID";
            this.txtNewGUID.Size = new System.Drawing.Size(297, 25);
            this.txtNewGUID.TabIndex = 9;
            // 
            // btnRemoveFromWhitelist
            // 
            this.btnRemoveFromWhitelist.Location = new System.Drawing.Point(277, 44);
            this.btnRemoveFromWhitelist.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.btnRemoveFromWhitelist.Name = "btnRemoveFromWhitelist";
            this.btnRemoveFromWhitelist.Size = new System.Drawing.Size(87, 30);
            this.btnRemoveFromWhitelist.TabIndex = 8;
            this.btnRemoveFromWhitelist.Text = "Remove";
            this.btnRemoveFromWhitelist.UseVisualStyleBackColor = true;
            this.btnRemoveFromWhitelist.Click += new System.EventHandler(this.btnRemoveFromWhitelist_Click);
            // 
            // frmRemoveGUID
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 17F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(386, 83);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtNewGUID);
            this.Controls.Add(this.btnRemoveFromWhitelist);
            this.Font = new System.Drawing.Font("Segoe UI", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "frmRemoveGUID";
            this.Text = "frmRemoveGUID";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtNewGUID;
        private System.Windows.Forms.Button btnRemoveFromWhitelist;
    }
}