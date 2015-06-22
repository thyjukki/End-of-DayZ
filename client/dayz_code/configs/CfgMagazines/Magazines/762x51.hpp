/* G3 */
class 20Rnd_762x51_g3_Empty: emptiedMagazine
{
	scope=2;
	displayName="G3 Mag (Empty)";
	model="\C1987_g3\mag.p3d";
	picture="\C1987_g3\equip\mag.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 20 <br/>Used in: G3";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "20Rnd_762x51_g3";
		};
		class B_762x51_SD {
			ammoMag = "20Rnd_762x51_g3SD";
		};
		class B_762x51_HP {
			ammoMag = "20Rnd_762x51_g3_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "20Rnd_762x51_g3_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "20Rnd_762x51_g3_rubber";
		};
		class B_762x51_BT {
			ammoMag = "20Rnd_762x51_g3_bt";
		};
	};
};

class 20Rnd_762x51_g3: CA_Magazine
{
	scope=2;
	displayName="G3 Mag";
	model="\C1987_g3\mag.p3d";
	picture="\C1987_g3\equip\mag.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 20 <br/>Used in: G3";
	ammo="B_762x51_Ball";
	count=20;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "20Rnd_762x51_g3_Empty";
};

class 20Rnd_762x51_g3SD: 20Rnd_762x51_g3 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="G3 SD Mag";
	displayNameShort="SD";
};

class 20Rnd_762x51_g3_hp: 20Rnd_762x51_g3 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="G3 HP Mag";
	displayNameShort="HP";
};

class 20Rnd_762x51_g3_tracer: 20Rnd_762x51_g3 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="G3 Tracer Mag";
	displayNameShort="Tracer";
};

class 20Rnd_762x51_g3_rubber: 20Rnd_762x51_g3 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="G3 Rubber Mag";
	displayNameShort="Rubber";
};

class 20Rnd_762x51_g3_bt: 20Rnd_762x51_g3 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="G3 BT Mag";
	displayNameShort="BT";
};


/* FAL */
class 20Rnd_762x51_FNFAL_Empty: emptiedMagazine
{
	scope=2;
	displayName="FAL Mag (Empty)";
	model="\C1987_FAL\mag.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: FN FAL";
	picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "20Rnd_762x51_FNFAL";
		};
		class B_762x51_SD {
			ammoMag = "20Rnd_762x51_FNFALSD";
		};
		class B_762x51_HP {
			ammoMag = "20Rnd_762x51_FNFAL_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "20Rnd_762x51_FNFAL_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "20Rnd_762x51_FNFAL_rubber";
		};
		class B_762x51_BT {
			ammoMag = "20Rnd_762x51_FNFAL_bt";
		};
	};
};

class 20Rnd_762x51_FNFAL: CA_Magazine
{
	scope=2;
	displayName="FAL Mag";
	picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: FN FAL";
	ammo="B_762x51_Ball";
	count=20;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "20Rnd_762x51_FNFAL_Empty";
};

class 20Rnd_762x51_FNFALSD: 20Rnd_762x51_FNFAL {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="FAL SD Mag";
	displayNameShort="SD";
};

class 20Rnd_762x51_FNFAL_hp: 20Rnd_762x51_FNFAL {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="FAL HP Mag";
	displayNameShort="HP";
};

class 20Rnd_762x51_FNFAL_tracer: 20Rnd_762x51_FNFAL {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="FAL Tracer Mag";
	displayNameShort="Tracer";
};

class 20Rnd_762x51_FNFAL_rubber: 20Rnd_762x51_FNFAL {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="FAL Rubber Mag";
	displayNameShort="Rubber";
};

class 20Rnd_762x51_FNFAL_bt: 20Rnd_762x51_FNFAL {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="FAL BT Mag";
	displayNameShort="BT";
};


/* AR10 */
class RH_20Rnd_762x51_AR10_Empty: emptiedMagazine
{
	scope=2;
	displayName="AR10 Mag (Empty)";
	model="\C1987_AR10\mag.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: AR10";
	picture="\rh_m4\inv\m_ar10.paa";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "RH_20Rnd_762x51_AR10";
		};
		class B_762x51_SD {
			ammoMag = "RH_20Rnd_762x51_AR10SD";
		};
		class B_762x51_HP {
			ammoMag = "RH_20Rnd_762x51_AR10_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "RH_20Rnd_762x51_AR10_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "RH_20Rnd_762x51_AR10_rubber";
		};
		class B_762x51_BT {
			ammoMag = "RH_20Rnd_762x51_AR10_bt";
		};
	};
};

class RH_20Rnd_762x51_AR10: CA_Magazine
{
	scope=2;
	displayName="AR10 Mag";
	picture="\rh_m4\inv\m_ar10.paa";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: AR10";
	ammo="B_762x51_Ball";
	count=20;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "RH_20Rnd_762x51_AR10_Empty";
};

class RH_20Rnd_762x51_AR10SD: RH_20Rnd_762x51_AR10 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="AR10 SD Mag";
	displayNameShort="SD";
};

class RH_20Rnd_762x51_AR10_hp: RH_20Rnd_762x51_AR10 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="AR10 HP Mag";
	displayNameShort="HP";
};

class RH_20Rnd_762x51_AR10_tracer: RH_20Rnd_762x51_AR10 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="AR10 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_20Rnd_762x51_AR10_rubber: RH_20Rnd_762x51_AR10 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="AR10 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_20Rnd_762x51_AR10_bt: RH_20Rnd_762x51_AR10 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="AR10 BT Mag";
	displayNameShort="BT";
};


/* M14 */
class 20Rnd_762x51_DMR_Empty: emptiedMagazine
{
	scope=2;
	displayName="M14 Mag (Empty)";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: M14";
	model = "\dayz_equip\models\mag20.p3d";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "20Rnd_762x51_DMR";
		};
		class B_762x51_SD {
			ammoMag = "20Rnd_762x51_DMRSD";
		};
		class B_762x51_HP {
			ammoMag = "20Rnd_762x51_DMR_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "20Rnd_762x51_DMR_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "20Rnd_762x51_DMR_rubber";
		};
		class B_762x51_BT {
			ammoMag = "20Rnd_762x51_DMR_bt";
		};
	};
};

class 20Rnd_762x51_DMR: CA_Magazine
{
	scope=2;
	displayName="M14 Mag";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	model = "\dayz_equip\models\mag20.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: M14";
	ammo="B_762x51_Ball";
	count=20;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "20Rnd_762x51_DMR_Empty";
};

class 20Rnd_762x51_DMRSD: 20Rnd_762x51_DMR {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="M14 SD Mag";
	displayNameShort="SD";
};

class 20Rnd_762x51_DMR_hp: 20Rnd_762x51_DMR {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="M14 HP Mag";
	displayNameShort="HP";
};

class 20Rnd_762x51_DMR_tracer: 20Rnd_762x51_DMR {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="M14 Tracer Mag";
	displayNameShort="Tracer";
};

class 20Rnd_762x51_DMR_rubber: 20Rnd_762x51_DMR {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="M14 Rubber Mag";
	displayNameShort="Rubber";
};

class 20Rnd_762x51_DMR_bt: 20Rnd_762x51_DMR {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="M14 BT Mag";
	displayNameShort="BT";
};




/* M40 */
class 10Rnd_762x51_M40_Empty: emptiedMagazine
{
	scope=2;
	displayName="M40 Mag (Empty)";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 10<br/>Used in: M40";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	model = "\dayz_equip\models\mag20.p3d";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "10Rnd_762x51_M40";
		};
		class B_762x51_SD {
			ammoMag = "10Rnd_762x51_M40SD";
		};
		class B_762x51_HP {
			ammoMag = "10Rnd_762x51_M40_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "10Rnd_762x51_M40_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "10Rnd_762x51_M40_rubber";
		};
		class B_762x51_BT {
			ammoMag = "10Rnd_762x51_M40_bt";
		};
	};
};

class 10Rnd_762x51_M40: CA_Magazine
{
	scope=2;
	displayName="M40 Mag";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	model = "\dayz_equip\models\mag20.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 10<br/>Used in: M40";
	ammo="B_762x51_Ball";
	count=10;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "10Rnd_762x51_M40_Empty";
};

class 10Rnd_762x51_M40SD: 10Rnd_762x51_M40 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="M40 SD Mag";
	displayNameShort="SD";
};

class 10Rnd_762x51_M40_hp: 10Rnd_762x51_M40 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="M40 HP Mag";
	displayNameShort="HP";
};

class 10Rnd_762x51_M40_tracer: 10Rnd_762x51_M40 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="M40 Tracer Mag";
	displayNameShort="Tracer";
};

class 10Rnd_762x51_M40_rubber: 10Rnd_762x51_M40 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="M40 Rubber Mag";
	displayNameShort="Rubber";
};

class 10Rnd_762x51_M40_bt: 10Rnd_762x51_M40 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="M40 BT Mag";
	displayNameShort="BT";
};



/* M24 */
class 5Rnd_762x51_M24_Empty: emptiedMagazine
{
	scope=2;
	displayName="M24 Mag (Empty)";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 5<br/>Used in: M24";
	picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\5Rnd_762x51_M24.p3d";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "5Rnd_762x51_M24";
		};
		class B_762x51_SD {
			ammoMag = "5Rnd_762x51_M24SD";
		};
		class B_762x51_HP {
			ammoMag = "5Rnd_762x51_M24_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "5Rnd_762x51_M24_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "5Rnd_762x51_M24_rubber";
		};
		class B_762x51_BT {
			ammoMag = "5Rnd_762x51_M24_bt";
		};
	};
};

class 5Rnd_762x51_M24: CA_Magazine
{
	scope=2;
	displayName="M24 Mag";
	picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\5Rnd_762x51_M24.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 5<br/>Used in: M24";
	ammo="B_762x51_Ball";
	count=5;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "5Rnd_762x51_M24_Empty";
};

class 5Rnd_762x51_M24SD: 5Rnd_762x51_M24 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="M24 SD Mag";
	displayNameShort="SD";
};

class 5Rnd_762x51_M24_hp: 5Rnd_762x51_M24 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="M24 HP Mag";
	displayNameShort="HP";
};

class 5Rnd_762x51_M24_tracer: 5Rnd_762x51_M24 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="M24 Tracer Mag";
	displayNameShort="Tracer";
};

class 5Rnd_762x51_M24_rubber: 5Rnd_762x51_M24 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="M24 Rubber Mag";
	displayNameShort="Rubber";
};

class 5Rnd_762x51_M24_bt: 5Rnd_762x51_M24 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="M24 BT Mag";
	displayNameShort="BT";
};



/* M240 */
class 100Rnd_762x51_M240_Empty: emptiedMagazine
{
	scope=2;
	displayName="M240 Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 100<br/>Used in: M240";
	type = "2*		256";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "100Rnd_762x51_M240";
		};
		class B_762x51_SD {
			ammoMag = "100Rnd_762x51_M240SD";
		};
		class B_762x51_HP {
			ammoMag = "100Rnd_762x51_M240_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "100Rnd_762x51_M240_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "100Rnd_762x51_M240_rubber";
		};
		class B_762x51_BT {
			ammoMag = "100Rnd_762x51_M240_bt";
		};
	};
};

class 100Rnd_762x51_M240: CA_Magazine
{
	scope=2;
	displayName="M240 Mag";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\100Rnd_762x51_M240.p3d";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 100<br/>Used in: M240";
	ammo="B_762x51_Ball";
	type = "2*		256";
	count=100;
	initSpeed=780;
	baseBullet = 762x51_x;
	nameSound = "mgun";
	LOAD_AMMO

	emptyMag = "100Rnd_762x51_M240_Empty";
};

class 100Rnd_762x51_M240SD: 100Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="M240 SD Mag";
	displayNameShort="SD";
};

class 100Rnd_762x51_M240_hp: 100Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="M240 HP Mag";
	displayNameShort="HP";
};

class 100Rnd_762x51_M240_tracer: 100Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="M240 Tracer Mag";
	displayNameShort="Tracer";
};

class 100Rnd_762x51_M240_rubber: 100Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="M240 Rubber Mag";
	displayNameShort="Rubber";
};

class 100Rnd_762x51_M240_bt: 100Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="M240 BT Mag";
	displayNameShort="BT";
};





/* M240 */
class 200Rnd_762x51_M240_Empty: emptiedMagazine
{
	scope=2;
	displayName="M240 200Rnd Mag (Empty)";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 200<br/>Used in: M240";
	model="\r3f_armes\chargeur_Minimi_762.p3d";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_Minimi_762.paa";
	type = "2*		256";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "200Rnd_762x51_M240";
		};
		class B_762x51_SD {
			ammoMag = "200Rnd_762x51_M240SD";
		};
		class B_762x51_HP {
			ammoMag = "200Rnd_762x51_M240_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "200Rnd_762x51_M240_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "200Rnd_762x51_M240_rubber";
		};
		class B_762x51_BT {
			ammoMag = "200Rnd_762x51_M240_bt";
		};
	};
};

class 200Rnd_762x51_M240: CA_Magazine
{
	scope=2;
	displayName="M240 200Rnd Mag";
	model="\r3f_armes\chargeur_Minimi_762.p3d";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_Minimi_762.paa";
	descriptionShort = "Caliber: 7.62x51mm NATO<br/>Rounds: 200<br/>Used in: M240";
	ammo="B_762x51_Ball";
	type = "2*		256";
	count=200;
	initSpeed=780;
	baseBullet = 762x51_x;
	nameSound = "mgun";
	LOAD_AMMO

	emptyMag = "200Rnd_762x51_M240_Empty";
};

class 200Rnd_762x51_M240SD: 200Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="M240 200Rnd SD Mag";
	displayNameShort="SD";
};

class 200Rnd_762x51_M240_hp: 200Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="M240 200Rnd HP Mag";
	displayNameShort="HP";
};

class 200Rnd_762x51_M240_tracer: 200Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="M240 200Rnd Tracer Mag";
	displayNameShort="Tracer";
};

class 200Rnd_762x51_M240_rubber: 200Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="M240 200Rnd Rubber Mag";
	displayNameShort="Rubber";
};

class 200Rnd_762x51_M240_bt: 200Rnd_762x51_M240 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="M240 200Rnd BT Mag";
	displayNameShort="BT";
};




/* MG42 */
class KPFS_250Rnd_MG42_Empty: emptiedMagazine
{
	scope=2;
	displayName="MG42 Mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_mg1_ca.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 250 <br/>Used in: MG42";
	type="2* 256";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "KPFS_250Rnd_MG42";
		};
		class B_762x51_SD {
			ammoMag = "KPFS_250Rnd_MG42SD";
		};
		class B_762x51_HP {
			ammoMag = "KPFS_250Rnd_MG42_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "KPFS_250Rnd_MG42_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "KPFS_250Rnd_MG42_rubber";
		};
		class B_762x51_BT {
			ammoMag = "KPFS_250Rnd_MG42_bt";
		};
	};
};

class KPFS_250Rnd_MG42: CA_Magazine
{
	scope=2;
	displayName="MG42 Mag";
	picture="\kpfs_weapons2\data\icons\m_mg1_ca.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 250 <br/>Used in: MG42";
	ammo="B_762x51_Ball";
	count=250;
	initSpeed=780;
	baseBullet = 762x51_x;
	type="2* 256";
	LOAD_AMMO

	emptyMag = "KPFS_250Rnd_MG42_Empty";
};

class KPFS_250Rnd_MG42SD: KPFS_250Rnd_MG42 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="MG42 SD Mag";
	displayNameShort="SD";
};

class KPFS_250Rnd_MG42_hp: KPFS_250Rnd_MG42 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="MG42 HP Mag";
	displayNameShort="HP";
};

class KPFS_250Rnd_MG42_tracer: KPFS_250Rnd_MG42 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="MG42 Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_250Rnd_MG42_rubber: KPFS_250Rnd_MG42 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="MG42 Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_250Rnd_MG42_bt: KPFS_250Rnd_MG42 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="MG42 BT Mag";
	displayNameShort="BT";
};



/* Scar-h */
class 20Rnd_762x51_B_SCAR_Empty: emptiedMagazine
{
	scope=2;
	displayName="SCAR-H Mag (Empty)";
	picture = "\ca\weapons_e\data\icons\m_mk17_CA.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 20 <br/>Used in: SCAR-H";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "20Rnd_762x51_B_SCAR";
		};
		class B_762x51_SD {
			ammoMag = "20Rnd_762x51_B_SCARSD";
		};
		class B_762x51_HP {
			ammoMag = "20Rnd_762x51_B_SCAR_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "20Rnd_762x51_B_SCAR_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "20Rnd_762x51_B_SCAR_rubber";
		};
		class B_762x51_BT {
			ammoMag = "20Rnd_762x51_B_SCAR_bt";
		};
	};
};

class 20Rnd_762x51_B_SCAR: CA_Magazine
{
	scope=2;
	displayName="SCAR-H Mag";
	picture = "\ca\weapons_e\data\icons\m_mk17_CA.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 20 <br/>Used in: SCAR-H";
	ammo="B_762x51_Ball";
	count=20;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "20Rnd_762x51_B_SCAR_Empty";
};

class 20Rnd_762x51_B_SCARSD: 20Rnd_762x51_B_SCAR {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="SCAR-H SD Mag";
	displayNameShort="SD";
};

class 20Rnd_762x51_B_SCAR_hp: 20Rnd_762x51_B_SCAR {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="SCAR-H HP Mag";
	displayNameShort="HP";
};

class 20Rnd_762x51_B_SCAR_tracer: 20Rnd_762x51_B_SCAR {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="SCAR-H Tracer Mag";
	displayNameShort="Tracer";
};

class 20Rnd_762x51_B_SCAR_rubber: 20Rnd_762x51_B_SCAR {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="SCAR-H Rubber Mag";
	displayNameShort="Rubber";
};

class 20Rnd_762x51_B_SCAR_bt: 20Rnd_762x51_B_SCAR {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="SCAR-H BT Mag";
	displayNameShort="BT";
};



/* M1 Garand */
class KPFS_8Rnd_cal30_60_Gar_Empty: emptiedMagazine
{
	scope=2;
	displayName="M1 Garand Mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_garand_ca.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 8 <br/>Used in: M1 Garand";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar";
		};
		class B_762x51_SD {
			ammoMag = "KPFS_8Rnd_cal30_60_GarSD";
		};
		class B_762x51_HP {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar_rubber";
		};
		class B_762x51_BT {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar_bt";
		};
	};
};

class KPFS_8Rnd_cal30_60_Gar: CA_Magazine
{
	scope=2;
	displayName="M1 Garand Mag";
	picture="\kpfs_weapons2\data\icons\m_garand_ca.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 8 <br/>Used in: M1 Garand";
	ammo="B_762x51_Ball";
	count=8;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "KPFS_8Rnd_cal30_60_Gar_Empty";
};

class KPFS_8Rnd_cal30_60_GarSD: KPFS_8Rnd_cal30_60_Gar {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="M1 Garand SD Mag";
	displayNameShort="SD";
};

class KPFS_8Rnd_cal30_60_Gar_hp: KPFS_8Rnd_cal30_60_Gar {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="M1 Garand HP Mag";
	displayNameShort="HP";
};

class KPFS_8Rnd_cal30_60_Gar_tracer: KPFS_8Rnd_cal30_60_Gar {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="M1 Garand Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_8Rnd_cal30_60_Gar_rubber: KPFS_8Rnd_cal30_60_Gar {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="M1 Garand Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_8Rnd_cal30_60_Gar_bt: KPFS_8Rnd_cal30_60_Gar {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="M1 Garand BT Mag";
	displayNameShort="BT";
};


/* HK417 */
class RH_20Rnd_762x51_hk417_Empty: emptiedMagazine
{
	scope=2;
	displayName="HK 417 Mag (Empty)";
	picture="\RH_hk416\inv\m_hk417.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 20 <br/>Used in: HK 417";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "RH_20Rnd_762x51_hk417";
		};
		class B_762x51_SD {
			ammoMag = "RH_20Rnd_762x51_hk417SD";
		};
		class B_762x51_HP {
			ammoMag = "RH_20Rnd_762x51_hk417_hp";
		};
		class B_762x51_TRACER {
			ammoMag = "RH_20Rnd_762x51_hk417_tracer";
		};
		class B_762x51_RUBBER {
			ammoMag = "RH_20Rnd_762x51_hk417_rubber";
		};
		class B_762x51_BT {
			ammoMag = "RH_20Rnd_762x51_hk417_bt";
		};
	};
};

class RH_20Rnd_762x51_hk417: CA_Magazine
{
	scope=2;
	displayName="HK 417 Mag";
	picture="\RH_hk416\inv\m_hk417.paa";
	descriptionShort="Caliber: 7.62x51 mm NATO<br/>Rounds: 20 <br/>Used in: HK 417";
	ammo="B_762x51_Ball";
	count=20;
	initSpeed=780;
	baseBullet = 762x51_x;
	LOAD_AMMO

	emptyMag = "RH_20Rnd_762x51_hk417_Empty";
};

class RH_20Rnd_762x51_hk417SD: RH_20Rnd_762x51_hk417 {
	scope=2;
	baseBullet = 762x51_SD_x;
	initSpeed=320;
	ammo="B_762x51_SD";
	displayName="HK 417 SD Mag";
	displayNameShort="SD";
};

class RH_20Rnd_762x51_hk417_hp: RH_20Rnd_762x51_hk417 {
	scope=2;
	baseBullet = 762x51_HP_x;
	ammo="B_762x51_HP";
	displayName="HK 417 HP Mag";
	displayNameShort="HP";
};

class RH_20Rnd_762x51_hk417_tracer: RH_20Rnd_762x51_hk417 {
	scope=2;
	baseBullet = 762x51_Tracer_x;
	tracersevery = 1;
	ammo="B_762x51_TRACER";
	displayName="HK 417 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_20Rnd_762x51_hk417_rubber: RH_20Rnd_762x51_hk417 {
	scope=2;
	baseBullet = 762x51_RUBBER_x;
	initSpeed=200;
	ammo="B_762x51_RUBBER";
	displayName="HK 417 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_20Rnd_762x51_hk417_bt: RH_20Rnd_762x51_hk417 {
	scope=2;
	baseBullet = 762x51_BT_x;
	ammo="B_762x51_BT";
	displayName="HK 417 BT Mag";
	displayNameShort="BT";
};
