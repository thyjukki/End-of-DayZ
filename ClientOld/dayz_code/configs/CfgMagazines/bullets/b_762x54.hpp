class 762x54_x1 : baseBullet {
	scope = public;
	displayName = "7.62x54R (x1)";
	ammo = "B_762x54_Ball";
	bulletCount = 1;
	baseName = "762x54_x";
	initSpeed=870;
	baseDesc = "7.62x54R";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x54R rounds";
	
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

class 762x54_x2 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x2)";
	bulletCount = 2;
	takeOne="762x54_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_x1",
			"762x54_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x3 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x3)";
	bulletCount = 3;
	takeOne="762x54_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_x1",
			"762x54_x1",
			"762x54_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x4 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x4)";
	bulletCount = 4;
	takeOne="762x54_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_x1",
			"762x54_x1",
			"762x54_x1",
			"762x54_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x5 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x5)";
	bulletCount = 5;
	takeOne="762x54_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_x1",
			"762x54_x1",
			"762x54_x1",
			"762x54_x1",
			"762x54_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x6 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x6)";
	bulletCount = 6;
	takeOne="762x54_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_x1",
			"762x54_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x7 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x7)";
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
			"762x54_x1",
			"762x54_x1",
			"762x54_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x8 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x8)";
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
			"762x54_x1",
			"762x54_x1",
			"762x54_x1",
			"762x54_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x9 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x9)";
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
			"762x54_x1",
			"762x54_x1",
			"762x54_x1",
			"762x54_x1",
			"762x54_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x10 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x10)";
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
			"762x54_x5",
			"762x54_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x20 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x20)";
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
			"762x54_x10",
			"762x54_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x30 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x30)";
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
			"762x54_x20",
			"762x54_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x40 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x40)";
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
			"762x54_x30",
			"762x54_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x50 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x50)";
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
			"762x54_x40",
			"762x54_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_x100 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R (x100)";
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
			"762x54_x50",
			"762x54_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x1 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R HP (x1)";
	ammo = "B_762x54_HP";
	bulletCount = 1;
	baseName = "762x54_HP_x";
	baseDesc = "7.62x54R Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x54R Hollow Point rounds";
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

class 762x54_HP_x2 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x2)";
	bulletCount = 2;
	takeOne="762x54_HP_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_HP_x1",
			"762x54_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x3 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x3)";
	bulletCount = 3;
	takeOne="762x54_HP_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x4 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x4)";
	bulletCount = 4;
	takeOne="762x54_HP_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x5 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x5)";
	bulletCount = 5;
	takeOne="762x54_HP_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x6 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x6)";
	bulletCount = 6;
	takeOne="762x54_HP_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_HP_x1",
			"762x54_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x7 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x7)";
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
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x8 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x8)";
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
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x9 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x9)";
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
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x1",
			"762x54_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x10 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x10)";
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
			"762x54_HP_x5",
			"762x54_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x20 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x20)";
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
			"762x54_HP_x10",
			"762x54_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x30 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x30)";
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
			"762x54_HP_x20",
			"762x54_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x40 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x40)";
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
			"762x54_HP_x30",
			"762x54_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x50 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x50)";
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
			"762x54_HP_x40",
			"762x54_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_HP_x100 : 762x54_HP_x1 {
	scope = public;
	displayName = "7.62x54R HP (x100)";
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
			"762x54_HP_x50",
			"762x54_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x1 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x1)";
	ammo = "B_762x54_TRACER";
	bulletCount = 1;
	baseName = "762x54_TRACER_x";
	baseDesc = "7.62x54R Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x54R Tracer rounds";
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

class 762x54_TRACER_x2 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x2)";
	bulletCount = 2;
	takeOne="762x54_TRACER_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_TRACER_x1",
			"762x54_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x3 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x3)";
	bulletCount = 3;
	takeOne="762x54_TRACER_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x4 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x4)";
	bulletCount = 4;
	takeOne="762x54_TRACER_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x5 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x5)";
	bulletCount = 5;
	takeOne="762x54_TRACER_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x6 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x6)";
	bulletCount = 6;
	takeOne="762x54_TRACER_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_TRACER_x1",
			"762x54_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x7 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x7)";
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
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x8 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x8)";
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
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x9 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x9)";
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
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x1",
			"762x54_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x10 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x10)";
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
			"762x54_TRACER_x5",
			"762x54_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x20 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x20)";
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
			"762x54_TRACER_x10",
			"762x54_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x30 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x30)";
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
			"762x54_TRACER_x20",
			"762x54_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x40 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x40)";
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
			"762x54_TRACER_x30",
			"762x54_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x50 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x50)";
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
			"762x54_TRACER_x40",
			"762x54_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_TRACER_x100 : 762x54_TRACER_x1 {
	scope = public;
	displayName = "7.62x54R Tracer (x100)";
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
			"762x54_TRACER_x50",
			"762x54_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x1 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x1)";
	ammo = "B_762x54_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "762x54_RUBBER_x";
	baseDesc = "7.62x54R Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x54R Rubber rounds";
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

class 762x54_RUBBER_x2 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x2)";
	bulletCount = 2;
	takeOne="762x54_RUBBER_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x3 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x3)";
	bulletCount = 3;
	takeOne="762x54_RUBBER_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x4 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x4)";
	bulletCount = 4;
	takeOne="762x54_RUBBER_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x5 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x5)";
	bulletCount = 5;
	takeOne="762x54_RUBBER_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x6 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x6)";
	bulletCount = 6;
	takeOne="762x54_RUBBER_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x7 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x7)";
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
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x8 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x8)";
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
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x9 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x9)";
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
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x1",
			"762x54_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x10 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x10)";
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
			"762x54_RUBBER_x5",
			"762x54_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x20 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x20)";
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
			"762x54_RUBBER_x10",
			"762x54_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x30 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x30)";
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
			"762x54_RUBBER_x20",
			"762x54_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x40 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x40)";
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
			"762x54_RUBBER_x30",
			"762x54_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x50 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x50)";
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
			"762x54_RUBBER_x40",
			"762x54_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_RUBBER_x100 : 762x54_RUBBER_x1 {
	scope = public;
	displayName = "7.62x54R Rubber (x100)";
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
			"762x54_RUBBER_x50",
			"762x54_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x1 : 762x54_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x1)";
	ammo = "B_762x54_BT";
	bulletCount = 1;
	baseName = "762x54_BT_x";
	baseDesc = "7.62x54R Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: 7.62x54R Ballistic Tip rounds";
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

class 762x54_BT_x2 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x2)";
	bulletCount = 2;
	takeOne="762x54_BT_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_BT_x1",
			"762x54_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x3 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x3)";
	bulletCount = 3;
	takeOne="762x54_BT_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x4 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x4)";
	bulletCount = 4;
	takeOne="762x54_BT_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x5 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x5)";
	bulletCount = 5;
	takeOne="762x54_BT_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x6 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x6)";
	bulletCount = 6;
	takeOne="762x54_BT_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"762x54_BT_x1",
			"762x54_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x7 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x7)";
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
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x8 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x8)";
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
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x9 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x9)";
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
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x1",
			"762x54_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x10 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x10)";
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
			"762x54_BT_x5",
			"762x54_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x20 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x20)";
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
			"762x54_BT_x10",
			"762x54_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x30 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x30)";
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
			"762x54_BT_x20",
			"762x54_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x40 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x40)";
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
			"762x54_BT_x30",
			"762x54_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x50 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x50)";
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
			"762x54_BT_x40",
			"762x54_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 762x54_BT_x100 : 762x54_BT_x1 {
	scope = public;
	displayName = "7.62x54R Ballistic Tip (x100)";
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
			"762x54_BT_x50",
			"762x54_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};