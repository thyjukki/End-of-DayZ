class G36C_DZ : G36C
{
	model = "z\addons\dayz_communityweapons\g36c\g36c.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_ca.paa";
	displayName = $STR_DZ_WPN_G36C_NAME;
	
	magazines[] =
	{
		"556x45_x1",
		"556x45_SD_x1",
		"556x45_HP_x1",
		"556x45_TRACER_x1",
		"556x45_RUBBER_x1",
		"556x45_BT_x1",
		"30Rnd_556x45_G36",
		"30Rnd_556x45_G36SD",
		"30Rnd_556x45_G36_hp",
		"30Rnd_556x45_G36_tracer",
		"30Rnd_556x45_G36_rubber",
		"30Rnd_556x45_G36_bt"
	};

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Aimpoint";
			script = "spawn player_useAttchment;";
			att = "Attachment_CCO";
			out = "G36C_CCO_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Attach Holo";
			script = "spawn player_useAttchment;";
			att = "Attachment_HOLO";
			out = "G36C_Holo_DZ";
		};
		class UseAtt2: UseAtt {
			text = "Attach Silencer";
			script = "spawn player_useAttchment;";
			att = "Attachment_SupNATO";
			out = "G36C_SD_DZ";
		};
	};
};

class G36C_SD_DZ : G36_C_SD_eotech
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_SD_NAME;
	
	magazines[] =
	{
		"556x45_x1",
		"556x45_SD_x1",
		"556x45_HP_x1",
		"556x45_TRACER_x1",
		"556x45_RUBBER_x1",
		"556x45_BT_x1",
		"30Rnd_556x45_G36",
		"30Rnd_556x45_G36SD",
		"30Rnd_556x45_G36_hp",
		"30Rnd_556x45_G36_tracer",
		"30Rnd_556x45_G36_rubber",
		"30Rnd_556x45_G36_bt"
	};
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Aimpoint";
			script = "spawn player_useAttchment;";
			att = "Attachment_CCO";
			out = "G36C_CCO_SD_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Attach Holo";
			script = "spawn player_useAttchment;";
			att = "Attachment_HOLO";
			out = "G36C_Holo_SD_DZ";
		};
		class UseAtt2: UseAtt {
			text = "Detach Silencer";
			script = "spawn player_useAttchment;";
			att = "Attachment_SupNATO";
			out = "G36C_DZ";
		};
	};
};

class G36C_CCO_DZ : G36C_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_cco_ca.paa";
	displayName = $STR_DZ_WPN_G36C_CCO_NAME;
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Silencer";
			script = "spawn player_useAttchment;";
			att = "Attachment_SupNATO";
			out = "G36C_CCO_SD_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Detach Aimpoint";
			script = "spawn player_removeAttchment;";
			att = "Attachment_CCO";
			out = "G36C_DZ";
		};
	};
};

class G36C_CCO_SD_DZ : G36C_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_cco_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_CCO_SD_NAME;
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Detach Silencer";
			script = "spawn player_removeAttchment;";
			att = "Attachment_SupNATO";
			out = "G36C_CCO_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Detach Aimpoint";
			script = "spawn player_removeAttchment;";
			att = "Attachment_CCO";
			out = "G36C_SD_DZ";
		};
	};
};

class G36C_Holo_DZ : G36C_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_holo_ca.paa";
	displayName = $STR_DZ_WPN_G36C_HOLO_NAME;
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Silencer";
			script = "spawn player_useAttchment;";
			att = "Attachment_SupNATO";
			out = "G36C_Holo_SD_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Detach Holo";
			script = "spawn player_removeAttchment;";
			att = "Attachment_HOLO";
			out = "G36C_DZ";
		};
	};
};

class G36C_Holo_SD_DZ : G36C_SD_DZ
{
	model = "z\addons\dayz_communityweapons\g36c\g36c_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_holo_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36C_HOLO_SD_NAME;
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Detach Silencer";
			script = "spawn player_removeAttchment;";
			att = "Attachment_SupNATO";
			out = "G36C_Holo_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Detach Holo";
			script = "spawn player_removeAttchment;";
			att = "Attachment_HOLO";
			out = "G36C_SD_DZ";
		};
	};
};