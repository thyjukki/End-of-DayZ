class 7Rnd_45ACP_1911: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
	emptyMag = "7Rnd_45ACP_1911_Empty";
};

class 6Rnd_45ACP: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
	emptyMag = "6Rnd_45ACP_Empty";
};


//m1911
class RH_8Rnd_45cal_m1911_Empty: emptiedMagazine
{
	scope=2;
	displayName="M1911 mag (Empty)";
	picture="\RH_de\inv\m_colt.paa";
	model="\RH_de\mags\mag_kim.p3d";
	type=16;
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_8Rnd_45cal_m1911";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_8Rnd_45cal_m1911_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_8Rnd_45cal_m1911_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_8Rnd_45cal_m1911_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_8Rnd_45cal_m1911_bt";
		};
	};
};

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


class RH_12Rnd_45cal_usp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Usp mag (.45) (Empty)";
	picture="\RH_de\inv\m_usp.paa";
	model="\RH_de\mags\mag_uspm.p3d";
	type=16;
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_12Rnd_45cal_usp";
		};
	};
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



//UMP
class RH_45ACP_25RND_UMP_Mag_Empty: emptiedMagazine
{
	scope=2;
	model="\RH_smg\mags\mag_ump.p3d";
	picture="\RH_smg\inv\m_ump.paa";
	displayName="HK UMP45 Magazine (Empty)";
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_45ACP_25RND_UMP_Mag";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_bt";
		};
	};
};

class RH_45ACP_25RND_UMP_Mag: CA_Magazine
{
	scope=2;
	ammo="RH_45ACP";
	initSpeed=260;
	model="\RH_smg\mags\mag_ump.p3d";
	picture="\RH_smg\inv\m_ump.paa";
	count=25;
	displayName="HK UMP45 Magazine";
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 25<br/>Used in: UMP";
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
	emptyMag = "RH_45ACP_25RND_UMP_Mag_Empty";
};

class RH_45ACP_25RND_UMP_Mag_hp: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="HK UMP45 Magazine HP";
	descriptionShort="Caliber: .45 ACP Hollow Point<br/>Rounds: 25<br/>Used in: UMP";
};

class RH_45ACP_25RND_UMP_Mag_tracer: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="HK UMP45 Magazine Tracer";
	descriptionShort="Caliber: .45 ACP Tracer<br/>Rounds: 25<br/>Used in: UMP";
};

class RH_45ACP_25RND_UMP_Mag_rubber: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="HK UMP45 Magazine Rubber";
	descriptionShort="Caliber: .45 ACP Rubber<br/>Rounds: 25<br/>Used in: UMP";
};

class RH_45ACP_25RND_UMP_Mag_bt: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="HK UMP45 Magazine BT";
	descriptionShort="Caliber: .45 ACP Ballistic Tip<br/>Rounds: 25<br/>Used in: UMP";
};

//kriss
class RH_45ACP_13RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Kriss 13Rnd Magazine (Empty)";
	model="\RH_smg\mags\mag_kriss.p3d";
	picture="\RH_smg\inv\m_kriss.paa";
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_45ACP_13RND_Mag";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_45ACP_13RND_Mag_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_45ACP_13RND_Mag_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_45ACP_13RND_Mag_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_45ACP_13RND_Mag_bt";
		};
	};
};

class RH_45ACP_13RND_Mag: CA_Magazine
{
	scope=2;
	ammo="RH_45ACP";
	displayName="Kriss 13Rnd Magazine";
	model="\RH_smg\mags\mag_kriss.p3d";
	picture="\RH_smg\inv\m_kriss.paa";
	count=13;
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 13<br/>Used in: Kriss Vector";
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
	emptyMag = "RH_45ACP_13RND_Mag_Empty";
};

class RH_45ACP_13RND_Mag_hp: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="Kriss 13Rnd Magazine HP";
	descriptionShort="Caliber: .45 ACP Hollow Point<br/>Rounds: 13<br/>Used in: Kriss Vector";
};

class RH_45ACP_13RND_Mag_tracer: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="Kriss 13Rnd Magazine Tracer";
	descriptionShort="Caliber: .45 ACP Tracer<br/>Rounds: 13<br/>Used in: Kriss Vector";
};

class RH_45ACP_13RND_Mag_rubber: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="Kriss 13Rnd Magazine Rubber";
	descriptionShort="Caliber: .45 ACP Rubber<br/>Rounds: 13<br/>Used in: Kriss Vector";
};

class RH_45ACP_13RND_Mag_bt: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="Kriss 13Rnd Magazine BT";
	descriptionShort="Caliber: .45 ACP Ballistic Tip<br/>Rounds: 13<br/>Used in: Kriss Vector";
};


//kriss
class RH_45ACP_30RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Kriss 30Rnd Magazine (Empty)";
	model="\RH_smg\mags\mag_kriss30.p3d";
	picture="\RH_smg\inv\m_kriss30.paa";
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_45ACP_30RND_Mag";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_45ACP_30RND_Mag_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_45ACP_30RND_Mag_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_45ACP_30RND_Mag_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_45ACP_30RND_Mag_bt";
		};
	};
};

class RH_45ACP_30RND_Mag: CA_Magazine
{
	scope=2;
	ammo="RH_45ACP";
	displayName="Kriss 30Rnd Magazine";
	model="\RH_smg\mags\mag_kriss.p3d";
	picture="\RH_smg\inv\m_kriss.paa";
	count=30;
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 30<br/>Used in: Kriss Vector";
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
	emptyMag = "RH_45ACP_30RND_Mag_Empty";
};

class RH_45ACP_30RND_Mag_hp: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="Kriss 30Rnd Magazine HP";
	descriptionShort="Caliber: .45 ACP Hollow Point<br/>Rounds: 30<br/>Used in: Kriss Vector";
};

class RH_45ACP_30RND_Mag_tracer: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="Kriss 30Rnd Magazine Tracer";
	descriptionShort="Caliber: .45 ACP Tracer<br/>Rounds: 30<br/>Used in: Kriss Vector";
};

class RH_45ACP_30RND_Mag_rubber: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="Kriss 30Rnd Magazine Rubber";
	descriptionShort="Caliber: .45 ACP Rubber<br/>Rounds: 30<br/>Used in: Kriss Vector";
};

class RH_45ACP_30RND_Mag_bt: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="Kriss 30Rnd Magazine BT";
	descriptionShort="Caliber: .45 ACP Ballistic Tip<br/>Rounds: 30<br/>Used in: Kriss Vector";
};