
/* TT33 */
class RH_8Rnd_762_tt33_Empty: emptiedMagazine
{
	scope=2;
	displayName="TT33 mag (Empty)";
	picture="\RH_de\inv\m_tt33.paa";
	model="\RH_de\mags\mag_tt33.p3d";
	descriptionShort="Caliber: 762x25 mm<br/>Rounds: 8 <br/>Used in: TT33";
	type=16;
	class ammoType
	{
		class B_762x25_Ball {
			ammoMag = "RH_8Rnd_762_tt33";
		};
		class B_762x25_HP {
			ammoMag = "RH_8Rnd_762_tt33_hp";
		};
		class B_762x25_TRACER {
			ammoMag = "RH_8Rnd_762_tt33_tracer";
		};
		class B_762x25_RUBBER {
			ammoMag = "RH_8Rnd_762_tt33_rubber";
		};
		class B_762x25_BT {
			ammoMag = "RH_8Rnd_762_tt33_bt";
		};
	};
};


class RH_8Rnd_762_tt33: CA_Magazine
{
	scope=2;
	displayName="TT33 Mag";
	picture="\RH_de\inv\m_tt33.paa";
	model="\RH_de\mags\mag_tt33.p3d";
	descriptionShort="Caliber: 762x25 mm<br/>Rounds: 8 <br/>Used in: TT33";
	ammo="B_762x25_Ball";
	type=16;
	count=8;
	initSpeed=420;
	baseBullet = 762x25_x;
	LOAD_AMMO

	emptyMag = "RH_8Rnd_762_tt33_Empty";
};

class RH_8Rnd_762_tt33_hp: RH_8Rnd_762_tt33 {
	scope=2;
	baseBullet = 762x25_HP_x;
	ammo="B_762x25_HP";
	displayName="TT33 HP Mag";
	displayNameShort="HP";
};

class RH_8Rnd_762_tt33_tracer: RH_8Rnd_762_tt33 {
	scope=2;
	baseBullet = 762x25_Tracer_x;
	tracersevery = 1;
	ammo="B_762x25_TRACER";
	displayName="TT33 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_8Rnd_762_tt33_rubber: RH_8Rnd_762_tt33 {
	scope=2;
	baseBullet = 762x25_RUBBER_x;
	initSpeed=200;
	ammo="B_762x25_RUBBER";
	displayName="TT33 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_8Rnd_762_tt33_bt: RH_8Rnd_762_tt33 {
	scope=2;
	baseBullet = 762x25_BT_x;
	ammo="B_762x25_BT";
	displayName="TT33 BT Mag";
	displayNameShort="BT";
};



/* PPSH */
class KPFS_71Rnd_762x25_PPSh_Empty: emptiedMagazine
{
	scope=2;
	displayName="PPSH mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_ppsh_ca.paa";
	descriptionShort="Caliber: 762x25 mm<br/>Rounds: 71 <br/>Used in: PPSH";
	type="2*256";
	class ammoType
	{
		class B_762x25_Ball {
			ammoMag = "KPFS_71Rnd_762x25_PPSh";
		};
		class B_762x25_HP {
			ammoMag = "KPFS_71Rnd_762x25_PPSh_hp";
		};
		class B_762x25_TRACER {
			ammoMag = "KPFS_71Rnd_762x25_PPSh_tracer";
		};
		class B_762x25_RUBBER {
			ammoMag = "KPFS_71Rnd_762x25_PPSh_rubber";
		};
		class B_762x25_BT {
			ammoMag = "KPFS_71Rnd_762x25_PPSh_bt";
		};
	};
};


class KPFS_71Rnd_762x25_PPSh: CA_Magazine
{
	scope=2;
	displayName="PPSH Mag";
	picture="\kpfs_weapons2\data\icons\m_ppsh_ca.paa";
	descriptionShort="Caliber: 762x25 mm<br/>Rounds: 71 <br/>Used in: PPSH";
	ammo="B_762x25_Ball";
	count=71;
	initSpeed=420;
	baseBullet = 762x25_x;
	type="2*256";
	LOAD_AMMO

	emptyMag = "KPFS_71Rnd_762x25_PPSh_Empty";
};

class KPFS_71Rnd_762x25_PPSh_hp: KPFS_71Rnd_762x25_PPSh {
	scope=2;
	baseBullet = 762x25_HP_x;
	ammo="B_762x25_HP";
	displayName="PPSH HP Mag";
	displayNameShort="HP";
};

class KPFS_71Rnd_762x25_PPSh_tracer: KPFS_71Rnd_762x25_PPSh {
	scope=2;
	baseBullet = 762x25_Tracer_x;
	tracersevery = 1;
	ammo="B_762x25_TRACER";
	displayName="PPSH Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_71Rnd_762x25_PPSh_rubber: KPFS_71Rnd_762x25_PPSh {
	scope=2;
	baseBullet = 762x25_RUBBER_x;
	initSpeed=200;
	ammo="B_762x25_RUBBER";
	displayName="PPSH Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_71Rnd_762x25_PPSh_bt: KPFS_71Rnd_762x25_PPSh {
	scope=2;
	baseBullet = 762x25_BT_x;
	ammo="B_762x25_BT";
	displayName="PPSH BT Mag";
	displayNameShort="BT";
};