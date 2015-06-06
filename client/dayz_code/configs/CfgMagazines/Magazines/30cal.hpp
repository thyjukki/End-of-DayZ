
/* M1 Carbine */

class KPFS_15Rnd_cal30_Carbine_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 30cal<br/>Rounds: 15 <br/>Used in: M1 Carbine";
	displayname = "M1 Carbine Mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_carbine_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_30cal_Ball {
			ammoMag = "KPFS_15Rnd_cal30_Carbine";
		};
		class B_30cal_HP {
			ammoMag = "KPFS_15Rnd_cal30_Carbine_hp";
		};
		class B_30cal_TRACER {
			ammoMag = "KPFS_15Rnd_cal30_Carbine_tracer";
		};
		class B_30cal_RUBBER {
			ammoMag = "KPFS_15Rnd_cal30_Carbine_rubber";
		};
		class B_30cal_BT {
			ammoMag = "KPFS_15Rnd_cal30_Carbine_bt";
		};
	};
};

class KPFS_15Rnd_cal30_Carbine: CA_Magazine
{
	scope=2;
	descriptionshort = "Caliber: 30cal<br/>Rounds: 15 <br/>Used in: M1 Carbine";
	displayname = "M1 Carbine Mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_carbine_ca.paa";
	ammo="B_30cal_Ball";
	count=10;
	initSpeed=853;
	baseBullet = 30cal_x;
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

	emptyMag = "KPFS_15Rnd_cal30_Carbine_Empty";
};

class KPFS_15Rnd_cal30_Carbine_hp: KPFS_15Rnd_cal30_Carbine {
	scope=2;
	baseBullet = 30cal_HP_x;
	ammo="B_30cal_HP";
	displayName="M1 Carbine HP Mag";
	displayNameShort="HP";
};

class KPFS_15Rnd_cal30_Carbine_tracer: KPFS_15Rnd_cal30_Carbine {
	scope=2;
	baseBullet = 30cal_Tracer_x;
	ammo="B_30cal_TRACER";
	tracersevery = 1;
	displayName="M1 Carbine Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_15Rnd_cal30_Carbine_rubber: KPFS_15Rnd_cal30_Carbine {
	scope=2;
	baseBullet = 30cal_RUBBER_x;
	initSpeed=150;
	ammo="B_30cal_RUBBER";
	displayName="M1 Carbine Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_15Rnd_cal30_Carbine_bt: KPFS_15Rnd_cal30_Carbine {
	scope=2;
	baseBullet = 30cal_BT_x;
	ammo="B_30cal_BT";
	displayName="M1 Carbine BT Mag";
	displayNameShort="BT";
};