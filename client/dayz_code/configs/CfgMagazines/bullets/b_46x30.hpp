class 46x30_x1 : baseBullet {
	scope = public;
	displayName = "46x30 (x1)";
	ammo = "C1987_B_46x30_Ball";
	bulletCount = 1;
	baseName = "46x30_x";
	baseDesc = "46x30";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 46x30 rounds";
	
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

class 46x30_x2 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x2)";
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
			"46x30_x1",
			"46x30_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x3 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x3)";
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
			"46x30_x1",
			"46x30_x1",
			"46x30_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x4 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x4)";
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
			"46x30_x1",
			"46x30_x1",
			"46x30_x1",
			"46x30_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x5 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x5)";
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
			"46x30_x1",
			"46x30_x1",
			"46x30_x1",
			"46x30_x1",
			"46x30_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x6 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x6)";
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
			"46x30_x1",
			"46x30_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x7 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x7)";
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
			"46x30_x1",
			"46x30_x1",
			"46x30_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x8 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x8)";
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
			"46x30_x1",
			"46x30_x1",
			"46x30_x1",
			"46x30_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x9 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x9)";
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
			"46x30_x1",
			"46x30_x1",
			"46x30_x1",
			"46x30_x1",
			"46x30_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x10 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x10)";
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
			"46x30_x5",
			"46x30_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x20 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x20)";
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
			"46x30_x10",
			"46x30_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x30 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x30)";
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
			"46x30_x20",
			"46x30_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x40 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x40)";
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
			"46x30_x30",
			"46x30_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_x50 : 46x30_x1 {
	scope = public;
	displayName = "46x30 (x50)";
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
			"46x30_x40",
			"46x30_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x1 : 46x30_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x1)";
	ammo = "C1987_B_46x30_sd_Ball";
	bulletCount = 1;
	baseName = "46x30_SD_x";
	baseDesc = "46x30 Sub Sonic";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 46x30 Sub Sonic rounds";
	
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

class 46x30_SD_x2 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x2)";
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
			"46x30_SD_x1",
			"46x30_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x3 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x3)";
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
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x4 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x4)";
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
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x5 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x5)";
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
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x6 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x6)";
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
			"46x30_SD_x1",
			"46x30_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x7 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x7)";
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
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x8 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x8)";
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
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x9 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x9)";
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
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x1",
			"46x30_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x10 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x10)";
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
			"46x30_SD_x5",
			"46x30_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x20 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x20)";
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
			"46x30_SD_x10",
			"46x30_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x30 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x30)";
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
			"46x30_SD_x20",
			"46x30_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x40 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x40)";
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
			"46x30_SD_x30",
			"46x30_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x50 : 46x30_SD_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x50)";
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
			"46x30_SD_x40",
			"46x30_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x1 : 46x30_x1 {
	scope = public;
	displayName = "46x30 HP (x1)";
	ammo = "B_46x30_HP";
	bulletCount = 1;
	baseName = "46x30_HP_x";
	baseDesc = "46x30 Hollow Point";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 46x30 Hollow Point rounds";
	
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

class 46x30_HP_x2 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x2)";
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
			"46x30_HP_x1",
			"46x30_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x3 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x3)";
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
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x4 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x4)";
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
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x5 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x5)";
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
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x6 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x6)";
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
			"46x30_HP_x1",
			"46x30_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x7 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x7)";
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
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x8 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x8)";
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
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x9 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x9)";
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
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x1",
			"46x30_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x10 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x10)";
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
			"46x30_HP_x5",
			"46x30_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x20 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x20)";
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
			"46x30_HP_x10",
			"46x30_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x30 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x30)";
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
			"46x30_HP_x20",
			"46x30_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x40 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x40)";
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
			"46x30_HP_x30",
			"46x30_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x50 : 46x30_HP_x1 {
	scope = public;
	displayName = "46x30 HP (x50)";
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
			"46x30_HP_x40",
			"46x30_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x1 : 46x30_x1 {
	scope = public;
	displayName = "46x30 Tracer (x1)";
	ammo = "B_46x30_TRACER";
	bulletCount = 1;
	baseName = "46x30_TRACER_x";
	baseDesc = "46x30 Tracer";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 46x30 Tracer rounds";
	
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

class 46x30_TRACER_x2 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x2)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x3 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x3)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x4 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x4)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x5 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x5)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x6 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x6)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x7 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x7)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x8 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x8)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x9 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x9)";
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
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x1",
			"46x30_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x10 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x10)";
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
			"46x30_TRACER_x5",
			"46x30_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x20 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x20)";
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
			"46x30_TRACER_x10",
			"46x30_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x30 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x30)";
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
			"46x30_TRACER_x20",
			"46x30_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x40 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x40)";
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
			"46x30_TRACER_x30",
			"46x30_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x50 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "46x30 Tracer (x50)";
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
			"46x30_TRACER_x40",
			"46x30_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x1 : 46x30_x1 {
	scope = public;
	displayName = "46x30 Rubber (x1)";
	ammo = "B_46x30_RUBBER";
	bulletCount = 1;
	baseName = "46x30_RUBBER_x";
	baseDesc = "46x30 Rubber";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 46x30 Rubber rounds";
	
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

class 46x30_RUBBER_x2 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x2)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x3 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x3)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x4 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x4)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x5 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x5)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x6 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x6)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x7 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x7)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x8 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x8)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x9 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x9)";
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
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x1",
			"46x30_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x10 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x10)";
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
			"46x30_RUBBER_x5",
			"46x30_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x20 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x20)";
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
			"46x30_RUBBER_x10",
			"46x30_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x30 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x30)";
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
			"46x30_RUBBER_x20",
			"46x30_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x40 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x40)";
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
			"46x30_RUBBER_x30",
			"46x30_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x50 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "46x30 Rubber (x50)";
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
			"46x30_RUBBER_x40",
			"46x30_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x1 : 46x30_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x1)";
	ammo = "B_46x30_BT";
	bulletCount = 1;
	baseName = "46x30_BT_x";
	baseDesc = "46x30 Ballistic Tip";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 46x30 Ballistic Tip rounds";
	
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

class 46x30_BT_x2 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x2)";
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
			"46x30_BT_x1",
			"46x30_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x3 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x3)";
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
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x4 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x4)";
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
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x5 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x5)";
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
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x6 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x6)";
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
			"46x30_BT_x1",
			"46x30_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x7 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x7)";
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
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x8 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x8)";
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
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x9 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x9)";
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
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x1",
			"46x30_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x10 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x10)";
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
			"46x30_BT_x5",
			"46x30_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x20 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x20)";
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
			"46x30_BT_x10",
			"46x30_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x30 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x30)";
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
			"46x30_BT_x20",
			"46x30_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x40 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x40)";
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
			"46x30_BT_x30",
			"46x30_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x50 : 46x30_BT_x1 {
	scope = public;
	displayName = "46x30 Ballistic Tip (x50)";
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
			"46x30_BT_x40",
			"46x30_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};