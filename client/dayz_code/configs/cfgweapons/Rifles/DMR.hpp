class DMR_DZ : DMR
{
	//model = "z\addons\dayz_communityweapons\dmr\dmr.p3d";
	displayName = $STR_DZ_WPN_DMR_NAME;
	
	//memoryPointCamera = "opticView";
	
	magazines[] =
	{
		"20Rnd_762x51_DMR",
		"20Rnd_762x51_DMRSD",
		"20Rnd_762x51_DMR_hp",
		"20Rnd_762x51_DMR_tracer",
		"20Rnd_762x51_DMR_rubber",
		"20Rnd_762x51_DMR_bt"
	};
	
	class Single : Single
	{
		reloadTime = 0.6;
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
	};
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Ghillie"
		};
		
		Attachment_Ghillie = "DMR_Gh_DZ";
	};
};

class DMR_Gh_DZ : DMR_DZ
{
	model = "z\addons\dayz_communityweapons\dmr\dmr_ghillie.p3d";
	picture = "\z\addons\dayz_communityweapons\dmr\data\w_dmr_ghillie_ca.paa";
	displayName = $STR_DZ_WPN_DMR_GH_NAME;
	
	memoryPointCamera = "opticView";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'DMR_DZ'] call player_removeAttachment";
		};
	};
};