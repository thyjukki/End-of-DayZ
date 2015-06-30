class 9x19_x : baseBullet {
	scope = public;
	displayName = "9x19 (x1)";
	ammo = "B_9x19_Ball";
	bulletCount = 1;
	baseName = "9x19_x";
	baseDesc = "9x19";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x19 rounds";
	initSpeed=400;
	
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

class 9x19_x1 : 9x19_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
};

class 9x19_x2 : 9x19_x {
	scope = public;
	displayName = "9x19 (x2)";
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
			"9x19_x1",
			"9x19_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x3 : 9x19_x {
	scope = public;
	displayName = "9x19 (x3)";
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
			"9x19_x1",
			"9x19_x1",
			"9x19_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x4 : 9x19_x {
	scope = public;
	displayName = "9x19 (x4)";
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
			"9x19_x1",
			"9x19_x1",
			"9x19_x1",
			"9x19_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x5 : 9x19_x {
	scope = public;
	displayName = "9x19 (x5)";
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
			"9x19_x1",
			"9x19_x1",
			"9x19_x1",
			"9x19_x1",
			"9x19_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x6 : 9x19_x {
	scope = public;
	displayName = "9x19 (x6)";
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
			"9x19_x1",
			"9x19_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x7 : 9x19_x {
	scope = public;
	displayName = "9x19 (x7)";
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
			"9x19_x1",
			"9x19_x1",
			"9x19_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x8 : 9x19_x {
	scope = public;
	displayName = "9x19 (x8)";
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
			"9x19_x1",
			"9x19_x1",
			"9x19_x1",
			"9x19_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x9 : 9x19_x {
	scope = public;
	displayName = "9x19 (x9)";
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
			"9x19_x1",
			"9x19_x1",
			"9x19_x1",
			"9x19_x1",
			"9x19_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x10 : 9x19_x {
	scope = public;
	displayName = "9x19 (x10)";
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
			"9x19_x5",
			"9x19_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x20 : 9x19_x {
	scope = public;
	displayName = "9x19 (x20)";
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
			"9x19_x10",
			"9x19_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x30 : 9x19_x {
	scope = public;
	displayName = "9x19 (x30)";
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
			"9x19_x20",
			"9x19_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x40 : 9x19_x {
	scope = public;
	displayName = "9x19 (x40)";
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
			"9x19_x30",
			"9x19_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x50 : 9x19_x {
	scope = public;
	displayName = "9x19 (x50)";
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
			"9x19_x40",
			"9x19_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_x100 : 9x19_x {
	scope = public;
	displayName = "9x19 (x100)";
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
			"9x19_x50",
			"9x19_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x1 : 9x19_x {
	scope = public;
	displayName = "9x19 SD (x1)";
	ammo = "B_9x19_SD";
	bulletCount = 1;
	baseName = "9x19_SD_x";
	baseDesc = "9x19 SD";
	initSpeed=320;
	picture = "\dayz_equip\textures\equip_sd.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x19 SD rounds";
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

class 9x19_SD_x2 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x2)";
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
			"9x19_SD_x1",
			"9x19_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x3 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x3)";
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
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x4 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x4)";
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
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x5 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x5)";
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
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x6 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x6)";
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
			"9x19_SD_x1",
			"9x19_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x7 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x7)";
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
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x8 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x8)";
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
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x9 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x9)";
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
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x1",
			"9x19_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x10 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x10)";
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
			"9x19_SD_x5",
			"9x19_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x20 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x20)";
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
			"9x19_SD_x10",
			"9x19_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x30 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x30)";
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
			"9x19_SD_x20",
			"9x19_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x40 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x40)";
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
			"9x19_SD_x30",
			"9x19_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x50 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x50)";
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
			"9x19_SD_x40",
			"9x19_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_SD_x100 : 9x19_SD_x1 {
	scope = public;
	displayName = "9x19 SD (x100)";
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
			"9x19_SD_x50",
			"9x19_SD_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x : 9x19_x {
	scope = public;
	displayName = "9x19 HP (x1)";
	ammo = "B_9x19_HP";
	bulletCount = 1;
	baseName = "9x19_HP_x";
	baseDesc = "9x19 Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x19 Hollow Point rounds";
	
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

class 9x19_HP_x1 : 9x19_HP_x {
	scope = public;
	bulletCount = 1;
	count=1;
	initSpeed=320;
	displayNameShort="HP";
};

class 9x19_HP_x2 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x2)";
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
			"9x19_HP_x1",
			"9x19_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x3 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x3)";
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
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x4 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x4)";
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
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x5 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x5)";
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
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x6 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x6)";
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
			"9x19_HP_x1",
			"9x19_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x7 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x7)";
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
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x8 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x8)";
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
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x9 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x9)";
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
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x1",
			"9x19_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x10 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x10)";
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
			"9x19_HP_x5",
			"9x19_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x20 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x20)";
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
			"9x19_HP_x10",
			"9x19_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x30 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x30)";
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
			"9x19_HP_x20",
			"9x19_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x40 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x40)";
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
			"9x19_HP_x30",
			"9x19_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x50 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x50)";
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
			"9x19_HP_x40",
			"9x19_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_HP_x100 : 9x19_HP_x {
	scope = public;
	displayName = "9x19 HP (x100)";
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
			"9x19_HP_x50",
			"9x19_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x1 : 9x19_x {
	scope = public;
	displayName = "9x19 Tracer (x1)";
	ammo = "B_9x19_TRACER";
	bulletCount = 1;
	baseName = "9x19_TRACER_x";
	baseDesc = "9x19 Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x19 Tracer rounds";
	displayNameShort="TRACER";
	
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

class 9x19_TRACER_x2 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x2)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x3 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x3)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x4 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x4)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x5 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x5)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x6 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x6)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x7 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x7)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x8 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x8)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x9 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x9)";
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
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x1",
			"9x19_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x10 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x10)";
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
			"9x19_TRACER_x5",
			"9x19_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x20 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x20)";
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
			"9x19_TRACER_x10",
			"9x19_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x30 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x30)";
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
			"9x19_TRACER_x20",
			"9x19_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x40 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x40)";
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
			"9x19_TRACER_x30",
			"9x19_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x50 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x50)";
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
			"9x19_TRACER_x40",
			"9x19_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_TRACER_x100 : 9x19_TRACER_x1{
	scope = public;
	displayName = "9x19 Tracer (x§00)";
	bulletCount = §00;
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x50...";
			script = "spawn player_splitAmmo;";
			out[] = {
			"9x19_TRACER_x50",
			"9x19_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x1 : 9x19_x {
	scope = public;
	displayName = "9x19 Rubber (x1)";
	ammo = "B_9x19_RUBBER";
	initSpeed=200;
	bulletCount = 1;
	baseName = "9x19_RUBBER_x";
	baseDesc = "9x19 Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x19 Rubber rounds";
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

class 9x19_RUBBER_x2 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x2)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x3 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x3)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x4 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x4)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x5 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x5)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x6 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x6)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x7 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x7)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x8 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x8)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x9 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x9)";
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
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x1",
			"9x19_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x10 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x10)";
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
			"9x19_RUBBER_x5",
			"9x19_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x20 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x20)";
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
			"9x19_RUBBER_x10",
			"9x19_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x30 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x30)";
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
			"9x19_RUBBER_x20",
			"9x19_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x40 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x40)";
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
			"9x19_RUBBER_x30",
			"9x19_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x50 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x50)";
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
			"9x19_RUBBER_x40",
			"9x19_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_RUBBER_x100 : 9x19_RUBBER_x1 {
	scope = public;
	displayName = "9x19 Rubber (x100)";
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
			"9x19_RUBBER_x50",
			"9x19_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x1 : 9x19_x {
	scope = public;
	displayName = "9x19 Ballistic Tip (x1)";
	ammo = "B_9x19_BT";
	bulletCount = 1;
	baseName = "9x19_BT_x";
	baseDesc = "9x19 Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 9x19 Ballistic Tip rounds";
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

class 9x19_BT_x2 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x2)";
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
			"9x19_BT_x1",
			"9x19_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x3 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x3)";
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
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x4 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x4)";
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
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x5 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x5)";
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
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x6 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x6)";
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
			"9x19_BT_x1",
			"9x19_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x7 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x7)";
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
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x8 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x8)";
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
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x9 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x9)";
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
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x1",
			"9x19_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x10 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x10)";
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
			"9x19_BT_x5",
			"9x19_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x20 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x20)";
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
			"9x19_BT_x10",
			"9x19_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x30 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x30)";
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
			"9x19_BT_x20",
			"9x19_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x40 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x40)";
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
			"9x19_BT_x30",
			"9x19_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x50 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x50)";
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
			"9x19_BT_x40",
			"9x19_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 9x19_BT_x100 : 9x19_BT_x1 {
	scope = public;
	displayName = "9x19 Ballistic Tip (x100)";
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
			"9x19_BT_x50",
			"9x19_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};