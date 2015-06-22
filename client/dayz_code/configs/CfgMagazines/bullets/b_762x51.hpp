class 762x51_x1 : baseBullet {
	scope = public;
	displayName = "7.62x51mm (x1)";
	ammo = "B_762x51_Ball";
	bulletCount = 1;
	baseName = "762x51_x";
	initSpeed=780;
	baseDesc = "7.62x51mm";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x51mm rounds";
	
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

class 762x51_x2 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x2)";
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
			"762x51_x1",
			"762x51_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x3 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x3)";
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
			"762x51_x1",
			"762x51_x1",
			"762x51_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x4 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x4)";
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
			"762x51_x1",
			"762x51_x1",
			"762x51_x1",
			"762x51_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x5 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x5)";
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
			"762x51_x1",
			"762x51_x1",
			"762x51_x1",
			"762x51_x1",
			"762x51_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x6 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x6)";
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
			"762x51_x1",
			"762x51_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x7 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x7)";
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
			"762x51_x1",
			"762x51_x1",
			"762x51_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x8 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x8)";
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
			"762x51_x1",
			"762x51_x1",
			"762x51_x1",
			"762x51_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x9 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x9)";
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
			"762x51_x1",
			"762x51_x1",
			"762x51_x1",
			"762x51_x1",
			"762x51_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x10 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x10)";
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
			"762x51_x5",
			"762x51_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x20 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x20)";
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
			"762x51_x10",
			"762x51_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x30 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x30)";
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
			"762x51_x20",
			"762x51_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x40 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x40)";
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
			"762x51_x30",
			"762x51_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x50 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x50)";
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
			"762x51_x40",
			"762x51_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_x100 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm (x100)";
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
			"762x51_x50",
			"762x51_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x1 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x1)";
	ammo = "B_762x51_HP";
	bulletCount = 1;
	baseName = "762x51_HP_x";
	baseDesc = "7.62x51mm Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x51mm Hollow Point rounds";
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

class 762x51_HP_x2 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x2)";
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
			"762x51_HP_x1",
			"762x51_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x3 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x3)";
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
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x4 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x4)";
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
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x5 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x5)";
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
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x6 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x6)";
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
			"762x51_HP_x1",
			"762x51_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x7 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x7)";
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
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x8 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x8)";
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
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x9 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x9)";
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
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x1",
			"762x51_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x10 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x10)";
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
			"762x51_HP_x5",
			"762x51_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x20 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x20)";
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
			"762x51_HP_x10",
			"762x51_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x30 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x30)";
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
			"762x51_HP_x20",
			"762x51_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x40 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x40)";
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
			"762x51_HP_x30",
			"762x51_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x50 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x50)";
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
			"762x51_HP_x40",
			"762x51_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_HP_x100 : 762x51_HP_x1 {
	scope = public;
	displayName = "7.62x51mm HP (x100)";
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
			"762x51_HP_x50",
			"762x51_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x1 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x1)";
	ammo = "B_762x51_TRACER";
	bulletCount = 1;
	baseName = "762x51_TRACER_x";
	baseDesc = "7.62x51mm Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x51mm Tracer rounds";
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

class 762x51_TRACER_x2 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x2)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x3 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x3)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x4 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x4)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x5 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x5)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x6 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x6)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x7 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x7)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x8 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x8)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x9 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x9)";
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
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x1",
			"762x51_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x10 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x10)";
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
			"762x51_TRACER_x5",
			"762x51_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x20 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x20)";
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
			"762x51_TRACER_x10",
			"762x51_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x30 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x30)";
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
			"762x51_TRACER_x20",
			"762x51_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x40 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x40)";
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
			"762x51_TRACER_x30",
			"762x51_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x50 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x50)";
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
			"762x51_TRACER_x40",
			"762x51_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_TRACER_x100 : 762x51_TRACER_x1 {
	scope = public;
	displayName = "7.62x51mm Tracer (x100)";
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
			"762x51_TRACER_x50",
			"762x51_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x1 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x1)";
	ammo = "B_762x51_RUBBER";
	initSpeed=200;
	bulletCount = 1;
	baseName = "762x51_RUBBER_x";
	baseDesc = "7.62x51mm Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x51mm Rubber rounds";
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

class 762x51_RUBBER_x2 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x2)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x3 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x3)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x4 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x4)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x5 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x5)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x6 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x6)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x7 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x7)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x8 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x8)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x9 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x9)";
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
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x1",
			"762x51_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x10 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x10)";
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
			"762x51_RUBBER_x5",
			"762x51_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x20 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x20)";
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
			"762x51_RUBBER_x10",
			"762x51_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x30 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x30)";
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
			"762x51_RUBBER_x20",
			"762x51_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x40 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x40)";
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
			"762x51_RUBBER_x30",
			"762x51_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x50 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x50)";
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
			"762x51_RUBBER_x40",
			"762x51_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_RUBBER_x100 : 762x51_RUBBER_x1 {
	scope = public;
	displayName = "7.62x51mm Rubber (x100)";
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
			"762x51_RUBBER_x50",
			"762x51_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x1 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x1)";
	ammo = "B_762x51_BT";
	bulletCount = 1;
	baseName = "762x51_BT_x";
	baseDesc = "7.62x51mm Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x51mm Ballistic Tip rounds";
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

class 762x51_BT_x2 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x2)";
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
			"762x51_BT_x1",
			"762x51_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x3 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x3)";
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
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x4 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x4)";
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
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x5 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x5)";
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
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x6 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x6)";
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
			"762x51_BT_x1",
			"762x51_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x7 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x7)";
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
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x8 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x8)";
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
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x9 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x9)";
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
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x1",
			"762x51_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x10 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x10)";
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
			"762x51_BT_x5",
			"762x51_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x20 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x20)";
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
			"762x51_BT_x10",
			"762x51_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x30 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x30)";
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
			"762x51_BT_x20",
			"762x51_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x40 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x40)";
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
			"762x51_BT_x30",
			"762x51_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x50 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x50)";
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
			"762x51_BT_x40",
			"762x51_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_BT_x100 : 762x51_BT_x1 {
	scope = public;
	displayName = "7.62x51mm Ballistic Tip (x100)";
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
			"762x51_BT_x50",
			"762x51_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};


class 762x51_SD_x1 : 762x51_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x1)";
	ammo = "B_762x51_SD";
	bulletCount = 1;
	baseName = "762x51_SD_x";
	initSpeed=320;
	baseDesc = "7.62x51mm SD";
	picture = "\dayz_equip\textures\equip_sd.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x51mm SD rounds";
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

class 762x51_SD_x2 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x2)";
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
			"762x51_SD_x1",
			"762x51_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x3 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x3)";
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
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x4 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x4)";
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
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x5 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x5)";
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
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x6 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x6)";
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
			"762x51_SD_x1",
			"762x51_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x7 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x7)";
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
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x8 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x8)";
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
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x9 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x9)";
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
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x1",
			"762x51_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x10 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x10)";
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
			"762x51_SD_x5",
			"762x51_SD_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x20 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x20)";
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
			"762x51_SD_x10",
			"762x51_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x30 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x30)";
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
			"762x51_SD_x20",
			"762x51_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x40 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x40)";
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
			"762x51_SD_x30",
			"762x51_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x50 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x50)";
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
			"762x51_SD_x40",
			"762x51_SD_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x51_SD_x100 : 762x51_SD_x1 {
	scope = public;
	displayName = "7.62x51mm SD (x100)";
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
			"762x51_SD_x50",
			"762x51_SD_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};