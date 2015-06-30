class 9x18_x : baseBullet {
	scope = public;
	displayName = "9x18 mm(x1)";
	ammo = "B_9x18_Ball";
	bulletCount = 1;
	baseName = "9x18_x";
	baseDesc = "9x18";
	initSpeed=350;
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x18 mm rounds";
	
	class ItemActions {
		class Stack {
			text = "Stack...";
			script = "spawn player_combineAmmo;";
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x1 : 9x18_x {
	scope = public;
	ammo = "B_9x18_Ball";
	bulletCount = 1;
	count=1;
	initSpeed=350;
};

class 9x18_x2 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x2)";
	bulletCount = 2;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x3 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x3)";
	bulletCount = 3;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1",
			"9x18_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x4 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x4)";
	bulletCount = 4;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1",
			"9x18_x1",
			"9x18_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x5 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x5)";
	bulletCount = 5;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1",
			"9x18_x1",
			"9x18_x1",
			"9x18_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x6 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x6)";
	bulletCount = 6;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x7 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x7)";
	bulletCount = 7;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1",
			"9x18_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x8 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x8)";
	bulletCount = 8;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1",
			"9x18_x1",
			"9x18_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x9 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x9)";
	bulletCount = 9;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x9...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x1",
			"9x18_x1",
			"9x18_x1",
			"9x18_x1",
			"9x18_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x10 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x10)";
	bulletCount = 10;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x5",
			"9x18_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x20 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x20)";
	bulletCount = 20;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x10",
			"9x18_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x30 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x30)";
	bulletCount = 30;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x20",
			"9x18_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x40 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x40)";
	bulletCount = 40;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x30",
			"9x18_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x50 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x50)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x40",
			"9x18_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_x100 : 9x18_x {
	scope = public;
	displayName = "9x18 mm(x100)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x50",
			"9x18_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x : 9x18_x {
	scope = public;
	displayName = "9x18 mm SD (x1)";
	ammo = "B_9x18_SD";
	bulletCount = 1;
	initSpeed=310;
	baseName = "9x18_SD_x";
	baseDesc = "9x18 mmSub Sonic";
	picture = "\dayz_equip\textures\equip_sd.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x18 mm Sub Sonic rounds";
	
	class ItemActions {
		class Stack {
			text = "Stack...";
			script = "spawn player_combineAmmo;";
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x1 : 9x18_SD_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
	displayNameShort="SD";
};

class 9x18_SD_x2 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x2)";
	bulletCount = 2;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x3 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x3)";
	bulletCount = 3;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x4 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x4)";
	bulletCount = 4;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x5 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x5)";
	bulletCount = 5;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x6 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x6)";
	bulletCount = 6;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x7 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x7)";
	bulletCount = 7;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x8 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x8)";
	bulletCount = 8;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x9 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x9)";
	bulletCount = 9;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x9...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x1",
			"9x18_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x10 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x10)";
	bulletCount = 10;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x5",
			"9x18_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x20 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x20)";
	bulletCount = 20;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x10",
			"9x18_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x30 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x30)";
	bulletCount = 30;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x20",
			"9x18_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x40 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x40)";
	bulletCount = 40;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x30",
			"9x18_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x50 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm SD (x50)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_SD_x40",
			"9x18_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_SD_x100 : 9x18_SD_x {
	scope = public;
	displayName = "9x18 mm(x100)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_x50",
			"9x18_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x : 9x18_x {
	scope = public;
	displayName = "9x18 mm HP (x1)";
	ammo = "B_9x18_HP";
	bulletCount = 1;
	baseName = "9x18_HP_x";
	baseDesc = "9x18 mm Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x18 mm Hollow Point rounds";
	
	class ItemActions {
		class Stack {
			text = "Stack...";
			script = "spawn player_combineAmmo;";
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x1 : 9x18_HP_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
	displayNameShort="HP";
};

class 9x18_HP_x2 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x2)";
	bulletCount = 2;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x3 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x3)";
	bulletCount = 3;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x4 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x4)";
	bulletCount = 4;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x5 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x5)";
	bulletCount = 5;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x6 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x6)";
	bulletCount = 6;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x7 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x7)";
	bulletCount = 7;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x8 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x8)";
	bulletCount = 8;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x9 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x9)";
	bulletCount = 9;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x9...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x1",
			"9x18_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x10 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x10)";
	bulletCount = 10;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x5",
			"9x18_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x20 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x20)";
	bulletCount = 20;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x10",
			"9x18_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x30 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x30)";
	bulletCount = 30;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x20",
			"9x18_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x40 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x40)";
	bulletCount = 40;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x30",
			"9x18_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x50 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x50)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x40",
			"9x18_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_HP_x100 : 9x18_HP_x {
	scope = public;
	displayName = "9x18 mm HP (x100)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_HP_x50",
			"9x18_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x : 9x18_x {
	scope = public;
	displayName = "9x18 mm Tracer (x1)";
	ammo = "B_9x18_TRACER";
	bulletCount = 1;
	baseName = "9x18_TRACER_x";
	baseDesc = "9x18 mmTracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x18 mm Tracer rounds";
	
	class ItemActions {
		class Stack {
			text = "Stack...";
			script = "spawn player_combineAmmo;";
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x1 : 9x18_TRACER_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
	displayNameShort="TRACER";
};

class 9x18_TRACER_x2 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mmTracer (x2)";
	bulletCount = 2;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x3 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mmTracer (x3)";
	bulletCount = 3;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x4 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mmTracer (x4)";
	bulletCount = 4;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x5 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mmTracer (x5)";
	bulletCount = 5;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x6 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mmTracer (x6)";
	bulletCount = 6;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x7 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x7)";
	bulletCount = 7;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x8 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x8)";
	bulletCount = 8;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x9 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x9)";
	bulletCount = 9;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x9...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x1",
			"9x18_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x10 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x10)";
	bulletCount = 10;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x5",
			"9x18_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x20 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x20)";
	bulletCount = 20;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x10",
			"9x18_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x30 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x30)";
	bulletCount = 30;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x20",
			"9x18_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x40 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x40)";
	bulletCount = 40;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x30",
			"9x18_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x50 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x50)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x40",
			"9x18_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_TRACER_x100 : 9x18_TRACER_x {
	scope = public;
	displayName = "9x18 mm Tracer (x100)";
	bulletCount = 100;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_TRACER_x50",
			"9x18_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x : 9x18_x {
	scope = public;
	displayName = "9x18 mm Rubber (x1)";
	ammo = "B_9x18_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "9x18_RUBBER_x";
	baseDesc = "9x18 mmRubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x18 mm Rubber rounds";
	
	class ItemActions {
		class Stack {
			text = "Stack...";
			script = "spawn player_combineAmmo;";
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x1 : 9x18_RUBBER_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
	displayNameShort="RUBBER";
};

class 9x18_RUBBER_x2 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x2)";
	bulletCount = 2;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x3 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x3)";
	bulletCount = 3;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x4 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x4)";
	bulletCount = 4;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x5 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mmRubber (x5)";
	bulletCount = 5;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x6 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x6)";
	bulletCount = 6;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x7 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x7)";
	bulletCount = 7;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x8 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x8)";
	bulletCount = 8;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x9 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x9)";
	bulletCount = 9;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x9...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x1",
			"9x18_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x10 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x10)";
	bulletCount = 10;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x5",
			"9x18_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x20 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x20)";
	bulletCount = 20;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x10",
			"9x18_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x30 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x30)";
	bulletCount = 30;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x20",
			"9x18_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x40 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x40)";
	bulletCount = 40;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x30",
			"9x18_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x50 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x50)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x40",
			"9x18_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_RUBBER_x100 : 9x18_RUBBER_x {
	scope = public;
	displayName = "9x18 mm Rubber (x100)";
	bulletCount = 100;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_RUBBER_x50",
			"9x18_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x : 9x18_x {
	scope = public;
	displayName = "9x18 mm BT (x1)";
	ammo = "B_9x18_BT";
	bulletCount = 1;
	baseName = "9x18_BT_x";
	baseDesc = "9x18 mm BT";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x18 mm Ballistic Tip rounds";
	
	class ItemActions {
		class Stack {
			text = "Stack...";
			script = "spawn player_combineAmmo;";
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x1 : 9x18_BT_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
	displayNameShort="BT";
};

class 9x18_BT_x2 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x2)";
	bulletCount = 2;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x3 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x3)";
	bulletCount = 3;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x4 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x4)";
	bulletCount = 4;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x5 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x5)";
	bulletCount = 5;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x6 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x6)";
	bulletCount = 6;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x7 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x7)";
	bulletCount = 7;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x8 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x8)";
	bulletCount = 8;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x9 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x9)";
	bulletCount = 9;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x9...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x1",
			"9x18_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x10 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x10)";
	bulletCount = 10;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x5...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x5",
			"9x18_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x20 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x20)";
	bulletCount = 20;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x10",
			"9x18_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x30 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x30)";
	bulletCount = 30;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x20",
			"9x18_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x40 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x40)";
	bulletCount = 40;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x30",
			"9x18_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x50 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x50)";
	bulletCount = 50;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x40",
			"9x18_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x18_BT_x100 : 9x18_BT_x {
	scope = public;
	displayName = "9x18 mm BT (x100)";
	bulletCount = 100;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x18_BT_x50",
			"9x18_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};