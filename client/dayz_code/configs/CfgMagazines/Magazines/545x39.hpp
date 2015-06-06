// AK-74 30rnd
class 30Rnd_545x39_AK_Empty: emptiedMagazine {
	displayname = "AK-74 Mag (Empty)";
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 30 <br/>Used in: AK-74 based weapons";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "30Rnd_545x39_AK";
		};
		class B_545x39_SD {
			ammoMag = "30Rnd_545x39_AKSD";
		};
		class B_545x39_HP {
			ammoMag = "30Rnd_545x39_AK_hp";
		};
		class B_545x39_TRACER {
			ammoMag = "30Rnd_545x39_AK_tracer";
		};
		class B_545x39_RUBBER {
			ammoMag = "30Rnd_545x39_AK_rubber";
		};
		class B_545x39_BT {
			ammoMag = "30Rnd_545x39_AK_bt";
		};
	};
};

class 30Rnd_545x39_AK: CA_Magazine
{
	scope=2;
	displayname = "AK-74 Mag";
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 30 <br/>Used in: AK-74 based weapons";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	ammo="B_545x39_Ball";
	count=30;
	initSpeed=900;
	baseBullet = 545x39_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Unload";
			script = "spawn player_unloadAmmo;";
		};
	};

	emptyMag = "30Rnd_545x39_AK_Empty";
};

class 30Rnd_545x39_AKSD: 30Rnd_545x39_AK {
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74sd_ca.paa";
	scope=2;
	baseBullet = 545x39_SD_x;
	initSpeed=320;
	ammo="B_545x39_SD";
	displayName="AK-74 SD Mag";
};

class 30Rnd_545x39_AK_hp: 30Rnd_545x39_AK {
	scope=2;
	baseBullet = 545x39_HP_x;
	ammo="B_545x39_HP";
	displayName="AK-74 HP Mag";
};

class 30Rnd_545x39_AK_tracer: 30Rnd_545x39_AK {
	scope=2;
	baseBullet = 545x39_Tracer_x;
	ammo="B_545x39_TRACER";
	displayName="AK-74 Tracer Mag";
};

class 30Rnd_545x39_AK_rubber: 30Rnd_545x39_AK {
	scope=2;
	baseBullet = 545x39_RUBBER_x;
	initSpeed=150;
	ammo="B_545x39_RUBBER";
	displayName="AK-74 Rubber Mag";
};

class 30Rnd_545x39_AK_bt: 30Rnd_545x39_AK {
	scope=2;
	baseBullet = 545x39_BT_x;
	ammo="B_545x39_BT";
	displayName="AK-74 BT Mag";
};


// AK-74 45nd
class RH_45Rnd_545x39_mag_Empty: 30Rnd_545x39_AK_Empty {
	displayname = "RPK-74 Mag (Empty)";
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 45 <br/>Used in: AK-74 based weapons";
	picture="\RH_aks\inv\m_rpk74.paa";
	model="\RH_aks\mags\mag_rpk74.p3d";
	scope = 2;
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "RH_45Rnd_545x39_mag";
		};
		class B_545x39_SD {
			ammoMag = "RH_45Rnd_545x39_magSD";
		};
		class B_545x39_HP {
			ammoMag = "RH_45Rnd_545x39_mag_hp";
		};
		class B_545x39_TRACER {
			ammoMag = "RH_45Rnd_545x39_mag_tracer";
		};
		class B_545x39_RUBBER {
			ammoMag = "RH_45Rnd_545x39_mag_rubber";
		};
		class B_545x39_BT {
			ammoMag = "RH_45Rnd_545x39_mag_bt";
		};
	};
};

class RH_45Rnd_545x39_mag: CA_Magazine
{
	scope=2;
	displayname = "RPK-74 Mag";
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 45 <br/>Used in: AK-74 based weapons";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	ammo="B_545x39_Ball";
	count=45;
	initSpeed=900;
	baseBullet = 545x39_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Unload";
			script = "spawn player_unloadAmmo;";
		};
	};

	emptyMag = "RH_45Rnd_545x39_mag_Empty";
};

class RH_45Rnd_545x39_magSD: RH_45Rnd_545x39_mag {
	scope=2;
	baseBullet = 545x39_SD_x;
	initSpeed=320;
	ammo="B_545x39_SD";
	displayName="RPK-74 SD Mag";
};

class RH_45Rnd_545x39_mag_hp: RH_45Rnd_545x39_mag {
	scope=2;
	baseBullet = 545x39_HP_x;
	ammo="B_545x39_HP";
	displayName="RPK-74 HP Mag";
};

class RH_45Rnd_545x39_mag_tracer: RH_45Rnd_545x39_mag {
	scope=2;
	baseBullet = 545x39_Tracer_x;
	ammo="B_545x39_TRACER";
	displayName="RPK-74 Tracer Mag";
};

class RH_45Rnd_545x39_mag_rubber: RH_45Rnd_545x39_mag {
	scope=2;
	baseBullet = 545x39_RUBBER_x;
	initSpeed=150;
	ammo="B_545x39_RUBBER";
	displayName="RPK-74 Rubber Mag";
};

class RH_45Rnd_545x39_mag_bt: RH_45Rnd_545x39_mag {
	scope=2;
	baseBullet = 545x39_BT_x;
	ammo="B_545x39_BT";
	displayName="RPK-74 BT Mag";
};





// AK-74 Drum Mag
class 75Rnd_545x39_RPK_Empty: 30Rnd_545x39_AK_Empty {
	displayname = "AK-74 Drum Mag (Empty)";
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 75 <br/>Used in: AK-74 based weapons";
	picture="\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "75Rnd_545x39_RPK";
		};
		class B_545x39_SD {
			ammoMag = "75Rnd_545x39_RPKSD";
		};
		class B_545x39_HP {
			ammoMag = "75Rnd_545x39_RPK_hp";
		};
		class B_545x39_TRACER {
			ammoMag = "75Rnd_545x39_RPK_tracer";
		};
		class B_545x39_RUBBER {
			ammoMag = "75Rnd_545x39_RPK_rubber";
		};
		class B_545x39_BT {
			ammoMag = "75Rnd_545x39_RPK_bt";
		};
	};
};

class 75Rnd_545x39_RPK: CA_Magazine
{
	scope=2;
	displayname = "AK-74 Drum Mag (Empty)";
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 75 <br/>Used in: AK-74 based weapons";
	picture="\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
	ammo="B_545x39_Ball";
	count=75;
	initSpeed=900;
	baseBullet = 545x39_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Unload";
			script = "spawn player_unloadAmmo;";
		};
	};

	emptyMag = "75Rnd_545x39_RPK_Empty";
};

class 75Rnd_545x39_RPKSD: 75Rnd_545x39_RPK {
	scope=2;
	baseBullet = 545x39_SD_x;
	initSpeed=320;
	ammo="B_545x39_SD";
	displayName="AK-74 SD Drum Mag";
};

class 75Rnd_545x39_RPK_hp: 75Rnd_545x39_RPK {
	scope=2;
	baseBullet = 545x39_HP_x;
	ammo="B_545x39_HP";
	displayName="AK-74 HP Drum Mag";
};

class 75Rnd_545x39_RPK_tracer: 75Rnd_545x39_RPK {
	scope=2;
	baseBullet = 545x39_Tracer_x;
	ammo="B_545x39_TRACER";
	displayName="AK-74 Tracer Drum Mag";
};

class 75Rnd_545x39_RPK_rubber: 75Rnd_545x39_RPK {
	scope=2;
	baseBullet = 545x39_RUBBER_x;
	initSpeed=150;
	ammo="B_545x39_RUBBER";
	displayName="AK-74 Rubber Drum Mag";
};

class 75Rnd_545x39_RPK_bt: 75Rnd_545x39_RPK {
	scope=2;
	baseBullet = 545x39_BT_x;
	ammo="B_545x39_BT";
	displayName="AK-74 BT Drum Mag";
};