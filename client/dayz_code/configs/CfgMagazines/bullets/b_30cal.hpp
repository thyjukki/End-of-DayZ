class 30cal_x1 : baseBullet {
	scope = public;
	displayName = ".30 carbine (x1)";
	ammo = "B_30cal_Ball";
	bulletCount = 1;
	baseName = "30cal_x";
	initSpeed=850;
	baseDesc = "30cal";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .30 carbine rounds";
	
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

class 30cal_x2 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x2)";
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
			"30cal_x1",
			"30cal_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x3 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x3)";
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
			"30cal_x1",
			"30cal_x1",
			"30cal_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x4 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x4)";
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
			"30cal_x1",
			"30cal_x1",
			"30cal_x1",
			"30cal_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x5 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x5)";
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
			"30cal_x1",
			"30cal_x1",
			"30cal_x1",
			"30cal_x1",
			"30cal_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x6 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x6)";
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
			"30cal_x1",
			"30cal_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x7 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x7)";
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
			"30cal_x1",
			"30cal_x1",
			"30cal_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x8 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x8)";
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
			"30cal_x1",
			"30cal_x1",
			"30cal_x1",
			"30cal_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x9 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x9)";
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
			"30cal_x1",
			"30cal_x1",
			"30cal_x1",
			"30cal_x1",
			"30cal_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x10 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x10)";
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
			"30cal_x5",
			"30cal_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x20 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x20)";
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
			"30cal_x10",
			"30cal_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x30 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x30)";
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
			"30cal_x20",
			"30cal_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x40 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x40)";
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
			"30cal_x30",
			"30cal_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x50 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x50)";
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
			"30cal_x40",
			"30cal_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_x100 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine (x100)";
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
			"30cal_x50",
			"30cal_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x1 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine HP (x1)";
	ammo = "B_30cal_HP";
	bulletCount = 1;
	baseName = "30cal_HP_x";
	baseDesc = ".30 carbine Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .30 carbine Hollow Point rounds";
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

class 30cal_HP_x2 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x2)";
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
			"30cal_HP_x1",
			"30cal_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x3 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x3)";
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
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x4 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x4)";
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
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x5 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x5)";
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
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x6 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x6)";
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
			"30cal_HP_x1",
			"30cal_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x7 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x7)";
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
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x8 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x8)";
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
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x9 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x9)";
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
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x1",
			"30cal_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x10 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x10)";
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
			"30cal_HP_x5",
			"30cal_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x20 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x20)";
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
			"30cal_HP_x10",
			"30cal_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x30 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x30)";
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
			"30cal_HP_x20",
			"30cal_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x40 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x40)";
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
			"30cal_HP_x30",
			"30cal_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x50 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x50)";
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
			"30cal_HP_x40",
			"30cal_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_HP_x100 : 30cal_HP_x1 {
	scope = public;
	displayName = ".30 carbine HP (x100)";
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
			"30cal_HP_x50",
			"30cal_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x1 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x1)";
	ammo = "B_30cal_TRACER";
	bulletCount = 1;
	baseName = "30cal_TRACER_x";
	baseDesc = ".30 carbine Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .30 carbine Tracer rounds";
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

class 30cal_TRACER_x2 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x2)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x3 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x3)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x4 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x4)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x5 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x5)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x6 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x6)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x7 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x7)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x8 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x8)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x9 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x9)";
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
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x1",
			"30cal_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x10 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x10)";
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
			"30cal_TRACER_x5",
			"30cal_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x20 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x20)";
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
			"30cal_TRACER_x10",
			"30cal_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x30 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x30)";
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
			"30cal_TRACER_x20",
			"30cal_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x40 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x40)";
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
			"30cal_TRACER_x30",
			"30cal_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x50 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x50)";
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
			"30cal_TRACER_x40",
			"30cal_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_TRACER_x100 : 30cal_TRACER_x1 {
	scope = public;
	displayName = ".30 carbine Tracer (x100)";
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
			"30cal_TRACER_x50",
			"30cal_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x1 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x1)";
	ammo = "B_30cal_RUBBER";
	bulletCount = 1;
	baseName = "30cal_RUBBER_x";
	initSpeed=200;
	baseDesc = ".30 carbine Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .30 carbine Rubber rounds";
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

class 30cal_RUBBER_x2 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x2)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x3 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x3)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x4 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x4)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x5 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x5)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x6 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x6)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x7 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x7)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x8 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x8)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x9 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x9)";
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
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x1",
			"30cal_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x10 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x10)";
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
			"30cal_RUBBER_x5",
			"30cal_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x20 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x20)";
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
			"30cal_RUBBER_x10",
			"30cal_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x30 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x30)";
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
			"30cal_RUBBER_x20",
			"30cal_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x40 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x40)";
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
			"30cal_RUBBER_x30",
			"30cal_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x50 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x50)";
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
			"30cal_RUBBER_x40",
			"30cal_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_RUBBER_x100 : 30cal_RUBBER_x1 {
	scope = public;
	displayName = ".30 carbine Rubber (x100)";
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
			"30cal_RUBBER_x50",
			"30cal_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x1 : 30cal_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x1)";
	ammo = "B_30cal_BT";
	bulletCount = 1;
	baseName = "30cal_BT_x";
	baseDesc = ".30 carbine Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .30 carbine Ballistic Tip rounds";
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

class 30cal_BT_x2 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x2)";
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
			"30cal_BT_x1",
			"30cal_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x3 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x3)";
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
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x4 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x4)";
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
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x5 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x5)";
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
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x6 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x6)";
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
			"30cal_BT_x1",
			"30cal_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x7 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x7)";
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
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x8 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x8)";
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
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x9 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x9)";
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
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x1",
			"30cal_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x10 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x10)";
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
			"30cal_BT_x5",
			"30cal_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x20 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x20)";
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
			"30cal_BT_x10",
			"30cal_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x30 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x30)";
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
			"30cal_BT_x20",
			"30cal_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x40 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x40)";
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
			"30cal_BT_x30",
			"30cal_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x50 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x50)";
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
			"30cal_BT_x40",
			"30cal_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 30cal_BT_x100 : 30cal_BT_x1 {
	scope = public;
	displayName = ".30 carbine Ballistic Tip (x100)";
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
			"30cal_BT_x50",
			"30cal_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};