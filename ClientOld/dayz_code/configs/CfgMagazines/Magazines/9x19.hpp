/* MP5 */
class 30Rnd_9x19_MP5_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 9x19 mm Parabellum <br/>Rounds: 30 <br/>Used in: MP5";
	displayname = "MP5 Mag (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_9x19_MP5.p3d";
	scope = 2;
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "30Rnd_9x19_MP5";
		};
		class B_9x19_SD {
			ammoMag = "30Rnd_9x19_MP5SD";
		};
		class B_9x19_HP {
			ammoMag = "30Rnd_9x19_MP5_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "30Rnd_9x19_MP5_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "30Rnd_9x19_MP5_rubber";
		};
		class B_9x19_BT {
			ammoMag = "30Rnd_9x19_MP5_bt";
		};
	};
};

class 30Rnd_9x19_MP5: CA_Magazine
{
	scope=2;
	displayName="MP5 Mag";
	picture="\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 30 <br/>Used in: MP5";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_9x19_MP5.p3d";
	ammo="B_9x19_Ball";
	count=30;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "30Rnd_9x19_MP5_Empty";
};

class 30Rnd_9x19_MP5SD: 30Rnd_9x19_MP5 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="MP5 SD Mag";
	displayNameShort="SD";
};

class 30Rnd_9x19_MP5_hp: 30Rnd_9x19_MP5 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="MP5 HP Mag";
	displayNameShort="HP";
};

class 30Rnd_9x19_MP5_tracer: 30Rnd_9x19_MP5 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	tracersevery = 1;
	ammo="B_9x19_TRACER";
	displayName="MP5 Tracer Mag";
	displayNameShort="Tracer";
};

class 30Rnd_9x19_MP5_rubber: 30Rnd_9x19_MP5 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="MP5 Rubber Mag";
	displayNameShort="Rubber";
};

class 30Rnd_9x19_MP5_bt: 30Rnd_9x19_MP5 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="MP5 BT Mag";
	displayNameShort="BT";
};



/* M9 <-> G17 */
class 15Rnd_9x19_M9_Empty: emptiedMagazine
{
	scope=2;
	descriptionshort = "Caliber: 9x19 mm Parabellum <br/>Rounds: 15 <br/>Used in: M9";
	displayname = "M9 Mag (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\15Rnd_9x19_M9.p3d";
	type=16;
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "15Rnd_9x19_M9";
		};
		class B_9x19_SD {
			ammoMag = "15Rnd_9x19_M9SD";
		};
		class B_9x19_HP {
			ammoMag = "15Rnd_9x19_M9_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "15Rnd_9x19_M9_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "15Rnd_9x19_M9_rubber";
		};
		class B_9x19_BT {
			ammoMag = "15Rnd_9x19_M9_bt";
		};
	};
};

class 15Rnd_9x19_M9: CA_Magazine
{
	scope=2;
	displayName="M9 Mag";
	picture="\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 15 <br/>Used in: M9";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\15Rnd_9x19_M9.p3d";
	type=16;
	ammo="B_9x19_Ball";
	count=15;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "15Rnd_9x19_M9_Empty";
};

class 15Rnd_9x19_M9SD: 15Rnd_9x19_M9 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="M9 SD Mag";
	displayNameShort="SD";
};

class 15Rnd_9x19_M9_hp: 15Rnd_9x19_M9 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="M9 HP Mag";
	displayNameShort="HP";
};

class 15Rnd_9x19_M9_tracer: 15Rnd_9x19_M9 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="M9 Tracer Mag";
	displayNameShort="Tracer";
};

class 15Rnd_9x19_M9_rubber: 15Rnd_9x19_M9 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="M9 Rubber Mag";
	displayNameShort="Rubber";
};

class 15Rnd_9x19_M9_bt: 15Rnd_9x19_M9 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="M9 BT Mag";
	displayNameShort="BT";
};


class 17Rnd_9x19_glock17_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 17 mag (empty)";
	model = "z\addons\dayz_communityweapons\magazines\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17_ca.paa";
	type=16;
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "17Rnd_9x19_glock17";
		};
		class B_9x19_SD {
			ammoMag = "17Rnd_9x19_glock17SD";
		};
		class B_9x19_HP {
			ammoMag = "17Rnd_9x19_glock17_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "17Rnd_9x19_glock17_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "17Rnd_9x19_glock17_rubber";
		};
		class B_9x19_BT {
			ammoMag = "17Rnd_9x19_glock17_bt";
		};
	};
};

class 17Rnd_9x19_glock17: CA_Magazine
{
	scope=2;
	displayName="G17 Mag";
	model = "z\addons\dayz_communityweapons\magazines\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_glock17_ca.paa";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 17 <br/>Used in: M9";
	type=16;
	ammo="B_9x19_Ball";
	count=17;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "17Rnd_9x19_glock17_Empty";
};

class 17Rnd_9x19_glock17SD: 17Rnd_9x19_glock17 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="G17 SD Mag";
	displayNameShort="SD";
};

class 17Rnd_9x19_glock17_hp: 17Rnd_9x19_glock17 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="G17 HP Mag";
	displayNameShort="HP";
};

class 17Rnd_9x19_glock17_tracer: 17Rnd_9x19_glock17 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	tracersevery = 1;
	ammo="B_9x19_TRACER";
	displayName="G17 Tracer Mag";
	displayNameShort="Tracer";
};

class 17Rnd_9x19_glock17_rubber: 17Rnd_9x19_glock17 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="G17 Rubber Mag";
	displayNameShort="Rubber";
};

class 17Rnd_9x19_glock17_bt: 17Rnd_9x19_glock17 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="G17 BT Mag";
	displayNameShort="BT";
};


//Browning
class RH_13Rnd_9x19_bhp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Browning HP mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 13 <br/>Used in: Browning HP";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_13Rnd_9x19_bhp";
		};
		class B_9x19_SD {
			ammoMag = "RH_13Rnd_9x19_bhp_sd";
		};
		class B_9x19_HP {
			ammoMag = "RH_13Rnd_9x19_bhp_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_13Rnd_9x19_bhp_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_13Rnd_9x19_bhp_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_13Rnd_9x19_bhp_bt";
		};
	};
};

class RH_13Rnd_9x19_bhp: CA_Magazine
{
	scope=2;
	displayName="Browning HP mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 13 <br/>Used in: Browning HP";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	ammo="B_9x19_Ball";
	count=13;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_13Rnd_9x19_bhp_Empty";
};

class RH_13Rnd_9x19_bhp_sd: RH_13Rnd_9x19_bhp {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="Browning HP SD Mag";
	displayNameShort="SD";
};

class RH_13Rnd_9x19_bhp_hp: RH_13Rnd_9x19_bhp {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="Browning HP HP Mag";
	displayNameShort="HP";
};

class RH_13Rnd_9x19_bhp_tracer: RH_13Rnd_9x19_bhp {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	tracersevery = 1;
	ammo="B_9x19_TRACER";
	displayName="Browning HP Tracer Mag";
	displayNameShort="Tracer";
};

class RH_13Rnd_9x19_bhp_rubber: RH_13Rnd_9x19_bhp {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="Browning HP Rubber Mag";
	displayNameShort="Rubber";
};

class RH_13Rnd_9x19_bhp_bt: RH_13Rnd_9x19_bhp {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="Browning HP BT Mag";
	displayNameShort="HP";
};


//MK22
class RH_8Rnd_9x19_Mk_Empty: emptiedMagazine
{
	scope=2;
	displayName="Mk22 mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 8 <br/>Used in: Mk22";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_8Rnd_9x19_Mk";
		};
		class B_9x19_SD {
			ammoMag = "RH_8Rnd_9x19_Mksd";
		};
		class B_9x19_HP {
			ammoMag = "RH_8Rnd_9x19_Mk_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_8Rnd_9x19_Mk_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_8Rnd_9x19_Mk_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_8Rnd_9x19_Mk_bt";
		};
	};
};

class RH_8Rnd_9x19_Mk: CA_Magazine
{
	scope=2;
	displayName="Mk22 mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 8 <br/>Used in: Mk22";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	ammo="B_9x19_Ball";
	count=8;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_8Rnd_9x19_Mk_Empty";
};

class RH_8Rnd_9x19_MkSD: RH_8Rnd_9x19_Mk {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="Mk22 SD Mag";
	displayNameShort="SD";
};

class RH_8Rnd_9x19_Mk_hp: RH_8Rnd_9x19_Mk {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="Mk22 HP Mag";
	displayNameShort="HP";
};

class RH_8Rnd_9x19_Mk_tracer: RH_8Rnd_9x19_Mk {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="Mk22 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_8Rnd_9x19_Mk_rubber: RH_8Rnd_9x19_Mk {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="Mk22 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_8Rnd_9x19_Mk_bt: RH_8Rnd_9x19_Mk {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="Mk22 BT Mag";
	displayNameShort="BT";
};

// 9mm usp
class RH_15Rnd_9x19_usp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Usp 9mm mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 15 <br/>Used in: USP 9mm";
	model="\RH_de\mags\mag_usp.p3d";
	type=16;
	picture="\RH_de\inv\m_usp.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_15Rnd_9x19_usp";
		};
		class B_9x19_SD {
			ammoMag = "RH_15Rnd_9x19_uspsd";
		};
		class B_9x19_HP {
			ammoMag = "RH_15Rnd_9x19_usp_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_15Rnd_9x19_usp_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_15Rnd_9x19_usp_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_15Rnd_9x19_usp_bt";
		};
	};
};

class RH_15Rnd_9x19_usp: CA_Magazine
{
	scope=2;
	displayName="Usp 9mm mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 15 <br/>Used in: USP 9mm";
	model="\RH_de\mags\mag_usp.p3d";
	type=16;
	picture="\RH_de\inv\m_usp.paa";
	ammo="B_9x19_Ball";
	count=15;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_15Rnd_9x19_usp_Empty";
};

class RH_15Rnd_9x19_uspsd: RH_15Rnd_9x19_usp {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="Usp 9mm SD Mag";
	displayNameShort="SD";
};

class RH_15Rnd_9x19_usp_hp: RH_15Rnd_9x19_usp {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="Usp 9mm HP Mag";
	displayNameShort="HP";
};

class RH_15Rnd_9x19_usp_tracer: RH_15Rnd_9x19_usp {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	tracersevery = 1;
	ammo="B_9x19_TRACER";
	displayName="Usp 9mm Tracer Mag";
	displayNameShort="Tracer";
};

class RH_15Rnd_9x19_usp_rubber: RH_15Rnd_9x19_usp {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="Usp 9mm Rubber Mag";
	displayNameShort="Rubber";
};

class RH_15Rnd_9x19_usp_bt: RH_15Rnd_9x19_usp {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="Usp 9mm BT Mag";
	displayNameShort="BT";
};


//Raffica mag
class RH_20Rnd_9x19_M93_Empty: emptiedMagazine
{
	scope=2;
	displayName="M93R mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 20 <br/>Used in: m39r, m9";
	model="\RH_de\mags\mag_m93r.p3d";
	type=16;
	picture="\RH_de\inv\m_m93.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_20Rnd_9x19_M93";
		};
		class B_9x19_SD {
			ammoMag = "RH_20Rnd_9x19_M93SD";
		};
		class B_9x19_HP {
			ammoMag = "RH_20Rnd_9x19_M93_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_20Rnd_9x19_M93_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_20Rnd_9x19_M93_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_20Rnd_9x19_M93_bt";
		};
	};
};

class RH_20Rnd_9x19_M93: CA_Magazine
{
	scope=2;
	displayName="M93R mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 20 <br/>Used in: m39r, m9";
	model="\RH_de\mags\mag_m93r.p3d";
	type=16;
	picture="\RH_de\inv\m_m93.paa";
	ammo="B_9x19_Ball";
	count=20;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_20Rnd_9x19_M93_Empty";
};

class RH_20Rnd_9x19_M93SD: RH_20Rnd_9x19_M93 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="M93R SD Mag";
	displayNameShort="SD";
};

class RH_20Rnd_9x19_M93_hp: RH_20Rnd_9x19_M93 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="M93R HP Mag";
	displayNameShort="HP";
};

class RH_20Rnd_9x19_M93_tracer: RH_20Rnd_9x19_M93 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="M93R Tracer Mag";
	displayNameShort="Tracer";
};

class RH_20Rnd_9x19_M93_rubber: RH_20Rnd_9x19_M93 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="M93R Rubber Mag";
	displayNameShort="Rubber";
};

class RH_20Rnd_9x19_M93_bt: RH_20Rnd_9x19_M93 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="M93R BT Mag";
	displayNameShort="BT";
};


// Glock 9mm 19rnd
class RH_19Rnd_9x19_g18_Empty: emptiedMagazine
{
	scope=2;
	displayName="G18 mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 19 <br/>Used in: G17, G18, G19";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_19Rnd_9x19_g18";
		};
		class B_9x19_SD {
			ammoMag = "RH_19Rnd_9x19_g18SD";
		};
		class B_9x19_HP {
			ammoMag = "RH_19Rnd_9x19_g18_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_19Rnd_9x19_g18_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_19Rnd_9x19_g18_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_19Rnd_9x19_g18_bt";
		};
	};
};

class RH_19Rnd_9x19_g18: CA_Magazine
{
	scope=2;
	displayName="G18 mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 19 <br/>Used in: G17, G18, G19";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	ammo="B_9x19_Ball";
	count=19;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_19Rnd_9x19_g18_Empty";
};

class RH_19Rnd_9x19_g18SD: RH_19Rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="G18 SD Mag";
	displayNameShort="SD";
};

class RH_19Rnd_9x19_g18_hp: RH_19Rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="G18 HP Mag";
	displayNameShort="HP";
};

class RH_19Rnd_9x19_g18_tracer: RH_19Rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	tracersevery = 1;
	ammo="B_9x19_TRACER";
	displayName="G18 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_19Rnd_9x19_g18_rubber: RH_19Rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="G18 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_19Rnd_9x19_g18_bt: RH_19Rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="G18 BT Mag";
	displayNameShort="BT";
};

// Glock 9mm 33rnd
class RH_33Rnd_9x19_g18_Empty: emptiedMagazine
{
	scope=2;
	displayName="G18 Long mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 33 <br/>Used in: G17, G18, G19";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_33Rnd_9x19_g18";
		};
		class B_9x19_SD {
			ammoMag = "RH_33Rnd_9x19_g18SD";
		};
		class B_9x19_HP {
			ammoMag = "RH_33rnd_9x19_g18_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_33rnd_9x19_g18_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_33rnd_9x19_g18_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_33rnd_9x19_g18_bt";
		};
	};
};

class RH_33rnd_9x19_g18: CA_Magazine
{
	scope=2;
	displayName="G18 Long mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 33 <br/>Used in: G17, G18, G19";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	ammo="B_9x19_Ball";
	count=19;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_33rnd_9x19_g18_Empty";
};

class RH_33rnd_9x19_g18SD: RH_33rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="G18 Long SD Mag";
	displayNameShort="SD";
};

class RH_33Rnd_9x19_g18_hp: RH_33Rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="G18 Long HP Mag";
	displayNameShort="HP";
};

class RH_33rnd_9x19_g18_tracer: RH_33rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="G18 Long Tracer Mag";
	displayNameShort="Tracer";
};

class RH_33rnd_9x19_g18_rubber: RH_33rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="G18 Long Rubber Mag";
	displayNameShort="Rubber";
};

class RH_33rnd_9x19_g18_bt: RH_33rnd_9x19_g18 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="G18 Long BT Mag";
	displayNameShort="BT";
};


//tec 9
class RH_30Rnd_9x19_tec_Empty: emptiedMagazine
{
	scope=2;
	displayName="Tec9 mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 30 <br/>Used in: Tec9";
	model="\RH_de\mags\mag_tec9.p3d";
	type=16;
	picture="\RH_de\inv\m_tec9.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_30Rnd_9x19_tec";
		};
		class B_9x19_SD {
			ammoMag = "RH_30Rnd_9x19_tecSD";
		};
		class B_9x19_HP {
			ammoMag = "RH_30Rnd_9x19_tec_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_30Rnd_9x19_tec_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_30Rnd_9x19_tec_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_30Rnd_9x19_tec_bt";
		};
	};
};

class RH_30Rnd_9x19_tec: CA_Magazine
{
	scope=2;
	displayName="Tec9 mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 30 <br/>Used in: Tec9";
	model="\RH_de\mags\mag_tec9.p3d";
	type=16;
	picture="\RH_de\inv\m_tec9.paa";
	ammo="B_9x19_Ball";
	count=30;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_30Rnd_9x19_tec_Empty";
};

class RH_30Rnd_9x19_tecSD: RH_30Rnd_9x19_tec {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="Tec9 SD Mag";
	displayNameShort="SD";
};

class RH_30Rnd_9x19_tec_hp: RH_30Rnd_9x19_tec {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="Tec9 HP Mag";
	displayNameShort="HP";
};

class RH_30Rnd_9x19_tec_tracer: RH_30Rnd_9x19_tec {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="Tec9 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_30Rnd_9x19_tec_rubber: RH_30Rnd_9x19_tec {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="Tec9 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_30Rnd_9x19_tec_bt: RH_30Rnd_9x19_tec {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="Tec9 BT Mag";
	displayNameShort="BT";
};



//miniUzi
class RH_32Rnd_9x19_Muzi_Empty: emptiedMagazine
{
	scope=2;
	displayName="MUzi mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 32 <br/>Used in: Mini UZI";
	model="\RH_de\mags\mag_muzi.p3d";
	type=16;
	picture="\RH_de\inv\m_muzi.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_32Rnd_9x19_Muzi";
		};
		class B_9x19_SD {
			ammoMag = "RH_32Rnd_9x19_MuziSD";
		};
		class B_9x19_HP {
			ammoMag = "RH_32Rnd_9x19_Muzi_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_32Rnd_9x19_Muzi_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_32Rnd_9x19_Muzi_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_32Rnd_9x19_Muzi_bt";
		};
	};
};

class RH_32Rnd_9x19_Muzi: CA_Magazine
{
	scope=2;
	displayName="MUzi mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 32 <br/>Used in: Mini Uzi";
	model="\RH_de\mags\mag_muzi.p3d";
	type=16;
	picture="\RH_de\inv\m_muzi.paa";
	ammo="B_9x19_Ball";
	count=32;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_32Rnd_9x19_Muzi_Empty";
};

class RH_32Rnd_9x19_MuziSD: RH_32Rnd_9x19_Muzi {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="MUzi SD Mag";
	displayNameShort="SD";
};

class RH_32Rnd_9x19_Muzi_hp: RH_32Rnd_9x19_Muzi {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="MUzi HP Mag";
	displayNameShort="HP";
};

class RH_32Rnd_9x19_Muzi_tracer: RH_32Rnd_9x19_Muzi {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="MUzi Tracer Mag";
	displayNameShort="Tracer";
};

class RH_32Rnd_9x19_Muzi_rubber: RH_32Rnd_9x19_Muzi {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="MUzi Rubber Mag";
	displayNameShort="Rubber";
};

class RH_32Rnd_9x19_Muzi_bt: RH_32Rnd_9x19_Muzi {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="MUzi BT Mag";
	displayNameShort="BT";
};


//p38
class RH_8Rnd_9x19_p38_Empty: emptiedMagazine
{
	scope=2;
	displayName="P38 mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 8 <br/>Used in: P38";
	model="\RH_de\mags\mag_p38.p3d";
	type=16;
	picture="\RH_de\inv\m_p38.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_8Rnd_9x19_p38";
		};
		class B_9x19_SD {
			ammoMag = "RH_8Rnd_9x19_p38SD";
		};
		class B_9x19_HP {
			ammoMag = "RH_8Rnd_9x19_p38_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_8Rnd_9x19_p38_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_8Rnd_9x19_p38_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_8Rnd_9x19_p38_bt";
		};
	};
};

class RH_8Rnd_9x19_p38: CA_Magazine
{
	scope=2;
	displayName="P38 mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 8 <br/>Used in: P38";
	model="\RH_de\mags\mag_p38.p3d";
	type=16;
	picture="\RH_de\inv\m_p38.paa";
	ammo="B_9x19_Ball";
	count=8;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_8Rnd_9x19_p38_Empty";
};

class RH_8Rnd_9x19_p38SD: RH_8Rnd_9x19_p38 {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="P38 SD Mag";
	displayNameShort="SD";
};

class RH_8Rnd_9x19_p38_hp: RH_8Rnd_9x19_p38 {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="P38 HP Mag";
	displayNameShort="HP";
};

class RH_8Rnd_9x19_p38_tracer: RH_8Rnd_9x19_p38 {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="P38 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_8Rnd_9x19_p38_rubber: RH_8Rnd_9x19_p38 {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="P38 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_8Rnd_9x19_p38_bt: RH_8Rnd_9x19_p38 {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="P38 BT Mag";
	displayNameShort="BT";
};


//UZI
class RH_9mm_32RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Uzi mag (Empty)";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 32 <br/>Used in: Uzi";
	model="\RH_smg\mags\mag_uzi.p3d";
	picture="\RH_smg\inv\m_uzi.paa";
	class ammoType
	{
		class B_9x19_Ball {
			ammoMag = "RH_9mm_32RND_Mag";
		};
		class B_9x19_SD {
			ammoMag = "RH_9mm_32RND_MagSD";
		};
		class B_9x19_HP {
			ammoMag = "RH_9mm_32RND_Mag_hp";
		};
		class B_9x19_TRACER {
			ammoMag = "RH_9mm_32RND_Mag_tracer";
		};
		class B_9x19_RUBBER {
			ammoMag = "RH_9mm_32RND_Mag_rubber";
		};
		class B_9x19_BT {
			ammoMag = "RH_9mm_32RND_Mag_bt";
		};
	};
};

class RH_9mm_32RND_Mag: CA_Magazine
{
	scope=2;
	displayName="Uzi mag";
	descriptionShort="Caliber: 9x19 mm Parabellum <br/>Rounds: 32 <br/>Used in: Uzi";
	model="\RH_smg\mags\mag_uzi.p3d";
	picture="\RH_smg\inv\m_uzi.paa";
	ammo="B_9x19_Ball";
	count=32;
	initSpeed=400;
	baseBullet = 9x19_x;
	LOAD_AMMO

	emptyMag = "RH_9mm_32RND_Mag_Empty";
};

class RH_9mm_32RND_MagSD: RH_9mm_32RND_Mag {
	scope=2;
	baseBullet = 9x19_SD_x;
	initSpeed=320;
	ammo="B_9x19_SD";
	displayName="Uzi SD Mag";
	displayNameShort="SD";
};

class RH_9mm_32RND_Mag_hp: RH_9mm_32RND_Mag {
	scope=2;
	baseBullet = 9x19_HP_x;
	ammo="B_9x19_HP";
	displayName="Uzi HP Mag";
	displayNameShort="HP";
};

class RH_9mm_32RND_Mag_tracer: RH_9mm_32RND_Mag {
	scope=2;
	baseBullet = 9x19_Tracer_x;
	ammo="B_9x19_TRACER";
	tracersevery = 1;
	displayName="Uzi Tracer Mag";
	displayNameShort="Tracer";
};

class RH_9mm_32RND_Mag_rubber: RH_9mm_32RND_Mag {
	scope=2;
	baseBullet = 9x19_RUBBER_x;
	initSpeed=200;
	ammo="B_9x19_RUBBER";
	displayName="Uzi Rubber Mag";
	displayNameShort="Rubber";
};

class RH_9mm_32RND_Mag_bt: RH_9mm_32RND_Mag {
	scope=2;
	baseBullet = 9x19_BT_x;
	ammo="B_9x19_BT";
	displayName="Uzi BT Mag";
	displayNameShort="BT";
};

