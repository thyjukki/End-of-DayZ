/* PK */ //TODO(Jukki) Add this to base PK
class 100Rnd_762x54_PK_Empty: emptiedMagazine
{
	scope=2;
	displayName="PK Mag (Empty)";
	picture="\CA\weapons\data\equip\m_pk_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x54_PK.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 100 <br/>Used in: PK";
	type="2 * 		256";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "100Rnd_762x54_PK";
		};
		class B_762x54_HP {
			ammoMag = "100Rnd_762x54_PK_hp";
		};
		class B_762x54_TRACER {
			ammoMag = "100Rnd_762x54_PK_tracer";
		};
		class B_762x54_RUBBER {
			ammoMag = "100Rnd_762x54_PK_rubber";
		};
		class B_762x54_BT {
			ammoMag = "100Rnd_762x54_PK_bt";
		};
	};
};

class 100Rnd_762x54_PK: CA_Magazine
{
	scope=2;
	displayName="PK Mag";
	picture="\CA\weapons\data\equip\m_pk_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x54_PK.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 100 <br/>Used in: PK";
	ammo="B_762x54_Ball";
	count=100;
	initSpeed=870;
	baseBullet = 762x54_x;
	type="2 * 		256";
	LOAD_AMMO

	emptyMag = "100Rnd_762x54_PK_Empty";
};

class 100Rnd_762x54_PK_hp: 100Rnd_762x54_PK {
	scope=2;
	baseBullet = 762x54_HP_x;
	ammo="B_762x54_HP";
	displayName="PK HP Mag";
	displayNameShort="HP";
};

class 100Rnd_762x54_PK_tracer: 100Rnd_762x54_PK {
	scope=2;
	baseBullet = 762x54_Tracer_x;
	tracersevery = 1;
	ammo="B_762x54_TRACER";
	displayName="PK Tracer Mag";
	displayNameShort="Tracer";
};

class 100Rnd_762x54_PK_rubber: 100Rnd_762x54_PK {
	scope=2;
	baseBullet = 762x54_RUBBER_x;
	initSpeed=200;
	ammo="B_762x54_RUBBER";
	displayName="PK Rubber Mag";
	displayNameShort="Rubber";
};

class 100Rnd_762x54_PK_bt: 100Rnd_762x54_PK {
	scope=2;
	baseBullet = 762x54_BT_x;
	ammo="B_762x54_BT";
	displayName="PK BT Mag";
	displayNameShort="BT";
};

/* SVD */
class 10Rnd_762x54_SVD_Empty: emptiedMagazine
{
	scope=2;
	displayName="SVD Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 10 <br/>Used in: SVD";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "10Rnd_762x54_SVD";
		};
		class B_762x54_HP {
			ammoMag = "10Rnd_762x54_SVD_hp";
		};
		class B_762x54_TRACER {
			ammoMag = "10Rnd_762x54_SVD_tracer";
		};
		class B_762x54_RUBBER {
			ammoMag = "10Rnd_762x54_SVD_rubber";
		};
		class B_762x54_BT {
			ammoMag = "10Rnd_762x54_SVD_bt";
		};
	};
};

class 10Rnd_762x54_SVD: CA_Magazine
{
	scope=2;
	displayName="SVD Mag";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 10 <br/>Used in: SVD";
	ammo="B_762x54_Ball";
	count=10;
	initSpeed=870;
	baseBullet = 762x54_x;
	LOAD_AMMO

	emptyMag = "10Rnd_762x54_SVD_Empty";
};

class 10Rnd_762x54_SVD_hp: 10Rnd_762x54_SVD {
	scope=2;
	baseBullet = 762x54_HP_x;
	ammo="B_762x54_HP";
	displayName="SVD HP Mag";
	displayNameShort="HP";
};

class 10Rnd_762x54_SVD_tracer: 10Rnd_762x54_SVD {
	scope=2;
	baseBullet = 762x54_Tracer_x;
	tracersevery = 1;
	ammo="B_762x54_TRACER";
	displayName="SVD Tracer Mag";
	displayNameShort="Tracer";
};

class 10Rnd_762x54_SVD_rubber: 10Rnd_762x54_SVD {
	scope=2;
	baseBullet = 762x54_RUBBER_x;
	initSpeed=200;
	ammo="B_762x54_RUBBER";
	displayName="SVD Rubber Mag";
	displayNameShort="Rubber";
};

class 10Rnd_762x54_SVD_bt: 10Rnd_762x54_SVD {
	scope=2;
	baseBullet = 762x54_BT_x;
	ammo="B_762x54_BT";
	displayName="SVD BT Mag";
	displayNameShort="BT";
};




/* Mosin */
class KPFS_5Rnd_762x54_Mosin_Empty: emptiedMagazine
{
	scope=2;
	displayName="Mosin Mag (Empty)";
	model="\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 5 <br/>Used in: Mosin";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "KPFS_5Rnd_762x54_Mosin";
		};
		class B_762x54_HP {
			ammoMag = "KPFS_5Rnd_762x54_Mosin_hp";
		};
		class B_762x54_TRACER {
			ammoMag = "KPFS_5Rnd_762x54_Mosin_tracer";
		};
		class B_762x54_RUBBER {
			ammoMag = "KPFS_5Rnd_762x54_Mosin_rubber";
		};
		class B_762x54_BT {
			ammoMag = "KPFS_5Rnd_762x54_Mosin_bt";
		};
	};
};

class KPFS_5Rnd_762x54_Mosin: CA_Magazine
{
	scope=2;
	displayName="Mosin Mag";
	model="\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 5 <br/>Used in: Mosin";
	ammo="B_762x54_Ball";
	count=5;
	initSpeed=870;
	baseBullet = 762x54_x;
	LOAD_AMMO

	emptyMag = "KPFS_5Rnd_762x54_Mosin_Empty";
};

class KPFS_5Rnd_762x54_Mosin_hp: KPFS_5Rnd_762x54_Mosin {
	scope=2;
	baseBullet = 762x54_HP_x;
	ammo="B_762x54_HP";
	displayName="Mosin HP Mag";
	displayNameShort="HP";
};

class KPFS_5Rnd_762x54_Mosin_tracer: KPFS_5Rnd_762x54_Mosin {
	scope=2;
	baseBullet = 762x54_Tracer_x;
	tracersevery = 1;
	ammo="B_762x54_TRACER";
	displayName="Mosin Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_5Rnd_762x54_Mosin_rubber: KPFS_5Rnd_762x54_Mosin {
	scope=2;
	baseBullet = 762x54_RUBBER_x;
	initSpeed=200;
	ammo="B_762x54_RUBBER";
	displayName="Mosin Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_5Rnd_762x54_Mosin_bt: KPFS_5Rnd_762x54_Mosin {
	scope=2;
	baseBullet = 762x54_BT_x;
	ammo="B_762x54_BT";
	displayName="Mosin BT Mag";
	displayNameShort="BT";
};




/* SV98 */
class vil_10Rnd_762x54_SV_Empty: emptiedMagazine
{
	scope=2;
	displayName="SV98 Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 10 <br/>Used in: SV98";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "vil_10Rnd_762x54_SV";
		};
		class B_762x54_HP {
			ammoMag = "vil_10Rnd_762x54_SV_hp";
		};
		class B_762x54_TRACER {
			ammoMag = "vil_10Rnd_762x54_SV_tracer";
		};
		class B_762x54_RUBBER {
			ammoMag = "vil_10Rnd_762x54_SV_rubber";
		};
		class B_762x54_BT {
			ammoMag = "vil_10Rnd_762x54_SV_bt";
		};
	};
};

class vil_10Rnd_762x54_SV: CA_Magazine
{
	scope=2;
	displayName="SV98 Mag";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 10 <br/>Used in: SV98";
	ammo="B_762x54_Ball";
	count=10;
	initSpeed=870;
	baseBullet = 762x54_x;
	LOAD_AMMO

	emptyMag = "vil_10Rnd_762x54_SV_Empty";
};

class vil_10Rnd_762x54_SV_hp: vil_10Rnd_762x54_SV {
	scope=2;
	baseBullet = 762x54_HP_x;
	ammo="B_762x54_HP";
	displayName="SV98 HP Mag";
	displayNameShort="HP";
};

class vil_10Rnd_762x54_SV_tracer: vil_10Rnd_762x54_SV {
	scope=2;
	baseBullet = 762x54_Tracer_x;
	tracersevery = 1;
	ammo="B_762x54_TRACER";
	displayName="SV98 Tracer Mag";
	displayNameShort="Tracer";
};

class vil_10Rnd_762x54_SV_rubber: vil_10Rnd_762x54_SV {
	scope=2;
	baseBullet = 762x54_RUBBER_x;
	initSpeed=200;
	ammo="B_762x54_RUBBER";
	displayName="SV98 Rubber Mag";
	displayNameShort="Rubber";
};

class vil_10Rnd_762x54_SV_bt: vil_10Rnd_762x54_SV {
	scope=2;
	baseBullet = 762x54_BT_x;
	ammo="B_762x54_BT";
	displayName="SV98 BT Mag";
	displayNameShort="BT";
};





/* SVDK */
class vil_10Rnd_SVDK_Empty: emptiedMagazine
{
	scope=2;
	displayName="SVDK Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 10 <br/>Used in: SVDK";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "vil_10Rnd_SVDK";
		};
		class B_762x54_HP {
			ammoMag = "vil_10Rnd_SVDK_hp";
		};
		class B_762x54_TRACER {
			ammoMag = "vil_10Rnd_SVDK_tracer";
		};
		class B_762x54_RUBBER {
			ammoMag = "vil_10Rnd_SVDK_rubber";
		};
		class B_762x54_BT {
			ammoMag = "vil_10Rnd_SVDK_bt";
		};
	};
};

class vil_10Rnd_SVDK: CA_Magazine
{
	scope=2;
	displayName="SVDK Mag";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\10Rnd_762x54_SVD.p3d";
	descriptionShort="Caliber: 7.62x54R mm<br/>Rounds: 10 <br/>Used in: SVDK";
	ammo="B_762x54_Ball";
	count=10;
	initSpeed=870;
	baseBullet = 762x54_x;
	LOAD_AMMO

	emptyMag = "vil_10Rnd_SVDK_Empty";
};

class vil_10Rnd_SVDK_hp: vil_10Rnd_SVDK {
	scope=2;
	baseBullet = 762x54_HP_x;
	ammo="B_762x54_HP";
	displayName="SVDK HP Mag";
	displayNameShort="HP";
};

class vil_10Rnd_SVDK_tracer: vil_10Rnd_SVDK {
	scope=2;
	baseBullet = 762x54_Tracer_x;
	tracersevery = 1;
	ammo="B_762x54_TRACER";
	displayName="SVDK Tracer Mag";
	displayNameShort="Tracer";
};

class vil_10Rnd_SVDK_rubber: vil_10Rnd_SVDK {
	scope=2;
	baseBullet = 762x54_RUBBER_x;
	initSpeed=200;
	ammo="B_762x54_RUBBER";
	displayName="SVDK Rubber Mag";
	displayNameShort="Rubber";
};

class vil_10Rnd_SVDK_bt: vil_10Rnd_SVDK {
	scope=2;
	baseBullet = 762x54_BT_x;
	ammo="B_762x54_BT";
	displayName="SVDK BT Mag";
	displayNameShort="BT";
};
