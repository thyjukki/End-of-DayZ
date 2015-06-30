class 50_AE_x1 : baseBullet {
	scope = public;
	displayName = ".50 AE (x1)";
	ammo = "B_50_AE_Ball";
	bulletCount = 1;
	baseName = "50_AE_x";
	baseDesc = "50_AE";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .50 AE rounds";
	initSpeed=421;
	
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

class 50_AE_x2 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x2)";
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
			"50_AE_x1",
			"50_AE_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x3 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x3)";
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
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x4 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x4)";
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
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x5 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x5)";
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
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x6 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x6)";
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
			"50_AE_x1",
			"50_AE_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x7 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x7)";
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
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x8 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x8)";
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
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x9 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x9)";
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
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x1",
			"50_AE_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x10 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x10)";
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
			"50_AE_x5",
			"50_AE_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x20 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x20)";
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
			"50_AE_x10",
			"50_AE_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x30 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x30)";
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
			"50_AE_x20",
			"50_AE_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x40 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x40)";
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
			"50_AE_x30",
			"50_AE_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x50 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x50)";
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
			"50_AE_x40",
			"50_AE_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_x100 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE (x100)";
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
			"50_AE_x50",
			"50_AE_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x1 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE HP (x1)";
	ammo = "B_50_AE_HP";
	bulletCount = 1;
	baseName = "50_AE_HP_x";
	baseDesc = ".50 AE Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .50 AE Hollow Point rounds";
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

class 50_AE_HP_x2 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x2)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x3 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x3)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x4 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x4)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x5 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x5)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x6 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x6)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x7 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x7)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x8 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x8)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x9 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x9)";
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
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x1",
			"50_AE_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x10 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x10)";
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
			"50_AE_HP_x5",
			"50_AE_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x20 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x20)";
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
			"50_AE_HP_x10",
			"50_AE_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x30 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x30)";
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
			"50_AE_HP_x20",
			"50_AE_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x40 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x40)";
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
			"50_AE_HP_x30",
			"50_AE_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x50 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x50)";
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
			"50_AE_HP_x40",
			"50_AE_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_HP_x100 : 50_AE_HP_x1 {
	scope = public;
	displayName = ".50 AE HP (x100)";
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
			"50_AE_HP_x50",
			"50_AE_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x1 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x1)";
	ammo = "B_50_AE_TRACER";
	bulletCount = 1;
	baseName = "50_AE_TRACER_x";
	baseDesc = ".50 AE Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .50 AE Tracer rounds";
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

class 50_AE_TRACER_x2 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x2)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x3 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x3)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x4 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x4)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x5 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x5)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x6 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x6)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x7 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x7)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x8 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x8)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x9 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x9)";
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
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x1",
			"50_AE_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x10 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x10)";
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
			"50_AE_TRACER_x5",
			"50_AE_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x20 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x20)";
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
			"50_AE_TRACER_x10",
			"50_AE_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x30 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x30)";
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
			"50_AE_TRACER_x20",
			"50_AE_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x40 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x40)";
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
			"50_AE_TRACER_x30",
			"50_AE_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x50 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x50)";
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
			"50_AE_TRACER_x40",
			"50_AE_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_TRACER_x100 : 50_AE_TRACER_x1 {
	scope = public;
	displayName = ".50 AE Tracer (x100)";
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
			"50_AE_TRACER_x50",
			"50_AE_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x1 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x1)";
	ammo = "B_50_AE_RUBBER";
	initSpeed=200;
	bulletCount = 1;
	baseName = "50_AE_RUBBER_x";
	baseDesc = ".50 AE Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .50 AE Rubber rounds";
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

class 50_AE_RUBBER_x2 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x2)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x3 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x3)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x4 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x4)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x5 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x5)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x6 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x6)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x7 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x7)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x8 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x8)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x9 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x9)";
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
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x10 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x10)";
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
			"50_AE_RUBBER_x5",
			"50_AE_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x20 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x20)";
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
			"50_AE_RUBBER_x10",
			"50_AE_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x30 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x30)";
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
			"50_AE_RUBBER_x20",
			"50_AE_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x40 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x40)";
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
			"50_AE_RUBBER_x30",
			"50_AE_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x50 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x50)";
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
			"50_AE_RUBBER_x40",
			"50_AE_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_RUBBER_x100 : 50_AE_RUBBER_x1 {
	scope = public;
	displayName = ".50 AE Rubber (x100)";
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
			"50_AE_RUBBER_x50",
			"50_AE_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x1 : 50_AE_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x1)";
	ammo = "B_50_AE_BT";
	bulletCount = 1;
	baseName = "50_AE_BT_x";
	baseDesc = ".50 AE Ballistic Tip";
	picture = "\dayz_equip\textures\equip_sd.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .50 AE Ballistic Tip rounds";
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

class 50_AE_BT_x2 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x2)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x3 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x3)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x4 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x4)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x5 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x5)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x6 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x6)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x7 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x7)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x8 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x8)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x9 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x9)";
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
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x1",
			"50_AE_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x10 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x10)";
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
			"50_AE_BT_x5",
			"50_AE_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x20 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x20)";
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
			"50_AE_BT_x10",
			"50_AE_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x30 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x30)";
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
			"50_AE_BT_x20",
			"50_AE_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x40 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x40)";
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
			"50_AE_BT_x30",
			"50_AE_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x50 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x50)";
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
			"50_AE_BT_x40",
			"50_AE_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 50_AE_BT_x100 : 50_AE_BT_x1 {
	scope = public;
	displayName = ".50 AE Ballistic Tip (x100)";
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
			"50_AE_BT_x50",
			"50_AE_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};