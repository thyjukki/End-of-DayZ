
class RH_6Rnd_44_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName=".44 Speed Loader (Empty)";
	picture="\RH_de\inv\m_44m.paa";
	type=16;
	class ammoType
	{
		class B_44mag_ball {
			ammoMag = "RH_6Rnd_44_Mag";
		};
		class B_44mag_HP {
			ammoMag = "RH_6Rnd_44_Mag_hp";
		};
		class B_44mag_TRACER {
			ammoMag = "RH_6Rnd_44_Mag_tracer";
		};
		class B_44mag_RUBBER {
			ammoMag = "RH_6Rnd_44_Mag_rubber";
		};
		class B_44mag_BT {
			ammoMag = "RH_6Rnd_44_Mag_bt";
		};
	};
};

class RH_6Rnd_44_Mag: CA_Magazine
{
	scope=2;
	displayName=".44 SL";
	picture="\RH_de\inv\m_44m.paa";
	type=16;
	ammo="B_44mag_ball";
	descriptionShort="Caliber: .44 Magnum Speedloader<br/>Rounds: 6 <br/>Used in: Colt Anaconda, Raging Bull";
	count=6;
	initSpeed=421;
	baseBullet = 44_x;

	LOAD_AMMO

	emptyMag = "RH_6Rnd_44_Mag_Empty";
};

class RH_6Rnd_44_Mag_hp: RH_6Rnd_44_Mag {
	scope=2;
	baseBullet = 44_HP_x;
	ammo="B_44mag_HP";
	displayName=".44 SL Tracer";
	displayNameShort="HP";
};

class RH_6Rnd_44_Mag_tracer: RH_6Rnd_44_Mag {
	scope=2;
	baseBullet = 44_Tracer_x;
	tracersevery = 1;
	ammo="B_44mag_TRACER";
	displayName=".44 SL Tracer";
	displayNameShort="Tracer";
};

class RH_6Rnd_44_Mag_rubber: RH_6Rnd_44_Mag {
	scope=2;
	baseBullet = 44_RUBBER_x;
	ammo="B_44mag_RUBBER";
	initSpeed=200;
	displayName=".44 SL Tracer";
	displayNameShort="Rubber";
};

class RH_6Rnd_44_Mag_bt: RH_6Rnd_44_Mag {
	scope=2;
	baseBullet = 44_BT_x;
	ammo="B_44mag_BT";
	displayName=".44 SL Tracer";
	displayNameShort="BT";
};