class 200Rnd_556x45_M249_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
	displayname = "200Rnd. M249 Belt (Empty)";
	picture = "\CA\weapons\data\equip\m_m249_ca.paa";
	type = "2*		256";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "200Rnd_556x45_M249";
		};
	};
};

class 200Rnd_556x45_M249: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "200Rnd_556x45_M249_Empty";
};

//TODO(Jukki) add empty to base class
class 200Rnd_556x45_L110A1_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200 <br/>Used in: L110A1";
	displayname = "200Rnd. STANAG (Empty)";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "200Rnd_556x45_L110A1";
		};
	};
};

//TODO(Jukki) add empty to base class
class 100Rnd_556x45_M249_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45mm NATO<br/>Rounds: 100<br/>Used in: M249";
	displayname = "M249 Mag. (Empty)";
	picture = "\CA\weapons_E\Data\icons\m_m245_CA.paa";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "100Rnd_556x45_M249";
		};
	};
};

/* STANAG <-> G36 */
class 20Rnd_556x45_Stanag_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Stanag compatible";
	displayname = "20Rnd. STANAG (Empty)";
	picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "20Rnd_556x45_Stanag";
		};
	};
};

class 20Rnd_556x45_Stanag; // TODO(Jukki) Fix this

class 30Rnd_556x45_Stanag_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Stanag compatible";
	displayname = "30Rnd. STANAG (Empty)";
	picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_Stanag";
		};
		class B_556x45_SD {
			ammoMag = "30Rnd_556x45_StanagSD";
		};
	};
};

class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "30Rnd_556x45_Stanag_Empty";
};

class 30Rnd_556x45_G36 : 30Rnd_556x45_Stanag
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "30Rnd_556x45_G36_Empty";
};

class 30Rnd_556x45_StanagSD : 30Rnd_556x45_Stanag
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_30stanagsd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 30Rnd_556x45_G36SD : 30Rnd_556x45_G36
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_g36sd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

// AUG
class 30Rnd_556x45_Aug_Empty: emptiedMagazine
{
	scope=2;
	displayName="Aug 30Rnd Mag. (Empty)";
	picture="\MIDF_Weapons\aug_a3\pictures\aug_a3_mag.paa";
	model="\MIDF_Weapons\aug_a3\aug_a3_mag.p3d";
	descriptionShort=" 30Rnds 5,56x45 Stanag AUG Magazine for the AUG Series";

	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_Aug";
		};
	};
};

class 30Rnd_556x45_Steyr: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "30Rnd_556x45_Steyr_Empty";
};

//TODO(Jukki) ad _empty to base class
class 100Rnd_556x45_BetaCMag_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100 <br/>Stanag compatible";
	displayname = "MG36 Mag. (Empty)";
	picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	scope = 2;
	type = "2 * 256";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "100Rnd_556x45_BetaCMag";
		};
	};
};

//TODO(Jukki) add famas mags
class R3F_25Rnd_556x45_FAMAS_Empty: emptiedMagazine
{
	scope=2;
	displayName="FAMAS Mag. 25 rounds (Empty)";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_F1.paa";
	model="\r3f_armes\chargeur_F1.p3d";
	descriptionShort="$STR_R3F_25Rnd_556x45_FAMAS_DESC";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "R3F_25Rnd_556x45_FAMAS";
		};
		class B_556x45_SD {
			ammoMag = "R3F_25Rnd_556x45_SD_FAMAS";
		};
	};
	class Library
	{
		libTextDesc="$STR_R3F_25Rnd_556x45_FAMAS_LIB";
	};
};

class R3F_30Rnd_556x45_FAMAS_Empty: emptiedMagazine
{
	scope=2;
	displayName="FAMAS Mag. 30 rounds (Empty)";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_F1.paa";
	model="\r3f_armes\chargeur_F1.p3d";
	descriptionShort="$STR_R3F_30Rnd_556x45_FAMAS_DESC";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "R3F_30Rnd_556x45_FAMAS_FAMAS";
		};
		class B_556x45_SD {
			ammoMag = "R3F_30Rnd_556x45_FAMAS_SD_FAMAS";
		};
	};
	class Library
	{
		libTextDesc="$STR_R3F_30Rnd_556x45_FAMAS_LIB";
	};
};