//m1911
class RH_8Rnd_45cal_m1911: CA_Magazine
{
	scope=2;
	displayName="M1911 mag";
	picture="\RH_de\inv\m_colt.paa";
	model="\RH_de\mags\mag_kim.p3d";
	description = "Caliber: .45 ACP<br/>Rounds: 8<br/>Used in: M1911";
	type=16;
	ammo="RH_45ACP";
	count=8;
	initSpeed=260;
	baseBullet = 45ACP_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "RH_8Rnd_45cal_m1911_Empty";
};

class RH_8Rnd_45cal_m1911_hp: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="M1911 mag HP";
	description = "Caliber: .45 ACP Hollow Point<br/>Rounds: 8<br/>Used in: M1911";
};

class RH_8Rnd_45cal_m1911_tracer: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="M1911 mag Tracer";
	description = "Caliber: .45 ACP Tracer<br/>Rounds: 8<br/>Used in: M1911";
};

class RH_8Rnd_45cal_m1911_rubber: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="M1911 mag rubber";
	description = "Caliber: .45 ACP Rubber<br/>Rounds: 8<br/>Used in: M1911";
};

class RH_8Rnd_45cal_m1911_bt: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="M1911 mag BT";
	description = "Caliber: .45 ACP Ballistic Tip<br/>Rounds: 8<br/>Used in: M1911";
};

//usp M
class RH_12Rnd_45cal_usp: CA_Magazine
{
	scope=2;
	displayName="Usp mag (.45)";
	description = "Caliber: .45 ACP<br/>Rounds: 12<br/>Used in: USP M";
	picture="\RH_de\inv\m_usp.paa";
	model="\RH_de\mags\mag_uspm.p3d";
	type=16;
	ammo="RH_45ACP";
	count=12;
	initSpeed=260;
	baseBullet = 45ACP_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "RH_12Rnd_45cal_usp_Empty";
};


class RH_12Rnd_45cal_usp_hp: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="Usp mag (.45) HP";
	description = "Caliber: .45 ACP Hollow Point<br/>Rounds: 12<br/>Used in: USP M";
};

class RH_12Rnd_45cal_usp_tracer: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="Usp mag (.45) Tracer";
	description = "Caliber: .45 ACP Tracer<br/>Rounds: 12<br/>Used in: USP M";
};

class RH_12Rnd_45cal_usp_rubber: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="Usp mag (.45) Rubber";
	description = "Caliber: .45 ACP Rubber<br/>Rounds: 12<br/>Used in: USP M";
};

class RH_12Rnd_45cal_usp_bt: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="Usp mag (.45) BT";
	description = "Caliber: .45 ACP Ballistic Tip<br/>Rounds: 12<br/>Used in: USP M";
};


class RH_20Rnd_32cal_vz61: CA_Magazine
{
	scope=2;
	displayName="Vz61 mag";
	picture="\RH_de\inv\m_vz61.paa";
	model="\RH_de\mags\mag_vz61.p3d";
	type=16;
	ammo="RH_32ACP";
	count=20;
	initSpeed=300;
	baseBullet = 45ACP_x;
	description = "Caliber: .32 ACP<br/>Rounds: 20<br/>Used in: vz61";
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "RH_20Rnd_32cal_vz61_Empty";
};


class RH_20Rnd_32cal_vz61_hp: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_HP_x;
	initSpeed=270;
	ammo="RH_32ACP_HP";
	displayName="Vz61 mag (.32) HP";
	description = "Caliber: .32 ACP Hollow Point<br/>Rounds: 20<br/>Used in: vz61";
};

class RH_20Rnd_32cal_vz61_tracer: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_32ACP_TRACER";
	displayName="Vz61 mag (.32) Tracer";
	description = "Caliber: .32 ACP Tracer<br/>Rounds: 20<br/>Used in: vz61";
};

class RH_20Rnd_32cal_vz61_rubber: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_32ACP_RUBBER";
	displayName="Vz61 mag (.32) Rubber";
	description = "Caliber: .32 ACP Rubber<br/>Rounds: 20<br/>Used in: vz61";
};

class RH_20Rnd_32cal_vz61_bt: RH_20Rnd_32cal_vz61 {
	scope=2;
	baseBullet = 32ACP_BT_x;
	ammo="RH_32ACP_BT";
	displayName="Vz61 mag (.32) BT";
	description = "Caliber: .32 ACP Ballistic Tip<br/>Rounds: 20<br/>Used in: vz61";
};

class RH_7Rnd_32cal_ppk: CA_Magazine
{
	scope=2;
	displayName="PPK mag";
	picture="\RH_de\inv\m_ppk.paa";
	model="\RH_de\mags\mag_ppk.p3d";
	type=16;
	ammo="RH_32ACP";
	count=7;
	initSpeed=300;
	baseBullet = 45ACP_x;
	description = "Caliber: .32 ACP<br/>Rounds: 7<br/>Used in: PPK";
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "RH_7Rnd_32cal_ppk_Empty";
};

class RH_7Rnd_32cal_ppk_hp: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_HP_x;
	initSpeed=270;
	ammo="RH_32ACP_HP";
	displayName="PPK mag HP";
	description = "Caliber: .32 ACP Hollow Point<br/>Rounds: 7<br/>Used in: PPK";
};

class RH_7Rnd_32cal_ppk_tracer: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_32ACP_TRACER";
	displayName="PPK mag Tracer";
	description = "Caliber: .32 ACP Tracer<br/>Rounds: 7<br/>Used in: PPK";
};

class RH_7Rnd_32cal_ppk_rubber: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_32ACP_RUBBER";
	displayName="PPK mag Rubber";
	description = "Caliber: .32 ACP Rubber<br/>Rounds: 7<br/>Used in: PPK";
};

class RH_7Rnd_32cal_ppk_bt: RH_7Rnd_32cal_ppk {
	scope=2;
	baseBullet = 32ACP_BT_x;
	ammo="RH_32ACP_BT";
	displayName="PPK mag BT";
	description = "Caliber: .32 ACP Ballistic Tip<br/>Rounds: 7<br/>Used in: PPK";
};