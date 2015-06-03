class 8Rnd_B_Beneli_Pellets: CA_Magazine {
	model = "\z\addons\dayz_communityassets\models\redshotgunpellets.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_redshotgunpellets_ca.paa";
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 8Rnd_B_Beneli_74Slug: CA_Magazine {	
	model = "\z\addons\dayz_communityassets\models\greenshotgunslugs.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_greenshotgunslugs_ca.paa";
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug
{
	displayName=$STR_MAG_NAME_8;
	count=2;
	descriptionShort=$STR_MAG_DESC_8;
	model = "\z\addons\dayz_communityassets\models\2shells_slugshot.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_slugshot_CA.paa";
	class ItemActions
	{
		class ReloadMag
		{
			text=$STR_MAG_COMBINE_1;
			script="spawn player_reloadMag;";
			use[]=
			{
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug",
				"2Rnd_shotgun_74Slug"
			};
			output[]=
			{
				"8Rnd_B_Beneli_74Slug"
			};
		};
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets
{
	displayName=$STR_MAG_NAME_9;
	count=2;
	descriptionShort=$STR_MAG_DESC_9;
	model = "\z\addons\dayz_communityassets\models\2shells_pellet.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_2shells_pellet_CA.paa";
	class ItemActions
	{
		class ReloadMag
		{
			text=$STR_MAG_COMBINE_1;
			script="spawn player_reloadMag;";
			use[]=
			{
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets",
				"2Rnd_shotgun_74Pellets"
			};
			output[]=
			{
				"8Rnd_B_Beneli_Pellets"
			};
		};
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

//Re-combine options
class 8Rnd_9x18_Makarov : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 15Rnd_9x19_M9 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		class ReloadMag {
				text=$STR_MAG_CONV_M9_G17;
				script="spawn player_reloadMag;";
				use[]=
				{
					"15Rnd_9x19_M9"
				};
				output[]=
				{
					"17Rnd_9x19_glock17"
				};
			};
		};
};
class 15Rnd_9x19_M9SD: 15Rnd_9x19_M9 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 7Rnd_45ACP_1911: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 6Rnd_45ACP: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 17Rnd_9x19_glock17 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
		class ReloadMag	{
				text=$STR_MAG_CONV_G17_M9;
				script="spawn player_reloadMag;";
				use[]=
				{
					"17Rnd_9x19_glock17"
				};
				output[]=
				{
					"15Rnd_9x19_M9"
			};
		};
	};
};	
class 30Rnd_9x19_UZI : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_9x19_UZI_SD : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_9x19_MP5 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_9x19_MP5SD : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 64Rnd_9x19_Bizon : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 64Rnd_9x19_SD_Bizon : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 20Rnd_556x45_Stanag; 
class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_556x45_StanagSD : 30Rnd_556x45_Stanag {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_556x45_G36 : 30Rnd_556x45_Stanag {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_556x45_G36SD : 30Rnd_556x45_G36 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_545x39_AK : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_762x39_AK47 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 30Rnd_762x39_SA58 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 20Rnd_762x51_FNFAL : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 5Rnd_762x51_M24 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 10Rnd_762x54_SVD : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 5Rnd_127x99_as50: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 10Rnd_127x99_m107 : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 20Rnd_762x51_DMR : CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 5x_22_LR_17_HMR: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};	
class 10x_303: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 15Rnd_W1866_Slug: CA_Magazine {
	model = "\z\addons\dayz_communityassets\models\winammo.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_winammo_ca.paa";
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 8Rnd_B_Saiga12_Pellets: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 8Rnd_B_Saiga12_74Slug: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 200Rnd_556x45_M249: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 100Rnd_762x51_M240: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 200Rnd_762x51_M240: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
class 75Rnd_545x39_RPK: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 20Rnd_762x51_g3: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 40Rnd_46x30_mp7: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 40Rnd_46x30_sd_mp7: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 20Rnd_46x30_mp7: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 20Rnd_46x30_sd_mp7: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_762x51_AR10: 20Rnd_762x51_FNFAL {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_7Rnd_50_AE: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_13Rnd_9x19_bhp: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_8Rnd_9x19_Mk: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_8Rnd_9x19_Mksd: RH_8Rnd_9x19_Mk {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_15Rnd_9x19_usp: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_15Rnd_9x19_uspsd: RH_15Rnd_9x19_usp {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_12Rnd_45cal_usp: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_8Rnd_45cal_m1911: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_9x19_M93: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_17Rnd_9x19_g17: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_19Rnd_9x19_g18: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_33Rnd_9x19_g18: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_10Rnd_22LR_mk2: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_8Rnd_762_tt33: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_32cal_vz61: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_30Rnd_9x19_tec: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_32Rnd_9x19_Muzi: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_7Rnd_32cal_ppk: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_8Rnd_9x19_p38: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_6Rnd_44_Mag: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_6Rnd_357_Mag: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_45ACP_30RND_Mag: 30Rnd_9x19_MP5 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_45ACP_13RND_Mag: 30Rnd_9x19_MP5 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_45ACP_30RND_SD_Mag: 30Rnd_9x19_MP5SD {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_9mm_32RND_Mag: 30Rnd_9x19_MP5 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_9mm_32RND_SD_Mag: 30Rnd_9x19_MP5SD {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_46x30mm_40RND_Mag: 30Rnd_9x19_MP5 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_46x30mm_40RND_SD_Mag: 30Rnd_9x19_MP5SD {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_45ACP_25RND_Mag: 30Rnd_9x19_MP5 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_45ACP_25RND_SD_Mag: 30Rnd_9x19_MP5SD {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_57x28mm_50RND_Mag: 30Rnd_9x19_MP5 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_57x28mm_50RND_SD_Mag: 30Rnd_9x19_MP5SD {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_30Rnd_762x39_SDmag: 30Rnd_762x39_AK47 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_30Rnd_545x39_AKSU_mag: 30Rnd_545x39_AK {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_9x39_SP6_mag: 30Rnd_545x39_AK {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_9x39_SP6SD_mag: RH_20Rnd_9x39_SP6_mag {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_75Rnd_762x39_mag: 30Rnd_762x39_AK47 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_45Rnd_545x39_mag: 30Rnd_545x39_AK {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_9x39_val_mag: 30Rnd_545x39_AK {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_9x18_aps: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class RH_20Rnd_9x18_apsSD: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class 30Rnd_556x45_Steyr: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class kpfs_6Rnd_635x15: 15Rnd_9x19_M9 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_8Rnd_9x19_P1: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class kpfs_8Rnd_765x17: 15Rnd_9x19_M9 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_30Rnd_792x33_STG44: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_250Rnd_MG42: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_8Rnd_762x25_TT33: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_100Rnd_762x39_RPD: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_10Rnd_762x39_SKS: 30Rnd_762x39_AK47 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_5Rnd_762x54_Mosin: 10Rnd_762x54_SVD {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_71Rnd_762x25_PPSh: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_15Rnd_cal30_Carbine: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_8Rnd_cal30_60_Gar: KPFS_15Rnd_cal30_Carbine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_30Rnd_45ACP_Thompson: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};

class KPFS_20Rnd_cal30_60_bar: CA_Magazine {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
};
