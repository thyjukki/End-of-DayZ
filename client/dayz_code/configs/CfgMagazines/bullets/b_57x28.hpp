class 57x28_x1 : baseBullet {
	scope = public;
	displayName = "5.7x28 (x1)";
	ammo = "B_57x28_Ball";
	bulletCount = 1;
	baseName = "57x28_x";
	baseDesc = "5.7x28";
	initSpeed=400;
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 57x28 rounds";
	
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

class 57x28_x2 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x2)";
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
			"57x28_x1",
			"57x28_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x3 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x3)";
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
			"57x28_x1",
			"57x28_x1",
			"57x28_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x4 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x4)";
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
			"57x28_x1",
			"57x28_x1",
			"57x28_x1",
			"57x28_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x5 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x5)";
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
			"57x28_x1",
			"57x28_x1",
			"57x28_x1",
			"57x28_x1",
			"57x28_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x6 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x6)";
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
			"57x28_x1",
			"57x28_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x7 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x7)";
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
			"57x28_x1",
			"57x28_x1",
			"57x28_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x8 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x8)";
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
			"57x28_x1",
			"57x28_x1",
			"57x28_x1",
			"57x28_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x9 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x9)";
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
			"57x28_x1",
			"57x28_x1",
			"57x28_x1",
			"57x28_x1",
			"57x28_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x10 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x10)";
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
			"57x28_x5",
			"57x28_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x20 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x20)";
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
			"57x28_x10",
			"57x28_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x30 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x30)";
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
			"57x28_x20",
			"57x28_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x40 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x40)";
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
			"57x28_x30",
			"57x28_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x50 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x50)";
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
			"57x28_x40",
			"57x28_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_x100 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 (x100)";
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
			"57x28_x50",
			"57x28_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x1 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x1)";
	ammo = "B_57x28_SD";
	initSpeed=320;
	bulletCount = 1;
	baseName = "57x28_SD_x";
	baseDesc = "5.7x28 Sub Sonic";
	picture = "\dayz_equip\textures\equip_sd.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 57x28 Sub Sonic rounds";
	displayNameShort="SD";
	
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

class 57x28_SD_x2 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x2)";
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
			"57x28_SD_x1",
			"57x28_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x3 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x3)";
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
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x4 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x4)";
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
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x5 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x5)";
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
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x6 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x6)";
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
			"57x28_SD_x1",
			"57x28_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x7 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x7)";
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
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x8 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x8)";
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
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x9 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x9)";
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
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x1",
			"57x28_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x10 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x10)";
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
			"57x28_SD_x5",
			"57x28_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x20 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x20)";
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
			"57x28_SD_x10",
			"57x28_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x30 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x30)";
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
			"57x28_SD_x20",
			"57x28_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x40 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x40)";
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
			"57x28_SD_x30",
			"57x28_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x50 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x50)";
	bulletCount = 60;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"57x28_SD_x40",
			"57x28_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_SD_x100 : 57x28_SD_x1 {
	scope = public;
	displayName = "5.7x28 Sub Sonic (x100)";
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
			"57x28_SD_x50",
			"57x28_SD_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x1 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 HP (x1)";
	ammo = "B_57x28_HP";
	bulletCount = 1;
	baseName = "57x28_HP_x";
	baseDesc = "5.7x28 Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 57x28 Hollow Point rounds";
	displayNameShort="HP";
	
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

class 57x28_HP_x2 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x2)";
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
			"57x28_HP_x1",
			"57x28_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x3 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x3)";
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
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x4 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x4)";
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
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x5 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x5)";
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
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x6 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x6)";
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
			"57x28_HP_x1",
			"57x28_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x7 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x7)";
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
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x8 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x8)";
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
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x9 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x9)";
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
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x1",
			"57x28_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x10 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x10)";
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
			"57x28_HP_x5",
			"57x28_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x20 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x20)";
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
			"57x28_HP_x10",
			"57x28_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x30 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x30)";
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
			"57x28_HP_x20",
			"57x28_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x40 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x40)";
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
			"57x28_HP_x30",
			"57x28_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x50 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x50)";
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
			"57x28_HP_x40",
			"57x28_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_HP_x100 : 57x28_HP_x1 {
	scope = public;
	displayName = "5.7x28 HP (x100)";
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
			"57x28_HP_x50",
			"57x28_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x1 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x1)";
	ammo = "B_57x28_TRACER";
	bulletCount = 1;
	baseName = "57x28_TRACER_x";
	baseDesc = "5.7x28 Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 57x28 Tracer rounds";
	displayNameShort="Tracer";
	
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

class 57x28_TRACER_x2 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x2)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x3 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x3)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x4 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x4)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x5 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x5)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x6 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x6)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x7 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x7)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x8 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x8)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x9 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x9)";
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
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x1",
			"57x28_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x10 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x10)";
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
			"57x28_TRACER_x5",
			"57x28_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x20 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x20)";
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
			"57x28_TRACER_x10",
			"57x28_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x30 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x30)";
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
			"57x28_TRACER_x20",
			"57x28_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x40 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x40)";
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
			"57x28_TRACER_x30",
			"57x28_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x50 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x50)";
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
			"57x28_TRACER_x40",
			"57x28_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_TRACER_x100 : 57x28_TRACER_x1 {
	scope = public;
	displayName = "5.7x28 Tracer (x100)";
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
			"57x28_TRACER_x50",
			"57x28_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x1 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x1)";
	ammo = "B_57x28_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "57x28_RUBBER_x";
	baseDesc = "5.7x28 Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 57x28 Rubber rounds";
	displayNameShort="Rubber";
	
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

class 57x28_RUBBER_x2 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x2)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x3 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x3)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x4 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x4)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x5 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x5)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x6 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x6)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x7 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x7)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x8 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x8)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x9 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x9)";
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
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x1",
			"57x28_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x10 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x10)";
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
			"57x28_RUBBER_x5",
			"57x28_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x20 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x20)";
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
			"57x28_RUBBER_x10",
			"57x28_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x30 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x30)";
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
			"57x28_RUBBER_x20",
			"57x28_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x40 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x40)";
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
			"57x28_RUBBER_x30",
			"57x28_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x50 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x50)";
	bulletCount = 100;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"57x28_RUBBER_x40",
			"57x28_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_RUBBER_x100 : 57x28_RUBBER_x1 {
	scope = public;
	displayName = "5.7x28 Rubber (x100)";
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
			"57x28_RUBBER_x50",
			"57x28_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x1 : 57x28_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x1)";
	ammo = "B_57x28_BT";
	bulletCount = 1;
	baseName = "57x28_BT_x";
	baseDesc = "5.7x28 Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 57x28 Ballistic Tip rounds";
	displayNameShort="BT";
	
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

class 57x28_BT_x2 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x2)";
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
			"57x28_BT_x1",
			"57x28_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x3 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x3)";
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
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x4 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x4)";
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
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x5 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x5)";
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
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x6 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x6)";
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
			"57x28_BT_x1",
			"57x28_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x7 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x7)";
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
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x8 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x8)";
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
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x9 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x9)";
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
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x1",
			"57x28_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x10 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x10)";
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
			"57x28_BT_x5",
			"57x28_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x20 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x20)";
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
			"57x28_BT_x10",
			"57x28_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x30 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x30)";
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
			"57x28_BT_x20",
			"57x28_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x40 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x40)";
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
			"57x28_BT_x30",
			"57x28_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 57x28_BT_x100 : 57x28_BT_x1 {
	scope = public;
	displayName = "5.7x28 Ballistic Tip (x100)";
	bulletCount = 100;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x10...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"57x28_BT_x40",
			"57x28_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};