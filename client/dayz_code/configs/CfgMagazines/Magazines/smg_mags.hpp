class KPFS_30Rnd_45ACP_Thompson: CA_Magazine
{
	scope=2;
	displayName="Thompson magazine";
	ammo="RH_45ACP";
	count=30;
	initSpeed=260;
	picture="\kpfs_weapons2\data\icons\m_uzi_ca.paa";
	descriptionShort="Caliber: .45 ACP<br/>Rounds: 30<br/>Used in: M1 Thompson";
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
	emptyMag = "KPFS_30Rnd_45ACP_Thompson_Empty";
};

class KPFS_30Rnd_45ACP_Thompson_hp: KPFS_30Rnd_45ACP_Thompson
{
	scope=2;
	baseBullet = 45ACP_HP_x;
	initSpeed=240;
	ammo="RH_45ACP_HP";
	displayName="Thompson magazine HP";
	descriptionShort="Caliber: .45 ACP Hollow Point<br/>Rounds: 30<br/>Used in: M1 Thompson";
};

class KPFS_30Rnd_45ACP_Thompson_tracer: KPFS_30Rnd_45ACP_Thompson
{
	scope=2;
	baseBullet = 45ACP_TRACER_x;
	lastroundstracer = 29;
	tracersevery = 1;
	ammo="RH_45ACP_TRACER";
	displayName="Thompson magazine Tracer";
	descriptionShort="Caliber: .45 ACP Tracer<br/>Rounds: 30<br/>Used in: M1 Thompson";
};

class KPFS_30Rnd_45ACP_Thompson_rubber: KPFS_30Rnd_45ACP_Thompson
{
	scope=2;
	baseBullet = 45ACP_RUBBER_x;
	initSpeed=150;
	ammo="RH_45ACP_RUBBER";
	displayName="Thompson magazine Rubber";
	descriptionShort="Caliber: .45 ACP Rubber<br/>Rounds: 30<br/>Used in: M1 Thompson";
};

class KPFS_30Rnd_45ACP_Thompson_bt: KPFS_30Rnd_45ACP_Thompson
{
	scope=2;
	baseBullet = 45ACP_BT_x;
	ammo="RH_45ACP_BT";
	displayName="Thompson magazine BT";
	descriptionShort="Caliber: .45 ACP Ballistic Tip<br/>Rounds: 30<br/>Used in: M1 Thompson";
};

//UMP
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