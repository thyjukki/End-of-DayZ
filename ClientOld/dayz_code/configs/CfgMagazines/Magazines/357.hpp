class RH_6Rnd_357_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName=".357 Magnum (Empty)";
	descriptionShort="Caliber: .357 Magnum Speedloader<br/>Rounds: 6 <br/>Used in: Colt Python";
	picture="\RH_de\inv\m_44m.paa";
	type=16;

	class ammoType
	{
		class B_357mag_ball {
			ammoMag = "RH_6Rnd_357_Mag";
		};
		class B_357mag_HP {
			ammoMag = "RH_6Rnd_357_Mag_hp";
		};
		class B_357mag_TRACER {
			ammoMag = "RH_6Rnd_357_Mag_tracer";
		};
		class B_357mag_RUBBER {
			ammoMag = "RH_6Rnd_357_Mag_rubber";
		};
		class B_357mag_BT {
			ammoMag = "RH_6Rnd_357_Mag_bt";
		};
	};
};

class RH_6Rnd_357_Mag: CA_Magazine
{
	scope=2;
	displayName=".357 SL";
	picture="\RH_de\inv\m_44m.paa";
	type=16;
	ammo="B_357mag_ball";
	descriptionShort="Caliber: .357 Magnum Speedloader<br/>Rounds: 6 <br/>Used in: Colt Python";
	count=6;
	initSpeed=421;
	baseBullet = 357_x;

	LOAD_AMMO

	emptyMag = "RH_6Rnd_357_Mag_Empty";
};

class RH_6Rnd_357_Mag_hp: RH_6Rnd_357_Mag {
	scope=2;
	baseBullet = 357_HP_x;
	ammo="B_357mag_HP";
	displayName=".357 SL Tracer";
	displayNameShort="HP";
};

class RH_6Rnd_357_Mag_tracer: RH_6Rnd_357_Mag {
	scope=2;
	baseBullet = 357_Tracer_x;
	tracersevery = 1;
	ammo="B_357mag_TRACER";
	displayName=".357 SL Tracer";
	displayNameShort="Tracer";
};

class RH_6Rnd_357_Mag_rubber: RH_6Rnd_357_Mag {
	scope=2;
	baseBullet = 357_RUBBER_x;
	ammo="B_357mag_RUBBER";
	initSpeed=200;
	displayName=".357 SL Tracer";
	displayNameShort="Rubber";
};

class RH_6Rnd_357_Mag_bt: RH_6Rnd_357_Mag {
	scope=2;
	baseBullet = 357_BT_x;
	ammo="B_357mag_BT";
	displayName=".357 SL Tracer";
	displayNameShort="BT";
};