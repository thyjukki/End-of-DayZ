
/* Desert Eagle */

class RH_7Rnd_50_AE_Empty: emptiedMagazine
{
	scope=2;
	displayName="Desert Eagle Mag (Empty)";
	picture="\RH_de\inv\m_de.paa";
	model="\RH_de\mags\mag_de.p3d";
	descriptionShort="Caliber: .50 AE <br/>Rounds: 7 <br/>Used in: Desert Eagle";
	type=16;
	class ammoType
	{
		class B_50_AE_Ball {
			ammoMag = "RH_7Rnd_50_AE";
		};
		class B_50_AE_HP {
			ammoMag = "RH_7Rnd_50_AE_hp";
		};
		class B_50_AE_TRACER {
			ammoMag = "RH_7Rnd_50_AE_tracer";
		};
		class B_50_AE_RUBBER {
			ammoMag = "RH_7Rnd_50_AE_rubber";
		};
		class B_50_AE_BT {
			ammoMag = "RH_7Rnd_50_AE_bt";
		};
	};
};


class RH_7Rnd_50_AE: CA_Magazine
{
	scope=2;
	displayName="Desert Eagle Mag";
	picture="\RH_de\inv\m_de.paa";
	model="\RH_de\mags\mag_de.p3d";
	descriptionShort="Caliber: .50 AE <br/>Rounds: 7 <br/>Used in: Desert Eagle";
	type=16;
	ammo="B_50_AE_Ball";
	count=7;
	initSpeed=421;
	baseBullet = 50_AE_x;
	LOAD_AMMO

	emptyMag = "RH_7Rnd_50_AE_Empty";
};

class RH_7Rnd_50_AE_hp: RH_7Rnd_50_AE {
	scope=2;
	baseBullet = 50_AE_HP_x;
	ammo="B_50_AE_HP";
	displayName="Desert Eagle HP Mag";
	displayNameShort="HP";
};

class RH_7Rnd_50_AE_tracer: RH_7Rnd_50_AE {
	scope=2;
	baseBullet = 50_AE_Tracer_x;
	ammo="B_50_AE_TRACER";
	tracersevery = 1;
	displayName="Desert Eagle Tracer Mag";
	displayNameShort="Tracer";
};

class RH_7Rnd_50_AE_rubber: RH_7Rnd_50_AE {
	scope=2;
	baseBullet = 50_AE_RUBBER_x;
	initSpeed=200;
	ammo="B_50_AE_RUBBER";
	displayName="Desert Eagle Rubber Mag";
	displayNameShort="Rubber";
};

class RH_7Rnd_50_AE_bt: RH_7Rnd_50_AE {
	scope=2;
	baseBullet = 50_AE_BT_x;
	ammo="B_50_AE_BT";
	displayName="Desert Eagle BT Mag";
	displayNameShort="BT";
};