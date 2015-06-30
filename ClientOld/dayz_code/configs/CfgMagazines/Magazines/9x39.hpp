
// OC14
class RH_20Rnd_9x39_SP6_mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="OC14 mag (Empty)";
	descriptionshort = "Caliber:9x39mm <br/>Rounds: 20 <br/>Used in: OC14";
	picture="\RH_aks\inv\m_oc.paa";
	model="\RH_aks\mags\mag_oc14.p3d";
	class ammoType
	{
		class B_9x39_Ball {
			ammoMag = "RH_20Rnd_9x39_SP6_mag";
		};
		class B_9x39_HP {
			ammoMag = "RH_20Rnd_9x39_SP6_mag_hp";
		};
		class B_9x39_TRACER {
			ammoMag = "RH_20Rnd_9x39_SP6_mag_tracer";
		};
		class B_9x39_RUBBER {
			ammoMag = "RH_20Rnd_9x39_SP6_mag_rubber";
		};
		class B_9x39_BT {
			ammoMag = "RH_20Rnd_9x39_SP6_mag_bt";
		};
	};
};

class RH_20Rnd_9x39_SP6_mag: 30Rnd_545x39_AK
{
	scope=2;
	displayName="OC14 mag";
	descriptionshort = "Caliber:9x39mm <br/>Rounds: 20 <br/>Used in: OC14";
	picture="\RH_aks\inv\m_oc.paa";
	model="\RH_aks\mags\mag_oc14.p3d";
	ammo="B_9x39_Ball";
	count=20;
	initSpeed=320;
	baseBullet = 9x39_x;
	LOAD_AMMO

	emptyMag = "RH_20Rnd_9x39_SP6_mag_Empty";
};

class RH_20Rnd_9x39_SP6_mag_hp: RH_20Rnd_9x39_SP6_mag {
	scope=2;
	baseBullet = 9x39_HP_x;
	ammo="B_9x39_HP";
	displayName="OC14 HP Mag";
	displayNameShort="HP";
};

class RH_20Rnd_9x39_SP6_mag_tracer: RH_20Rnd_9x39_SP6_mag {
	scope=2;
	baseBullet = 9x39_Tracer_x;
	ammo="B_9x39_TRACER";
	tracersevery = 1;
	displayName="OC14 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_20Rnd_9x39_SP6_mag_rubber: RH_20Rnd_9x39_SP6_mag {
	scope=2;
	baseBullet = 9x39_RUBBER_x;
	initSpeed=200;
	ammo="B_9x39_RUBBER";
	displayName="OC14 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_20Rnd_9x39_SP6_mag_bt: RH_20Rnd_9x39_SP6_mag {
	scope=2;
	baseBullet = 9x39_BT_x;
	ammo="B_9x39_BT";
	displayName="OC14 BT Mag";
	displayNameShort="BT";
};


//AS Val
class vil_10Rnd_9x39_SP6_VSS_Empty: emptiedMagazine
{
	scope=2;
	displayName="10Rnd SP6 (Empty)";
	descriptionshort = "Caliber:9x39mm <br/>Rounds: 10 <br/>Used in: AS VAL, VSS";
	picture = "\CA\weapons\data\equip\M_VSSx10_CA.paa";
	class ammoType
	{
		class B_9x39_Ball {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS";
		};
		class B_9x39_HP {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS_hp";
		};
		class B_9x39_TRACER {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS_tracer";
		};
		class B_9x39_RUBBER {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS_rubber";
		};
		class B_9x39_BT {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS_bt";
		};
	};
};

class vil_10Rnd_9x39_SP6_VSS: CA_Magazine
{
	scope=2;
	displayName="10Rnd SP6";
	descriptionshort = "Caliber:9x39mm <br/>Rounds: 10 <br/>Used in: AS VAL, VSS";
	picture = "\CA\weapons\data\equip\M_VSSx10_CA.paa";
	ammo="B_9x39_Ball";
	count=10;
	initSpeed=320;
	baseBullet = 9x39_x;
	LOAD_AMMO

	emptyMag = "RH_20Rnd_9x39_SP6_mag_Empty";
};

class vil_10Rnd_9x39_SP6_VSS_hp: vil_10Rnd_9x39_SP6_VSS {
	scope=2;
	baseBullet = 9x39_HP_x;
	ammo="B_9x39_HP";
	displayName="10Rnd SP6 HP Mag";
};

class vil_10Rnd_9x39_SP6_VSS_tracer: vil_10Rnd_9x39_SP6_VSS {
	scope=2;
	baseBullet = 9x39_Tracer_x;
	ammo="B_9x39_TRACER";
	tracersevery = 1;
	displayName="10Rnd SP6 Tracer Mag";
};

class vil_10Rnd_9x39_SP6_VSS_rubber: vil_10Rnd_9x39_SP6_VSS {
	scope=2;
	baseBullet = 9x39_RUBBER_x;
	initSpeed=200;
	ammo="B_9x39_RUBBER";
	displayName="10Rnd SP6 Rubber Mag";
};

class vil_10Rnd_9x39_SP6_VSS_bt: vil_10Rnd_9x39_SP6_VSS {
	scope=2;
	baseBullet = 9x39_BT_x;
	ammo="B_9x39_BT";
	displayName="10Rnd SP6 BT Mag";
};


class vil_20Rnd_9x39_SP6_VAL_Empty: emptiedMagazine
{
	scope=2;
	displayName="20Rnd SP6 (Empty)";
	descriptionshort = "Caliber:9x39mm <br/>Rounds: 10 <br/>Used in: AS VAL, VSS";
	picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
	class ammoType
	{
		class B_9x39_Ball {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL";
		};
		class B_9x39_HP {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL_hp";
		};
		class B_9x39_TRACER {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL_tracer";
		};
		class B_9x39_RUBBER {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL_rubber";
		};
		class B_9x39_BT {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL_bt";
		};
	};
};

class vil_20Rnd_9x39_SP6_VAL: CA_Magazine
{
	scope=2;
	displayName="20Rnd SP6";
	descriptionshort = "Caliber:9x39mm <br/>Rounds: 20 <br/>Used in: AS VAL, VSS";
	picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
	ammo="B_9x39_Ball";
	count=20;
	initSpeed=320;
	baseBullet = 9x39_x;
	LOAD_AMMO

	emptyMag = "RH_20Rnd_9x39_SP6_mag_Empty";
};

class vil_20Rnd_9x39_SP6_VAL_hp: vil_20Rnd_9x39_SP6_VAL {
	scope=2;
	baseBullet = 9x39_HP_x;
	ammo="B_9x39_HP";
	displayName="20Rnd SP6 HP Mag";
};

class vil_20Rnd_9x39_SP6_VAL_tracer: vil_20Rnd_9x39_SP6_VAL {
	scope=2;
	baseBullet = 9x39_Tracer_x;
	ammo="B_9x39_TRACER";
	tracersevery = 1;
	displayName="20Rnd SP6 Tracer Mag";
};

class vil_20Rnd_9x39_SP6_VAL_rubber: vil_20Rnd_9x39_SP6_VAL {
	scope=2;
	baseBullet = 9x39_RUBBER_x;
	initSpeed=200;
	ammo="B_9x39_RUBBER";
	displayName="20Rnd SP6 Rubber Mag";
};

class vil_20Rnd_9x39_SP6_VAL_bt: vil_20Rnd_9x39_SP6_VAL {
	scope=2;
	baseBullet = 9x39_BT_x;
	ammo="B_9x39_BT";
	displayName="20Rnd SP6 BT Mag";
};
