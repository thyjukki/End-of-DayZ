
/* Mk2 */

class RH_10Rnd_22LR_mk2_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 22LR mm<br/>Rounds: 10 <br/>Used in: mk2";
	displayname = "MK2 Mag (Empty)";
	picture="\RH_de\inv\m_mk2.paa";
	model="\RH_de\mags\mag_mk2.p3d";
	scope = 2;
	class ammoType
	{
		class B_22LR_SD {
			ammoMag = "RH_10Rnd_22LR_mk2";
		};
		class B_22LR_HP {
			ammoMag = "RH_10Rnd_22LR_mk2_hp";
		};
		class B_22LR_TRACER {
			ammoMag = "RH_10Rnd_22LR_mk2_tracer";
		};
		class B_22LR_RUBBER {
			ammoMag = "RH_10Rnd_22LR_mk2_rubber";
		};
		class B_22LR_BT {
			ammoMag = "RH_10Rnd_22LR_mk2_bt";
		};
	};
};

class RH_10Rnd_22LR_mk2: CA_Magazine
{
	scope=2;
	descriptionshort = "Caliber: 22LR mm<br/>Rounds: 10 <br/>Used in: mk2";
	displayname = "MK2 Mag";
	picture="\RH_de\inv\m_mk2.paa";
	model="\RH_de\mags\mag_mk2.p3d";
	ammo="B_22LR_SD";
	count=10;
	initSpeed=290;
	baseBullet = 22LR_x;
	LOAD_AMMO

	emptyMag = "RH_10Rnd_22LR_mk2_Empty";
};

class RH_10Rnd_22LR_mk2_hp: RH_10Rnd_22LR_mk2 {
	scope=2;
	baseBullet = 22LR_HP_x;
	ammo="B_22LR_HP";
	displayName="MK2 HP Mag";
	displayNameShort="HP";
};

class RH_10Rnd_22LR_mk2_tracer: RH_10Rnd_22LR_mk2 {
	scope=2;
	baseBullet = 22LR_Tracer_x;
	ammo="B_22LR_TRACER";
	tracersevery = 1;
	displayName="MK2 Tracer Mag";
	displayNameShort="Tracer";
};

class RH_10Rnd_22LR_mk2_rubber: RH_10Rnd_22LR_mk2 {
	scope=2;
	baseBullet = 22LR_RUBBER_x;
	initSpeed=200;
	ammo="B_22LR_RUBBER";
	displayName="MK2 Rubber Mag";
	displayNameShort="Rubber";
};

class RH_10Rnd_22LR_mk2_bt: RH_10Rnd_22LR_mk2 {
	scope=2;
	baseBullet = 22LR_BT_x;
	ammo="B_22LR_BT";
	displayName="MK2 BT Mag";
	displayNameShort="BT";
};