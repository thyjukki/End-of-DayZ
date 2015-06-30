class 44_x1 : baseBullet {
	scope = public;
	displayName = ".44 Magnum (x1)";
	ammo = "B_44mag_ball";
	bulletCount = 1;
	initSpeed=421;
	baseName = "44_x";
	baseDesc = ".44 Magnum";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .44 Magnum rounds";
	
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

class 44_x2 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x2)";
	bulletCount = 2;
	takeOne="44_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_x1",
			"44_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x3 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x3)";
	bulletCount = 3;
	takeOne="44_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_x1",
			"44_x1",
			"44_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x4 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x4)";
	bulletCount = 4;
	takeOne="44_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_x1",
			"44_x1",
			"44_x1",
			"44_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x5 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x5)";
	bulletCount = 5;
	takeOne="44_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_x1",
			"44_x1",
			"44_x1",
			"44_x1",
			"44_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x6 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x6)";
	bulletCount = 6;
	takeOne="44_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_x1",
			"44_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x7 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x7)";
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
			"44_x1",
			"44_x1",
			"44_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x8 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x8)";
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
			"44_x1",
			"44_x1",
			"44_x1",
			"44_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x9 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x9)";
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
			"44_x1",
			"44_x1",
			"44_x1",
			"44_x1",
			"44_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x10 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x10)";
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
			"44_x5",
			"44_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x20 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x20)";
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
			"44_x10",
			"44_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x30 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x30)";
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
			"44_x20",
			"44_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x40 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x40)";
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
			"44_x30",
			"44_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x50 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x50)";
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
			"44_x40",
			"44_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_x100 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum (x100)";
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
			"44_x50",
			"44_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x1 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x1)";
	ammo = "B_44mag_HP";
	bulletCount = 1;
	baseName = "44_HP_x";
	baseDesc = ".44 Magnum Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .44 Magnum Hollow Point rounds";
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

class 44_HP_x2 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x2)";
	bulletCount = 2;
	takeOne="44_HP_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_HP_x1",
			"44_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x3 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x3)";
	bulletCount = 3;
	takeOne="44_HP_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x4 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x4)";
	bulletCount = 4;
	takeOne="44_HP_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x5 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x5)";
	bulletCount = 5;
	takeOne="44_HP_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x6 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x6)";
	bulletCount = 6;
	takeOne="44_HP_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_HP_x1",
			"44_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x7 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x7)";
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
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x8 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x8)";
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
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x9 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x9)";
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
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x1",
			"44_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x10 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x10)";
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
			"44_HP_x5",
			"44_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x20 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x20)";
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
			"44_HP_x10",
			"44_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x30 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x30)";
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
			"44_HP_x20",
			"44_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x40 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x40)";
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
			"44_HP_x30",
			"44_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x50 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x50)";
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
			"44_HP_x40",
			"44_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_HP_x100 : 44_HP_x1 {
	scope = public;
	displayName = ".44 Magnum HP (x100)";
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
			"44_HP_x50",
			"44_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x1 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x1)";
	ammo = "B_44mag_TRACER";
	bulletCount = 1;
	baseName = "44_TRACER_x";
	baseDesc = ".44 Magnum Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .44 Magnum Tracer rounds";
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

class 44_TRACER_x2 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x2)";
	bulletCount = 2;
	takeOne="44_TRACER_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_TRACER_x1",
			"44_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x3 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x3)";
	bulletCount = 3;
	takeOne="44_TRACER_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x4 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x4)";
	bulletCount = 4;
	takeOne="44_TRACER_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x5 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x5)";
	bulletCount = 5;
	takeOne="44_TRACER_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x6 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x6)";
	bulletCount = 6;
	takeOne="44_TRACER_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_TRACER_x1",
			"44_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x7 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x7)";
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
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x8 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x8)";
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
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x9 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x9)";
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
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x1",
			"44_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x10 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x10)";
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
			"44_TRACER_x5",
			"44_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x20 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x20)";
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
			"44_TRACER_x10",
			"44_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x30 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x30)";
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
			"44_TRACER_x20",
			"44_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x40 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x40)";
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
			"44_TRACER_x30",
			"44_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x50 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x50)";
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
			"44_TRACER_x40",
			"44_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_TRACER_x100 : 44_TRACER_x1 {
	scope = public;
	displayName = ".44 Magnum Tracer (x100)";
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
			"44_TRACER_x50",
			"44_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x1 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x1)";
	ammo = "B_44mag_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "44_RUBBER_x";
	baseDesc = ".44 Magnum Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .44 Magnum Rubber rounds";
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

class 44_RUBBER_x2 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x2)";
	bulletCount = 2;
	takeOne="44_RUBBER_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_RUBBER_x1",
			"44_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x3 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x3)";
	bulletCount = 3;
	takeOne="44_RUBBER_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x4 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x4)";
	bulletCount = 4;
	takeOne="44_RUBBER_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x5 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x5)";
	bulletCount = 5;
	takeOne="44_RUBBER_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x6 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x6)";
	bulletCount = 6;
	takeOne="44_RUBBER_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_RUBBER_x1",
			"44_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x7 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x7)";
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
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x8 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x8)";
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
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x9 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x9)";
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
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x1",
			"44_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x10 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x10)";
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
			"44_RUBBER_x5",
			"44_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x20 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x20)";
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
			"44_RUBBER_x10",
			"44_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x30 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x30)";
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
			"44_RUBBER_x20",
			"44_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x40 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x40)";
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
			"44_RUBBER_x30",
			"44_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x50 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x50)";
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
			"44_RUBBER_x40",
			"44_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_RUBBER_x100 : 44_RUBBER_x1 {
	scope = public;
	displayName = ".44 Magnum Rubber (x100)";
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
			"44_RUBBER_x50",
			"44_RUBBER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x1 : 44_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x1)";
	ammo = "B_44mag_BT";
	bulletCount = 1;
	baseName = "44_BT_x";
	baseDesc = ".44 Magnum Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .44 Magnum Ballistic Tip rounds";
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

class 44_BT_x2 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x2)";
	bulletCount = 2;
	takeOne="44_BT_x1";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_BT_x1",
			"44_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x3 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x3)";
	bulletCount = 3;
	takeOne="44_BT_x2";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x4 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x4)";
	bulletCount = 4;
	takeOne="44_BT_x3";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x5 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x5)";
	bulletCount = 5;
	takeOne="44_BT_x4";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x6 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x6)";
	bulletCount = 6;
	takeOne="44_BT_x5";
	
	class ItemActions {
		class Stack {
			text = "Stack..";
			script = "spawn player_combineAmmo;";
		};
		class Split {
			text = "Split to x1";
			script = "spawn player_splitAmmo;";
			out[] = {
			"44_BT_x1",
			"44_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x7 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x7)";
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
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x8 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x8)";
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
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x9 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x9)";
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
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x1",
			"44_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x10 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x10)";
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
			"44_BT_x5",
			"44_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x20 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x20)";
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
			"44_BT_x10",
			"44_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x30 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x30)";
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
			"44_BT_x20",
			"44_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x40 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x40)";
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
			"44_BT_x30",
			"44_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x50 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x50)";
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
			"44_BT_x40",
			"44_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 44_BT_x100 : 44_BT_x1 {
	scope = public;
	displayName = ".44 Magnum Ballistic Tip (x100)";
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
			"44_BT_x50",
			"44_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};