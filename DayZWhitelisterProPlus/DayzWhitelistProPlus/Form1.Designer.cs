namespace Awakener
{
    partial class frmMain
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmMain));
            this.rtbDisplay = new System.Windows.Forms.RichTextBox();
            this.mnuMain = new System.Windows.Forms.MenuStrip();
            this.mnuConnect = new System.Windows.Forms.ToolStripMenuItem();
            this.startServerToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.addRemoveToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuAddGUID = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuRemoveGUID = new System.Windows.Forms.ToolStripMenuItem();
            this.restartServerToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.minutesToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.minutesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.minutesToolStripMenuItem2 = new System.Windows.Forms.ToolStripMenuItem();
            this.instantToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.actionsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuWhitelistActiveChange = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuWelcomeChange = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuChatChange = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuAddNewPlayersChange = new System.Windows.Forms.ToolStripMenuItem();
            this.settingsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.turnAutoConnectOnToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mnuMain.SuspendLayout();
            this.SuspendLayout();
            // 
            // rtbDisplay
            // 
            this.rtbDisplay.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.rtbDisplay.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(32)))), ((int)(((byte)(32)))), ((int)(((byte)(32)))));
            this.rtbDisplay.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.rtbDisplay.Font = new System.Drawing.Font("Consolas", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rtbDisplay.ForeColor = System.Drawing.Color.White;
            this.rtbDisplay.Location = new System.Drawing.Point(0, 13);
            this.rtbDisplay.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.rtbDisplay.Name = "rtbDisplay";
            this.rtbDisplay.ReadOnly = true;
            this.rtbDisplay.Size = new System.Drawing.Size(1066, 496);
            this.rtbDisplay.TabIndex = 1;
            this.rtbDisplay.Text = "";
            // 
            // mnuMain
            // 
            this.mnuMain.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mnuConnect,
            this.startServerToolStripMenuItem,
            this.addRemoveToolStripMenuItem,
            this.restartServerToolStripMenuItem,
            this.actionsToolStripMenuItem,
            this.settingsToolStripMenuItem});
            this.mnuMain.Location = new System.Drawing.Point(0, 0);
            this.mnuMain.Name = "mnuMain";
            this.mnuMain.Size = new System.Drawing.Size(1066, 24);
            this.mnuMain.TabIndex = 3;
            this.mnuMain.Text = "mnuMain";
            // 
            // mnuConnect
            // 
            this.mnuConnect.Name = "mnuConnect";
            this.mnuConnect.Size = new System.Drawing.Size(64, 20);
            this.mnuConnect.Text = "Connect";
            this.mnuConnect.Click += new System.EventHandler(this.mnuConnect_Click);
            // 
            // startServerToolStripMenuItem
            // 
            this.startServerToolStripMenuItem.Name = "startServerToolStripMenuItem";
            this.startServerToolStripMenuItem.Size = new System.Drawing.Size(78, 20);
            this.startServerToolStripMenuItem.Text = "Start Server";
            this.startServerToolStripMenuItem.Click += new System.EventHandler(this.beginServerStartup);
            // 
            // addRemoveToolStripMenuItem
            // 
            this.addRemoveToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mnuAddGUID,
            this.mnuRemoveGUID});
            this.addRemoveToolStripMenuItem.Name = "addRemoveToolStripMenuItem";
            this.addRemoveToolStripMenuItem.Size = new System.Drawing.Size(89, 20);
            this.addRemoveToolStripMenuItem.Text = "Add/Remove";
            // 
            // mnuAddGUID
            // 
            this.mnuAddGUID.Name = "mnuAddGUID";
            this.mnuAddGUID.Size = new System.Drawing.Size(147, 22);
            this.mnuAddGUID.Text = "Add GUID";
            this.mnuAddGUID.Click += new System.EventHandler(this.mnuAddGUID_Click);
            // 
            // mnuRemoveGUID
            // 
            this.mnuRemoveGUID.Name = "mnuRemoveGUID";
            this.mnuRemoveGUID.Size = new System.Drawing.Size(147, 22);
            this.mnuRemoveGUID.Text = "Remove GUID";
            this.mnuRemoveGUID.Click += new System.EventHandler(this.mnuRemoveGUID_Click);
            // 
            // restartServerToolStripMenuItem
            // 
            this.restartServerToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.minutesToolStripMenuItem1,
            this.minutesToolStripMenuItem,
            this.minutesToolStripMenuItem2,
            this.instantToolStripMenuItem});
            this.restartServerToolStripMenuItem.Name = "restartServerToolStripMenuItem";
            this.restartServerToolStripMenuItem.Size = new System.Drawing.Size(90, 20);
            this.restartServerToolStripMenuItem.Text = "Restart Server";
            // 
            // minutesToolStripMenuItem1
            // 
            this.minutesToolStripMenuItem1.Name = "minutesToolStripMenuItem1";
            this.minutesToolStripMenuItem1.Size = new System.Drawing.Size(132, 22);
            this.minutesToolStripMenuItem1.Text = "10 Minutes";
            this.minutesToolStripMenuItem1.Click += new System.EventHandler(this.triggeredReboot10MinNotification);
            // 
            // minutesToolStripMenuItem
            // 
            this.minutesToolStripMenuItem.Name = "minutesToolStripMenuItem";
            this.minutesToolStripMenuItem.Size = new System.Drawing.Size(132, 22);
            this.minutesToolStripMenuItem.Text = "5 Minutes";
            this.minutesToolStripMenuItem.Click += new System.EventHandler(this.triggeredReboot5MinNotification);
            // 
            // minutesToolStripMenuItem2
            // 
            this.minutesToolStripMenuItem2.Name = "minutesToolStripMenuItem2";
            this.minutesToolStripMenuItem2.Size = new System.Drawing.Size(132, 22);
            this.minutesToolStripMenuItem2.Text = "1 Minute";
            this.minutesToolStripMenuItem2.Click += new System.EventHandler(this.triggeredReboot1MinNotification);
            // 
            // instantToolStripMenuItem
            // 
            this.instantToolStripMenuItem.Name = "instantToolStripMenuItem";
            this.instantToolStripMenuItem.Size = new System.Drawing.Size(132, 22);
            this.instantToolStripMenuItem.Text = "Instant";
            this.instantToolStripMenuItem.Click += new System.EventHandler(this.triggeredReboot);
            // 
            // actionsToolStripMenuItem
            // 
            this.actionsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.mnuWhitelistActiveChange,
            this.mnuWelcomeChange,
            this.mnuChatChange,
            this.mnuAddNewPlayersChange,
            this.turnAutoConnectOnToolStripMenuItem});
            this.actionsToolStripMenuItem.Name = "actionsToolStripMenuItem";
            this.actionsToolStripMenuItem.Size = new System.Drawing.Size(59, 20);
            this.actionsToolStripMenuItem.Text = "Actions";
            // 
            // mnuWhitelistActiveChange
            // 
            this.mnuWhitelistActiveChange.Name = "mnuWhitelistActiveChange";
            this.mnuWhitelistActiveChange.Size = new System.Drawing.Size(293, 22);
            this.mnuWhitelistActiveChange.Text = "Turn Whitelist Off";
            this.mnuWhitelistActiveChange.Click += new System.EventHandler(this.mnuWhitelistActiveChange_Click);
            // 
            // mnuWelcomeChange
            // 
            this.mnuWelcomeChange.Name = "mnuWelcomeChange";
            this.mnuWelcomeChange.Size = new System.Drawing.Size(293, 22);
            this.mnuWelcomeChange.Text = "Turn Welcome Off";
            this.mnuWelcomeChange.Click += new System.EventHandler(this.mnuWelcomeChange_Click);
            // 
            // mnuChatChange
            // 
            this.mnuChatChange.Name = "mnuChatChange";
            this.mnuChatChange.Size = new System.Drawing.Size(293, 22);
            this.mnuChatChange.Text = "Turn Chat Off";
            this.mnuChatChange.Click += new System.EventHandler(this.mnuChatChange_Click);
            // 
            // mnuAddNewPlayersChange
            // 
            this.mnuAddNewPlayersChange.Name = "mnuAddNewPlayersChange";
            this.mnuAddNewPlayersChange.Size = new System.Drawing.Size(293, 22);
            this.mnuAddNewPlayersChange.Text = "Add new players when whitelist is diabled";
            this.mnuAddNewPlayersChange.Click += new System.EventHandler(this.mnuAddNewPlayersChange_Click);
            // 
            // settingsToolStripMenuItem
            // 
            this.settingsToolStripMenuItem.Name = "settingsToolStripMenuItem";
            this.settingsToolStripMenuItem.Size = new System.Drawing.Size(61, 20);
            this.settingsToolStripMenuItem.Text = "Settings";
            this.settingsToolStripMenuItem.Click += new System.EventHandler(this.mnuShowSettings);
            // 
            // turnAutoConnectOnToolStripMenuItem
            // 
            this.turnAutoConnectOnToolStripMenuItem.Name = "turnAutoConnectOnToolStripMenuItem";
            this.turnAutoConnectOnToolStripMenuItem.Size = new System.Drawing.Size(293, 22);
            this.turnAutoConnectOnToolStripMenuItem.Text = "Turn Auto Connect Off";
            this.turnAutoConnectOnToolStripMenuItem.Click += new System.EventHandler(this.mnuAutoConnect_Click);
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1066, 508);
            this.Controls.Add(this.mnuMain);
            this.Controls.Add(this.rtbDisplay);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.mnuMain;
            this.Name = "frmMain";
            this.Text = "Awakener";
            this.Load += new System.EventHandler(this.frmMain_Load);
            this.mnuMain.ResumeLayout(false);
            this.mnuMain.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RichTextBox rtbDisplay;
        private System.Windows.Forms.MenuStrip mnuMain;
        private System.Windows.Forms.ToolStripMenuItem addRemoveToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem mnuAddGUID;
        private System.Windows.Forms.ToolStripMenuItem mnuRemoveGUID;
        private System.Windows.Forms.ToolStripMenuItem actionsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem mnuWhitelistActiveChange;
        private System.Windows.Forms.ToolStripMenuItem mnuWelcomeChange;
        private System.Windows.Forms.ToolStripMenuItem mnuChatChange;
        private System.Windows.Forms.ToolStripMenuItem mnuAddNewPlayersChange;
        private System.Windows.Forms.ToolStripMenuItem settingsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem mnuConnect;
        private System.Windows.Forms.ToolStripMenuItem restartServerToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem minutesToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem minutesToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem minutesToolStripMenuItem2;
        private System.Windows.Forms.ToolStripMenuItem instantToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem startServerToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem turnAutoConnectOnToolStripMenuItem;
    }
}

