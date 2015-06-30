class 357_x1 : baseBullet {
	scope = public;
	displayName = ".357 Magnum (x1)";
	ammo = "B_357mag_ball";
	bulletCount = 1;
	baseName = "357_x";
	initSpeed=421;
	baseDesc = ".357 Magnum";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .357 Magnum rounds";
	
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

class 357_x2 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x2)";
	bulletCount = 2;
	takeOne="357_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_x1",
			"357_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x3 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x3)";
	bulletCount = 3;
	takeOne="357_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_x1",
			"357_x1",
			"357_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x4 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x4)";
	bulletCount = 4;
	takeOne="357_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_x1",
			"357_x1",
			"357_x1",
			"357_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x5 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x5)";
	bulletCount = 5;
	takeOne="357_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_x1",
			"357_x1",
			"357_x1",
			"357_x1",
			"357_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x6 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x6)";
	bulletCount = 6;
	takeOne="357_x6";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_x1",
			"357_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x7 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x7)";
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
			"357_x1",
			"357_x1",
			"357_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x8 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x8)";
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
			"357_x1",
			"357_x1",
			"357_x1",
			"357_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x9 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x9)";
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
			"357_x1",
			"357_x1",
			"357_x1",
			"357_x1",
			"357_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x10 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x10)";
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
			"357_x5",
			"357_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x20 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x20)";
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
			"357_x10",
			"357_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x30 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x30)";
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
			"357_x20",
			"357_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x40 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x40)";
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
			"357_x30",
			"357_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x50 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x50)";
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
			"357_x40",
			"357_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_x100 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum (x100)";
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
			"357_x50",
			"357_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x1 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x1)";
	ammo = "B_357mag_HP";
	bulletCount = 1;
	baseName = "357_HP_x";
	baseDesc = ".357 Magnum Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .357 Magnum Hollow Point rounds";
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

class 357_HP_x2 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x2)";
	bulletCount = 2;
	takeOne="357_HP_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_HP_x1",
			"357_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x3 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x3)";
	bulletCount = 3;
	takeOne="357_HP_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x4 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x4)";
	bulletCount = 4;
	takeOne="357_HP_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x5 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x5)";
	bulletCount = 5;
	takeOne="357_HP_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x6 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x6)";
	bulletCount = 6;
	takeOne="357_HP_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_HP_x1",
			"357_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x7 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x7)";
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
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x8 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x8)";
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
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x9 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x9)";
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
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x1",
			"357_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x10 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x10)";
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
			"357_HP_x5",
			"357_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x20 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x20)";
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
			"357_HP_x10",
			"357_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x30 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x30)";
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
			"357_HP_x20",
			"357_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x40 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x40)";
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
			"357_HP_x30",
			"357_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x50 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x50)";
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
			"357_HP_x40",
			"357_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_HP_x100 : 357_HP_x1 {
	scope = public;
	displayName = ".357 Magnum HP (x100)";
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
			"357_HP_x50",
			"357_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x1 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x1)";
	ammo = "B_357mag_TRACER";
	bulletCount = 1;
	baseName = "357_TRACER_x";
	baseDesc = ".357 Magnum Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .357 Magnum Tracer rounds";
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

class 357_TRACER_x2 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x2)";
	bulletCount = 2;
	takeOne="357_TRACER_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_TRACER_x1",
			"357_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x3 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x3)";
	bulletCount = 3;
	takeOne="357_TRACER_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x4 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x4)";
	bulletCount = 4;
	takeOne="357_TRACER_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x5 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x5)";
	bulletCount = 5;
	takeOne="357_TRACER_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x6 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x6)";
	bulletCount = 6;
	takeOne="357_TRACER_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_TRACER_x1",
			"357_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x7 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x7)";
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
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x8 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x8)";
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
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x9 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x9)";
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
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x1",
			"357_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x10 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x10)";
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
			"357_TRACER_x5",
			"357_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x20 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x20)";
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
			"357_TRACER_x10",
			"357_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x30 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x30)";
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
			"357_TRACER_x20",
			"357_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x40 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x40)";
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
			"357_TRACER_x30",
			"357_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x50 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x50)";
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
			"357_TRACER_x40",
			"357_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_TRACER_x100 : 357_TRACER_x1 {
	scope = public;
	displayName = ".357 Magnum Tracer (x100)";
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
			"357_TRACER_x50",
			"357_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x1 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x1)";
	ammo = "B_357mag_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "357_RUBBER_x";
	baseDesc = ".357 Magnum Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .357 Magnum Rubber rounds";
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

class 357_RUBBER_x2 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x2)";
	bulletCount = 2;
	takeOne="357_RUBBER_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_RUBBER_x1",
			"357_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x3 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x3)";
	bulletCount = 3;
	takeOne="357_RUBBER_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x4 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x4)";
	bulletCount = 4;
	takeOne="357_RUBBER_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x5 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x5)";
	bulletCount = 5;
	takeOne="357_RUBBER_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x6 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x6)";
	bulletCount = 6;
	takeOne="357_RUBBER_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_RUBBER_x1",
			"357_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x7 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x7)";
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
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x8 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x8)";
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
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x9 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x9)";
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
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x1",
			"357_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x10 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x10)";
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
			"357_RUBBER_x5",
			"357_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x20 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x20)";
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
			"357_RUBBER_x10",
			"357_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x30 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x30)";
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
			"357_RUBBER_x20",
			"357_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x40 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x40)";
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
			"357_RUBBER_x30",
			"357_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x50 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x50)";
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
			"357_RUBBER_x40",
			"357_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_RUBBER_x100 : 357_RUBBER_x1 {
	scope = public;
	displayName = ".357 Magnum Rubber (x100)";
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
			"357_RUBBER_x50",
			"357_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x1 : 357_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x1)";
	ammo = "B_357mag_BT";
	bulletCount = 1;
	baseName = "357_BT_x";
	baseDesc = ".357 Magnum Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .357 Magnum Ballistic Tip rounds";
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

class 357_BT_x2 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x2)";
	bulletCount = 2;
	takeOne="357_BT_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_BT_x1",
			"357_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x3 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x3)";
	bulletCount = 3;
	takeOne="357_BT_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x4 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x4)";
	bulletCount = 4;
	takeOne="357_BT_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x5 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x5)";
	bulletCount = 5;
	takeOne="357_BT_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x6 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x6)";
	bulletCount = 6;
	takeOne="357_BT_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"357_BT_x1",
			"357_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x7 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x7)";
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
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x8 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x8)";
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
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x9 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x9)";
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
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x1",
			"357_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x10 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x10)";
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
			"357_BT_x5",
			"357_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x20 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x20)";
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
			"357_BT_x10",
			"357_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x30 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x30)";
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
			"357_BT_x20",
			"357_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x40 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x40)";
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
			"357_BT_x30",
			"357_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x50 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x50)";
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
			"357_BT_x40",
			"357_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 357_BT_x100 : 357_BT_x1 {
	scope = public;
	displayName = ".357 Magnum Ballistic Tip (x100)";
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
			"357_BT_x50",
			"357_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};