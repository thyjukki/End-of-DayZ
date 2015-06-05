/* MP5 <-> PDW*/

class 30Rnd_9x19_UZI : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "30Rnd_9x19_UZI_Empty";
};


class 30Rnd_9x19_MP5_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 9x19 mm Parabellum <br/>Rounds: 30 <br/>Used in: MP5";
	displayname = "MP5 Mag. (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
	scope = 2;
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "30Rnd_9x19_MP5";
		};
		class RH_B_9x19_SD {
			ammoMag = "30Rnd_9x19_MP5SD";
		};
	};
};

class 30Rnd_9x19_MP5 : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "30Rnd_9x19_MP5_Empty";
};

class 30Rnd_9x19_UZI_SD : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_9x19_MP5SD : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_mp5sd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};



/* M9 <-> G17 */
class 15Rnd_9x19_M9_Empty: emptiedMagazine
{
	scope=2;
	descriptionshort = "Caliber: 9x19 mm Parabellum <br/>Rounds: 15 <br/>Used in: M9";
	displayname = "M9 Mag. (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
	type=16;
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "15Rnd_9x19_M9";
		};
		class RH_B_9x19_SD {
			ammoMag = "15Rnd_9x19_M9SD";
		};
	};
};

class 15Rnd_9x19_M9 : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "15Rnd_9x19_M9_Empty";
};


//TODO(Jukki) check which mag to use
class RH_17Rnd_9x19_g17_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 17 mag (empty)";
	model="\RH_de\mags\mag_g17.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_17Rnd_9x19_g17";
		};
		class RH_B_9x19_SD {
			ammoMag = "RH_17Rnd_9x19_g17SD";
		};
	};
};

class 17Rnd_9x19_glock17 : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "17Rnd_9x19_glock17_Empty";
};

class 15Rnd_9x19_M9SD : 15Rnd_9x19_M9
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_m9sd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_M9_G17;
			script="spawn player_reloadMag;";
			use[] =
			{
				"15Rnd_9x19_M9SD"
			};
			output[] =
			{
				"17Rnd_9x19_glock17SD"
			};
		};
	};
};

class 17Rnd_9x19_glock17SD : 15Rnd_9x19_M9SD
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17sd_ca.paa";
	
	displayName = $STR_DZ_MAG_17RND_9X19_GLOCK17SD;
	
	count = 17;
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text=$STR_MAG_CONV_G17_M9;
			script="spawn player_reloadMag;";
			use[] =
			{
				"17Rnd_9x19_glock17SD"
			};
			output[] =
			{
				"15Rnd_9x19_M9SD"
			};
		};
	};
};

//Browning
class RH_13Rnd_9x19_bhp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Browning HP mag (Empty)";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_13Rnd_9x19_bhp";
		};
	};
};

class RH_13Rnd_9x19_bhp: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_13Rnd_9x19_bhp_Empty";
};

//MK22
class RH_8Rnd_9x19_Mk_Empty: emptiedMagazine
{
	scope=2;
	displayName="Mk22 mag (Empty)";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_8Rnd_9x19_Mk";
		};
		class RH_B_9x19_SD {
			ammoMag = "RH_8Rnd_9x19_Mksd";
		};
	};
};

class RH_8Rnd_9x19_Mk: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_8Rnd_9x19_Mk_Empty";
};

// 9mm usp
class RH_15Rnd_9x19_usp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Usp mag (9 mm) (Empty)";
	model="\RH_de\mags\mag_usp.p3d";
	type=16;
	picture="\RH_de\inv\m_usp.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_15Rnd_9x19_usp";
		};
		class RH_B_9x19_SD {
			ammoMag = "RH_15Rnd_9x19_uspsd";
		};
	};
};

class RH_15Rnd_9x19_usp: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_15Rnd_9x19_usp_Empty";
};

//Raffica mag
class RH_20Rnd_9x19_M93_Empty: emptiedMagazine
{
	scope=2;
	displayName="M93R mag (Empty)";
	model="\RH_de\mags\mag_m93r.p3d";
	type=16;
	picture="\RH_de\inv\m_m93.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_20Rnd_9x19_M93";
		};
	};
};

class RH_20Rnd_9x19_M93: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_20Rnd_9x19_M93_Empty";
};


// Glock 9mm 19rnd
class RH_19Rnd_9x19_g18_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 18 mag (Empty)";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_19Rnd_9x19_g18";
		};
		class RH_B_9x19_SD {//SD VERSION HERE
			ammoMag = "RH_19Rnd_9x19_g18SD";
		};
	};
};

class RH_19Rnd_9x19_g18: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_19Rnd_9x19_g18_Empty";
};

// Glock 9mm 33rnd
class RH_33Rnd_9x19_g18_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 18 33Rnd mag (Empty)";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_33Rnd_9x19_g18";
		};
		class RH_B_9x19_SD {//SD VERSION HERE
			ammoMag = "RH_33Rnd_9x19_g18SD";
		};
	};
};

class RH_33Rnd_9x19_g18: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_33Rnd_9x19_g18_Empty";
};

class RH_30Rnd_9x19_tec: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_30Rnd_9x19_tec_Empty";
};

class RH_32Rnd_9x19_Muzi: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_32Rnd_9x19_Muzi_Empty";
};

class RH_8Rnd_9x19_p38: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_8Rnd_9x19_p38_Empty";
};


//UZI
class RH_9mm_32RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	scopeWeapon=0;
	scopeMagazine=2;
	displayName="Uzi Magazine (Empty)";
	model="\RH_smg\mags\mag_uzi.p3d";
	picture="\RH_smg\inv\m_uzi.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_9mm_32RND_Mag";
		};
		class RH_B_9x19_SD {//SD VERSION HERE
			ammoMag = "RH_9mm_32RND_SD_Mag";
		};
	};
};

class RH_9mm_32RND_Mag: 30Rnd_9x19_MP5
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_9mm_32RND_Mag_Empty";
};

class RH_9mm_32RND_SD_Mag: 30Rnd_9x19_MP5SD
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_9mm_32RND_Mag_Empty";
};

class KPFS_8Rnd_9x19_P1: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_8Rnd_9x19_P1_Empty";
};

/* Bizon */

class 64Rnd_9x19_Bizon_Empty: emptiedMagazine {
	descriptionshort = "Caliber:9x18mm <br/>Rounds: 64 <br/>Used in: Bizon PP-19";
	displayname = "Bizon Mag. (Empty)";
	picture = "\CA\weapons\data\equip\m_bizon_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_9x18_Ball {
			ammoMag = "64Rnd_9x19_Bizon";
		};
		class B_9x18_SD {
			ammoMag = "64Rnd_9x19_SD_Bizon";
		};
	};
};

class 64Rnd_9x19_Bizon : CA_Magazine
{
	model = "z\addons\dayz_communityweapons\magazines\bizon.p3d";
	
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "64Rnd_9x19_Bizon_Empty";
};

class 64Rnd_9x19_SD_Bizon : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_bizonsd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};