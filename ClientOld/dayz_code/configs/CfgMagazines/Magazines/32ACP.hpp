class RH_7Rnd_32cal_ppk_Empty : emptiedMagazine {
	scope=2;
	type=16;
	displayName="PPK mag (Empty)";
	descriptionshort = "Caliber: 32 ACP<br/>Rounds: 7<br/>Used in: ppk";
	picture="\RH_de\inv\m_ppk.paa";
	model="\RH_de\mags\mag_ppk.p3d";

	class ammoType
	{
		class B_32ACP_Ball {
			ammoMag = "RH_7Rnd_32cal_ppk";
		};
		class B_32ACP_HP {
			ammoMag = "RH_7Rnd_32cal_ppk_hp";
		};
		class B_32ACP_TRACER {
			ammoMag = "RH_7Rnd_32cal_ppk_tracer";
		};
		class B_32ACP_RUBBER {
			ammoMag = "RH_7Rnd_32cal_ppk_rubber";
		};
		class B_32ACP_BT {
			ammoMag = "RH_7Rnd_32cal_ppk_bt";
		};
	};
};

class RH_7Rnd_32cal_ppk: CA_Magazine
{
	scope=2;
	displayName="PPK mag";
	picture="\RH_de\inv\m_ppk.paa";
	model="\RH_de\mags\mag_ppk.p3d";
	type=16;
	ammo="B_32ACP_Ball";
	count=7;
	initSpeed=300;
	baseBullet = 32ACP_x;
	description = "Caliber: .32 ACP<br/>Rounds: 7<br/>Used in: PPK";
	LOAD_AMMO
	emptyMag = "RH_7Rnd_32cal_ppk_Empty";
};

class RH_7Rnd_32cal_ppk_hp: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_HP_x;
	//initSpeed=270;
	ammo="B_32ACP_HP";
	displayName="PPK HP Mag";
	displayNameShort="HP";
};

class RH_7Rnd_32cal_ppk_tracer: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_32ACP_TRACER";
	displayName="PPK Tracer Mag";
	displayNameShort="Tracer";
};

class RH_7Rnd_32cal_ppk_rubber: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_RUBBER_x;
	initSpeed=200;
	ammo="B_32ACP_RUBBER";
	displayName="PPK Rubber Mag";
	displayNameShort="Rubber";
};

class RH_7Rnd_32cal_ppk_bt: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_BT_x;
	ammo="B_32ACP_BT";
	displayName="PPK BT Mag";
	displayNameShort="BT";
};


class RH_20Rnd_32cal_vz61_Empty: emptiedMagazine
{
	scope=2;
	displayName="Vz61 Mag (Empty)";
	description = "Caliber: .32 ACP<br/>Rounds: 20<br/>Used in: vz61";
	picture="\RH_de\inv\m_vz61.paa";
	model="\RH_de\mags\mag_vz61.p3d";
	class ammoType
	{
		class B_32ACP_Ball {
			ammoMag = "RH_20Rnd_32cal_vz61";
		};
		class B_32ACP_HP {
			ammoMag = "RH_20Rnd_32cal_vz61_hp";
		};
		class B_32ACP_TRACER {
			ammoMag = "RH_20Rnd_32cal_vz61_tracer";
		};
		class B_32ACP_RUBBER {
			ammoMag = "RH_20Rnd_32cal_vz61_rubber";
		};
		class B_32ACP_BT {
			ammoMag = "RH_20Rnd_32cal_vz61_bt";
		};
	};
};

class RH_20Rnd_32cal_vz61: CA_Magazine
{
	scope=2;
	displayName="Vz61 Mag";
	picture="\RH_de\inv\m_vz61.paa";
	model="\RH_de\mags\mag_vz61.p3d";
	type=16;
	ammo="B_32ACP_Ball";
	count=20;
	initSpeed=300;
	baseBullet = 32ACP_x;
	description = "Caliber: .32 ACP<br/>Rounds: 20<br/>Used in: vz61";
	LOAD_AMMO
	emptyMag = "RH_20Rnd_32cal_vz61_Empty";
};


class RH_20Rnd_32cal_vz61_hp: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_HP_x;
	//initSpeed=270;
	ammo="B_32ACP_HP";
	displayName="Vz61 HP Mag";
	displayNameShort="HP";
};

class RH_20Rnd_32cal_vz61_tracer: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_32ACP_TRACER";
	displayName="Vz61 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_20Rnd_32cal_vz61_rubber: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_RUBBER_x;
	
	ammo="B_32ACP_RUBBER";
	displayName="Vz61 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_20Rnd_32cal_vz61_bt: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_BT_x;
	ammo="B_32ACP_BT";
	displayName="Vz61 BT Mag";
	displayNameShort="BT";
};
