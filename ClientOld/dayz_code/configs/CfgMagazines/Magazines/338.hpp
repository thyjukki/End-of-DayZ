/* Lapua */
class UKF_5Rnd_338_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="L115 mag (Empty)";
	descriptionShort="Caliber: .338 Lapua Magnum<br/>Rounds: 5 <br/>Used in: L115";
	picture="\UKF_L115A3\Equip\m_UKF_338Mag_ca.paa";

	class ammoType
	{
		class B_338mag_ball {
			ammoMag = "UKF_5Rnd_338_Mag";
		};
		class B_338mag_HP {
			ammoMag = "UKF_5Rnd_338_Mag_hp";
		};
		class B_338mag_TRACER {
			ammoMag = "UKF_5Rnd_338_Mag_tracer";
		};
		class B_338mag_RUBBER {
			ammoMag = "UKF_5Rnd_338_Mag_rubber";
		};
		class B_338mag_BT {
			ammoMag = "UKF_5Rnd_338_Mag_bt";
		};
	};
};

class UKF_5Rnd_338_Mag: CA_Magazine
{
	scope=2;
	displayName="L115 Mag";
	picture="\UKF_L115A3\Equip\m_UKF_338Mag_ca.paa";
	descriptionShort="Caliber: .338 Lapua Magnum<br/>Rounds: 5 <br/>Used in: L115";
	ammo="B_338mag_ball";
	initSpeed=936;
	count=5;
	baseBullet = 338_x;

	LOAD_AMMO

	emptyMag = "UKF_5Rnd_338_Mag_Empty";
};

class UKF_5Rnd_338_Mag_hp: UKF_5Rnd_338_Mag {
	scope=2;
	baseBullet = 338_HP_x;
	ammo="B_338mag_HP";
	displayName="L115 Mag HP";
	displayNameShort="HP";
};

class UKF_5Rnd_338_Mag_tracer: UKF_5Rnd_338_Mag {
	scope=2;
	baseBullet = 338_Tracer_x;
	tracersevery = 1;
	ammo="B_338mag_TRACER";
	displayName="L115 Mag Tracer";
	displayNameShort="Tracer";
};

class UKF_5Rnd_338_Mag_rubber: UKF_5Rnd_338_Mag {
	scope=2;
	baseBullet = 338_RUBBER_x;
	ammo="B_338mag_RUBBER";
	initSpeed=200;
	displayName="L115 Mag Rubber";
	displayNameShort="Rubber";
};

class UKF_5Rnd_338_Mag_bt: UKF_5Rnd_338_Mag {
	scope=2;
	baseBullet = 338_BT_x;
	ammo="B_338mag_BT";
	displayName="L115 Mag BT";
	displayNameShort="BT";
};

/* M24a3 */
class M24a3_10Rnd_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="M24a3 mag (Empty)";
	descriptionShort="Caliber: M24a3 mag<br/>Rounds: 10 <br/>Used in: M24a3";
	model = "\dayz_equip\models\mag20.p3d";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";

	class ammoType
	{
		class B_338mag_ball {
			ammoMag = "M24a3_10Rnd_Mag";
		};
		class B_338mag_HP {
			ammoMag = "M24a3_10Rnd_Mag_hp";
		};
		class B_338mag_TRACER {
			ammoMag = "M24a3_10Rnd_Mag_tracer";
		};
		class B_338mag_RUBBER {
			ammoMag = "M24a3_10Rnd_Mag_rubber";
		};
		class B_338mag_BT {
			ammoMag = "M24a3_10Rnd_Mag_bt";
		};
	};
};

class M24a3_10Rnd_Mag: CA_Magazine
{
	scope=2;
	displayName="M24a3 Mag";
	model = "\dayz_equip\models\mag20.p3d";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	descriptionShort="Caliber: .338 Lapua Magnum<br/>Rounds: 10 <br/>Used in: M24a3";
	ammo="B_338mag_ball";
	initSpeed=936;
	count=10;
	baseBullet = 338_x;

	LOAD_AMMO

	emptyMag = "M24a3_10Rnd_Mag_Empty";
};

class M24a3_10Rnd_Mag_hp: M24a3_10Rnd_Mag {
	scope=2;
	baseBullet = 338_HP_x;
	ammo="B_338mag_HP";
	displayName="M24a3 Mag HP";
	displayNameShort="HP";
};

class M24a3_10Rnd_Mag_tracer: M24a3_10Rnd_Mag {
	scope=2;
	baseBullet = 338_Tracer_x;
	tracersevery = 1;
	ammo="B_338mag_TRACER";
	displayName="M24a3 Mag Tracer";
	displayNameShort="Tracer";
};

class M24a3_10Rnd_Mag_rubber: M24a3_10Rnd_Mag {
	scope=2;
	baseBullet = 338_RUBBER_x;
	ammo="B_338mag_RUBBER";
	initSpeed=200;
	displayName="M24a3 Mag Rubber";
	displayNameShort="Rubber";
};

class M24a3_10Rnd_Mag_bt: M24a3_10Rnd_Mag {
	scope=2;
	baseBullet = 338_BT_x;
	ammo="B_338mag_BT";
	displayName="M24a3 Mag BT";
	displayNameShort="BT";
};