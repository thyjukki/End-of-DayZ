class RH_57x28mm_50RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="P90 Mag (Empty)";
	model="\RH_smg\mags\mag_p90.p3d";
	picture="\RH_smg\inv\m_p90.paa";
	descriptionShort="Caliber: 57x28 mm<br/>Rounds: 50 <br/>Used in: P90";
	class ammoType
	{
		class B_57x28_Ball {
			ammoMag = "RH_57x28mm_50RND_Mag";
		};
		class B_57x28_SD {
			ammoMag = "RH_57x28mm_50RND_SD_Mag";
		};
		class B_57x28_HP {
			ammoMag = "RH_57x28mm_50RND_Mag_hp";
		};
		class B_57x28_TRACER {
			ammoMag = "RH_57x28mm_50RND_Mag_tracer";
		};
		class B_57x28_RUBBER {
			ammoMag = "RH_57x28mm_50RND_Mag_rubber";
		};
		class B_57x28_BT {
			ammoMag = "RH_57x28mm_50RND_Mag_bt";
		};
	};
};

class RH_57x28mm_50RND_Mag: 30Rnd_9x19_MP5
{
	scope=2;
	displayName="P90 Mag";
	model="\RH_smg\mags\mag_p90.p3d";
	picture="\RH_smg\inv\m_p90.paa";
	descriptionShort="Caliber: 57x28 mm<br/>Rounds: 50 <br/>Used in: P90";
	ammo="B_57x28_Ball";
	count=50;
	initSpeed=400;
	baseBullet = 57x28_x;
	LOAD_AMMO

	emptyMag = "RH_57x28mm_50RND_Mag_Empty";
};

class RH_57x28mm_50RND_SD_Mag: RH_57x28mm_50RND_Mag {
	scope=2;
	baseBullet = 57x28_SD_x;
	initSpeed=320;
	ammo="B_57x28_SD";
	displayName="P90 SD Mag";
	displayNameShort="SD";
};

class RH_57x28mm_50RND_Mag_hp: RH_57x28mm_50RND_Mag {
	scope=2;
	baseBullet = 57x28_HP_x;
	ammo="B_57x28_HP";
	displayName="P90 HP Mag";
	displayNameShort="HP";
};

class RH_57x28mm_50RND_Mag_tracer: RH_57x28mm_50RND_Mag {
	scope=2;
	baseBullet = 57x28_Tracer_x;
	ammo="B_57x28_TRACER";
	tracersevery = 1;
	displayName="P90 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_57x28mm_50RND_Mag_rubber: RH_57x28mm_50RND_Mag {
	scope=2;
	baseBullet = 57x28_RUBBER_x;
	initSpeed=200;
	ammo="B_57x28_RUBBER";
	displayName="P90 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_57x28mm_50RND_Mag_bt: RH_57x28mm_50RND_Mag {
	scope=2;
	baseBullet = 57x28_BT_x;
	ammo="B_57x28_BT";
	displayName="P90 BT Mag";
	displayNameShort="BT";
};