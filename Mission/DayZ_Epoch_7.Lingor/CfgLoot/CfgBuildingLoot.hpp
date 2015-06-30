#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};

		lootPosSmall[] = {};
		lootPosZombie[] = {};
		
		itemType[] = {};

		itemChance[] = {};
		lootTypeSmall[] = {};
		itemChanceSmall[] = {};

		hangPos[] = {};
		vehPos[] = {};
	};
	
	class Castle: Default {
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			//{"ItemMatchbox","weapon",0.01},
			{"ItemKnife",					"weapon",0.01},
			{"ItemMap",						"generic",0.01},
			{"ItemCompass",					"weapon",0.01},
			{"ItemFlashlight",				"weapon",0.01},
		//weapons
			{"WeaponHolder_ItemHatchet",	"object",0.01},
			{"Mosin_Nagant",				"weapon",0.05},
			{"Mosin_Nagant_Scoped",			"weapon",0.01},
			{"KPFS_KarS",					"weapon",0.05},
			{"KPFS_M1_Carbine",				"weapon",0.01},
			{"KPFS_M1_Garand",				"weapon",0.01},
			{"KPFS_M1_Garand_M84",			"weapon",0.01},
			{"RH_ak47_Civ",					"weapon",0.01},
			{"RH_M4_Civ",					"weapon",0.01},
			{"huntingrifle",				"weapon",0.01},
		//special
			{"WeaponHolder_ItemTent",		"object",0.01},
			//{"WeaponHolder_DomeTentStorage","object",0.01},
		//mags special
			{"PartWoodPile",				"magazine",0.04},
		//bags
			{"DZ_Backpack_WIN",				"object",0.01},
			{"DZ_Backpack_BLK",				"object",0.01},
			{"DZ_Backpack_FIN",				"object",0.01},
			{"DZ_Assault_Pack_EP1",			"object",0.05},
			{"DZ_Czech_Vest_Puch",			"object",0.07},
		// Tools
			{"ItemRadio",					"weapon",0.10},
		//Multiple spawns
			//{"","Residential",0.60},
			{"",							"civilianMagazines",0.2},
			{"",							"militaryMagazines",0.05},
			{"",							"civilianAmmo",0.2},
			{"",							"militaryAmmo",0.05},
			{"",							"westernMagazines",0.01},
			{"",							"westernAmmo",0.01},
			{"","generic",0.40}
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemWatch","generic",0.04},
			{"ItemCompass","generic",0.03},
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.04},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.32},
			{"backpacks","backpacks",0.04},
			{"tents","tents",0.01},
			{"","military",0.02},
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.02},
			{"","westernMagazines",0.02},
			{"","civilianAmmo",0.25},
			{"","militaryAmmo",0.03},
			{"","westernAmmo",0.03},
			{"","trash",0.17},
			{"Binocular","weapon",0.02},
			{"PartPlywoodPack","magazine",0.02},
			{"clothes","clothes",0.01},
			{"specialclothes","specialclothes",0.01},
			{"WeaponHolder_MeleeCrowbar","object",0.03},
			{"pistols", "cfglootweapon", 0.04 },
			{"shotgunsingleshot", "cfglootweapon", 0.04 }
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.02 },
			{ "ItemWatch","weapon",0.05 },
			{ "ItemCompass","weapon",0.04 },
			{ "ItemMap","weapon",0.03 },
			{ "pistols","cfglootweapon",0.12 },
			{ "ItemFlashlight","weapon",0.02 },
			{ "ItemKnife","weapon",0.04 },
			{ "ItemMatchbox_DZE","weapon",0.03 },
			{ "","generic",0.38 },
			{ "","military",0.04 },
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.03},
			{"","civilianAmmo",0.25},
			{"","militaryAmmo",0.04},
			{"","westernMagazines",0.03},
			{"","westernAmmo",0.04},
			{ "","trash",0.17 },
			{ "Binocular","weapon",0.02 },
			{ "clothes","single",0.01},
			{ "specialclothes","single",0.01 }
		};
	};
	class Office: Default {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
		zombieChance = 0.3;
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
			{"ItemWatch","generic",0.04},
			{"ItemCompass","generic",0.03},
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.04},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.31},
			{"backpacks","backpacks",0.04},
			{"tents","tents",0.01},
			{"","military",0.02},
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.01},
			{"","westernMagazines",0.01},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.02},
			{"","westernAmmo",0.02},
			{"","trash",0.21},
			{"Binocular","weapon",0.02},
			{"PartPlywoodPack","magazine",0.02},
			{"clothes","clothes",0.01},
			{"specialclothes","specialclothes",0.01},
			{"WeaponHolder_MeleeCrowbar","object",0.03},
			{"ItemBriefcaseEmpty","magazine",0.01},
			{ "shotgunsingleshot", "cfglootweapon", 0.05}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.02 },
			{ "ItemWatch","weapon",0.05 },
			{ "ItemCompass","weapon",0.04 },
			{ "ItemMap","weapon",0.03 },
			{ "pistols","cfglootweapon",0.15 },
			{ "ItemFlashlight","weapon",0.02 },
			{ "ItemKnife","weapon",0.05 },
			{ "ItemMatchbox_DZE","weapon",0.03 },
			{ "","generic",0.31 },			
			{ "","military",0.04 },
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.03},
			{"","westernMagazines",0.03},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.04},
			{"","westernAmmo",0.04},
			{ "","trash",0.03 },
			{ "Binocular","weapon",0.02 },
			{ "clothes","single",0.16 },
			{ "specialclothes","single",0.02 },
			{ "ItemDocument","magazine",0.01 }
		};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemGenerator","magazine",0.01},
			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"","generic",0.17},
			{"","trash",0.25},
			{"","military",0.04},
			{"","civilianMagazines",0.1},
			{"","militaryMagazines",0.03},
			{"","westernMagazines",0.03},
			{"","civilianAmmo",0.2},
			{"","militaryAmmo",0.04},
			{"","westernAmmo",0.04},
			{"PartGeneric","magazine",0.04},
			{"PartWheel","magazine",0.05},
			{"PartFueltank","magazine",0.02},
			{"PartEngine","magazine",0.02},
			{"PartGlass","magazine",0.04},
			{"PartVRotor","magazine",0.01},
			{"ItemJerrycan","magazine",0.04},
			{"WeaponHolder_ItemHatchet_DZE","object",0.07},
			{"ItemKnife","military",0.07},
			{"ItemToolbox","weapon",0.06},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemKeyKit","weapon",0.01},
			{"CinderBlocks","magazine",0.03},
			{"MortarBucket","magazine",0.01}
		};
		lootTypeSmall[] = {
			{ "","generic",0.5 },
			{ "","trash",0.28 },
			{ "","military",0.14 },
			{"","civilianMagazines",0.1},
			{"","militaryMagazines",0.1},
			{"","westernMagazines",0.1},
			{"","civilianAmmo",0.14},
			{"","militaryAmmo",0.14},
			{"","westernAmmo",0.14},
			{ "ItemKnife","weapon",0.07 },
			{ "ItemKeyKit","weapon",0.01 }
		};
	};
	class IndustrialFuel: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
			{"ItemGenerator","magazine",0.01},
			{"fuel_pump_kit","magazine",0.01},
			{"","generic",0.18},
			{"","trash",0.28},
			{"","military",0.04},
			{"","civilianMagazines",0.1},
			{"","militaryMagazines",0.03},
			{"","westernMagazines",0.03},
			{"","civilianAmmo",0.2},
			{"","militaryAmmo",0.04},
			{"","westernAmmo",0.04},
			{"PartGeneric","magazine",0.04},
			{"PartWheel","magazine",0.05},
			{"PartFueltank","magazine",0.02},
			{"PartEngine","magazine",0.02},
			{"PartGlass","magazine",0.04},
			{"PartVRotor","magazine",0.01},
			{"ItemJerrycan","magazine",0.04},
			{"WeaponHolder_ItemHatchet_DZE","object",0.07},
			{"ItemKnife","military",0.07},
			{"ItemToolbox","weapon",0.06},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemKeyKit","weapon",0.01}
		};
		lootTypeSmall[] = {
			{ "","generic",0.5 },
			{ "","trash",0.28 },
			{ "","military",0.14 },
			{"","civilianMagazines",0.1},
			{"","militaryMagazines",0.1},
			{"","westernMagazines",0.1},
			{"","civilianAmmo",0.14},
			{"","militaryAmmo",0.14},
			{"","westernAmmo",0.14},
			{ "ItemKnife","weapon",0.07 },
			{ "ItemKeyKit","weapon",0.01 }
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemJerrycan","magazine",0.05},
			{"","generic",0.3},
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.02},
			{"","westernMagazines",0.02},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.03},
			{"","westernAmmo",0.03},
			{"","trash",0.11},
			{"PartPlankPack","magazine",0.06},
			{"WeaponHolder_ItemHatchet_DZE","object",0.05},
			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"WeaponHolder_ItemMachete","object",0.03},
			{"ItemFishingPole","weapon",0.02},
			{"ItemLightBulb","magazine",0.02},
			{"ItemSledgeHandle","magazine",0.02},
			{ "farmweapons", "cfglootweapon", 0.15}
		};
		lootTypeSmall[] = {
			{ "","generic", 0.79},
			{ "","trash",0.14 },
			{ "","military",0.05},
			{"","civilianMagazines",0.04},
			{"","militaryMagazines",0.04},
			{"","westernMagazines",0.04},
			{"","civilianAmmo",0.05},
			{"","militaryAmmo",0.05},
			{"","westernAmmo",0.05},
			{ "ItemLightBulb","magazine",0.01},
			{ "ItemSledgeHead","magazine",0.01}
		};
	};
	class Supermarket: Default {
		lootChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootType[] = {
			{"ItemSodaMdew","magazine",0.01},
			{"ItemSodaRbull","magazine",0.01},
			{"ItemSodaOrangeSherbet","magazine",0.03},
			{"ItemWatch","generic",0.07},
			{"ItemCompass","generic",0.02},
			{"ItemMap","weapon",0.04},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.02},
			{"ItemMatchbox_DZE","generic",0.04},
			{"","generic",0.04},
			{"backpacks","backpacks",0.07},
			{"tents","tents",0.01},
			{"","food",0.3},
			{"","trash",0.17},
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.02},
			{"","westernMagazines",0.02},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.03},
			{"","westernAmmo",0.03},
			{"Binocular","weapon",0.05},
			{"PartPlywoodPack","magazine",0.02},
			{ "pistols", "cfglootweapon", 0.04},
			{ "shotgunsingleshot", "cfglootweapon", 0.04}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.03 },
			{ "ItemWatch","weapon",0.07 },
			{ "ItemCompass","weapon",0.03 },
			{ "ItemMap","weapon",0.05 },
			{ "pistols","cfglootweapon",0.08 },
			{ "ItemFlashlight","weapon",0.01 },
			{ "ItemKnife","weapon",0.02 },
			{ "ItemMatchbox_DZE","weapon",0.04 },
			{ "","generic",0.21 },
			{ "","food",0.24 },
			{ "","trash",0.16 },
			{"","civilianMagazines",0.2},
			{"","militaryMagazines",0.02},
			{"","westernMagazines",0.02},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.03},
			{"","westernAmmo",0.03},
			{ "Binocular","weapon",0.02 },
			{ "ItemMixOil", "magazine",0.02}
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.10 },
			{ "submachinegun", "cfglootweapon", 0.04 },
			{ "sniperrifles", "cfglootweapon", 0.07 },
			{ "machineguns", "cfglootweapon", 0.06 },
			{"","military",0.3},
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{"","medical",0.18},
			{"MAAWS","weapon",0.02},
			{"MedBox0","object",0.05},
			{"NVGoggles","weapon",0.01},
			{"AmmoBoxSmall_556","object",0.03},
			{"AmmoBoxSmall_762","object",0.03},
			{"militaryclothes","militaryclothes",0.05},
			{"militaryammo","militaryammo",0.06}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.10 },
			{ "submachinegun", "cfglootweapon", 0.04 },
			{ "sniperrifles", "cfglootweapon", 0.07 },
			{ "machineguns", "cfglootweapon", 0.06 },
			{ "", "military", 0.3 },
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{"","medical",0.18},
			{ "MAAWS", "weapon", 0.02 },
			{ "MedBox0", "object", 0.05 },
			{ "NVGoggles", "weapon", 0.01 },
			{ "AmmoBoxSmall_556", "object", 0.03 },
			{ "AmmoBoxSmall_762", "object", 0.03 },
			{ "militaryclothes", "militaryclothes", 0.05 },
			{ "militaryammo", "militaryammo", 0.06 }
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{"","trash",0.1},
			{"","hospital",0.7},
			{"MedBox0","object",0.2}
		};
		lootTypeSmall[] = {
			{ "","trash",0.1 },
			{ "","hospital",0.9 }
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.04},
			{ "assaultrifles", "cfglootweapon", 0.13 },
			{ "sniperrifles", "cfglootweapon", 0.04 },
			{ "shotgunsingleshot", "cfglootweapon", 0.06 },
			{ "submachinegun", "cfglootweapon", 0.07 },
			{"Binocular","weapon",0.03},
			{"ItemFlashlightRed","military",0.04},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","military",0.02},
			{"militarybackpacks","militarybackpacks",0.05},
			{"","medical",0.03},
			{"","generic",0.1},
			{"","military",0.3},
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{"ItemEtool","weapon",0.02},
			{"ItemSandbag","magazine",0.02},
			{ "machineguns", "cfglootweapon", 0.03 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.14 },
			{ "Binocular", "weapon", 0.05 },
			{ "ItemFlashlightRed", "weapon", 0.03 },
			{ "ItemKnife", "weapon", 0.04 },
			{ "ItemGPS", "weapon", 0.02 },
			{ "", "medical", 0.12 },
			{ "", "generic", 0.22 },
			{ "", "military", 0.35 },
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{ "ItemEtool", "weapon", 0.03 }
		};
	};
	class MilitaryIndustrial: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.02 },
			{ "assaultrifles", "cfglootweapon", 0.05 },
			{ "PartGeneric", "magazine", 0.03 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.05 },
			{ "ItemGenerator", "magazine", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.05 },
			{"PartGeneric","magazine",0.03},
			{"ItemGenerator","magazine",0.01},
			{"PartWheel","magazine",0.02},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.03},
			{"ItemKnife","military",0.04},
			{"ItemGPS","weapon",0.01},
			{"PartVRotor","magazine",0.01},
			{"militarybackpacks","militarybackpacks",0.03},
			{"","medical",0.05},
			{"","generic",0.35},
			{"","military",0.07},
			{"","civilianMagazines",0.05},
			{"","militaryMagazines",0.05},
			{"","westernMagazines",0.05},
			{"","civilianAmmo",0.07},
			{"","militaryAmmo",0.07},
			{"","westernAmmo",0.07},
			{"ItemEtool","weapon",0.03},
			{"ItemSandbag","magazine",0.02},
			{"ItemFuelBarrelEmpty","magazine",0.03},
			{"fuel_pump_kit","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.14 },
			{ "Binocular", "weapon", 0.05 },
			{ "ItemFlashlightRed", "weapon", 0.03 },
			{ "ItemKnife", "weapon", 0.04 },
			{ "ItemGPS", "weapon", 0.02 },
			{ "", "medical", 0.12 },
			{ "", "generic", 0.22 },
			{ "", "military", 0.35 },
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{ "ItemEtool", "weapon", 0.03 }
		};
	};
	class IndustrialMilitary: Default {
		zombieChance = 0.4;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.02 },
			{ "assaultrifles", "cfglootweapon", 0.05 },
			{ "PartGeneric", "magazine", 0.03 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.05 },
			{ "ItemGenerator", "magazine", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.05 },
			{"PartGeneric","magazine",0.03},
			{"ItemGenerator","magazine",0.01},
			{"PartWheel","magazine",0.02},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.03},
			{"ItemKnife","military",0.04},
			{"ItemGPS","weapon",0.01},
			{"PartVRotor","magazine",0.01},
			{"PartFueltank","magazine",0.03},
			{"PartEngine","magazine",0.04},
			{"PartGlass","magazine",0.05},
			{"militarybackpacks","militarybackpacks",0.03},
			{"","medical",0.05},
			{"","generic",0.25},
			{"","military",0.07},
			{"","civilianMagazines",0.05},
			{"","militaryMagazines",0.05},
			{"","westernMagazines",0.05},
			{"","civilianAmmo",0.07},
			{"","militaryAmmo",0.07},
			{"","westernAmmo",0.07},
			{"ItemEtool","weapon",0.03},
			
			{"ItemSandbag","magazine",0.02},

			{"ItemFuelBarrelEmpty","magazine",0.03},
			{"fuel_pump_kit","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.14 },
			{ "Binocular", "weapon", 0.05 },
			{ "ItemFlashlightRed", "weapon", 0.03 },
			{ "ItemKnife", "weapon", 0.04 },
			{ "ItemGPS", "weapon", 0.02 },
			{ "", "medical", 0.12 },
			{ "", "generic", 0.22 },
			{ "", "military", 0.35 },
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{ "ItemEtool", "weapon", 0.03 }
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.1 },
			{ "machineguns", "cfglootweapon", 0.04 },
			{ "pistols", "cfglootweapon", 0.08 },
			{ "sniperrifles", "cfglootweapon", 0.03 },
			{ "militaryshotguns", "cfglootweapon", 0.05 },
			{ "submachinegun", "cfglootweapon", 0.06 },
			{"AmmoBoxSmall_556","object",0.01},
			{"AmmoBoxSmall_762","object",0.02},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.02},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","military",0.01},
			{"Binocular_Vector","military",0.01},
			{"militarybackpacks","militarybackpacks",0.04},
			{"","medical",0.08},
			{"","generic",0.3},
			{"","military",0.01},
			{"","civilianMagazines",0.01},
			{"","militaryMagazines",0.01},
			{"","westernMagazines",0.01},
			{"","civilianAmmo",0.02},
			{"","militaryAmmo",0.02},
			{"","westernAmmo",0.02},
			{"militaryclothes","militaryclothes",0.05},
			{"NVGoggles","weapon",0.01}
		};
		lootTypeSmall[] = {
			{ "pistols","cfglootweapon",0.10 },
			{ "AmmoBoxSmall_556","object",0.02 },
			{ "AmmoBoxSmall_762","object",0.02 },
			{ "Binocular","weapon",0.02 },
			{ "ItemFlashlightRed","military",0.01 },
			{ "ItemKnife","military",0.02 },
			{ "ItemGPS","weapon",0.02 },
			{ "ItemMap","weapon",0.01 },
			{ "Binocular_Vector","weapon",0.03},
			{ "","medical",0.08},
			{ "","generic",0.15},
			{ "","military",0.33 },
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{ "militaryclothes","single",0.05 },
			{ "NVGoggles","weapon",0.04 }
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.01},
			{"ItemMatchbox_DZE","generic",0.03},
			{ "farmweapons", "cfglootweapon", 0.03 },
			{"","military",0.38},
			{"","civilianMagazines",0.20},
			{"","militaryMagazines",0.20},
			{"","westernMagazines",0.20},
			{"","civilianAmmo",0.3},
			{"","militaryAmmo",0.3},
			{"","westernAmmo",0.3},
			{"WeaponHolder_ItemMachete","object",0.02},
			{"","hunter",0.5}
		};
		lootTypeSmall[] =	{
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","weapon",0.02},
			{"ItemKnife","weapon",0.02},
			{"ItemMatchbox_DZE","weapon",0.04},
			{"","military",0.4},
			{"","civilianMagazines",0.25},
			{"","militaryMagazines",0.25},
			{"","westernMagazines",0.25},
			{"","civilianAmmo",0.35},
			{"","militaryAmmo",0.35},
			{"","westernAmmo",0.35},
			{"","hunter",0.5}
		};
	};
	class DynamicDebris: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootType[] = {
			{ "ItemWatch", "generic", 0.19 },
			{ "ItemCompass", "generic", 0.01 },
			{ "ItemMap", "weapon", 0.06 },
			{"pistols", "cfglootweapon", 0.04 },
			{ "ItemFlashlight", "generic", 0.06 },
			{ "ItemKnife", "generic", 0.06 },
			{ "ItemMatchbox_DZE", "generic", 0.06 },
			{ "ItemToolbox", "weapon", 0.02 },
			{ "", "generic", 0.17 },
			{ "", "food", 0.06 },
			{ "PartGeneric", "magazine", 0.07 },
			{ "PartWheel", "magazine", 0.06 },
			{ "PartFueltank", "magazine", 0.03 },
			{ "PartEngine", "magazine", 0.01 },
			{ "PartGlass", "magazine", 0.08 },
			{ "WeaponHolder_ItemJerrycan", "object", 0.03 }
		};
	};
	class DynamicDebrisMilitary: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.3;
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		lootType[] = {
			{ "ItemEtool", "weapon", 0.05 },
			{ "ItemSandbag", "magazine", 0.1 },
			{ "", "military", 0.08 },
			{"","civilianMagazines",0.05},
			{"","militaryMagazines",0.05},
			{"","westernMagazines",0.05},
			{"","civilianAmmo",0.08},
			{"","militaryAmmo",0.08},
			{"","westernAmmo",0.08},
			{ "ItemWatch", "generic", 0.1 },
			{ "ItemCompass", "generic", 0.02 },
			{ "ItemMap", "weapon", 0.05 },
			{"pistols", "cfglootweapon", 0.04 },
			{ "ItemFlashlight", "generic", 0.01 },
			{ "ItemKnife", "generic", 0.05 },
			{ "ItemMatchbox_DZE", "generic", 0.05 },
			{ "ItemToolbox", "weapon", 0.02 },
			{ "", "generic", 0.15 },
			{ "", "food", 0.05 },
			{ "PartGeneric", "magazine", 0.06 },
			{ "PartWheel", "magazine", 0.05 },
			{ "PartFueltank", "magazine", 0.03 },
			{ "PartEngine", "magazine", 0.02 },
			{ "PartGlass", "magazine", 0.03 },
			{ "PartVRotor", "magazine", 0.02 },
			{ "WeaponHolder_ItemJerrycan", "object", 0.03 }
		};
	};
	class SupplyDrop: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "PartPlywoodPack", "magazine", 0.1 },
			{ "PartPlankPack", "magazine", 0.2 },
			{ "CinderBlocks", "magazine", 0.1 },
			{ "MortarBucket", "magazine", 0.1 },
			{ "bulk_PartGeneric", "magazine", 0.2 },
			{ "bulk_ItemSandbag", "magazine", 0.1 },
			{ "bulk_ItemTankTrap", "magazine", 0.1 },
			{ "ItemSledge", "weapon", 0.1 }
		};
	};
	class MassGrave: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "RH_m16a2", "weapon", 0.03 },
			{ "RH_m16a2gl", "weapon", 0.01 },
			{ "RH_M249", "weapon", 0.01 },
			{ "RH_m9sd", "weapon", 0.02 },
			{ "RH_ak74", "weapon", 0.02 },
			{ "RH_m4a1", "weapon", 0.01 },
			{ "RH_ak74k", "weapon", 0.01 },
			{ "RH_aks74upt", "weapon", 0.02 },
			{ "RH_akm", "weapon", 0.02 },
			{ "DGR_M24_A2", "weapon", 0.01 },
			{ "RH_svd", "weapon", 0.01 },
			{ "M1014_DZ", "weapon", 0.02 },
			{ "RH_mk12", "weapon", 0.01 },
			{ "RH_M4A1", "weapon", 0.01 },
			{ "RH_m14", "weapon", 0.02 },
			{ "RH_uzi", "weapon", 0.03 },
			{ "Remington870_lamp", "weapon", 0.01 },
			{ "RH_g17", "weapon", 0.02 },
			{ "RH_g18", "weapon", 0.02 },
			{ "RH_m16a4acog", "weapon", 0.01 },
			{ "RH_Mk48mod1", "weapon", 0.01 },
			{ "AmmoBoxSmall_556", "object", 0.03 },
			{ "AmmoBoxSmall_762", "object", 0.03 },
			{ "Binocular", "weapon", 0.01 },
			{ "ItemFlashlightRed", "military", 0.02 },
			{ "ItemKnife", "military", 0.01 },
			{ "ItemGPS", "weapon", 0.01 },
			{ "ItemMap", "military", 0.01 },
			{ "Binocular_Vector", "military", 0.01 },
			{ "DZ_ALICE_Pack_EP1", "object", 0.03 },
			{ "DZ_TK_Assault_Pack_EP1", "object", 0.02 },
			{ "DZ_British_ACU", "object", 0.02 },
			{ "DZ_CivilBackpack_EP1", "object", 0.02 },
			{ "DZ_Backpack_EP1", "object", 0.01 },
			{ "DZ_LargeGunBag_EP1", "object", 0.01 },
			{ "", "medical", 0.05 },
			{ "", "generic", 0.05 },
			{ "", "military", 0.13 },
			{"","civilianMagazines",0.05},
			{"","militaryMagazines",0.05},
			{"","westernMagazines",0.05},
			{"","civilianAmmo",0.08},
			{"","militaryAmmo",0.08},
			{"","westernAmmo",0.08},
			{ "PipeBomb", "magazine", 0.01 },
			{ "G36C_DZ", "weapon", 0.07 },
			{ "DGR_M40A5_A2", "weapon", 0.01 },
			{ "", "militaryclothes", 0.05 },
			{ "WeaponHolder_ItemMachete", "object", 0.02 },
			{ "RH_Scarh", "weapon", 0.05 }
		};
	};

	#include "CfgBuildingPos.hpp"
	//If you want to copypast your loottable to your mission w/o
	//changing something on the lootPos then use the a include instead of copypasting the CfgBuildingPos.hpp

	//#include "\dayz_epoch_b\CfgBuildingPos.hpp"
};