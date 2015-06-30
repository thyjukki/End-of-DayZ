class 8Rnd_9x18_Makarov_Empty: emptiedMagazine {
	ammo = "B_9x18_Ball";
	descriptionshort = "Caliber: 9x18 mm Makarov <br/>Rounds: 8 <br/>Used in: Makarov";
	displayname = "Makarov Mag (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\8Rnd_9x18_Makarov.p3d";
	scope = 2;
	type = 16;
	class ammoType
	{
		class B_9x18_Ball {
			ammoMag = "8Rnd_9x18_Makarov";
		};
		class B_9x18_SD {
			ammoMag = "8Rnd_9x18_MakarovSD";
		};
		class B_9x18_HP {
			ammoMag = "8Rnd_9x18_Makarov_hp";
		};
		class B_9x18_TRACER {
			ammoMag = "8Rnd_9x18_Makarov_tracer";
		};
		class B_9x18_RUBBER {
			ammoMag = "8Rnd_9x18_Makarov_rubber";
		};
		class B_9x18_BT {
			ammoMag = "8Rnd_9x18_Makarov_bt";
		};
	};
};

class 8Rnd_9x18_Makarov: CA_Magazine
{
	scope=2;
	displayName="Makarov Mag";
	picture="\Ca\weapons\Data\Equip\m_makarov_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\8Rnd_9x18_Makarov.p3d";
	descriptionShort="Caliber: 9x18 mm Makarov <br/>Rounds: 8 <br/>Used in: Makarov";
	type=16;
	ammo="B_9x18_Ball";
	count=8;
	initSpeed=350;
	baseBullet = 9x18_x;
	LOAD_AMMO

	emptyMag = "8Rnd_9x18_Makarov_Empty";
};

class 8Rnd_9x18_MakarovSD: 8Rnd_9x18_Makarov {
	scope=2;
	baseBullet = 9x18_SD_x;
	initSpeed=310;
	ammo="B_9x18_SD";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_makarovsd_ca.paa";
	displayName="Makarov SD Mag";
	displayNameShort="SD";
};

class 8Rnd_9x18_Makarov_hp: 8Rnd_9x18_Makarov {
	scope=2;
	baseBullet = 9x18_HP_x;
	ammo="B_9x18_HP";
	displayName="Makarov HP Mag";
	displayNameShort="HP";
};

class 8Rnd_9x18_Makarov_tracer: 8Rnd_9x18_Makarov {
	scope=2;
	baseBullet = 9x18_Tracer_x;
	tracersevery = 1;
	ammo="B_9x18_TRACER";
	displayName="Makarov Tracer Mag";
};

class 8Rnd_9x18_Makarov_rubber: 8Rnd_9x18_Makarov {
	scope=2;
	baseBullet = 9x18_RUBBER_x;
	initSpeed=200;
	ammo="B_9x18_RUBBER";
	displayName="Makarov Rubber Mag";
	displayNameShort="Rubber";
};

class 8Rnd_9x18_Makarov_bt: 8Rnd_9x18_Makarov {
	scope=2;
	baseBullet = 9x18_BT_x;
	ammo="B_9x18_BT";
	displayName="Makarov BT Mag";
	displayNameShort="BT";
};


class RH_20Rnd_9x18_aps_Empty: emptiedMagazine {
	ammo = "B_9x18_Ball";
	descriptionshort = "Caliber: 9x18 mm Makarov <br/>Rounds: 20 <br/>Used in: Makarov";
	displayname = "APS Mag (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
	scope = 2;
	type = 16;
	class ammoType
	{
		class B_9x18_Ball {
			ammoMag = "RH_20Rnd_9x18_aps";
		};
		class B_9x18_SD {
			ammoMag = "RH_20Rnd_9x18_apsSD";
		};
		class B_9x18_HP {
			ammoMag = "RH_20Rnd_9x18_aps_hp";
		};
		class B_9x18_TRACER {
			ammoMag = "RH_20Rnd_9x18_aps_tracer";
		};
		class B_9x18_RUBBER {
			ammoMag = "RH_20Rnd_9x18_aps_rubber";
		};
		class B_9x18_BT {
			ammoMag = "RH_20Rnd_9x18_aps_bt";
		};
	};
};

class RH_20Rnd_9x18_aps: 8Rnd_9x18_Makarov
{
	scope=2;
	displayName="APS mag";
	descriptionShort="Caliber: 9x18 mm APS <br/>Rounds: 20 <br/>Used in: APS";
	count=20;
	emptyMag = "RH_20Rnd_9x18_aps_Empty";
	LOAD_AMMO
};

class RH_20Rnd_9x18_apsSD: RH_20Rnd_9x18_aps {
	scope=2;
	baseBullet = 9x18_SD_x;
	initSpeed=310;
	ammo="B_9x18_SD";
	displayName="APS SD mag";
	displayNameShort="SD";
};

class RH_20Rnd_9x18_aps_hp: RH_20Rnd_9x18_aps {
	scope=2;
	baseBullet = 9x18_HP_x;
	ammo="B_9x18_HP";
	displayName="APS HP Mag";
	displayNameShort="HP";
};

class RH_20Rnd_9x18_aps_tracer: RH_20Rnd_9x18_aps {
	scope=2;
	baseBullet = 9x18_Tracer_x;
	ammo="B_9x18_TRACER";
	tracersevery = 1;
	displayName="APS Tracer mag";
	displayNameShort="Tracer";
};

class RH_20Rnd_9x18_aps_rubber: RH_20Rnd_9x18_aps {
	scope=2;
	baseBullet = 9x18_RUBBER_x;
	initSpeed=200;
	ammo="B_9x18_RUBBER";
	displayName="APS Rubber mag";
	displayNameShort="Rubber";
};

class RH_20Rnd_9x18_aps_bt: RH_20Rnd_9x18_aps {
	scope=2;
	baseBullet = 9x18_BT_x;
	ammo="B_9x18_BT";
	displayName="APS BT mag";
	displayNameShort="BT";
};



/* Bizon */

class 64Rnd_9x18_Bizon_Empty: emptiedMagazine
{
	scope=2;
	displayname = "Bizon Mag (Empty)";
	descriptionshort = "Caliber:9x18mm <br/>Rounds: 64 <br/>Used in: Bizon PP-19";
	picture = "\CA\weapons\data\equip\m_bizon_ca.paa";
	model = "z\addons\dayz_communityweapons\magazines\bizon.p3d";
	class ammoType
	{
		class RH_B_9x18_Ball {
			ammoMag = "64Rnd_9x18_Bizon";
		};
		class RH_B_9x18_SD {
			ammoMag = "64Rnd_9x18_SD_Bizon";
		};
		class B_9x18_HP {
			ammoMag = "64Rnd_9x18_Bizon_hp";
		};
		class B_9x18_TRACER {
			ammoMag = "64Rnd_9x18_Bizon_tracer";
		};
		class B_9x18_RUBBER {
			ammoMag = "64Rnd_9x18_Bizon_rubber";
		};
		class B_9x18_BT {
			ammoMag = "64Rnd_9x18_Bizon_bt";
		};
	};
};

class 64Rnd_9x18_Bizon: CA_Magazine
{
	scope=2;
	displayName="Bizon mag";
	descriptionshort = "Caliber:9x18mm <br/>Rounds: 64 <br/>Used in: Bizon PP-19";
	picture = "\CA\weapons\data\equip\m_bizon_ca.paa";
	model = "z\addons\dayz_communityweapons\magazines\bizon.p3d";
	ammo="B_9x18_Ball";
	count=64;
	initSpeed=350;
	baseBullet = 9x18_x;
	LOAD_AMMO

	emptyMag = "64Rnd_9x18_Bizon_Empty";
};

class 64Rnd_9x18_SD_Bizon: 64Rnd_9x18_Bizon {
	scope=2;
	baseBullet = 9x18_SD_x;
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_bizonsd_ca.paa";
	initSpeed=310;
	ammo="B_9x18_SD";
	displayName="Bizon SD Mag";
	displayNameShort="SD";
};

class 64Rnd_9x18_Bizon_hp: 64Rnd_9x18_Bizon {
	scope=2;
	baseBullet = 9x18_HP_x;
	ammo="B_9x18_HP";
	displayName="Bizon HP Mag";
	displayNameShort="HP";
};

class 64Rnd_9x18_Bizon_tracer: 64Rnd_9x18_Bizon {
	scope=2;
	baseBullet = 9x18_Tracer_x;
	ammo="B_9x18_TRACER";
	tracersevery = 1;
	displayName="Bizon Tracer Mag";
	displayNameShort="Tracer";
};

class 64Rnd_9x18_Bizon_rubber: 64Rnd_9x18_Bizon {
	scope=2;
	baseBullet = 9x18_RUBBER_x;
	initSpeed=200;
	ammo="B_9x18_RUBBER";
	displayName="Bizon Rubber Mag";
	displayNameShort="Rubber";
};

class 64Rnd_9x18_Bizon_bt: 64Rnd_9x18_Bizon {
	scope=2;
	baseBullet = 9x18_BT_x;
	ammo="B_9x18_BT";
	displayName="Bizon BT Mag";
	displayNameShort="BT";
};
