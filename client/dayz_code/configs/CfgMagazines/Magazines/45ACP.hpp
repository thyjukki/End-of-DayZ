
/* m1911 */



class 7Rnd_45ACP_1911_Empty: emptiedMagazine
{
	scope=2;
	displayName="M1911 Mag (Empty)";
	picture="\CA\weapons\data\equip\m_colt1911_ca.paa";
	description = "Caliber: .45 ACP<br/>Rounds: 7<br/>Used in: M1911";
	model = "\dayz_equip\models\ammo_1911.p3d";
	type=16;
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "7Rnd_45ACP_1911";
		};
		class RH_45ACP_HP {
			ammoMag = "7Rnd_45ACP_1911_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "7Rnd_45ACP_1911_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "7Rnd_45ACP_1911_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "7Rnd_45ACP_1911_bt";
		};
	};
};

class 7Rnd_45ACP_1911: CA_Magazine
{
	scope=2;
	displayName="M1911 mag";
	picture="\CA\weapons\data\equip\m_colt1911_ca.paa";
	model = "\dayz_equip\models\ammo_1911.p3d";
	description = "Caliber: .45 ACP<br/>Rounds: 7<br/>Used in: M1911";
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
	emptyMag = "7Rnd_45ACP_1911_Empty";
};

class 7Rnd_45ACP_1911_hp: 7Rnd_45ACP_1911 {
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="M1911 HP Mag";
	displayNameShort="HP";
};

class 7Rnd_45ACP_1911_tracer: 7Rnd_45ACP_1911 {
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="M1911 Tracer Mag";
	displayNameShort="Tracer";
};

class 7Rnd_45ACP_1911_rubber: 7Rnd_45ACP_1911 {
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="M1911 Rubber Mag";
	displayNameShort="Rubber";
};

class 7Rnd_45ACP_1911_bt: 7Rnd_45ACP_1911 {
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="M1911 BT Mag";
	displayNameShort="BT";
};


class RH_8Rnd_45cal_m1911_Empty: emptiedMagazine
{
	scope=2;
	displayName="M1911 Mag (Empty)";
	picture="\RH_de\inv\m_colt.paa";
	description = "Caliber: .45 ACP<br/>Rounds: 8<br/>Used in: M1911";
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
	displayName="M1911 Nag";
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
	displayName="M1911 HP Mag";
	displayNameShort="HP";
};

class RH_8Rnd_45cal_m1911_tracer: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="M1911 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_8Rnd_45cal_m1911_rubber: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="M1911 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_8Rnd_45cal_m1911_bt: RH_8Rnd_45cal_m1911 {
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="M1911 BT Mag";
	displayNameShort="BT";
};


class RH_12Rnd_45cal_usp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Uspm Mag (Empty)";
	description = "Caliber: .45 ACP<br/>Rounds: 12<br/>Used in: USP M";
	picture="\RH_de\inv\m_usp.paa";
	model="\RH_de\mags\mag_uspm.p3d";
	type=16;
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_12Rnd_45cal_usp";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_12Rnd_45cal_usp_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_12Rnd_45cal_usp_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_12Rnd_45cal_usp_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_12Rnd_45cal_usp_bt";
		};
	};
};

//usp M
class RH_12Rnd_45cal_usp: CA_Magazine
{
	scope=2;
	displayName="Uspm Mag";
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
	displayName="Uspm HP Mag";
	displayNameShort="HP";
};

class RH_12Rnd_45cal_usp_tracer: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="Uspm Tracer Mag";
	displayNameShort="Tracer";
};

class RH_12Rnd_45cal_usp_rubber: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="Uspm Rubber Mag";
	displayNameShort="Rubber";
};

class RH_12Rnd_45cal_usp_bt: RH_12Rnd_45cal_usp {
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="Usp BT Mag";
	displayNameShort="BT";
};



//UMP
class RH_45ACP_25RND_UMP_Mag_Empty: emptiedMagazine
{
	scope=2;
	model="\RH_smg\mags\mag_ump.p3d";
	picture="\RH_smg\inv\m_ump.paa";
	displayName="UMP45 Mag (Empty)";
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 25<br/>Used in: UMP";
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
	displayName="UMP45 Mag";
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
	displayName="UMP45 HP Mag";
	displayNameShort="HP";
};

class RH_45ACP_25RND_UMP_Mag_tracer: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="UMP45 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_45ACP_25RND_UMP_Mag_rubber: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="UMP45 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_45ACP_25RND_UMP_Mag_bt: RH_45ACP_25RND_UMP_Mag
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="UMP45 BT Mag";
	displayNameShort="BT";
};

//kriss
class RH_45ACP_13RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="G21 Mag (Empty)";
	model="\RH_smg\mags\mag_kriss.p3d";
	picture="\RH_smg\inv\m_kriss.paa";
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 13<br/>Used in: Kriss Vector";
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
	displayName="G21 Mag";
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
	displayName="G21 HP Mag";
	displayNameShort="HP";
};

class RH_45ACP_13RND_Mag_tracer: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="G21 Tracer mag";
	displayNameShort="Tracer";
};

class RH_45ACP_13RND_Mag_rubber: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="G21 Magazine Rubber";
};

class RH_45ACP_13RND_Mag_bt: RH_45ACP_13RND_Mag
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="G21 BT Mag";
	displayNameShort="BT";
};


//kriss
class RH_45ACP_30RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="G21 Long Mag (Empty)";
	model="\RH_smg\mags\mag_kriss30.p3d";
	picture="\RH_smg\inv\m_kriss30.paa";
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 30<br/>Used in: Kriss Vector";
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
	displayName="G21 Long Mag";
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
	displayName="G21 Long HP Mag";
	displayNameShort="HP";
};

class RH_45ACP_30RND_Mag_tracer: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="G21 Long Tracer HP";
	displayNameShort="Tracer";
};

class RH_45ACP_30RND_Mag_rubber: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="G21 Long Rubber Mag";
	displayNameShort="Rubber";
};

class RH_45ACP_30RND_Mag_bt: RH_45ACP_30RND_Mag
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="G21 Long BT Mag";
	displayNameShort="BT";
};


//TODO(Jukki) What do we do with revolvers?
class 6Rnd_45ACP: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
	emptyMag = "6Rnd_45ACP_Empty";
};