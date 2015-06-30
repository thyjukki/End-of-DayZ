/* STG */
class KPFS_30Rnd_792x33_STG44_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 792x33 mm<br/>Rounds: 30<br/>Used in: STG";
	displayname = "STG Mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_mp44_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_792x33_Ball {
			ammoMag = "KPFS_30Rnd_792x33_STG44";
		};
		class B_792x33_HP {
			ammoMag = "KPFS_30Rnd_792x33_STG44_hp";
		};
		class B_792x33_TRACER {
			ammoMag = "KPFS_30Rnd_792x33_STG44_tracer";
		};
		class B_792x33_RUBBER {
			ammoMag = "KPFS_30Rnd_792x33_STG44_rubber";
		};
		class B_792x33_BT {
			ammoMag = "KPFS_30Rnd_792x33_STG44_bt";
		};
	};
};

class KPFS_30Rnd_792x33_STG44: CA_Magazine
{
	scope=2;
	displayName="STG Mag";
	picture="\kpfs_weapons2\data\icons\m_mp44_ca.paa";
	descriptionShort="Caliber: 792x33 mm<br/>Rounds: 30<br/>Used in: STG";
	ammo="B_792x33_Ball";
	count=30;
	initSpeed=685;
	baseBullet = 792x33_x;
	LOAD_AMMO

	emptyMag = "KPFS_30Rnd_792x33_STG44_Empty";
};

class KPFS_30Rnd_792x33_STG44_hp: KPFS_30Rnd_792x33_STG44 {
	scope=2;
	baseBullet = 792x33_HP_x;
	ammo="B_792x33_HP";
	displayName="STG HP Mag";
	displayNameShort="HP";
};

class KPFS_30Rnd_792x33_STG44_tracer: KPFS_30Rnd_792x33_STG44 {
	scope=2;
	baseBullet = 792x33_Tracer_x;
	tracersevery = 1;
	ammo="B_792x33_TRACER";
	displayName="STG Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_30Rnd_792x33_STG44_rubber: KPFS_30Rnd_792x33_STG44 {
	scope=2;
	baseBullet = 792x33_RUBBER_x;
	initSpeed=200;
	ammo="B_792x33_RUBBER";
	displayName="STG Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_30Rnd_792x33_STG44_bt: KPFS_30Rnd_792x33_STG44 {
	scope=2;
	baseBullet = 792x33_BT_x;
	ammo="B_792x33_BT";
	displayName="STG BT Mag";
	displayNameShort="BT";
};