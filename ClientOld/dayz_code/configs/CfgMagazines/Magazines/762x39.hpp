/* AK47 */
class 30Rnd_762x39_AK47_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 30 <br/>AK47 based weapons";
	displayname = "AK-47 Mag (Empty)";
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak47_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "30Rnd_762x39_AK47";
		};
		class B_762x39_SD {
			ammoMag = "30Rnd_762x39_AK47_SD";
		};
		class B_762x39_HP {
			ammoMag = "30Rnd_762x39_AK47_hp";
		};
		class B_762x39_TRACER {
			ammoMag = "30Rnd_762x39_AK47_tracer";
		};
		class B_762x39_RUBBER {
			ammoMag = "30Rnd_762x39_AK47_rubber";
		};
		class B_762x39_BT {
			ammoMag = "30Rnd_762x39_AK47_bt";
		};
	};
};

class 30Rnd_762x39_AK47 : CA_Magazine
{
	scope=2;
	displayname = "AK-47 Mag";
	descriptionshort = "Caliber:7.62x39mm<br/>Rounds: 30<br/>AK47 based weapons";
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak47_ca.paa";
	baseBullet = 762x39_x;
	ammo="B_762x39_Ball";
	initSpeed=710;
	count=30;
	LOAD_AMMO
	emptyMag = "30Rnd_762x39_AK47_Empty";
};


class 30Rnd_762x39_AK47_SD: 30Rnd_762x39_AK47 {
	scope=2;
	ammo = "B_762x39_SD";
	displayname = "AK-47 SD Mag";
	initSpeed=320;
	baseBullet = 762x39_SD_x;
	displayNameShort="SD";
};

class 30Rnd_762x39_AK47_hp: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_HP_x;
	ammo="B_762x39_HP";
	displayname = "AK-47 HP Mag";
	displayNameShort="HP";
};

class 30Rnd_762x39_AK47_tracer: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_TRACER";
	displayname = "AK-47 Tracer Mag";
	displayNameShort="Tracer";
};

class 30Rnd_762x39_AK47_rubber: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=200;
	ammo="B_762x39_RUBBER";
	displayname = "AK-47 Rubber Mag";
	displayNameShort="Rubber";
};

class 30Rnd_762x39_AK47_bt: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_BT";
	displayname = "AK-47 BT Mag";
	displayNameShort="BT";
};


/* AK47 40Rnd. */
class vil_40Rnd_762x39_AK47_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 40<br/>Used In: AK47 based weapons";
	displayname = "AK47 Long Mag (Empty)";
	picture = "\vilas_aks\ico\m_vil_rpk_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "vil_40Rnd_762x39_AK47";
		};
		class B_762x39_SD {
			ammoMag = "vil_40Rnd_762x39_AK47_SD";
		};
		class B_762x39_HP {
			ammoMag = "vil_40Rnd_762x39_AK47_hp";
		};
		class B_762x39_TRACER {
			ammoMag = "vil_40Rnd_762x39_AK47_tracer";
		};
		class B_762x39_RUBBER {
			ammoMag = "vil_40Rnd_762x39_AK47_rubber";
		};
		class B_762x39_BT {
			ammoMag = "vil_40Rnd_762x39_AK47_bt";
		};
	};
};

class vil_40Rnd_762x39_AK47 : CA_Magazine
{
	scope=2;
	displayname = "AK47 Long Mag";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 40<br/>Used In: AK47 based weapons";
	picture = "\vilas_aks\ico\m_vil_rpk_ca.paa";
	baseBullet = 762x39_x;
	ammo="B_762x39_Ball";
	count=40;
	initSpeed=710;
	LOAD_AMMO
	emptyMag = "vil_40Rnd_762x39_AK47_Empty";
};


class vil_40Rnd_762x39_AK47_SD: vil_40Rnd_762x39_AK47 {
	ammo = "B_762x39_SD";
	displayname = "AK47 SD Long Mag";
	initSpeed=320;
	scope = 2;
	baseBullet = 762x39_SD_x;
	displayNameShort="SD";
};

class vil_40Rnd_762x39_AK47_hp: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_HP_x;
	ammo="B_762x39_HP";
	displayname = "AK47 HP Long Mag";
	displayNameShort="HP";
};

class vil_40Rnd_762x39_AK47_tracer: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_TRACER";
	displayname = "AK47 Tracer Long Mag";
	displayNameShort="Tracer";
};

class vil_40Rnd_762x39_AK47_rubber: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=200;
	ammo="B_762x39_RUBBER";
	displayname = "AK47 Rubber Long Mag";
	displayNameShort="Rubber";
};

class vil_40Rnd_762x39_AK47_bt: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_BT";
	displayname = "AK47 BT Long Mag";
	displayNameShort="BT";
};



/* AKM DRUM MAG */
class RH_75Rnd_762x39_mag_Empty: emptiedMagazine {
	displayName="RPK47 Mag (Empty)";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
	picture="\RH_aks\inv\m_rpk.paa";
	model="\RH_aks\mags\mag_rpk.p3d";
	type=2*		256;
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "RH_75Rnd_762x39_mag";
		};
		class B_762x39_SD {
			ammoMag = "RH_75Rnd_762x39_mag_SD";
		};
		class B_762x39_HP {
			ammoMag = "RH_75Rnd_762x39_mag_hp";
		};
		class B_762x39_TRACER {
			ammoMag = "RH_75Rnd_762x39_mag_tracer";
		};
		class B_762x39_RUBBER {
			ammoMag = "RH_75Rnd_762x39_mag_rubber";
		};
		class B_762x39_BT {
			ammoMag = "RH_75Rnd_762x39_mag_bt";
		};
	};
};

class RH_75Rnd_762x39_mag: CA_Magazine
{
	scope=2;
	displayName="AK47 DrumMag";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
	picture="\RH_aks\inv\m_rpk.paa";
	model="\RH_aks\mags\mag_rpk.p3d";
	ammo="B_762x39_Ball";
	baseBullet = 762x39_x;
	initSpeed=710;
	count=75;
	type=2*		256;
	LOAD_AMMO

	emptyMag = "RH_75Rnd_762x39_mag_Empty";
};

class RH_75Rnd_762x39_mag_SD: RH_75Rnd_762x39_mag {
	ammo = "B_762x39_SD";
	displayName="AK47 SD DrumMag";
	initSpeed=320;
	scope = 2;
	baseBullet = 762x39_SD_x;
	displayNameShort="SD";
};

class RH_75Rnd_762x39_mag_hp: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_HP_x;
	ammo="B_762x39_HP";
	displayName="AK47 HP DrumMag";
	displayNameShort="HP";
};

class RH_75Rnd_762x39_mag_tracer: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	tracersevery = 1;
	ammo="B_762x39_TRACER";
	displayName="AK47 Tracer DrumMag";
	displayNameShort="Tracer";
};

class RH_75Rnd_762x39_mag_rubber: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=200;
	ammo="B_762x39_RUBBER";
	displayName="AK47 Rubber DrumMag";
	displayNameShort="Rubber";
};

class RH_75Rnd_762x39_mag_bt: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_BT";
	displayName="AK47 BT DrumMag";
	displayNameShort="BT";
};


/* SA85 */
class 30Rnd_762x39_SA58_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 30 <br/>Used in: SA58";
	displayname = "SA58 Mag (Empty)";
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\CA\weapons_E\data\icons\M_SA58_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "30Rnd_762x39_SA58";
		};
		class B_762x39_SD {
			ammoMag = "30Rnd_762x39_SA58_SD";
		};
		class B_762x39_HP {
			ammoMag = "30Rnd_762x39_SA58_hp";
		};
		class B_762x39_TRACER {
			ammoMag = "30Rnd_762x39_SA58_tracer";
		};
		class B_762x39_RUBBER {
			ammoMag = "30Rnd_762x39_SA58_rubber";
		};
		class B_762x39_BT {
			ammoMag = "30Rnd_762x39_SA58_bt";
		};
	};
};

class 30Rnd_762x39_SA58 : CA_Magazine
{
	scope=2;
	displayname = "SA58 Mag";
	descriptionshort = "Caliber:7.62x39mm<br/>Rounds: 30<br/>AK47 based weapons";
	model = "z\addons\dayz_communityweapons\magazines\ak47.p3d";
	picture = "\CA\weapons_E\data\icons\M_SA58_CA.paa";
	baseBullet = 762x39_x;
	ammo="B_762x39_Ball";
	initSpeed=710;
	count=30;
	LOAD_AMMO
	emptyMag = "30Rnd_762x39_SA58_Empty";
};


class 30Rnd_762x39_SA58_SD: 30Rnd_762x39_SA58 {
	ammo = "B_762x39_SD";
	displayname = "SA58 SD Mag";
	initSpeed=320;
	scope = 2;
	baseBullet = 762x39_SD_x;
	displayNameShort="SD";
};

class 30Rnd_762x39_SA58_hp: 30Rnd_762x39_SA58 {
	scope=2;
	baseBullet = 762x39_HP_x;
	ammo="B_762x39_HP";
	displayname = "SA58 HP Mag";
	displayNameShort="HP";
};

class 30Rnd_762x39_SA58_tracer: 30Rnd_762x39_SA58 {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_TRACER";
	displayname = "SA58 Tracer Mag";
	displayNameShort="Tracer";
};

class 30Rnd_762x39_SA58_rubber: 30Rnd_762x39_SA58 {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=200;
	ammo="B_762x39_RUBBER";
	displayname = "SA58 Rubber Mag";
	displayNameShort="Rubber";
};

class 30Rnd_762x39_SA58_bt: 30Rnd_762x39_SA58 {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_BT";
	displayname = "SA58 BT Mag";
	displayNameShort="BT";
};



/* RPD */
class KPFS_100Rnd_762x39_RPD_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 10 <br/>Used in: RPD";
	displayname = "RPD Mag (Empty)";
	picture="\kpfs_weapons2\data\icons\m_rpd_ca.paa";
	scope = 2;
	type=2*256;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "KPFS_100Rnd_762x39_RPD";
		};
		class B_762x39_SD {
			ammoMag = "KPFS_100Rnd_762x39_RPD_SD";
		};
		class B_762x39_HP {
			ammoMag = "KPFS_100Rnd_762x39_RPD_hp";
		};
		class B_762x39_TRACER {
			ammoMag = "KPFS_100Rnd_762x39_RPD_tracer";
		};
		class B_762x39_RUBBER {
			ammoMag = "KPFS_100Rnd_762x39_RPD_rubber";
		};
		class B_762x39_BT {
			ammoMag = "KPFS_100Rnd_762x39_RPD_bt";
		};
	};
};

class KPFS_100Rnd_762x39_RPD : CA_Magazine
{
	scope=2;
	displayname = "RPD Mag";
	descriptionshort = "Caliber:7.62x39mm<br/>Rounds: 100<br/>Used in: RPD";
	picture="\kpfs_weapons2\data\icons\m_rpd_ca.paa";
	baseBullet = 762x39_x;
	ammo="B_762x39_Ball";
	initSpeed=710;
	type=2*256;
	count=100;
	magazineReloadTime=8;
	LOAD_AMMO
	emptyMag = "KPFS_100Rnd_762x39_RPD_Empty";
};


class KPFS_100Rnd_762x39_RPD_SD: KPFS_100Rnd_762x39_RPD {
	ammo = "B_762x39_SD";
	displayname = "RPD SD Mag";
	initSpeed=320;
	scope = 2;
	baseBullet = 762x39_SD_x;
	displayNameShort="SD";
};

class KPFS_100Rnd_762x39_RPD_hp: KPFS_100Rnd_762x39_RPD {
	scope=2;
	baseBullet = 762x39_HP_x;
	ammo="B_762x39_HP";
	displayname = "RPD HP Mag";
	displayNameShort="HP";
};

class KPFS_100Rnd_762x39_RPD_tracer: KPFS_100Rnd_762x39_RPD {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_TRACER";
	displayname = "RPD Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_100Rnd_762x39_RPD_rubber: KPFS_100Rnd_762x39_RPD {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=200;
	ammo="B_762x39_RUBBER";
	displayname = "RPD Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_100Rnd_762x39_RPD_bt: KPFS_100Rnd_762x39_RPD {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_BT";
	displayname = "RPD BT Mag";
	displayNameShort="BT";
};


/* SKS */
class KPFS_10Rnd_762x39_SKS_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 10<br/>Used In: SKS";
	displayname = "SKS Mag (Empty)";
	picture="\Ca\weapons\Data\Equip\m_M24_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "KPFS_10Rnd_762x39_SKS";
		};
		class B_762x39_SD {
			ammoMag = "KPFS_10Rnd_762x39_SKS_SD";
		};
		class B_762x39_HP {
			ammoMag = "KPFS_10Rnd_762x39_SKS_hp";
		};
		class B_762x39_TRACER {
			ammoMag = "KPFS_10Rnd_762x39_SKS_tracer";
		};
		class B_762x39_RUBBER {
			ammoMag = "KPFS_10Rnd_762x39_SKS_rubber";
		};
		class B_762x39_BT {
			ammoMag = "KPFS_10Rnd_762x39_SKS_bt";
		};
	};
};

class KPFS_10Rnd_762x39_SKS : CA_Magazine
{
	scope=2;
	displayname = "SKS Mag";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 10<br/>Used In: SKS";
	picture="\Ca\weapons\Data\Equip\m_M24_CA.paa";
	baseBullet = 762x39_x;
	ammo="B_762x39_Ball";
	count=10;
	initSpeed=710;
	LOAD_AMMO
	emptyMag = "KPFS_10Rnd_762x39_SKS_Empty";
};


class KPFS_10Rnd_762x39_SKS_SD: KPFS_10Rnd_762x39_SKS {
	scope=2;
	ammo = "B_762x39_SD";
	displayname = "SKS SD Mag";
	initSpeed=320;
	baseBullet = 762x39_SD_x;
	displayNameShort="SD";
};

class KPFS_10Rnd_762x39_SKS_hp: KPFS_10Rnd_762x39_SKS {
	scope=2;
	baseBullet = 762x39_HP_x;
	ammo="B_762x39_HP";
	displayname = "SKS HP Mag";
	displayNameShort="HP";
};

class KPFS_10Rnd_762x39_SKS_tracer: KPFS_10Rnd_762x39_SKS {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_TRACER";
	displayname = "SKS Tracer Mag";
	displayNameShort="Tracer";
};

class KPFS_10Rnd_762x39_SKS_rubber: KPFS_10Rnd_762x39_SKS {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=200;
	ammo="B_762x39_RUBBER";
	displayname = "SKS Rubber Mag";
	displayNameShort="Rubber";
};

class KPFS_10Rnd_762x39_SKS_bt: KPFS_10Rnd_762x39_SKS {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_BT";
	displayname = "SKS BT Mag";
	displayNameShort="BT";
};