class M1014_DZ : M1014
{
	model = "z\addons\dayz_communityweapons\m1014\m1014.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_ca.paa";
	displayName = $STR_DZ_WPN_M1014_NAME;
	
	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};
	
	class Single : Single
	{
		reloadTime = 0.27;
	};
	
	distanceZoomMin=50;
	distanceZoomMax=50;

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Aimpoint";
			script = "spawn player_useAttchment;";
			att = "Attachment_CCO";
			out = "M1014_CCO_DZ";
		};
		class UseAtt1: UseAtt {
			text = "Attach Holo";
			script = "spawn player_useAttchment;";
			att = "Attachment_HOLO";
			out = "M1014_Holo_DZ";
		};
	};	
};

class M1014_CCO_DZ : M1014_DZ
{
	model = "z\addons\dayz_communityweapons\m1014\m1014_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_cco_ca.paa";
	displayName = $STR_DZ_WPN_M1014_CCO_NAME;
	
	distanceZoomMin=75;
	distanceZoomMax=75;

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Detach Aimpoint";
			script = "spawn player_removeAttchment;";
			att = "Attachment_CCO";
			out = "M1014_DZ";
		};
	};	
};

class M1014_Holo_DZ : M1014_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m1014\m1014_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_holo_ca.paa";
	displayName = $STR_DZ_WPN_M1014_HOLO_NAME;

	class ItemActions {
		class UseAtt1 {
			isAttachment = 1;
			text = "Detach Holo";
			script = "spawn player_removeAttchment;";
			att = "Attachment_HOLO";
			out = "M1014_DZ";
		};
	};	
};