class 32ACP_x1 : baseBullet {
	scope = public;
	displayName = ".32 ACP (x1)";
	ammo = "B_32ACP_Ball";
	bulletCount = 1;
	baseName = "32ACP_x";
	initSpeed=300;
	baseDesc = ".32 ACP";
	picture = "\dayz_equip\textures\equip_ball.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .32 ACP rounds";
	
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

class 32ACP_x2 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x2)";
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
			"32ACP_x1",
			"32ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x3 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x3)";
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
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x4 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x4)";
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
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x5 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x5)";
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
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x6 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x6)";
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
			"32ACP_x1",
			"32ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x7 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x7)";
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
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x8 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x8)";
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
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x9 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x9)";
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
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x1",
			"32ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x10 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x10)";
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
			"32ACP_x5",
			"32ACP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x20 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x20)";
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
			"32ACP_x10",
			"32ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x30 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x30)";
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
			"32ACP_x20",
			"32ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x40 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x40)";
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
			"32ACP_x30",
			"32ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x50 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x50)";
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
			"32ACP_x40",
			"32ACP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_x100 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP (x100)";
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
			"32ACP_x50",
			"32ACP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x1 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x1)";
	ammo = "B_32ACP_HP";
	bulletCount = 1;
	baseName = "32ACP_HP_x";
	baseDesc = ".32 ACP Hollow Point";
	picture = "\dayz_equip\textures\equip_hp.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .32 ACP Hollow Point rounds";
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

class 32ACP_HP_x2 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x2)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x3 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x3)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x4 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x4)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x5 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x5)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x6 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x6)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x7 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x7)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x8 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x8)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x9 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x9)";
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
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x1",
			"32ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x10 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x10)";
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
			"32ACP_HP_x5",
			"32ACP_HP_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x20 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x20)";
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
			"32ACP_HP_x10",
			"32ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x30 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x30)";
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
			"32ACP_HP_x20",
			"32ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x40 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x40)";
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
			"32ACP_HP_x30",
			"32ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x50 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x50)";
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
			"32ACP_HP_x40",
			"32ACP_HP_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_HP_x100 : 32ACP_HP_x1 {
	scope = public;
	displayName = ".32 ACP HP (x100)";
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
			"32ACP_HP_x50",
			"32ACP_HP_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x1 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x1)";
	ammo = "B_32ACP_TRACER";
	bulletCount = 1;
	baseName = "32ACP_TRACER_x";
	baseDesc = ".32 ACP Tracer";
	picture = "\dayz_equip\textures\equip_tracer.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .32 ACP Tracer rounds";
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

class 32ACP_TRACER_x2 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x2)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x3 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x3)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x4 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x4)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x5 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x5)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x6 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x6)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x7 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x7)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x8 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x8)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x9 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x9)";
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
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x1",
			"32ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x10 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x10)";
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
			"32ACP_TRACER_x5",
			"32ACP_TRACER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x20 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x20)";
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
			"32ACP_TRACER_x10",
			"32ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x30 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x30)";
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
			"32ACP_TRACER_x20",
			"32ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x40 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x40)";
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
			"32ACP_TRACER_x30",
			"32ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x50 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x50)";
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
			"32ACP_TRACER_x40",
			"32ACP_TRACER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_TRACER_x100 : 32ACP_TRACER_x1 {
	scope = public;
	displayName = ".32 ACP Tracer (x100)";
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
			"32ACP_TRACER_x50",
			"32ACP_TRACER_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x1 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x1)";
	ammo = "B_32ACP_RUBBER";
	bulletCount = 1;
	initSpeed=200;
	baseName = "32ACP_RUBBER_x";
	baseDesc = ".32 ACP Rubber";
	picture = "\dayz_equip\textures\equip_rubber.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .32 ACP Rubber rounds";
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

class 32ACP_RUBBER_x2 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x2)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x3 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x3)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x4 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x4)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x5 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x5)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x6 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x6)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x7 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x7)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x8 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x8)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x9 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x9)";
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
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x10 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x10)";
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
			"32ACP_RUBBER_x5",
			"32ACP_RUBBER_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x20 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x20)";
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
			"32ACP_RUBBER_x10",
			"32ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x30 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x30)";
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
			"32ACP_RUBBER_x20",
			"32ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x40 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x40)";
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
			"32ACP_RUBBER_x30",
			"32ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_RUBBER_x50 : 32ACP_RUBBER_x1 {
	scope = public;
	displayName = ".32 ACP Rubber (x50)";
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
			"32ACP_RUBBER_x40",
			"32ACP_RUBBER_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x1 : 32ACP_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x1)";
	ammo = "B_32ACP_BT";
	bulletCount = 1;
	baseName = "32ACP_BT_x";
	baseDesc = ".32 ACP Ballistic Tip";
	picture = "\dayz_equip\textures\equip_bt.paa";
	model = "\dayz_equip\models\ammo_acp45.p3d";
	descriptionShort = "Caliber: .32 ACP Ballistic Tip rounds";
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

class 32ACP_BT_x2 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x2)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x3 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x3)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x4 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x4)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x5 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x5)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x6 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x6)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x7 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x7)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x8 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x8)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x9 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x9)";
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
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x1",
			"32ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x10 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x10)";
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
			"32ACP_BT_x5",
			"32ACP_BT_x5"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x20 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x20)";
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
			"32ACP_BT_x10",
			"32ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x30 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x30)";
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
			"32ACP_BT_x20",
			"32ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x40 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x40)";
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
			"32ACP_BT_x30",
			"32ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x50 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x50)";
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
			"32ACP_BT_x40",
			"32ACP_BT_x10"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};

class 32ACP_BT_x100 : 32ACP_BT_x1 {
	scope = public;
	displayName = ".32 ACP Ballistic Tip (x100)";
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
			"32ACP_BT_x50",
			"32ACP_BT_x50"};
		};
		class loadMag {
			text = "Load to...";
			script = "spawn player_loadAmmo;";
		};
	};
};