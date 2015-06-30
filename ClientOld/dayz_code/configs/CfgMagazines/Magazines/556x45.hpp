

/* STANAG 20Rnd. */
class 20Rnd_556x45_Stanag_Empty: emptiedMagazine {
	displayname = "STANAG VN Mag(Empty)";
	picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\20Rnd_556x45_Stanag.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Used in: Stanag compatible Weapons";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "20Rnd_556x45_Stanag";
		};
		class B_556x45_SD {
			ammoMag = "20Rnd_556x45_StanagSD";
		};
		class B_556x45_HP {
			ammoMag = "20Rnd_556x45_Stanag_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "20Rnd_556x45_Stanag_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "20Rnd_556x45_Stanag_rubber";
		};
		class B_556x45_BT {
			ammoMag = "20Rnd_556x45_Stanag_bt";
		};
	};
};

class 20Rnd_556x45_Stanag: CA_Magazine
{
	scope=2;
	displayname = "STANAG VN Mag";
	picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\20Rnd_556x45_Stanag.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Used in: Stanag compatible Weapons";
	ammo="B_556x45_Ball";
	count=20;
	initSpeed=930;
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "20Rnd_556x45_Stanag_Empty";
};

class 20Rnd_556x45_StanagSD: 20Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="STANAG VN SD Mag";
	displayNameShort="SD";
};

class 20Rnd_556x45_Stanag_hp: 20Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="STANAG VN HP Mag";
	displayNameShort="HP";
};

class 20Rnd_556x45_Stanag_tracer: 20Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="STANAG VN Tracer Mag";
	displayNameShort="Tracer";
};

class 20Rnd_556x45_Stanag_rubber: 20Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="STANAG VN Rubber Mag";
	displayNameShort="Rubber";
};

class 20Rnd_556x45_Stanag_bt: 20Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="STANAG VN BT Mag";
	displayNameShort="BT";
};


/* STANAG 30Rnd. */
class 30Rnd_556x45_Stanag_Empty: emptiedMagazine {
	displayname = "STANAG Mag(Empty)";
	picture="\ca\weapons\data\equip\m_30stanag_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_Stanag.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: Stanag compatible Weapons";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_Stanag";
		};
		class B_556x45_SD {
			ammoMag = "30Rnd_556x45_StanagSD";
		};
		class B_556x45_HP {
			ammoMag = "30Rnd_556x45_Stanag_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "30Rnd_556x45_Stanag_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "30Rnd_556x45_Stanag_rubber";
		};
		class B_556x45_BT {
			ammoMag = "30Rnd_556x45_Stanag_bt";
		};
	};
};

class 30Rnd_556x45_Stanag: CA_Magazine
{
	scope=2;
	displayname = "STANAG Mag";
	picture="\ca\weapons\data\equip\m_30stanag_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_Stanag.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: Stanag compatible Weapons";
	ammo="B_556x45_Ball";
	count=30;
	initSpeed=930;
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "30Rnd_556x45_Stanag_Empty";
};

class 30Rnd_556x45_StanagSD: 30Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="STANAG SD Mag";
	displayNameShort="SD";
};

class 30Rnd_556x45_Stanag_hp: 30Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="STANAG HP Mag";
	displayNameShort="HP";
};

class 30Rnd_556x45_Stanag_tracer: 30Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="STANAG Tracer Mag";
	displayNameShort="Tracer";
};

class 30Rnd_556x45_Stanag_rubber: 30Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="STANAG Rubber Mag";
	displayNameShort="Rubber";
};

class 30Rnd_556x45_Stanag_bt: 30Rnd_556x45_Stanag {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="STANAG BT Mag";
	displayNameShort="BT";
};




/* G36 */
class 30Rnd_556x45_G36_Empty: emptiedMagazine {
	displayname = "G36 Mag(Empty)";
	picture="\ca\weapons\data\equip\m_G36_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_G36.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: G36 Weapons";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_G36";
		};
		class B_556x45_SD {
			ammoMag = "30Rnd_556x45_G36SD";
		};
		class B_556x45_HP {
			ammoMag = "30Rnd_556x45_G36_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "30Rnd_556x45_G36_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "30Rnd_556x45_G36_rubber";
		};
		class B_556x45_BT {
			ammoMag = "30Rnd_556x45_G36_bt";
		};
	};
};

class 30Rnd_556x45_G36: CA_Magazine
{
	scope=2;
	displayname = "G36 Mag";
	picture="\ca\weapons\data\equip\m_G36_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_556x45_G36.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: G36 compatible Weapons";
	ammo="B_556x45_Ball";
	count=30;
	initSpeed=930;
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "30Rnd_556x45_G36_Empty";
};

class 30Rnd_556x45_G36SD: 30Rnd_556x45_G36 {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="G36 SD Mag";
	displayNameShort="SD";
};

class 30Rnd_556x45_G36_hp: 30Rnd_556x45_G36 {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="G36 HP Mag";
	displayNameShort="HP";
};

class 30Rnd_556x45_G36_tracer: 30Rnd_556x45_G36 {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="G36 Tracer Mag";
	displayNameShort="Tracer";
};

class 30Rnd_556x45_G36_rubber: 30Rnd_556x45_G36 {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="G36 Rubber Mag";
	displayNameShort="Rubber";
};

class 30Rnd_556x45_G36_bt: 30Rnd_556x45_G36 {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="G36 BT Mag";
	displayNameShort="BT";
};




/* AUG */
class 30Rnd_556x45_Aug_Empty: emptiedMagazine {
	displayname = "AUG Mag(Empty)";
	picture="\MIDF_Weapons\aug_a3\pictures\aug_a3_mag.paa";
	model="\MIDF_Weapons\aug_a3\aug_a3_mag.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: AUG";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_Aug";
		};
		class B_556x45_SD {
			ammoMag = "30Rnd_556x45_AugSD";
		};
		class B_556x45_HP {
			ammoMag = "30Rnd_556x45_Aug_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "30Rnd_556x45_Aug_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "30Rnd_556x45_Aug_rubber";
		};
		class B_556x45_BT {
			ammoMag = "30Rnd_556x45_Aug_bt";
		};
	};
};

class 30Rnd_556x45_Aug: CA_Magazine
{
	scope=2;
	displayname = "AUG Mag";
	picture="\MIDF_Weapons\aug_a3\pictures\aug_a3_mag.paa";
	model="\MIDF_Weapons\aug_a3\aug_a3_mag.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: AUG";
	ammo="B_556x45_Ball";
	count=30;
	initSpeed=930;
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "30Rnd_556x45_Aug_Empty";
};

class 30Rnd_556x45_AugSD: 30Rnd_556x45_Aug {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="AUG SD Mag";
	displayNameShort="SD";
};

class 30Rnd_556x45_Aug_hp: 30Rnd_556x45_Aug {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="AUG HP Mag";
	displayNameShort="HP";
};

class 30Rnd_556x45_Aug_tracer: 30Rnd_556x45_Aug {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="AUG Tracer Mag";
	displayNameShort="Tracer";
};

class 30Rnd_556x45_Aug_rubber: 30Rnd_556x45_Aug {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="AUG Rubber Mag";
	displayNameShort="Rubber";
};

class 30Rnd_556x45_Aug_bt: 30Rnd_556x45_Aug {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="AUG BT Mag";
	displayNameShort="BT";
};




/* BETA C */
class 100Rnd_556x45_BetaCMag_Empty: emptiedMagazine {
	displayname = "BetaC Mag(Empty)";
	picture="\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	type="2 * 256";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100  <br/>Used in: Stanag compatible Weapons";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "100Rnd_556x45_BetaCMag";
		};
		class B_556x45_SD {
			ammoMag = "100Rnd_556x45_BetaCMagSD";
		};
		class B_556x45_HP {
			ammoMag = "100Rnd_556x45_BetaCMag_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "100Rnd_556x45_BetaCMag_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "100Rnd_556x45_BetaCMag_rubber";
		};
		class B_556x45_BT {
			ammoMag = "100Rnd_556x45_BetaCMag_bt";
		};
	};
};

class 100Rnd_556x45_BetaCMag: CA_Magazine
{
	scope=2;
	displayname = "BetaC Mag";
    picture="\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	type="2 * 256";
	tracersEvery=0;
	lastRoundsTracer=0;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100  <br/>Used in: Stanag compatible Weapons";
	ammo="B_556x45_Ball";
	count=100;
	initSpeed=930;
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "100Rnd_556x45_BetaCMag_Empty";
};

class 100Rnd_556x45_BetaCMagSD: 100Rnd_556x45_BetaCMag {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="BetaC SD Mag";
	displayNameShort="SD";
};

class 100Rnd_556x45_BetaCMag_hp: 100Rnd_556x45_BetaCMag {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="BetaC HP Mag";
	displayNameShort="HP";
};

class 100Rnd_556x45_BetaCMag_tracer: 100Rnd_556x45_BetaCMag {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="BetaC Tracer Mag";
	displayNameShort="Tracer";
};

class 100Rnd_556x45_BetaCMag_rubber: 100Rnd_556x45_BetaCMag {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="BetaC Rubber Mag";
	displayNameShort="Rubber";
};

class 100Rnd_556x45_BetaCMag_bt: 100Rnd_556x45_BetaCMag {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="BetaC BT Mag";
	displayNameShort="BT";
};


/* Famas */
class R3F_25Rnd_556x45_FAMAS_Empty: emptiedMagazine {
	displayname = "Famas Mag(Empty)";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_F1.paa";
	model="\r3f_armes\chargeur_F1.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 25  <br/>Used in: Famas F1";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "R3F_25Rnd_556x45_FAMAS";
		};
		class B_556x45_SD {
			ammoMag = "R3F_25Rnd_556x45_FAMASSD";
		};
		class B_556x45_HP {
			ammoMag = "R3F_25Rnd_556x45_FAMAS_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "R3F_25Rnd_556x45_FAMAS_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "R3F_25Rnd_556x45_FAMAS_rubber";
		};
		class B_556x45_BT {
			ammoMag = "R3F_25Rnd_556x45_FAMAS_bt";
		};
	};
};

class R3F_25Rnd_556x45_FAMAS: CA_Magazine
{
	scope=2;
	displayname = "Famas Mag";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_F1.paa";
	model="\r3f_armes\chargeur_F1.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 25  <br/>Used in: Famas F1";
	ammo="B_556x45_Ball";
	count=25;
	initSpeed=930;
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "R3F_25Rnd_556x45_FAMAS_Empty";
};

class R3F_25Rnd_556x45_FAMASSD: R3F_25Rnd_556x45_FAMAS {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="Famas SD Mag";
	displayNameShort="SD";
};

class R3F_25Rnd_556x45_FAMAS_hp: R3F_25Rnd_556x45_FAMAS {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="Famas HP Mag";
	displayNameShort="HP";
};

class R3F_25Rnd_556x45_FAMAS_tracer: R3F_25Rnd_556x45_FAMAS {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="Famas Tracer Mag";
	displayNameShort="Tracer";
};

class R3F_25Rnd_556x45_FAMAS_rubber: R3F_25Rnd_556x45_FAMAS {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="Famas Rubber Mag";
	displayNameShort="Rubber";
};

class R3F_25Rnd_556x45_FAMAS_bt: R3F_25Rnd_556x45_FAMAS {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="Famas BT Mag";
	displayNameShort="BT";
};




/* M249 */
class 200Rnd_556x45_M249_Empty: emptiedMagazine {
	displayname = "M249 Mag (Empty)";
	picture="\CA\weapons\data\equip\m_m249_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\200Rnd_556x45_M249.p3d";
	type="2*		256";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "200Rnd_556x45_M249";
		};
		class B_556x45_SD {
			ammoMag = "200Rnd_556x45_M249SD";
		};
		class B_556x45_HP {
			ammoMag = "200Rnd_556x45_M249_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "200Rnd_556x45_M249_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "200Rnd_556x45_M249_rubber";
		};
		class B_556x45_BT {
			ammoMag = "200Rnd_556x45_M249_bt";
		};
	};
};

class 200Rnd_556x45_M249: CA_Magazine
{
	scope=2;
	displayname = "M249 Mag";
	picture="\CA\weapons\data\equip\m_m249_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\200Rnd_556x45_M249.p3d";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249";
	ammo="B_556x45_Ball";
	type = 2*		256;
	count=200;
	initSpeed=930;
	tracersEvery=0;
	lastRoundsTracer=0;
	nameSound = "mgun";
	baseBullet = 556x45_x;
	LOAD_AMMO

	emptyMag = "200Rnd_556x45_M249_Empty";
};

class 200Rnd_556x45_M249SD: 200Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="M249 SD Mag";
	displayNameShort="SD";
};

class 200Rnd_556x45_M249_hp: 200Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="M249 HP Mag";
	displayNameShort="HP";
};

class 200Rnd_556x45_M249_tracer: 200Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="M249 Tracer Mag";
	displayNameShort="Tracer";
};

class 200Rnd_556x45_M249_rubber: 200Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="M249 Rubber Mag";
	displayNameShort="Rubber";
};

class 200Rnd_556x45_M249_bt: 200Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="M249 BT Mag";
	displayNameShort="BT";
};



/* L110A1 */
class 200Rnd_556x45_L110A1_Empty: 200Rnd_556x45_M249_Empty {
	displayname = "L110A1 Mag (Empty)";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: L110A1";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "200Rnd_556x45_L110A1";
		};
		class B_556x45_SD {
			ammoMag = "200Rnd_556x45_L110A1SD";
		};
		class B_556x45_HP {
			ammoMag = "200Rnd_556x45_L110A1_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "200Rnd_556x45_L110A1_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "200Rnd_556x45_L110A1_rubber";
		};
		class B_556x45_BT {
			ammoMag = "200Rnd_556x45_L110A1_bt";
		};
	};
};

class 200Rnd_556x45_L110A1: 200Rnd_556x45_M249
{
	scope=2;
	displayname = "L110A1 Mag";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: L110A1";

	emptyMag = "200Rnd_556x45_L110A1_Empty";
};

class 200Rnd_556x45_L110A1SD: 200Rnd_556x45_L110A1 {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="L110A1 SD Mag";
	displayNameShort="SD";
};

class 200Rnd_556x45_L110A1_hp: 200Rnd_556x45_L110A1 {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="L110A1 HP Mag";
	displayNameShort="HP";
};

class 200Rnd_556x45_L110A1_tracer: 200Rnd_556x45_L110A1 {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="L110A1 Tracer Mag";
	displayNameShort="Tracer";
};

class 200Rnd_556x45_L110A1_rubber: 200Rnd_556x45_L110A1 {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="L110A1 Rubber Mag";
	displayNameShort="Rubber";
};

class 200Rnd_556x45_L110A1_bt: 200Rnd_556x45_L110A1 {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="L110A1 BT Mag";
	displayNameShort="BT";
};



/* M249 100Rnd. */
class 100Rnd_556x45_M249_Empty: 200Rnd_556x45_M249_Empty {
	displayname = "M249 100Rnd. Mag (Empty)";
	picture="\CA\weapons_E\Data\icons\m_m245_CA.paa";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100  <br/>Used in: M249";
	scope = 2;
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "100Rnd_556x45_M249";
		};
		class B_556x45_SD {
			ammoMag = "100Rnd_556x45_M249SD";
		};
		class B_556x45_HP {
			ammoMag = "100Rnd_556x45_M249_hp";
		};
		class B_556x45_TRACER {
			ammoMag = "100Rnd_556x45_M249_tracer";
		};
		class B_556x45_RUBBER {
			ammoMag = "100Rnd_556x45_M249_rubber";
		};
		class B_556x45_BT {
			ammoMag = "100Rnd_556x45_M249_bt";
		};
	};
};

class 100Rnd_556x45_M249: 200Rnd_556x45_M249
{
	scope=2;
	displayname = "M249 100Rnd. Mag";
	picture="\CA\weapons_E\Data\icons\m_m245_CA.paa";
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100  <br/>Used in: M249";
	count=100;

	emptyMag = "100Rnd_556x45_M249_Empty";
};

class 100Rnd_556x45_M249SD: 100Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_SD_x;
	initSpeed=330;
	ammo="B_556x45_SD";
	displayName="M249 100Rnd. SD Mag";
	displayNameShort="SD";
};

class 100Rnd_556x45_M249_hp: 100Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_HP_x;
	ammo="B_556x45_HP";
	displayName="M249 100Rnd. HP Mag";
	displayNameShort="HP";
};

class 100Rnd_556x45_M249_tracer: 100Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_Tracer_x;
	ammo="B_556x45_TRACER";
	tracersevery = 1;
	displayName="M249 100Rnd. Tracer Mag";
	displayNameShort="Tracer";
};

class 100Rnd_556x45_M249_rubber: 100Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_RUBBER_x;
	initSpeed=200;
	ammo="B_556x45_RUBBER";
	displayName="M249 100Rnd. Rubber Mag";
	displayNameShort="Rubber";
};

class 100Rnd_556x45_M249_bt: 100Rnd_556x45_M249 {
	scope=2;
	baseBullet = 556x45_BT_x;
	ammo="B_556x45_BT";
	displayName="M249 100Rnd. BT Mag";
	displayNameShort="BT";
};