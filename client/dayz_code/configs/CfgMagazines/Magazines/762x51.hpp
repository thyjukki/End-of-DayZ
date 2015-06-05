// G3 Mag
class 20Rnd_762x51_g3_Empty: emptiedMagazine
{
	scope=2;
	displayName="G3-Mag (Empty)";
	model="\C1987_g3\mag.p3d";
	picture="\C1987_g3\equip\mag.paa";
	descriptionShort="20Rnd. 7.62x51mm. for the G3 Series.";
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "20Rnd_762x51_g3";
		};
	};
};

class 20Rnd_762x51_g3: CA_Magazine {

	class ItemActions
	{
		COMBINE_MAG
	};
	emptyMag = "20Rnd_762x51_g3_Empty";
};

class 20Rnd_762x51_FNFAL : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "20Rnd_762x51_FNFAL_Empty";
};

class RH_20Rnd_762x51_AR10: 20Rnd_762x51_FNFAL
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_20Rnd_762x51_AR10_Empty";
};


class 20Rnd_762x51_DMR_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x51 mm NATO <br/>Rounds: 20 <br/>Used in: DMR";
	displayname = "DMR mag (Empty)";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "20Rnd_762x51_DMR";
		};
		class RH_B_762x51_SD_mk14 {
			ammoMag = "RH_20Rnd_762x51_SD_mk14";
		};
	};
};

class 20Rnd_762x51_DMR : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "20Rnd_762x51_DMR_Empty";
};

class 5Rnd_762x51_M24 : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "5Rnd_762x51_M24_Empty";
};


class 100Rnd_762x51_M240_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
	displayname = "100Rnd. M240 (Empty)";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	scope = 2;
	type = "2*		256";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "100Rnd_762x51_M240";
		};
	};
};

class 100Rnd_762x51_M240: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "100Rnd_762x51_M240_Empty";
};

class 200Rnd_762x51_M240: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "200Rnd_762x51_M240_Empty";
};


//TODO(Jukki) make this into 7.62 nato
class KPFS_250Rnd_MG42_Empty: emptiedMagazine
{
	scope=2;
	displayName="MG-1 Ammobox (Empty)";
	picture="\kpfs_weapons2\data\icons\m_mg1_ca.paa";
	type="2* 256";
	class ammoType
	{
		class KPFS_B_792x57_Ball {
			ammoMag = "KPFS_250Rnd_MG42";
		};
	};
};

class KPFS_250Rnd_MG42: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_250Rnd_MG42_Empty";
};


// TODO(Jukki) add empty to base class
class 20Rnd_762x51_B_SCAR_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: Mk. 17";
	displayname = "Mk17 Mag. (Empty)";
	picture = "\ca\weapons_e\data\icons\m_mk17_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "20Rnd_762x51_B_SCAR";
		};
		class B_762x51_SB_SCAR {
			ammoMag = "20Rnd_762x51_SB_SCAR";
		};
	};
};


//TODO(Jukki) make this into 7.62 nato
class KPFS_8Rnd_cal30_60_Gar_Empty: emptiedMagazine
{
	scope=2;
	displayName="Garand clip (Empty)";
	picture="\kpfs_weapons2\data\icons\m_garand_ca.paa";
	descriptionShort="$STR_KPFSS_8RND_CAL30_60";
	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar";
		};
	};
};

class KPFS_8Rnd_cal30_60_Gar: KPFS_15Rnd_cal30_Carbine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_8Rnd_cal30_60_Gar_Empty";
};