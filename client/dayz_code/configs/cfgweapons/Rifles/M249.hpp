//TODO(Jukki) Remove
class M249_CCO_DZ : M249
{
	model = "z\addons\dayz_communityweapons\m249\m249_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_cco_ca.paa";
	displayName = $STR_DZ_WPN_M249_CCO_NAME;
	
	type = WeaponSlotPrimary;
	
	magazines[] =
	{
		"100Rnd_556x45_M249",
		"100Rnd_556x45_M249SD",
		"100Rnd_556x45_M249_hp",
		"100Rnd_556x45_M249_tracer",
		"100Rnd_556x45_M249_rubber",
		"100Rnd_556x45_M249_bt",
		"200Rnd_556x45_M249",
		"200Rnd_556x45_M249SD",
		"200Rnd_556x45_M249_hp",
		"200Rnd_556x45_M249_tracer",
		"200Rnd_556x45_M249_rubber",
		"200Rnd_556x45_M249_bt",
		"20Rnd_556x45_Stanag",
		"20Rnd_556x45_StanagSD",
		"20Rnd_556x45_Stanag_hp",
		"20Rnd_556x45_Stanag_tracer",
		"20Rnd_556x45_Stanag_rubber",
		"20Rnd_556x45_Stanag_bt",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_StanagSD",
		"30Rnd_556x45_Stanag_hp",
		"30Rnd_556x45_Stanag_tracer",
		"30Rnd_556x45_Stanag_rubber",
		"30Rnd_556x45_Stanag_bt"

	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M249_DZ'] call player_removeAttachment";
		};
	};
};

class M249_DZ : M249_CCO_DZ
{
	model = "ca\weapons\m249.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_ca.paa";
	displayName = $STR_DZ_WPN_M249_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_CCO",
			"Attachment_Holo"
		};
		
		Attachment_CCO = "M249_CCO_DZ";
		Attachment_Holo = "M249_Holo_DZ";
	};
	
	class ItemActions {};
};

class M249_Holo_DZ : M249_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m249\m249_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_holo_ca.paa";
	displayName = $STR_DZ_WPN_M249_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M249_DZ'] call player_removeAttachment";
		};
	};
};