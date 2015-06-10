class 9x18_x1 : baseBullet {
	scope = public;
	displayName = "9x18 mm(x1)";
	ammo = "B_9x18_Ball";
	bulletCount = 1;
	baseName = "9x18_x";
	baseDesc = "9x18";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
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

class 9x18_x2 : 9x18_x1 {
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

class 9x18_x3 : 9x18_x1 {
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

class 9x18_x4 : 9x18_x1 {
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

class 9x18_x5 : 9x18_x1 {
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

class 9x18_x6 : 9x18_x1 {
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

class 9x18_x7 : 9x18_x1 {
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

class 9x18_x8 : 9x18_x1 {
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

class 9x18_x9 : 9x18_x1 {
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

class 9x18_x10 : 9x18_x1 {
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

class 9x18_x20 : 9x18_x1 {
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

class 9x18_x30 : 9x18_x1 {
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

class 9x18_x40 : 9x18_x1 {
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

class 9x18_x50 : 9x18_x1 {
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

class 9x18_SD_x1 : 9x18_x1 {
	scope = public;
	displayName = "9x18 mm Ballistic Tip (x1)";
	ammo = "B_9x18_SD";
	bulletCount = 1;
	baseName = "9x18_SD_x";
	baseDesc = "9x18 mmSub Sonic";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
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

class 9x18_SD_x2 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x2)";
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

class 9x18_SD_x3 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x3)";
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

class 9x18_SD_x4 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x4)";
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

class 9x18_SD_x5 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x5)";
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

class 9x18_SD_x6 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x6)";
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

class 9x18_SD_x7 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x7)";
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

class 9x18_SD_x8 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x8)";
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

class 9x18_SD_x9 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x9)";
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

class 9x18_SD_x10 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x10)";
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

class 9x18_SD_x20 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x20)";
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

class 9x18_SD_x30 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x30)";
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

class 9x18_SD_x40 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x40)";
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

class 9x18_SD_x50 : 9x18_SD_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x50)";
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

class 9x18_HP_x1 : 9x18_x1 {
	scope = public;
	displayName = "9x18 mmHP (x1)";
	ammo = "B_9x18_HP";
	bulletCount = 1;
	baseName = "9x18_HP_x";
	baseDesc = "9x18 mmHollow Point";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
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

class 9x18_HP_x2 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x2)";
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

class 9x18_HP_x3 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x3)";
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

class 9x18_HP_x4 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x4)";
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

class 9x18_HP_x5 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x5)";
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

class 9x18_HP_x6 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x6)";
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

class 9x18_HP_x7 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x7)";
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

class 9x18_HP_x8 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x8)";
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

class 9x18_HP_x9 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x9)";
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

class 9x18_HP_x10 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x10)";
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

class 9x18_HP_x20 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x20)";
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

class 9x18_HP_x30 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x30)";
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

class 9x18_HP_x40 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x40)";
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

class 9x18_HP_x50 : 9x18_HP_x1 {
	scope = public;
	displayName = "9x18 mmHP (x50)";
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

class 9x18_TRACER_x1 : 9x18_x1 {
	scope = public;
	displayName = "9x18 mm Tracer (x1)";
	ammo = "B_9x18_TRACER";
	bulletCount = 1;
	baseName = "9x18_TRACER_x";
	baseDesc = "9x18 mmTracer";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
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

class 9x18_TRACER_x2 : 9x18_TRACER_x1 {
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

class 9x18_TRACER_x3 : 9x18_TRACER_x1 {
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

class 9x18_TRACER_x4 : 9x18_TRACER_x1 {
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

class 9x18_TRACER_x5 : 9x18_TRACER_x1 {
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

class 9x18_TRACER_x6 : 9x18_TRACER_x1 {
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

class 9x18_TRACER_x7 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x7)";
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

class 9x18_TRACER_x8 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x8)";
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

class 9x18_TRACER_x9 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x9)";
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

class 9x18_TRACER_x10 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x10)";
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

class 9x18_TRACER_x20 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x20)";
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

class 9x18_TRACER_x30 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x30)";
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

class 9x18_TRACER_x40 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x40)";
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

class 9x18_TRACER_x50 : 9x18_TRACER_x1 {
	scope = public;
	displayName = "9x18 mmTracer (x50)";
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

class 9x18_RUBBER_x1 : 9x18_x1 {
	scope = public;
	displayName = "9x18 mm Rubber (x1)";
	ammo = "B_9x18_RUBBER";
	bulletCount = 1;
	baseName = "9x18_RUBBER_x";
	baseDesc = "9x18 mmRubber";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
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

class 9x18_RUBBER_x2 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x2)";
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

class 9x18_RUBBER_x3 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x3)";
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

class 9x18_RUBBER_x4 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x4)";
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

class 9x18_RUBBER_x5 : 9x18_RUBBER_x1 {
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

class 9x18_RUBBER_x6 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x6)";
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

class 9x18_RUBBER_x7 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x7)";
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

class 9x18_RUBBER_x8 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x8)";
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

class 9x18_RUBBER_x9 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x9)";
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

class 9x18_RUBBER_x10 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x10)";
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

class 9x18_RUBBER_x20 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x20)";
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

class 9x18_RUBBER_x30 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x30)";
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

class 9x18_RUBBER_x40 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x40)";
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

class 9x18_RUBBER_x50 : 9x18_RUBBER_x1 {
	scope = public;
	displayName = "9x18 mmRubber (x50)";
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

class 9x18_BT_x1 : 9x18_x1 {
	scope = public;
	displayName = "9x18 mm Ballistic Tip (x1)";
	ammo = "B_9x18_BT";
	bulletCount = 1;
	baseName = "9x18_BT_x";
	baseDesc = "9x18 mmBallistic Tip";
	picture = "\dayz_equip\textures\equip_45acp_ca.paa";
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

class 9x18_BT_x2 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x2)";
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

class 9x18_BT_x3 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x3)";
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

class 9x18_BT_x4 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x4)";
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

class 9x18_BT_x5 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x5)";
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

class 9x18_BT_x6 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x6)";
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

class 9x18_BT_x7 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x7)";
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

class 9x18_BT_x8 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x8)";
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

class 9x18_BT_x9 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x9)";
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

class 9x18_BT_x10 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x10)";
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

class 9x18_BT_x20 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x20)";
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

class 9x18_BT_x30 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x30)";
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

class 9x18_BT_x40 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x40)";
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

class 9x18_BT_x50 : 9x18_BT_x1 {
	scope = public;
	displayName = "9x18 mmBallistic Tip (x50)";
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