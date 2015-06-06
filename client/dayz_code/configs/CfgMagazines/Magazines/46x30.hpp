
/* MP7 */
class 40Rnd_46x30_mp7_Empty: emptiedMagazine
{
	scope=2;
	displayName="MP7 Long Mag (Empty)";
	descriptionshort = "Caliber: 46x30 mm<br/>Rounds: 40 <br/>Used in: MP7";
	picture="\C1987_Mp7\equip\gui_mp7_40_mag.paa";
	model="\C1987_Mp7\mp7_40_mag.p3d";
	class ammoType
	{
		class C1987_B_46x30_Ball {
			ammoMag = "40Rnd_46x30_mp7";
		};
		class C1987_B_46x30_sd_Ball {
			ammoMag = "40Rnd_46x30_sd_mp7";
		};
		class B_46x30_HP {
			ammoMag = "40Rnd_46x30_mp7_hp";
		};
		class B_46x30_TRACER {
			ammoMag = "40Rnd_46x30_mp7_tracer";
		};
		class B__RUBBER {
			ammoMag = "40Rnd_46x30_mp7_rubber";
		};
		class B_46x30_BT {
			ammoMag = "40Rnd_46x30_mp7_bt";
		};
	};
};

class 40Rnd_46x30_mp7: CA_Magazine
{
	scope=2;
	displayName="MP7 Long Mag";
	descriptionshort = "Caliber: 46x30 mm<br/>Rounds: 40 <br/>Used in: MP7";
	picture="\C1987_Mp7\equip\gui_mp7_40_mag.paa";
	model="\C1987_Mp7\mp7_40_mag.p3d";
	ammo="C1987_B_46x30_Ball";
	count=40;
	initSpeed=735;
	baseBullet = 46x30_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};

	emptyMag = "40Rnd_46x30_mp7_Empty";
};

class 40Rnd_46x30_sd_mp7: 40Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_SD_x;
	initSpeed=700;
	ammo="C1987_B_46x30_sd_Ball";
	displayName="MP7 Long SD Mag";
};

class 40Rnd_46x30_mp7_hp: 40Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_HP_x;
	ammo="B_46x30_HP";
	displayName="MP7 Long HP Mag";
};

class 40Rnd_46x30_mp7_tracer: 40Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_Tracer_x;
	ammo="B_46x30_TRACER";
	tracersevery = 1;
	displayName="MP7 Long Tracer Mag";
};

class 40Rnd_46x30_mp7_rubber: 40Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_RUBBER_x;
	initSpeed=150;
	ammo="B_46x30_RUBBER";
	displayName="MP7 Long Rubber Mag";
};

class 40Rnd_46x30_mp7_bt: 40Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_BT_x;
	ammo="B_46x30_BT";
	displayName="MP7 Long BT Mag";
};


class 20Rnd_46x30_mp7_Empty: emptiedMagazine
{
	scope=2;
	displayName="MP7 Mag (Empty)";
	descriptionshort = "Caliber: 46x30 mm<br/>Rounds: 20 <br/>Used in: MP7";
	picture="\C1987_Mp7\equip\gui_mp7_20_mag.paa";
	model="\C1987_Mp7\mp7_20_mag.p3d";
	class ammoType
	{
		class C1987_B_46x30_Ball {
			ammoMag = "20Rnd_46x30_mp7";
		};
		class C1987_B_46x30_sd_Ball {
			ammoMag = "20Rnd_46x30_sd_mp7";
		};
		class B_46x30_HP {
			ammoMag = "20Rnd_46x30_mp7_hp";
		};
		class B_46x30_TRACER {
			ammoMag = "20Rnd_46x30_mp7_tracer";
		};
		class B__RUBBER {
			ammoMag = "20Rnd_46x30_mp7_rubber";
		};
		class B_46x30_BT {
			ammoMag = "20Rnd_46x30_mp7_bt";
		};
	};
};

class 20Rnd_46x30_mp7: CA_Magazine
{
	scope=2;
	displayName="MP7 Mag";
	descriptionshort = "Caliber: 46x30 mm<br/>Rounds: 20 <br/>Used in: MP7";
	picture="\C1987_Mp7\equip\gui_mp7_20_mag.paa";
	model="\C1987_Mp7\mp7_20_mag.p3d";
	ammo="C1987_B_46x30_Ball";
	count=20;
	initSpeed=735;
	baseBullet = 46x30_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};

	emptyMag = "20Rnd_46x30_mp7_Empty";
};

class 20Rnd_46x30_sd_mp7: 20Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_SD_x;
	initSpeed=700;
	ammo="C1987_B_46x30_sd_Ball";
	displayName="MP7 SD Mag";
};

class 20Rnd_46x30_mp7_hp: 20Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_HP_x;
	ammo="B_46x30_HP";
	displayName="MP7 HP Mag";
};

class 20Rnd_46x30_mp7_tracer: 20Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_Tracer_x;
	ammo="B_46x30_TRACER";
	tracersevery = 1;
	displayName="MP7 Tracer Mag";
};

class 20Rnd_46x30_mp7_rubber: 20Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_RUBBER_x;
	initSpeed=150;
	ammo="B_46x30_RUBBER";
	displayName="MP7 Rubber Mag";
};

class 20Rnd_46x30_mp7_bt: 20Rnd_46x30_mp7 {
	scope=2;
	baseBullet = 46x30_BT_x;
	ammo="B_46x30_BT";
	displayName="MP7 BT Mag";
};