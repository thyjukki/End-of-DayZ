class 45ACP_x1 : baseBullet {
	scope = public;
	displayName = ".45 ACP (x1)";
	ammo = "B_45ACP_Ball";
	bulletCount = 1;
	baseName = "45ACP_x";
	baseDesc = ".45 ACP";
	initSpeed=260;
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .45 ACP rounds";
	
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

class 45ACP_x2 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x2)";
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
			"45ACP_x1",
			"45ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x3 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x3)";
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
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x4 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x4)";
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
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x5 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x5)";
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
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x6 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x6)";
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
			"45ACP_x1",
			"45ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x7 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x7)";
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
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x8 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x8)";
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
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x9 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x9)";
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
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x1",
			"45ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x10 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x10)";
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
			"45ACP_x5",
			"45ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x20 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x20)";
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
			"45ACP_x10",
			"45ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x30 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x30)";
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
			"45ACP_x20",
			"45ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x40 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x40)";
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
			"45ACP_x30",
			"45ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x50 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x50)";
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
			"45ACP_x40",
			"45ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_x100 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP (x100)";
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
			"45ACP_x50",
			"45ACP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x1 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x1)";
	ammo = "B_45ACP_HP";
	bulletCount = 1;
	baseName = "45ACP_HP_x";
	baseDesc = ".45 ACP Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .45 ACP Hollow Point rounds";
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

class 45ACP_HP_x2 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x2)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x3 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x3)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x4 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x4)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x5 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x5)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x6 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x6)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x7 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x7)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x8 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x8)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x9 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x9)";
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
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x1",
			"45ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x10 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x10)";
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
			"45ACP_HP_x5",
			"45ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x20 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x20)";
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
			"45ACP_HP_x10",
			"45ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x30 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x30)";
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
			"45ACP_HP_x20",
			"45ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x40 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x40)";
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
			"45ACP_HP_x30",
			"45ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x50 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x50)";
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
			"45ACP_HP_x40",
			"45ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_HP_x100 : 45ACP_HP_x1 {
	scope = public;
	displayName = ".45 ACP HP (x100)";
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
			"45ACP_HP_x50",
			"45ACP_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x1 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x1)";
	ammo = "B_45ACP_TRACER";
	bulletCount = 1;
	baseName = "45ACP_TRACER_x";
	baseDesc = ".45 ACP Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .45 ACP Tracer rounds";
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

class 45ACP_TRACER_x2 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x2)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x3 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x3)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x4 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x4)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x5 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x5)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x6 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x6)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x7 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x7)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x8 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x8)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x9 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x9)";
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
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x1",
			"45ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x10 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x10)";
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
			"45ACP_TRACER_x5",
			"45ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x20 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x20)";
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
			"45ACP_TRACER_x10",
			"45ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x30 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x30)";
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
			"45ACP_TRACER_x20",
			"45ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x40 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x40)";
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
			"45ACP_TRACER_x30",
			"45ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x50 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x50)";
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
			"45ACP_TRACER_x40",
			"45ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_TRACER_x100 : 45ACP_TRACER_x1 {
	scope = public;
	displayName = ".45 ACP Tracer (x100)";
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
			"45ACP_TRACER_x50",
			"45ACP_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x1 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x1)";
	ammo = "B_45ACP_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "45ACP_RUBBER_x";
	baseDesc = ".45 ACP Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .45 ACP Rubber rounds";
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

class 45ACP_RUBBER_x2 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x2)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x3 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x3)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x4 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x4)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x5 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x5)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x6 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x6)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x7 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x7)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x8 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x8)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x9 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x9)";
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
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x10 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x10)";
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
			"45ACP_RUBBER_x5",
			"45ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x20 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x20)";
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
			"45ACP_RUBBER_x10",
			"45ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x30 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x30)";
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
			"45ACP_RUBBER_x20",
			"45ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x40 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x40)";
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
			"45ACP_RUBBER_x30",
			"45ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x50 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x50)";
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
			"45ACP_RUBBER_x40",
			"45ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_RUBBER_x100 : 45ACP_RUBBER_x1 {
	scope = public;
	displayName = ".45 ACP Rubber (x100)";
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
			"45ACP_RUBBER_x50",
			"45ACP_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x1 : 45ACP_x1 {
	scope = public;
	displayName = ".45 ACP BT (x1)";
	ammo = "B_45ACP_BT";
	bulletCount = 1;
	baseName = "45ACP_BT_x";
	baseDesc = ".45 ACP Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .45 ACP Ballistic Tip rounds";
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

class 45ACP_BT_x2 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x2)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x3 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x3)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x4 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x4)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x5 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x5)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x6 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x6)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x7 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x7)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x8 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x8)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x9 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x9)";
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
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x1",
			"45ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x10 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x10)";
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
			"45ACP_BT_x5",
			"45ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x20 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x20)";
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
			"45ACP_BT_x10",
			"45ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x30 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x30)";
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
			"45ACP_BT_x20",
			"45ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x40 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x40)";
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
			"45ACP_BT_x30",
			"45ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x50 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x50)";
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
			"45ACP_BT_x40",
			"45ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 45ACP_BT_x100 : 45ACP_BT_x1 {
	scope = public;
	displayName = ".45 ACP BT (x100)";
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
			"45ACP_BT_x50",
			"45ACP_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};