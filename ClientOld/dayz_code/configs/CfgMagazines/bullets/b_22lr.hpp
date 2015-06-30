class 22LR_x1 : baseBullet {
	scope = public;
	displayName = "22LR (x1)";
	ammo = "B_22LR_SD";
	bulletCount = 1;
	baseName = "22LR_x";
	baseDesc = "22LR";
	initSpeed=290;
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 22LR rounds";
	
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

class 22LR_x2 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x2)";
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
			"22LR_x1",
			"22LR_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x3 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x3)";
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
			"22LR_x1",
			"22LR_x1",
			"22LR_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x4 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x4)";
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
			"22LR_x1",
			"22LR_x1",
			"22LR_x1",
			"22LR_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x5 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x5)";
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
			"22LR_x1",
			"22LR_x1",
			"22LR_x1",
			"22LR_x1",
			"22LR_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x6 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x6)";
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
			"22LR_x1",
			"22LR_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x7 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x7)";
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
			"22LR_x1",
			"22LR_x1",
			"22LR_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x8 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x8)";
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
			"22LR_x1",
			"22LR_x1",
			"22LR_x1",
			"22LR_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x9 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x9)";
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
			"22LR_x1",
			"22LR_x1",
			"22LR_x1",
			"22LR_x1",
			"22LR_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x10 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x10)";
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
			"22LR_x5",
			"22LR_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x20 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x20)";
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
			"22LR_x10",
			"22LR_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x30 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x30)";
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
			"22LR_x20",
			"22LR_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x40 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x40)";
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
			"22LR_x30",
			"22LR_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x50 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x50)";
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
			"22LR_x40",
			"22LR_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_x100 : 22LR_x1 {
	scope = public;
	displayName = "22LR (x100)";
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
			"22LR_x50",
			"22LR_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x1 : 22LR_x1 {
	scope = public;
	displayName = "22LR HP (x1)";
	ammo = "B_22LR_HP";
	bulletCount = 1;
	baseName = "22LR_HP_x";
	baseDesc = "22LR Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 22LR Hollow Point rounds";
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

class 22LR_HP_x2 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x2)";
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
			"22LR_HP_x1",
			"22LR_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x3 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x3)";
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
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x4 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x4)";
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
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x5 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x5)";
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
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x6 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x6)";
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
			"22LR_HP_x1",
			"22LR_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x7 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x7)";
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
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x8 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x8)";
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
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x9 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x9)";
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
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x1",
			"22LR_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x10 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x10)";
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
			"22LR_HP_x5",
			"22LR_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x20 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x20)";
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
			"22LR_HP_x10",
			"22LR_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x30 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x30)";
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
			"22LR_HP_x20",
			"22LR_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x40 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x40)";
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
			"22LR_HP_x30",
			"22LR_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x50 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x50)";
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
			"22LR_HP_x40",
			"22LR_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_HP_x100 : 22LR_HP_x1 {
	scope = public;
	displayName = "22LR HP (x100)";
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
			"22LR_HP_x50",
			"22LR_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x1 : 22LR_x1 {
	scope = public;
	displayName = "22LR Tracer (x1)";
	ammo = "B_22LR_TRACER";
	bulletCount = 1;
	baseName = "22LR_TRACER_x";
	baseDesc = "22LR Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 22LR Tracer rounds";
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

class 22LR_TRACER_x2 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x2)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x3 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x3)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x4 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x4)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x5 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x5)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x6 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x6)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x7 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x7)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x8 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x8)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x9 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x9)";
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
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x1",
			"22LR_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x10 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x10)";
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
			"22LR_TRACER_x5",
			"22LR_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x20 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x20)";
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
			"22LR_TRACER_x10",
			"22LR_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x30 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x30)";
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
			"22LR_TRACER_x20",
			"22LR_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x40 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x40)";
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
			"22LR_TRACER_x30",
			"22LR_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x50 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x50)";
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
			"22LR_TRACER_x40",
			"22LR_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_TRACER_x100 : 22LR_TRACER_x1 {
	scope = public;
	displayName = "22LR Tracer (x100)";
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
			"22LR_TRACER_x50",
			"22LR_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x1 : 22LR_x1 {
	scope = public;
	displayName = "22LR Rubber (x1)";
	ammo = "B_22LR_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "22LR_RUBBER_x";
	baseDesc = "22LR Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 22LR Rubber rounds";
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

class 22LR_RUBBER_x2 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x2)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x3 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x3)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x4 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x4)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x5 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x5)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x6 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x6)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x7 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x7)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x8 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x8)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x9 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x9)";
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
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x1",
			"22LR_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x10 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x10)";
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
			"22LR_RUBBER_x5",
			"22LR_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x20 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x20)";
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
			"22LR_RUBBER_x10",
			"22LR_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x30 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x30)";
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
			"22LR_RUBBER_x20",
			"22LR_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x40 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x40)";
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
			"22LR_RUBBER_x30",
			"22LR_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x50 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x50)";
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
			"22LR_RUBBER_x40",
			"22LR_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_RUBBER_x100 : 22LR_RUBBER_x1 {
	scope = public;
	displayName = "22LR Rubber (x100)";
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
			"22LR_RUBBER_x50",
			"22LR_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x1 : 22LR_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x1)";
	ammo = "B_22LR_BT";
	bulletCount = 1;
	baseName = "22LR_BT_x";
	baseDesc = "22LR Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 22LR Ballistic Tip rounds";
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

class 22LR_BT_x2 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x2)";
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
			"22LR_BT_x1",
			"22LR_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x3 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x3)";
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
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x4 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x4)";
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
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x5 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x5)";
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
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x6 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x6)";
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
			"22LR_BT_x1",
			"22LR_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x7 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x7)";
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
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x8 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x8)";
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
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x9 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x9)";
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
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x1",
			"22LR_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x10 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x10)";
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
			"22LR_BT_x5",
			"22LR_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x20 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x20)";
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
			"22LR_BT_x10",
			"22LR_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x30 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x30)";
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
			"22LR_BT_x20",
			"22LR_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x40 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x40)";
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
			"22LR_BT_x30",
			"22LR_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x50 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x50)";
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
			"22LR_BT_x40",
			"22LR_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 22LR_BT_x100 : 22LR_BT_x1 {
	scope = public;
	displayName = "22LR Ballistic Tip (x100)";
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
			"22LR_BT_x50",
			"22LR_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};