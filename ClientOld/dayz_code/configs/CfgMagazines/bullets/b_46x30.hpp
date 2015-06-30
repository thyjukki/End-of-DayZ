class 46x30_x1 : baseBullet {
	scope = public;
	displayName = "4.6x30 mm(x1)";
	ammo = "B_46x30_Ball";
	bulletCount = 1;
	baseName = "46x30_x";
	baseDesc = "46x30";
	initSpeed=735;
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 4.6x30 mmrounds";
	
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
	displayName = "4.6x30 mm(x2)";
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
	displayName = "4.6x30 mm(x3)";
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
	displayName = "4.6x30 mm(x4)";
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
	displayName = "4.6x30 mm(x5)";
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
	displayName = "4.6x30 mm(x6)";
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
	displayName = "4.6x30 mm(x7)";
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
	displayName = "4.6x30 mm(x8)";
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
	displayName = "4.6x30 mm(x9)";
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
	displayName = "4.6x30 mm(x10)";
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
	displayName = "4.6x30 mm(x20)";
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
	displayName = "4.6x30 mm(x30)";
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
	displayName = "4.6x30 mm(x40)";
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
	displayName = "4.6x30 mm(x50)";
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

class 46x30_x100 : 46x30_x1 {
	scope = public;
	displayName = "4.6x30 mm(x100)";
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
			"46x30_x50",
			"46x30_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_SD_x1 : 46x30_x1 {
	scope = public;
	displayName = "4.6x30 mmBallistic Tip (x1)";
	ammo = "B_46x30_SD";
	bulletCount = 1;
	baseName = "46x30_SD_x";
	initSpeed=650;
	baseDesc = "4.6x30 mmSub Sonic";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 4.6x30 mmSub Sonic rounds";
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

class 46x30_SD_x2 : 46x30_SD_x1 {
	scope = public;
	displayName = "4.6x30 mmBallistic Tip (x2)";
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
	displayName = "4.6x30 mmBallistic Tip (x3)";
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
	displayName = "4.6x30 mmBallistic Tip (x4)";
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
	displayName = "4.6x30 mmBallistic Tip (x5)";
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
	displayName = "4.6x30 mmBallistic Tip (x6)";
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
	displayName = "4.6x30 mmBallistic Tip (x7)";
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
	displayName = "4.6x30 mmBallistic Tip (x8)";
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
	displayName = "4.6x30 mmBallistic Tip (x9)";
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
	displayName = "4.6x30 mmBallistic Tip (x10)";
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
	displayName = "4.6x30 mmBallistic Tip (x20)";
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
	displayName = "4.6x30 mmBallistic Tip (x30)";
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
	displayName = "4.6x30 mmBallistic Tip (x40)";
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
	displayName = "4.6x30 mmBallistic Tip (x50)";
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

class 46x30_SD_x100 : 46x30_SD_x1 {
	scope = public;
	displayName = "4.6x30 mmBallistic Tip (x100)";
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
			"46x30_SD_x50",
			"46x30_SD_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_HP_x1 : 46x30_x1 {
	scope = public;
	displayName = "4.6x30 mmHP (x1)";
	ammo = "B_46x30_HP";
	bulletCount = 1;
	baseName = "46x30_HP_x";
	baseDesc = "4.6x30 mmHollow Point";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 4.6x30 mmHollow Point rounds";
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

class 46x30_HP_x2 : 46x30_HP_x1 {
	scope = public;
	displayName = "4.6x30 mmHP (x2)";
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
	displayName = "4.6x30 mmHP (x3)";
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
	displayName = "4.6x30 mmHP (x4)";
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
	displayName = "4.6x30 mmHP (x5)";
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
	displayName = "4.6x30 mmHP (x6)";
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
	displayName = "4.6x30 mmHP (x7)";
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
	displayName = "4.6x30 mmHP (x8)";
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
	displayName = "4.6x30 mmHP (x9)";
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
	displayName = "4.6x30 mmHP (x10)";
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
	displayName = "4.6x30 mmHP (x20)";
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
	displayName = "4.6x30 mmHP (x30)";
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
	displayName = "4.6x30 mmHP (x40)";
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
	displayName = "4.6x30 mmHP (x50)";
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

class 46x30_HP_x100 : 46x30_HP_x1 {
	scope = public;
	displayName = "4.6x30 mmHP (x100)";
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
			"46x30_HP_x50",
			"46x30_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_TRACER_x1 : 46x30_x1 {
	scope = public;
	displayName = "4.6x30 mmTracer (x1)";
	ammo = "B_46x30_TRACER";
	bulletCount = 1;
	baseName = "46x30_TRACER_x";
	initSpeed=200;
	baseDesc = "4.6x30 mmTracer";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 4.6x30 mmTracer rounds";
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

class 46x30_TRACER_x2 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "4.6x30 mmTracer (x2)";
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
	displayName = "4.6x30 mmTracer (x3)";
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
	displayName = "4.6x30 mmTracer (x4)";
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
	displayName = "4.6x30 mmTracer (x5)";
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
	displayName = "4.6x30 mmTracer (x6)";
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
	displayName = "4.6x30 mmTracer (x7)";
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
	displayName = "4.6x30 mmTracer (x8)";
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
	displayName = "4.6x30 mmTracer (x9)";
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
	displayName = "4.6x30 mmTracer (x10)";
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
	displayName = "4.6x30 mmTracer (x20)";
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
	displayName = "4.6x30 mmTracer (x30)";
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
	displayName = "4.6x30 mmTracer (x40)";
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
	displayName = "4.6x30 mmTracer (x50)";
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

class 46x30_TRACER_x100 : 46x30_TRACER_x1 {
	scope = public;
	displayName = "4.6x30 mmTracer (x100)";
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
			"46x30_TRACER_x50",
			"46x30_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_RUBBER_x1 : 46x30_x1 {
	scope = public;
	displayName = "4.6x30 mmRubber (x1)";
	ammo = "B_46x30_RUBBER";
	bulletCount = 1;
	baseName = "46x30_RUBBER_x";
	baseDesc = "4.6x30 mmRubber";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 4.6x30 mmRubber rounds";
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

class 46x30_RUBBER_x2 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "4.6x30 mmRubber (x2)";
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
	displayName = "4.6x30 mmRubber (x3)";
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
	displayName = "4.6x30 mmRubber (x4)";
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
	displayName = "4.6x30 mmRubber (x5)";
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
	displayName = "4.6x30 mmRubber (x6)";
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
	displayName = "4.6x30 mmRubber (x7)";
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
	displayName = "4.6x30 mmRubber (x8)";
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
	displayName = "4.6x30 mmRubber (x9)";
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
	displayName = "4.6x30 mmRubber (x10)";
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
	displayName = "4.6x30 mmRubber (x20)";
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
	displayName = "4.6x30 mmRubber (x30)";
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
	displayName = "4.6x30 mmRubber (x40)";
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
	displayName = "4.6x30 mmRubber (x50)";
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

class 46x30_RUBBER_x100 : 46x30_RUBBER_x1 {
	scope = public;
	displayName = "4.6x30 mmRubber (x100)";
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
			"46x30_RUBBER_x50",
			"46x30_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 46x30_BT_x1 : 46x30_x1 {
	scope = public;
	displayName = "4.6x30 mmBallistic Tip (x1)";
	ammo = "B_46x30_BT";
	bulletCount = 1;
	baseName = "46x30_BT_x";
	baseDesc = "4.6x30 mmBallistic Tip";
	picture = "\dayz_equip\textures\equip_sd.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 4.6x30 mmBallistic Tip rounds";
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

class 46x30_BT_x2 : 46x30_BT_x1 {
	scope = public;
	displayName = "4.6x30 mmBallistic Tip (x2)";
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
	displayName = "4.6x30 mmBallistic Tip (x3)";
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
	displayName = "4.6x30 mmBallistic Tip (x4)";
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
	displayName = "4.6x30 mmBallistic Tip (x5)";
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
	displayName = "4.6x30 mmBallistic Tip (x6)";
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
	displayName = "4.6x30 mmBallistic Tip (x7)";
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
	displayName = "4.6x30 mmBallistic Tip (x8)";
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
	displayName = "4.6x30 mmBallistic Tip (x9)";
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
	displayName = "4.6x30 mmBallistic Tip (x10)";
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
	displayName = "4.6x30 mmBallistic Tip (x20)";
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
	displayName = "4.6x30 mmBallistic Tip (x30)";
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
	displayName = "4.6x30 mmBallistic Tip (x40)";
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
	displayName = "4.6x30 mmBallistic Tip (x50)";
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

class 46x30_BT_x100 : 46x30_BT_x1 {
	scope = public;
	displayName = "4.6x30 mmBallistic Tip (x100)";
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
			"46x30_BT_x50",
			"46x30_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};