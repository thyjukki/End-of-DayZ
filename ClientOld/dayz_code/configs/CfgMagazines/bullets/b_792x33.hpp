class 792x33_x1 : baseBullet {
	scope = public;
	displayName = "7.92x33 (x1)";
	ammo = "B_792x33_Ball";
	bulletCount = 1;
	baseName = "792x33_x";
	initSpeed=685;
	baseDesc = "7.92x33";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.92x33 rounds";
	
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

class 792x33_x2 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x2)";
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
			"792x33_x1",
			"792x33_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x3 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x3)";
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
			"792x33_x1",
			"792x33_x1",
			"792x33_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x4 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x4)";
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
			"792x33_x1",
			"792x33_x1",
			"792x33_x1",
			"792x33_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x5 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x5)";
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
			"792x33_x1",
			"792x33_x1",
			"792x33_x1",
			"792x33_x1",
			"792x33_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x6 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x6)";
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
			"792x33_x1",
			"792x33_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x7 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x7)";
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
			"792x33_x1",
			"792x33_x1",
			"792x33_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x8 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x8)";
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
			"792x33_x1",
			"792x33_x1",
			"792x33_x1",
			"792x33_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x9 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x9)";
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
			"792x33_x1",
			"792x33_x1",
			"792x33_x1",
			"792x33_x1",
			"792x33_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x10 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x10)";
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
			"792x33_x5",
			"792x33_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x20 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x20)";
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
			"792x33_x10",
			"792x33_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x30 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x30)";
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
			"792x33_x20",
			"792x33_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x40 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x40)";
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
			"792x33_x30",
			"792x33_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x50 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x50)";
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
			"792x33_x40",
			"792x33_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_x100 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 (x100)";
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
			"792x33_x50",
			"792x33_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x1 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 HP (x1)";
	ammo = "B_792x33_HP";
	bulletCount = 1;
	baseName = "792x33_HP_x";
	baseDesc = "7.92x33 Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.92x33 Hollow Point rounds";
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

class 792x33_HP_x2 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x2)";
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
			"792x33_HP_x1",
			"792x33_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x3 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x3)";
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
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x4 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x4)";
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
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x5 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x5)";
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
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x6 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x6)";
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
			"792x33_HP_x1",
			"792x33_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x7 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x7)";
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
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x8 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x8)";
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
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x9 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x9)";
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
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x1",
			"792x33_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x10 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x10)";
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
			"792x33_HP_x5",
			"792x33_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x20 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x20)";
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
			"792x33_HP_x10",
			"792x33_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x30 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x30)";
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
			"792x33_HP_x20",
			"792x33_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x40 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x40)";
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
			"792x33_HP_x30",
			"792x33_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x50 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x50)";
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
			"792x33_HP_x40",
			"792x33_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_HP_x100 : 792x33_HP_x1 {
	scope = public;
	displayName = "7.92x33 HP (x100)";
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
			"792x33_HP_x50",
			"792x33_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x1 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x1)";
	ammo = "B_792x33_TRACER";
	bulletCount = 1;
	baseName = "792x33_TRACER_x";
	baseDesc = "7.92x33 Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.92x33 Tracer rounds";
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

class 792x33_TRACER_x2 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x2)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x3 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x3)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x4 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x4)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x5 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x5)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x6 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x6)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x7 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x7)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x8 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x8)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x9 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x9)";
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
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x1",
			"792x33_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x10 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x10)";
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
			"792x33_TRACER_x5",
			"792x33_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x20 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x20)";
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
			"792x33_TRACER_x10",
			"792x33_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x30 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x30)";
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
			"792x33_TRACER_x20",
			"792x33_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x40 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x40)";
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
			"792x33_TRACER_x30",
			"792x33_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x50 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x50)";
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
			"792x33_TRACER_x40",
			"792x33_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_TRACER_x100 : 792x33_TRACER_x1 {
	scope = public;
	displayName = "7.92x33 Tracer (x100)";
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
			"792x33_TRACER_x50",
			"792x33_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x1 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x1)";
	ammo = "B_792x33_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "792x33_RUBBER_x";
	baseDesc = "7.92x33 Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.92x33 Rubber rounds";
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

class 792x33_RUBBER_x2 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x2)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x3 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x3)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x4 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x4)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x5 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x5)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x6 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x6)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x7 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x7)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x8 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x8)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x9 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x9)";
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
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x1",
			"792x33_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x10 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x10)";
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
			"792x33_RUBBER_x5",
			"792x33_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x20 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x20)";
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
			"792x33_RUBBER_x10",
			"792x33_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x30 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x30)";
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
			"792x33_RUBBER_x20",
			"792x33_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x40 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x40)";
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
			"792x33_RUBBER_x30",
			"792x33_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x50 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x50)";
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
			"792x33_RUBBER_x40",
			"792x33_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_RUBBER_x100 : 792x33_RUBBER_x1 {
	scope = public;
	displayName = "7.92x33 Rubber (x100)";
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
			"792x33_RUBBER_x50",
			"792x33_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x1 : 792x33_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x1)";
	ammo = "B_792x33_BT";
	bulletCount = 1;
	baseName = "792x33_BT_x";
	baseDesc = "7.92x33 Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.92x33 Ballistic Tip rounds";
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

class 792x33_BT_x2 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x2)";
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
			"792x33_BT_x1",
			"792x33_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x3 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x3)";
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
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x4 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x4)";
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
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x5 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x5)";
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
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x6 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x6)";
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
			"792x33_BT_x1",
			"792x33_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x7 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x7)";
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
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x8 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x8)";
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
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x9 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x9)";
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
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x1",
			"792x33_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x10 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x10)";
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
			"792x33_BT_x5",
			"792x33_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x20 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x20)";
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
			"792x33_BT_x10",
			"792x33_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x30 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x30)";
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
			"792x33_BT_x20",
			"792x33_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x40 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x40)";
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
			"792x33_BT_x30",
			"792x33_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x50 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x50)";
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
			"792x33_BT_x40",
			"792x33_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 792x33_BT_x100 : 792x33_BT_x1 {
	scope = public;
	displayName = "7.92x33 Ballistic Tip (x100)";
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
			"792x33_BT_x50",
			"792x33_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};