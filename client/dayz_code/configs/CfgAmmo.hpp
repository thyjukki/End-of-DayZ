class CfgAmmo {
	class BulletBase;
//as50
	class B_127x99_Ball: BulletBase {
		airfriction = -0.00068;
		airlock = 1;
		audiblefire = 22;
		caliber = 2.07;
		cartridge = "FxCartridge_127";
		cost = 20;
		hit = 0; //26
		indirecthit = 0;
		indirecthitrange = 0;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerendtime = 2.3;
		tracerscale = 1.5;
		tracerstarttime = 0.1;
		visiblefire = 22;
		visiblefiretime = 3;
	};
	class B_127x99_Ball_noTracer: B_127x99_Ball {
		airfriction = -0.0005;
		audiblefire = 22;
		muzzleeffect = "BIS_Effects_HeavySniper";
		tracercolor[] = {0, 0, 0, 0};
		tracercolorr[] = {0, 0, 0, 0};
		tracerstarttime = -1;
		visiblefire = 20;
		visiblefiretime = 3;
	};
	class B_127x99_Ball_noTracer_BAF: B_127x99_Ball_noTracer {
		hit = 0; //56
		indirecthit = 0;
		indirecthitrange = 0;
	};
//1911
	class B_45ACP_Ball : BulletBase {
		airfriction = -0.0013522;
		audiblefire = 16;
		caliber = 0.33; //33
		cartridge = "FxCartridge_9mm";
		cost = 5;
		hit = 9;
		indirecthit = 0;
		indirecthitrange = 0;
		typicalspeed = 260;
		visiblefire = 16;
	};

	class Bolt;
	class WoodenArrow : Bolt {
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	class Melee;
	class Machete_Swing_Ammo : Melee {
		hit = 3;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Hatchet_Swing_Ammo : Melee {
		hit = 3;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Crowbar_Swing_Ammo : Melee {
		hit = 2;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Fishing_Swing_Ammo : Melee {
		hit = 1;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class Bat_Swing_Ammo : Melee {
		hit = 1;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class BatBarbed_Swing_Ammo : Melee {
		hit = 2;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};
	class BatNailed_Swing_Ammo : Melee {
		hit = 2;
		simulation = "shotSpread";
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 3.5;
		maxRange = 5;
		maxRangeProbab = 5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.04;
		soundHit[] = {"", db-90, 1};
		soundEngine[] = {"", db-80, 4};
	};

	// used for grenade traps
	class GrenadeHandTimedWest;
	class GrenadeHandTimedWest_DZ : GrenadeHandTimedWest {
		//explosiontime = 1;
		fusedistance = 0;
	};
	
	#include "CfgAmmo\r_9x18.hpp"
	#include "CfgAmmo\r_9x19.hpp"
	#include "CfgAmmo\r_9x39.hpp"
	#include "CfgAmmo\r_22lr.hpp"
	#include "CfgAmmo\r_30cal.hpp"
	#include "CfgAmmo\r_32acp.hpp"
	#include "CfgAmmo\r_45acp.hpp"
	#include "CfgAmmo\r_46x30.hpp"
	#include "CfgAmmo\r_50AE.hpp"
	#include "CfgAmmo\r_57x28.hpp"
	#include "CfgAmmo\r_762x39.hpp"
};
