class FNFAL_DZ : FN_FAL
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_NAME;
	
	magazines[] =
	{
		"762x51_x1",
		"762x51_SD_x1",
		"762x51_HP_x1",
		"762x51_TRACER_x1",
		"762x51_RUBBER_x1",
		"762x51_BT_x1",
		"20Rnd_762x51_FNFAL",
		"20Rnd_762x51_FNFALSD",
		"20Rnd_762x51_FNFAL_hp",
		"20Rnd_762x51_FNFAL_tracer",
		"20Rnd_762x51_FNFAL_rubber",
		"20Rnd_762x51_FNFAL_bt"
	};
	
	modes[] = {Single, Burst};
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Aimpoint";
			script = "spawn player_useAttchment;";
			att = "Attachment_CCO";
			out = "FNFAL_CCO_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Attach Holo";
			script = "spawn player_useAttchment;";
			att = "Attachment_HOLO";
			out = "FNFAL_HOLO_DZ";
		};
	};	
};

class FNFAL_CCO_DZ : FNFAL_DZ
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_cco_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_CCO_NAME;


	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Detach Aimpoint";
			script = "spawn player_removeAttchment;";
			att = "Attachment_CCO";
			out = "FNFAL_DZ";
		};
	};	
};

class FNFAL_Holo_DZ : FNFAL_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_holo_ca.paa";
	displayName = $STR_DZ_WPN_FNFAL_HOLO_NAME;

	class ItemActions {
		class UseAtt1 {
			isAttachment = 1;
			text = "Detach Holo";
			script = "spawn player_removeAttchment;";
			att = "Attachment_HOLO";
			out = "FNFAL_DZ";
		};
	};	
};

class FNFAL_ANPVS4_DZ : FN_FAL_ANPVS4
{
	modes[] = {Single, Burst};
};