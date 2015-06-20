#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		zombieClassSlow[] = {"zZombie_Slow_Base","z_hunter_slow","z_teacher_slow","z_suit1_slow","z_suit2_slow","z_worker1_slow","z_worker2_slow","z_worker3_slow","z_villager1_slow","z_villager2_slow","z_villager3_slow"};
		lootChance = 0;
		lootPos[] = {};
		lootType[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {"SMAW","Javelin","G36C","Stinger"};
	};
	class Church: Default {
		zombieChance = 0.3;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
		zombieClassSlow[] = {"z_priest_slow","z_priest_slow","z_priest_slow"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemSodaClays",				"magazine",0.02},
			{"ItemSodaMzly",				"magazine",0.02},
			{"ItemMatchbox",				"weapon",0.03},
			{"ItemBookBible",				"magazine",0.03},
			{"WoodenArrow",					"magazine",0.01},
			{"FoodCanCurgon",				"magazine",0.02},
			{"FoodCanRusStew",				"magazine",0.02},
			{"FoodChipsSulahoops",			"magazine",0.02},
			{"equip_rag",					"magazine",0.02},
			{"RH_ppk",						"weapon",0.03},
			{"MR43",						"weapon",0.02},
			{"WeaponHolder_ItemHatchet",	"object",0.02},
			{"MeleeBaseBallBat",			"weapon",0.02},
			{"ItemTrashPaperMusic",			"magazine",0.03},
			{"ItemWaterbottleUnfilled",		"magazine",0.04},
			{"ItemWaterbottle",				"magazine",0.02},
			{"ItemRadio",					"weapon",0.01},
		//multiple spawns	
			{"",							"Trash",0.40},
			{"",							"civilianMagazines",0.20},
			{"",							"civilianAmmo",0.20},
			{"",							"generic",0.20}
		};
	};
	class Castle: Default {
		zombieClass[] = {"z_new_villager2","z_new_villager3","z_new_villager4", "z_villager2","z_villager3","z_villager4"};
		zombieClassSlow[] = {"z_villager2_slow","z_villager3_slow","z_villager4_slow"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"ItemMatchbox",				"weapon",0.10},
			{"ItemKnife",					"weapon",0.10},
			{"ItemMap",						"weapon",0.10},
			{"ItemCompass",					"weapon",0.10},
			{"ItemFlashlight",				"weapon",0.10},
			{"ItemSandbag",					"magazine",0.05},
			{"WeaponHolder_ItemHatchet",	"object",0.10},
			{"WeaponHolder_ItemTent",		"object",0.05},
			{"WeaponHolder_ItemCamoNet",	"object",0.02},
			{"LeeEnfield",					"weapon",0.05},
			{"RH_python",					"weapon",0.02},
			{"Winchester1866",				"weapon",0.02},
			{"equip_rope",					"magazine",0.10},
			{"PartWoodPile",				"magazine",0.10},
			{"DZ_Backpack_WIN",				"object",0.01},
			{"DZ_Backpack_BLK",				"object",0.01},
			{"DZ_Backpack_FIN",				"object",0.01},
			{"DZ_Assault_Pack_EP1",			"object",0.05},
			{"DZ_Czech_Vest_Puch",			"object",0.07},
			{"ItemWaterbottleUnfilled",		"magazine",0.10},
			{"ItemWaterbottle",				"magazine",0.10},
			{"ItemRadio",					"weapon",0.10},
			{"Mosin_Nagant",				"weapon",0.05},
			{"Mosin_Nagant_Scoped",			"weapon",0.01},
			{"KPFS_KarS",					"weapon",0.05},
			{"KPFS_M1_Carbine",				"weapon",0.01},
			{"KPFS_M1_Garand",				"weapon",0.01},
			{"KPFS_M1_Garand_M84",			"weapon",0.01},
			{"RH_ak47_Civ",					"weapon",0.01},
			{"RH_M4_Civ",					"weapon",0.01},
			{"huntingrifle",				"weapon",0.01},
		//Multiple spawns	
			{"",							"Residential",0.60},
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.05},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.05},
			{"",							"westernMagazines",0.01},
			{"",							"westernAmmo",0.01},
			{"",							"Trash",0.50},
			{"",							"generic",0.20}
		};
	};	
	class CarePackages: Default {
		lootChance = 0.9;
		lootPos[] = {};
		lootType[] = {
		//weapons
		//5.56
			{"RH_m16a2",					"weapon",0.01},
			{"RH_m16a3",					"weapon",0.01},
			{"RH_m16a4",					"weapon",0.01},
			{"RH_m4",						"weapon",0.01},
			{"RH_M4_Civ",					"weapon",0.10},
			{"RH_m4a1",						"weapon",0.01},
			{"G36C_DZ",						"weapon",0.01},
			{"G36K_Camo_DZ",				"weapon",0.01},
			{"RH_m4m",						"weapon",0.01},
			{"RH_m4sbr",					"weapon",0.01},
		//9mm
			{"RH_m9",						"weapon",0.05},
			{"RH_p226",						"weapon",0.03},
			{"RH_p226s",					"weapon",0.01},
			{"RH_usp",						"weapon",0.05},
			{"RH_uspm",						"weapon",0.02},
			{"RH_g17",						"weapon",0.06},
			{"RH_g18",						"weapon",0.02},
			{"RH_g19",						"weapon",0.04},
		//45ACP
			{"RH_m1911",					"weapon",0.02},
			{"RH_m1911sd",					"weapon",0.01},
			{"RH_browninghp",				"weapon",0.04},
		//one spawn
			{"ItemSandbag",					"magazine",0.04},
			{"WeaponHolder_ItemTent",		"object",0.05},
			{"WeaponHolder_ItemCamoNet",	"object",0.01},
			{"WeaponHolder_ItemDomeTent",	"object",0.05},
			{"equip_rope",					"magazine",0.03},
			{"PartWoodPile",				"magazine",0.05},
			{"FoodCanBakedBeans",			"magazine",0.05},
			{"FoodCanSardines",				"magazine",0.05},
			{"FoodCanFrankBeans",			"magazine",0.05},
			{"FoodCanPasta",				"magazine",0.05},
			{"ItemTankTrap",				"magazine",0.04},
			{"ItemSodaLirik",				"magazine",0.05},
			{"ItemSodaPeppsy",				"magazine",0.05},
			{"ItemWaterbottleUnfilled",		"magazine",0.05},
			{"ItemWaterbottle",				"magazine",0.10},
			{"ItemRadio",					"weapon",0.02},
			{"MedBox2",						"object",0.10},
			{"MedBox1",						"object",0.10},
			{"ItemBandage",					"magazine",0.15},
			{"ItemPainkiller",				"magazine",0.10},
			{"ItemMorphine",				"magazine",0.10},
			{"ItemEpinephrine",				"magazine",0.10},
			{"ItemChloroform",				"magazine",0.05},
			{"ItemAntibacterialWipe",		"magazine",0.10},
			{"ItemAntibiotic",				"magazine",0.10},
			{"emptyBloodBag",				"magazine",0.10},
			{"bloodBagOPOS",				"magazine",0.04},
			{"bloodBagONEG",				"magazine",0.15},
			{"bloodBagABPOS",				"magazine",0.04},
			{"bloodBagABNEG",				"magazine",0.04},
			{"bloodBagBPOS",				"magazine",0.04},
			{"bloodBagBNEG",				"magazine",0.04},
			{"bloodBagAPOS",				"magazine",0.04},
			{"bloodBagANEG",				"magazine",0.04},
			{"equip_gauzepackaged",			"magazine",0.05},
			{"equip_gauze",					"magazine",0.05},
			{"bloodTester",					"magazine",0.10},
			{"transfusionKit",				"magazine",0.15},
			{"FoodMRE",						"magazine",0.25},
			{"WeaponHolder_ItemHatchet",	"object",0.02},
		//multiple spawns
			{"",							"Residential",0.60},
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.20},
			{"",							"westernMagazines",0.20},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.20},
			{"",							"westernAmmo",0.20}
		};
	};	
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		zombieClassSlow[] = {"zZombie_Slow_Base","z_hunter_slow","z_teacher_slow","z_villager1_slow","z_villager2_slow","z_villager3_slow"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"FoodCakeCremeCakeClean",		"magazine",0.20},
			{"ItemSodaMtngreen",			"magazine",0.20},
			{"ItemSodaClays",				"magazine",0.20},
			{"ItemSodaMzly",				"magazine",0.20},
			{"FoodCanCurgon",				"magazine",0.20},
			{"FoodCanRusStew",				"magazine",0.20},
			{"FoodChipsSulahoops",			"magazine",0.20},
			{"ItemMatchbox",				"weapon",0.02},
			{"ItemWatch",					"weapon",0.05},
			{"ItemFlashlight",				"weapon",0.05},
			{"RH_pm",						"weapon",0.05},
			{"RH_python",					"weapon",0.01},
			{"MR43",						"weapon",0.05},
			{"LeeEnfield",					"weapon",0.01},
			{"Winchester1866",				"weapon",0.01},
			{"RH_m1911old",					"weapon",0.02},
			{"MeleeBaseBallBat",			"weapon",0.08},
			{"WeaponHolder_ItemFuelcan",	"object",0.01},
			{"DZ_Backpack_BLK",				"object",0.01},
			{"DZ_Backpack_WIN",				"object",0.01},
			{"equip_herb_box",				"magazine",0.03},
			{"equip_pvc_box",				"magazine",0.03},
			{"ItemPainkiller",				"magazine",0.10},
			{"ItemBandage",					"magazine",0.10},
			{"DZ_Patrol_Pack_EP1",			"object",0.08},
			{"DZ_Assault_Pack_EP1",			"object",0.06},
			{"DZ_Apo_Pack1",				"object",0.03},
			{"DZ_Apo_Pack2",				"object",0.03},
			{"DZ_Apo_Pack3",				"object",0.03},
			{"DZ_Apo_Pack4",				"object",0.03},
			{"WeaponHolder_ItemTent",		"object",0.01},
			{"ItemTrashPaper",				"magazine",0.05},
			{"ItemTrashPaperMusic",			"magazine",0.05},
			{"ItemWaterbottleUnfilled",		"magazine",0.04},
			{"ItemWaterbottle",				"magazine",0.04},
			{"ItemRadio",					"weapon",0.02},
			{"Mosin_Nagant",				"weapon",0.10},
			{"KPFS_KarS",					"weapon",0.10},
			{"KPFS_M1_Carbine",				"weapon",0.01},
			{"KPFS_M1_Garand",				"weapon",0.01},
			{"WeaponHolder_ItemHatchet",	"object",0.02},
		//multiple spawns	
			{"",							"Residential",0.50},
			{"",							"Trash",1.00},
			{"",							"civilianMagazines",0.20},
			{"",							"civilianAmmo",0.20},
			{"",							"generic",0.50},
			{"",							"westernAmmo",0.20}
		};
	};
	class Industrial: Default { //254
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","z_new_worker2","z_new_worker3","z_new_worker4"};
		zombieClassSlow[] = {"z_worker1_slow","z_worker2_slow","z_worker3_slow"};
		maxRoaming = 2;
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"ItemKnife",					"weapon",0.10},
			{"ItemToolbox",					"weapon",0.20},
			{"ItemFlashlight",				"weapon",0.04},
			{"ItemSandbag",					"magazine",0.10},
			{"WeaponHolder_ItemCrowbar",	"object",0.10},
			{"WeaponHolder_ItemHatchet",	"object",0.05},
			{"WeaponHolder_PartGeneric",	"object",0.04},
			{"WeaponHolder_PartWheel",		"object",0.05},
			{"WeaponHolder_PartFueltank",	"object",0.03},
			{"WeaponHolder_PartEngine",		"object",0.03},
			{"WeaponHolder_PartGlass",		"object",0.08},
			{"WeaponHolder_ItemJerrycan",	"object",0.04},
			{"WeaponHolder_ItemFuelcan",	"object",0.04},
			{"equip_rope",					"magazine",0.10},
			{"ItemTankTrap",				"magazine",0.05},
			{"ItemSodaSmasht",				"magazine",0.10},
			{"ItemSodaDrwaste",				"magazine",0.10},
			{"FoodCanPowell",				"magazine",0.10},
			{"FoodChipsSulahoops",			"magazine",0.10},
			{"equip_brick",					"magazine",0.15},
			{"equip_duct_tape",				"magazine",0.10},
			{"equip_hose",					"magazine",0.10},
			{"equip_nails",					"magazine",0.10},
			//{"ItemNails",					"magazine",0.10},  //TODO(Jukki) Removing thease for now since they dont seem to exist
			{"equip_rag",					"magazine",0.05},
			{"equip_scrapelectronics",		"magazine",0.05},
			{"ItemWaterbottleUnfilled",		"magazine",0.05},
			{"ItemRadio",					"weapon",0.02},
			{"ItemDIY_wood",				"weapon",0.01},
		//multiple spawns	
			{"",							"Trash",0.50},
			{"",							"civilianMagazines",0.20},
			{"",							"civilianAmmo",0.20},
			{"",							"generic",0.50}
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		zombieClassSlow[] = {"zZombie_Slow_Base","z_hunter_slow","z_hunter_slow","z_hunter_slow","z_villager1_slow","z_villager2_slow","z_villager3_slow"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//weapons
			{"huntingrifle",				"weapon",0.01},
			{"LeeEnfield",					"weapon",0.06},
			{"Winchester1866",				"weapon",0.06},
			{"Crossbow_DZ",					"weapon",0.03},
			{"MR43",						"weapon",0.09},
			{"Mosin_Nagant",				"weapon",0.04},
			{"Mosin_Nagant_Scoped",			"weapon",0.01},
			{"KPFS_KarS",					"weapon",0.04},
			{"KPFS_M1_Carbine",				"weapon",0.02},
			{"KPFS_M1_Garand",				"weapon",0.02},
			{"KPFS_M1_Garand_M84",			"weapon",0.01},
			{"RH_ak47_Civ",					"weapon",0.01},
		//one spawn
			{"ItemSandbag",					"magazine",0.04},	
			{"WeaponHolder_ItemJerrycan",	"object",0.03},	
			{"equip_rope",					"magazine",0.03},
			{"equip_duct_tape",				"magazine",0.03},
			{"PartWoodPile",				"magazine",0.08},
			{"FoodCanBoneboy",				"magazine",0.01},
			{"equip_nails",					"magazine",0.06},
			//{"ItemNails",					"magazine",0.06},  //dont remove these 
			{"FoodCanCurgon",				"magazine",0.02},
			{"FoodCanRusStew",				"magazine",0.02},
			{"FoodChipsSulahoops",			"magazine",0.02},
			{"equip_string",				"magazine",0.04},
			{"ItemWaterbottleUnfilled",		"magazine",0.04},
		//tools
			{"ItemKnife",					"weapon",0.05},
			{"ItemMatchbox",				"weapon",0.07},
			{"WeaponHolder_ItemHatchet",	"object",0.05},
			{"MeleeMachete",				"weapon",0.04},
		//backpacks
			{"DZ_Backpack_NOR",				"object",0.01},
			{"DZ_Patrol_Pack_EP1",			"object",0.05}, 
			{"DZ_Czech_Vest_Puch",			"object",0.02}, 
			{"DZ_TK_Assault_Pack_EP1",		"object",0.02}, 
			{"DZ_Gru_Pack_EP1",				"object",0.02}, 
			{"DZ_ALICE_Pack_EP1",			"object",0.01}, 
		//multiple spawns		
			{"",							"Trash",0.40},
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.05},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.5},
			{"",							"generic",0.30}
		};
	};
	class Supermarket: Default {
		lootChance = 0.7;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_new_villager2","z_new_villager3","z_new_villager4"};
		zombieClassSlow[] = {"zZombie_Slow_Base","zZombie_Slow_Base","z_teacher_slow","z_suit1_slow","z_suit2_slow","z_villager2_slow","z_villager3_slow","z_villager4_slow"};
		lootType[] = {
		//weapons
			{"RH_pm",						"weapon",0.02},
			{"RH_m1911old",					"weapon",0.02},
			{"RH_ppk",						"weapon",0.02},
			{"RH_tt33",						"weapon",0.02},
			{"LeeEnfield",					"weapon",0.03},
			{"RH_python",					"weapon",0.01},
			{"Winchester1866",				"weapon",0.03},
			{"Crossbow_DZ",					"weapon",0.01},
			{"MR43",						"weapon",0.05},
			{"Mosin_Nagant",				"weapon",0.03},
			{"KPFS_KarS",					"weapon",0.03},
			{"KPFS_M1_Carbine",				"weapon",0.01},
			{"KPFS_M1_Garand",				"weapon",0.01},
			{"RH_M4_Civ",					"weapon",0.01},
			{"RH_ak47_Civ",					"weapon",0.01},
		//tools
			{"WeaponHolder_ItemHatchet",	"object",0.02},
			{"ItemWatch",					"generic",0.05},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"generic",0.07},
			{"ItemMap",						"generic",0.07},
			{"ItemFlashlight",				"generic",0.07},
			{"ItemKnife",					"generic",0.07},
			{"ItemMatchbox",				"weapon",0.07},
			{"Binocular",					"weapon",0.03},
		//one spawn		
			{"WeaponHolder_ItemTent",		"object",0.01},
			{"WeaponHolder_ItemCamoNet",	"object",0.01},
			{"equip_pvc_box",				"magazine",0.03},
			{"equip_herb_box",				"magazine",0.03},
			{"equip_duct_tape",				"magazine",0.03},
			{"PartWoodPile",				"magazine",0.04},
		//backpacks
			{"DZ_Patrol_Pack_EP1",			"object",0.05}, 
			{"DZ_Czech_Vest_Puch",			"object",0.02}, 
			{"DZ_TK_Assault_Pack_EP1",		"object",0.02}, 
			{"DZ_Gru_Pack_EP1",				"object",0.02}, 
			{"DZ_ALICE_Pack_EP1",			"object",0.01}, 
		//med
			{"ItemPainkiller",				"magazine",0.03},
			{"ItemAntibacterialWipe",		"magazine",0.04},
			{"HandChemGreen",				"magazine",0.04},
			{"HandChemBlue",				"magazine",0.04},
			{"HandChemRed",					"magazine",0.04},
			{"HandRoadFlare",				"magazine",0.05},
		//drinks
			{"ItemWaterbottleUnfilled",		"magazine",0.04},
			{"ItemWaterbottle",				"magazine",0.02},
			{"ItemWaterbottleDmg",			"magazine",0.03},
			{"ItemSodaLirik",				"magazine",0.05},
			{"ItemSodaPeppsy",				"magazine",0.05},
			{"ItemSodaMtngreen",			"magazine",0.01},
			{"ItemSodaR4z0r",				"magazine",0.01},
			{"ItemSodaClays",				"magazine",0.02},
			{"ItemSodaSmasht",				"magazine",0.01},
			{"ItemSodaDrwaste",				"magazine",0.01},
			{"ItemSodaLemonade",			"magazine",0.01},
			{"ItemSodaLvg",					"magazine",0.01},
			{"ItemSodaMzly",				"magazine",0.01},
			{"ItemSodaRabbit",				"magazine",0.01},
		//food
			{"FoodNutmix",					"magazine",0.03},
			{"FoodCanBakedBeans",			"magazine",0.05},
			{"FoodCanSardines",				"magazine",0.05},
			{"FoodCanFrankBeans",			"magazine",0.05},
			{"FoodCanPasta",				"magazine",0.05},
			{"FoodCanBadguy",				"magazine",0.01},
			{"FoodCanBoneboy",				"magazine",0.01},
			{"FoodCanCorn",					"magazine",0.01},
			{"FoodCanCurgon",				"magazine",0.01},
			{"FoodCanDemon",				"magazine",0.01},
			{"FoodCanFraggleos",			"magazine",0.01},
			{"FoodCanHerpy",				"magazine",0.01},
			{"FoodCanDerpy",				"magazine",0.01},
			{"FoodCanOrlok",				"magazine",0.01},
			{"FoodCanPowell",				"magazine",0.01},
			{"FoodCanTylers",				"magazine",0.01},
			{"FoodCanUnlabeled",			"magazine",0.04},
			{"FoodPistachio",				"magazine",0.03},
			{"FoodChipsSulahoops",			"magazine",0.01},
			{"FoodChipsMysticales",			"magazine",0.01},
			{"FoodCandyAnders",				"magazine",0.01},
			{"FoodCandyLegacys",			"magazine",0.01},
			{"FoodCandyMintception",		"magazine",0.01},
			{"FoodCanRusUnlabeled",			"magazine",0.05},
			{"FoodCanRusStew",				"magazine",0.05},
			{"FoodCanRusPork",				"magazine",0.05},
			{"FoodCanRusPeas",				"magazine",0.05},
			{"FoodCanRusMilk",				"magazine",0.04},
			{"FoodCanRusCorn",				"magazine",0.05},
			{"FoodCakeCremeCakeClean",		"magazine",0.03},
		//special
			{"equip_nails",					"magazine",0.06},
			//{"ItemNails",					"magazine",0.06},  //dont remove these 
		//multiple spawns
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.05},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.05},
			{"",							"westernMagazines",0.05},
			{"",							"westernAmmoAmmo",0.01},
			{"",							"Trash",0.60},
			{"",							"food",0.80}
		};
	};	
	class Office: Residential {
		maxRoaming = 3;
		lootChance = 0.7;
		zombieClass[] = {"z_suit1","z_suit2"};
		zombieClassSlow[] = {"z_suit1_slow","z_suit2_slow"};
		lootType[] = {
		//one spawn
			{"equip_duct_tape",				"magazine",0.03},
		//weapons
			{"LeeEnfield",					"weapon",0.03},
			{"RH_python",					"weapon",0.01},
			{"Winchester1866",				"weapon",0.03},
			{"RH_pm",						"weapon",0.05},
			{"RH_m1911old",					"weapon",0.05},
			{"RH_ppk",						"weapon",0.05},
			{"RH_tt33",						"weapon",0.05},
			{"MeleeBaseBallBat",			"weapon",0.02},
		//backpacks
			{"DZ_Patrol_Pack_EP1",			"object",0.05}, 
			{"DZ_Czech_Vest_Puch",			"object",0.02}, 
			{"DZ_TK_Assault_Pack_EP1",		"object",0.02}, 
			{"DZ_Gru_Pack_EP1",				"object",0.02}, 
			{"DZ_ALICE_Pack_EP1",			"object",0.01}, 
		//medical
			{"ItemAntibacterialWipe",		"magazine",0.04},
			{"ItemPainkiller",				"magazine",0.04},	
		//tools
			{"ItemWatch",					"generic",0.05},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"generic",0.07},
			{"ItemMap",						"generic",0.07},
			{"ItemFlashlight",				"generic",0.07},
			{"ItemKnife",					"generic",0.07},
			{"ItemMatchbox",				"weapon",0.07},
			{"Binocular",					"weapon",0.03},
		//multiple spawns
			{"",							"Trash",0.50},
			{"",							"civilianMagazines",0.10},
			{"",							"civilianAmmo",0.10},
			{"",							"generic",0.40}
		};
	};
	class InfectedCamps: Default { //5
		lootPos[] = {};
		lootType[] = {
		//No Objects IMPORTANT
		//one spawn
		//drinks
			{"ItemWaterbottleUnfilled",		"generic",0.01},
			{"ItemWaterbottle",				"generic",0.01},
			{"ItemWaterbottleDmg",			"magazine",0.03},
			{"ItemSodaLirik",				"generic",0.05},
			{"ItemSodaPeppsy",				"generic",0.05},
			{"ItemSodaMtngreen",			"generic",0.01},
			{"ItemSodaR4z0r",				"generic",0.01},
			{"ItemSodaClays",				"generic",0.01},
			{"ItemSodaSmasht",				"generic",0.01},
			{"ItemSodaDrwaste",				"generic",0.01},
			{"ItemSodaLemonade",			"generic",0.01},
			{"ItemSodaLvg",					"generic",0.01},
			{"ItemSodaMzly",				"generic",0.01},
			{"ItemSodaRabbit",				"generic",0.01},
		//food
			{"FoodNutmix",					"generic",0.03},
			{"FoodCanBakedBeans",			"generic",0.05},
			{"FoodCanSardines",				"generic",0.05},
			{"FoodCanFrankBeans",			"generic",0.05},
			{"FoodCanPasta",				"generic",0.05},
			{"FoodCanBadguy",				"generic",0.01},
			{"FoodCanBoneboy",				"generic",0.01},
			{"FoodCanCorn",					"generic",0.01},
			{"FoodCanCurgon",				"generic",0.01},
			{"FoodCanDemon",				"generic",0.01},
			{"FoodCanFraggleos",			"generic",0.01},
			{"FoodCanHerpy",				"generic",0.01},
			{"FoodCanDerpy",				"generic",0.01},
			{"FoodCanOrlok",				"generic",0.01},
			{"FoodCanPowell",				"generic",0.01},
			{"FoodCanTylers",				"generic",0.01},
			{"FoodCanUnlabeled",			"generic",0.04},
			{"FoodPistachio",				"generic",0.03},
			{"FoodNutmix",					"generic",0.04},
			{"FoodChipsSulahoops",			"generic",0.01},
			{"FoodChipsMysticales",			"generic",0.01},
			{"FoodCandyAnders",				"generic",0.01},
			{"FoodCandyLegacys",			"generic",0.01},
			{"FoodCandyMintception",		"generic",0.01},
			{"FoodCanRusUnlabeled",			"generic",0.05},
			{"FoodCanRusStew",				"generic",0.05},
			{"FoodCanRusPork",				"generic",0.05},
			{"FoodCanRusPeas",				"generic",0.05},
			{"FoodCanRusMilk",				"generic",0.04},
			{"FoodCanRusCorn",				"generic",0.05},
			{"FoodCakeCremeCakeClean",		"generic",0.03},
			{"FoodMRE",						"generic",0.10},
		//tools
			{"ItemWatch",					"tool",0.05},
			{"ItemCompass",					"tool",0.05},
			{"ItemFlashlight",				"tool",0.06},
			{"ItemKnife",					"tool",0.07},
			{"ItemMatchbox",				"tool",0.06},
			{"Binocular",					"tool",0.06},
			{"ItemCrowbar",					"tool",0.08},
			{"ItemRadio",					"weapon",0.02},
			{"ItemDIY_wood",				"weapon",0.02},
		//weapons
			{"RH_pm",						"weapon",0.05},
			{"RH_m1911old",					"weapon",0.05},
			{"RH_ppk",						"weapon",0.05},
			{"RH_tt33",						"weapon",0.05},
			{"LeeEnfield",					"weapon",0.03},
			{"RH_python",					"weapon",0.04},
			{"Winchester1866",				"weapon",0.03},
			{"Crossbow_DZ",					"weapon",0.01},
			{"MR43",						"weapon",0.03},
			{"MeleeBaseBallBat",			"weapon",0.02},
			{"Mosin_Nagant",				"weapon",0.04},
			{"Mosin_Nagant_Scoped",			"weapon",0.01},
			{"KPFS_KarS",					"weapon",0.04},
			{"KPFS_M1_Carbine",				"weapon",0.02},
			{"KPFS_M1_Garand",				"weapon",0.02},
			{"KPFS_M1_Garand_M84",			"weapon",0.01},
			{"RH_m16a2",					"weapon",0.01},
			{"RH_m16a3",					"weapon",0.01},
			{"RH_m16a4",					"weapon",0.01},
			{"RH_m4",						"weapon",0.01},
			{"RH_M4_Civ",					"weapon",0.10},
			{"RH_m4a1",						"weapon",0.01},
			{"G36C_DZ",						"weapon",0.01},
			{"G36K_Camo_DZ",				"weapon",0.01},
			{"RH_m4m",						"weapon",0.01},
			{"RH_m4sbr",					"weapon",0.01},
			{"huntingrifle",				"weapon",0.04},
			{"RH_ak74",						"weapon",0.12},
			{"RH_ak47_Civ",					"weapon",0.20},
		//special
			{"PartGeneric",					"generic",0.04},
			{"PartWheel",					"generic",0.02},
			{"PartFueltank",				"generic",0.02},
			{"PartEngine",					"generic",0.02},
			{"ItemFuelcan",					"generic",0.03},
		//{"ItemTent","generic",0.01},
			{"ItemFuelcan",					"generic",0.03},
		//Medical	
			{"ItemBandage",					"magazine",0.06},
			{"ItemPainkiller",				"magazine",0.04},
			{"ItemMorphine",				"magazine",0.04},
			{"ItemEpinephrine",				"magazine",0.03},
			{"ItemAntibacterialWipe",		"magazine",0.04},
			{"ItemAntibiotic",				"magazine",0.01},
			{"emptyBloodBag",				"magazine",0.04},
			{"bloodBagOPOS",				"magazine",0.01},
			{"bloodBagONEG",				"magazine",0.01},
			{"bloodBagABPOS",				"magazine",0.01},
			{"bloodBagABNEG",				"magazine",0.01},
			{"bloodBagBPOS",				"magazine",0.01},
			{"bloodBagBNEG",				"magazine",0.01},
			{"bloodBagAPOS",				"magazine",0.01},
			{"bloodBagANEG",				"magazine",0.01},
			{"equip_gauzepackaged",			"magazine",0.02},
			{"equip_gauze",					"magazine",0.04},
			{"bloodTester",					"magazine",0.06},
			{"transfusionKit",				"magazine",0.04},
		//	{"MedBox2","generic",0.05},
		//	{"MedBox1","generic",0.05},
		//	{"FoodBox0","generic",0.05},
		//mags special
			{"equip_rope",					"magazine",0.03},
			{"equip_herb_box",				"magazine",0.03},
			{"ItemTankTrap",				"magazine",0.04},
			{"ItemSodaMtngreen",			"magazine",0.02},
			{"PartWoodPile",				"magazine",0.06},
			{"Skin_Camo1_DZ",				"magazine",0.01},
			{"ItemBookBible",				"magazine",0.02},
		//bags No backspacks in infected camps, engine limitation
		//multiple spawns
			{"",							"Trash",0.10},
			{"",							"civilianMagazines",0.50},
			{"",							"militaryMagazines",0.10},
			{"",							"westernMagazines",0.10},
			{"",							"civilianAmmo",0.50},
			{"",							"militaryAmmo",0.10},
			{"",							"westernAmmo",0.10},
			{"",							"generic",0.50},
			{"",							"food",0.50},
			{"",							"medical",0.50},
		//Attachements
			{"Attachment_CCO",				"magazine",0.02},
			{"Attachment_Holo",				"magazine",0.02},
			{"Attachment_M203",				"magazine",0.03},
			{"Attachment_GP25",				"magazine",0.03},
			{"Attachment_SCOPED",			"magazine",0.01},
			{"Attachment_ACOG",				"magazine",0.01},
			{"Attachment_PSO1",				"magazine",0.02},
			{"Attachment_Kobra",			"magazine",0.02}
		};
	};
	class HeliCrashWEST: Default {
		zombieChance = 1;
		minRoaming = 6;
		maxRoaming = 12;
		zombieClass[] = {"z_soldier_pilot"};
		zombieClassSlow[] = {"z_soldier_pilot_slow"};
		lootChance = 0.4;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"NVGoggles",					"weapon",0.10},
			{"ItemGPS",						"weapon",0.20},
			{"PipeBomb",					"magazine",0.05},
			{"HandGrenade_West",			"magazine",0.40},
			{"1Rnd_HE_M203",				"magazine",0.40},
		//5.56
			{"RH_m16a2",					"weapon",5.50},
			{"RH_m16a3",					"weapon",5.50},
			{"RH_m16a4",					"weapon",5.50},
			{"RH_m4",						"weapon",5.50},
			{"RH_m4a1",						"weapon",5.50},
			{"G36C_DZ",						"weapon",5.50},
			{"G36C_CCO_DZ",					"weapon",4.00},
			{"G36C_Holo_DZ",				"weapon",4.00},
			{"G36C_SD_DZ",					"weapon",0.30},
			{"G36K_Camo_DZ",				"weapon",5.50},
			{"G36K_Camo_SD_DZ",				"weapon",0.30},
			{"RH_m4m",						"weapon",5.50},
			{"RH_m4sbr",					"weapon",5.50},
			{"RH_m4a1aim",					"weapon",5.30},
			{"RH_m4aim",					"weapon",5.30},
			{"RH_m4eotech",					"weapon",5.30},
			{"RH_m4a1eotech",				"weapon",5.30},
			{"RH_m4acog",					"weapon",1.00},
			{"RH_m4a1acog",					"weapon",1.00},
			{"RH_m4sd",						"weapon",0.50},
			{"RH_m4sdaim",					"weapon",0.30},
			{"RH_m4sdacog",					"weapon",1.00},
			{"RH_m4sdeotech",				"weapon",0.50},
			{"RH_m4glaim",					"weapon",2.40},
			{"RH_m4glacog",					"weapon",0.50},
			{"RH_m4sdgleotech",				"weapon",0.40},
			{"RH_m4maim",					"weapon",2.30},
			{"RH_m4meotech",				"weapon",2.30},
			{"RH_m4macog",					"weapon",0.55},
			{"RH_m4sbraim",					"weapon",2.30},
			{"RH_m4sbreotech",				"weapon",2.30},
			{"RH_m4sbracog",				"weapon",0.50},
			{"RH_m16a2aim",					"weapon",2.30},
			{"RH_m16a2glaim",				"weapon",2.30},
			{"RH_m16a3aim",					"weapon",2.30},
			{"RH_m16a4acog",				"weapon",0.50},
			{"RH_m16a4glacog",				"weapon",0.50},
			{"RH_m16a4aim",					"weapon",2.30},
			{"RH_m16a4glaim",				"weapon",2.30},
			{"RH_m16a4eotech",				"weapon",2.30},
			{"RH_m16a4gleotech",			"weapon",2.30},	
			{"RH_m4c",						"weapon",5.30},
			{"RH_m4cs",						"weapon",0.50},
			{"RH_m4cmk",					"weapon",2.30},
			{"RH_m4caim",					"weapon",2.30},
			{"RH_m4cacog",					"weapon",0.55},
			{"RH_m4ceotech",				"weapon",2.30},
			{"RH_m4ct",						"weapon",5.30},
			{"RH_m4ctsd",					"weapon",0.50},
			{"RH_m4cgl",					"weapon",2.30},
			{"RH_m4cglaim",					"weapon",2.30},
			{"RH_m4cglacog",				"weapon",0.50},
			{"RH_m4cgleotech",				"weapon",2.30},
			{"RH_m4cmkaim",					"weapon",2.30},
			{"RH_m4cmkacog",				"weapon",0.50},
			{"RH_m4cmkeotech",				"weapon",2.30},
			{"RH_m4ctsdacog",				"weapon",0.50},
			{"RH_m4ctsdaim",				"weapon",0.50},
			{"RH_m4ctsdeotech",				"weapon",0.50},
			{"RH_m4ctsdacog",				"weapon",0.50},
			{"RH_m4ctsdglacog",				"weapon",0.50},
			{"RH_m4ctsdglaim",				"weapon",0.50},
			{"RH_m4ctsdgleotech",			"weapon",0.50},
			{"RH_m4ctsdglacog",				"weapon",0.50},
			{"RH_M4a1gl",					"weapon",2.10},
			{"RH_mk18",						"weapon",2.20},
			{"RH_mk18dc",					"weapon",2.20},
			{"RH_Mk18aim",					"weapon",2.20},
			{"RH_Mk18acog",					"weapon",0.50},
			{"RH_Mk18eot",					"weapon",2.20},
			{"RH_Mk18sd",					"weapon",2.10},
			{"RH_Mk18sdaim",				"weapon",2.10},
			{"RH_Mk18sdacog",				"weapon",0.50},
			{"RH_Mk18sdeot",				"weapon",2.10},
			{"RH_Mk18gl",					"weapon",2.20},
			{"RH_Mk18glaim",				"weapon",2.20},
			{"RH_Mk18glacog",				"weapon",0.50},
			{"RH_Mk18gleot",				"weapon",2.20},
			{"RH_HK53aim",					"weapon",2.20},
			{"RH_HK53eot",					"weapon",2.20},
			{"RH_HK53RFX",					"weapon",2.20},		
			{"R3F_Famas_F1",				"Weapon",2.15},
			{"R3F_Famas_F1_AIM",			"weapon",2.15},
			{"R3F_Famas_F1_EOT",			"weapon",2.15},
			{"R3F_Famas_F1_EOT_HG_SD",		"weapon",0.50},
			{"R3F_Famas_F1_J4_M203",		"weapon",0.50},
			{"R3F_Famas_F1_J4_M203_SD",		"weapon",0.50},
			{"R3F_Famas_G2",				"weapon",2.15},
			{"R3F_Famas_G2_EOT",			"weapon",2.15},
			{"R3F_Famas_G2_J4",				"weapon",0.50},
			{"R3F_Famas_G2_J4_HG",			"weapon",0.50},
			{"R3F_Famas_G2_AIM_HG",			"weapon",2.15},
			{"R3F_Famas_G2_AIM_M203",		"weapon",2.15},
			{"R3F_Famas_surb_AIM_HG",		"weapon",2.15},
			{"R3F_Famas_surb",				"weapon",2.15},
			{"R3F_Famas_surb_AIM_SD",		"weapon",0.50},
			{"R3F_Famas_surb_EOT_SD",		"weapon",0.50},
			{"R3F_Famas_surb_EOT_M203",		"weapon",0.55},
			{"MIDF_Aug_A3",					"weapon",2.15},
			{"MIDF_Aug_A3_acog",			"weapon",0.50},
			{"MIDF_Aug_A3_eotech",			"weapon",2.15},
			{"MIDF_Aug_A3_gl",				"weapon",2.15},
			{"MIDF_Aug_A3_acog_gl",			"weapon",0.50},
			{"MIDF_Aug_A3_eotech_gl",		"weapon",2.15},
			{"ukf_L85A2",					"weapon",2.15},
			{"ukf_L85A2_susat",				"weapon",0.50},
			{"ukf_L85A2_RIS",				"Weapon",2.15},
			{"ukf_L85A2_acog",				"weapon",0.50},
			{"ukf_L85A2_sd",				"weapon",0.50},
			{"ukf_L86A2LSW",				"weapon",2.15},
			{"ukf_L86A2LSW_susat",			"weapon",0.50},
			{"ukf_L85A2AG36",				"weapon",2.00},
			{"ukf_L85A2AG36_susat",			"weapon",0.50},
			{"ukf_L85A2AG36_acog",			"weapon",0.50},
			{"ukf_L85A2AG36_sd_fgrip_CQB",	"weapon",0.50},
			{"RH_Scarl",					"weapon",1.00},
			{"RH_Scarl_aim",				"weapon",0.67},
			{"RH_Scarl_acog",				"weapon",0.34},
			{"RH_Scarl_eotech",				"weapon",0.67},
			{"RH_Scarl_gl",					"weapon",0.57},
			{"RH_Scarl_gl_aim",				"weapon",0.55},
			{"RH_Scarl_gl_acog",			"weapon",0.23},
			{"RH_Scarl_gl_eotech",			"weapon",0.55},
			{"RH_Scarl_sd_aim",				"weapon",0.33},
			{"RH_Scarl_sd_acog",			"weapon",0.22},
			{"RH_Scarl_sd_eotech",			"weapon",0.33},
			{"RH_Scarl_sd_gl_aim",			"weapon",0.33},
			{"RH_Scarl_sd_gl_acog",			"weapon",0.31},
			{"RH_Scarl_sd_gl_eotech",		"weapon",0.13},
			{"RH_hk416",					"weapon",0.58},
			{"RH_hk416aim",					"weapon",0.54},
			{"RH_hk416acog",				"weapon",0.33},
			{"RH_hk416sd",					"weapon",0.34},
			{"RH_hk416sdaim",				"weapon",0.34},
			{"RH_hk416sdeotech",			"weapon",0.34},
			{"RH_hk416gl",					"weapon",0.34},
			{"RH_hk416glaim",				"weapon",0.34},
			{"RH_hk416glacog",				"weapon",0.32},
			{"RH_hk416gleotech",			"weapon",0.34},
			{"RH_hk416sdgl",				"weapon",0.33},
			{"RH_hk416sglaim",				"weapon",0.33},
			{"RH_hk416seotech",				"weapon",0.33},
			{"RH_ctar21",					"weapon",0.34},
			{"RH_m27",						"weapon",0.90},
			{"RH_m27acog",					"weapon",0.30},
			{"RH_m27aim",					"weapon",0.50},
			{"RH_m27eotech",				"weapon",0.50},
			{"RH_mk12",						"weapon",0.10},
			{"RH_mk12sd",					"weapon",0.05},
		///SMG & Pistol
			{"RH_mp5a4aim",					"weapon",3.20},
			{"RH_mp5a4eot",					"weapon",3.20},
			{"RH_mp5a4rfx",					"weapon",3.20},
			{"RH_p90aim",					"weapon",3.20},
			{"RH_P90eot",					"weapon",3.20},
			{"RH_P90sd",					"weapon",3.20},
			{"RH_p90sdaim",					"weapon",3.20},
			{"RH_p90sdeot",					"weapon",3.20},
			{"RH_mp5kpdw",					"weapon",3.20},	
			{"RH_m1911sd",					"weapon",2.10},
			{"RH_deagle",					"weapon",2.10},
			{"RH_deaglem",					"weapon",2.10},
			{"RH_deaglemz",					"weapon",2.10},
			{"RH_deaglemzb",				"weapon",2.10},
			{"RH_m9sd",						"weapon",2.10},
			{"C1987_MP7_acog_sd_t",			"weapon",3.30},
			{"RH_deagleg",					"weapon",0.01},
			{"RH_p226",						"weapon",2.03},
			{"RH_p226s",					"weapon",2.01},
			{"RH_usp",						"weapon",2.05},
			{"RH_uspm",						"weapon",2.02},
			{"RH_g17",						"weapon",2.06},
			{"RH_g18",						"weapon",2.02},
			{"RH_g19",						"weapon",2.04},
		///7.62x51mm/Heavy Weapons
			{"FNFAL_DZ",					"weapon",0.15},
			{"FNFAL_CCO_DZ",				"weapon",0.10},
			{"FNFAL_HOLO_DZ",				"weapon",0.10},
			{"RH_m14acog",					"weapon",0.10},
			{"RH_m14",						"weapon",0.15},
			{"RH_m14aim",					"weapon",0.15},
			{"RH_m14eot",					"weapon",0.15},
			{"RH_m21",						"weapon",0.10},
			{"UKF_L115A3_wdl",				"weapon",0.01},	
			{"RH_M249",						"weapon",0.10},
			{"RH_Mk48mod1",					"weapon",0.10},
			{"ukf_gpmg",					"weapon",0.10},
			{"ukf_lmg",						"weapon",0.10},
			{"R3F_Minimi_762_EOT_HG",		"weapon",0.10},	
			{"RH_ar10",						"weapon",0.15},
			{"RH_ar10s",					"weapon",0.10},	
			{"RH_M14EBR",					"weapon",0.15},
			{"RH_M14EBRsp",					"weapon",0.15},				
			{"RH_Scarh",					"weapon",0.15},
			{"RH_Scarh_aim",				"weapon",0.15},
			{"RH_Scarh_acog",				"weapon",0.10},
			{"RH_Scarh_eotech",				"weapon",0.15},
			{"RH_Scarh_gl",					"weapon",0.15},
			{"RH_Scarh_gl_aim",				"weapon",0.15},
			{"RH_Scarh_gl_acog",			"weapon",0.10},
			{"RH_Scarh_gl_eotech",			"weapon",0.15},
			{"RH_Scarak",					"weapon",0.15},
			{"RH_scarakaim",				"weapon",0.15},
			{"RH_scarakeotech",				"weapon",0.15},
			{"RH_scarakacog",				"weapon",0.10},
			{"DGR_M24_A2",					"weapon",0.50},
			{"DGR_M24A2_A2",				"weapon",0.01},
			{"DGR_M40A5_A2",				"weapon",0.30},		
			{"RH_hk417",					"weapon",0.15},
			{"RH_hk417aim",					"weapon",0.15},
			{"RH_hk417acog",				"weapon",0.10},
			{"RH_hk417eotech",				"weapon",0.15},
			{"RH_hk417sp",					"weapon",0.10},
			{"M79_EP1",						"weapon",0.40},
		//special
			{"MedBox2",						"object",0.55},
			{"AmmoBoxSmall_556",			"object",0.50},
			{"AmmoBoxSmall_762",			"object",0.50},
		//mags special
			{"Skin_Sniper1_DZ",				"magazine",0.50},
		//Attachements
			{"Attachment_Sup",				"magazine",0.10},
			{"Attachment_CCO",				"magazine",1.05},
			{"Attachment_Holo",				"magazine",1.05},
			{"Attachment_M203",				"magazine",1.05},
			{"Attachment_ACOG",				"magazine",0.50},
			{"Attachment_SCOPED",			"magazine",0.20},
		//bags
			{"DZ_CivilBackpack_EP1",		"object",0.55}, // 24
			{"DZ_Backpack_EP1",				"object",0.55}, // 24
			{"DZ_Backpack_EP1_des",			"object",0.55}, // 24
			{"DZ_Backpack_EP1_wdl",			"object",0.55}, // 24
		//multiple spawns
			{"",							"medical",0.55},
			{"",							"civilianMagazines",0.20},
			{"",							"westernMagazines",0.55},
			{"",							"civilianAmmo",0.50},
			{"",							"westernAmmo",0.55},
			{"",							"militaryWEST",0.30}
		};
	};
	class HeliCrashEAST: Default {
		zombieChance = 1;
		minRoaming = 5;
		maxRoaming = 25;
		zombieClass[] = {"z_soldier_pilot"};
		zombieClassSlow[] = {"z_soldier_pilot_slow"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"NVGoggles",					"weapon",0.10},
			{"ItemGPS",						"weapon",0.20},
			{"PipeBomb",					"magazine",0.05},
			{"HandGrenade_East",			"magazine",0.50},
		//Sniper
			{"RH_svdb",						"weapon",0.30},
			{"RH_svd",						"weapon",0.30},
			{"RH_svdg",						"weapon",0.01},
			{"RH_svu",						"weapon",0.30},
			{"VIL_SVD_M",					"weapon",0.30},
			{"VIL_SVD_P21",					"weapon",0.30},
			{"C1987_G3SG1",					"weapon",0.10},
			{"vil_VSS_PSO",					"weapon",0.15},
			{"vil_SV_98",					"weapon",0.15},
			{"vil_SV_98_69",				"weapon",0.15},
			{"vil_svdk",					"weapon",0.05},
		//Assault rifles
			{"RH_bizonsd",					"weapon",3.20},
			{"RH_rpk74",					"weapon",3.25},
			{"RH_pmsd",						"weapon",3.20},
			{"VIL_PKP",						"weapon",3.01},
			{"RH_ak47",						"weapon",3.20},
			{"RH_aks47b",					"weapon",3.20},
			{"RH_ak47gl",					"weapon",3.20},
			{"RH_rk95",						"weapon",3.20},
			{"Sa58V_EP1",					"weapon",3.20},
			{"Sa58V_CCO_EP1",				"weapon",3.15},
			{"RH_rk95ag",					"weapon",3.20},
			{"RH_akm",						"weapon",3.20},
			{"RH_gr1",						"weapon",3.20},
			{"RH_ak103",					"weapon",3.20},
			{"RH_ak103gl",					"weapon",3.20},
			{"RH_ak103k",					"weapon",3.20},
			{"RH_ak103kgl",					"weapon",3.20},
			{"RH_ak103sp",					"weapon",3.20},
			{"RH_ak103glsp",				"weapon",3.20},
			{"RH_ak104",					"weapon",3.20},
			{"RH_ak104k",					"weapon",3.20},
			{"RH_ak104gl",					"weapon",3.20},
			{"RH_ak104kgl",					"weapon",3.20},
			{"RH_ak104sp",					"weapon",3.20},
			{"RH_ak104glsp",				"weapon",3.20},
			{"RH_ak105",					"weapon",3.20},
			{"RH_ak105k",					"weapon",3.20},
			{"RH_ak105kgl",					"weapon",3.20},
			{"RH_ak105sp",					"weapon",3.20},
			{"RH_ak105glsp",				"weapon",3.20},
			{"RH_ak107",					"weapon",3.20},
			{"RH_ak107k",					"weapon",3.20},
			{"RH_ak107gl",					"weapon",3.20},
			{"RH_ak107kgl",					"weapon",3.20},
			{"RH_ak107sp",					"weapon",3.20},
			{"RH_ak107glsp",				"weapon",3.20},
			{"RH_ak74",						"weapon",3.20},
			{"RH_ak74m",					"weapon",3.20},
			{"RH_ak74msp",					"weapon",3.20},
			{"RH_ak74k",					"weapon",3.20},
			{"RH_aks74",					"weapon",3.20},
			{"RH_aks74m",					"weapon",3.20},
			{"RH_aks74p",					"weapon",3.20},
			{"RH_aks74u",					"weapon",3.20},
			{"RH_aks74uk",					"weapon",3.20},
			{"RH_aks74usd",					"weapon",3.20},
			{"RH_akms",						"weapon",3.20},
			{"RH_akmsp",					"weapon",3.20},
			{"RH_akmgl",					"weapon",3.20},
			{"RH_an94",						"weapon",3.20},
			{"RH_an94gl",					"weapon",3.20},
			{"RH_rk95ag",					"weapon",3.20},
			{"RH_rk95aim",					"weapon",3.20},
			{"RH_rk95sd",					"weapon",3.20},
			{"RH_rk95sdaim",				"weapon",3.20},
			{"RH_rk95sdag",					"weapon",3.20},
			{"RH_aks74upt",					"weapon",3.20},
			{"C1987_G3",					"weapon",0.15},
			{"C1987_G3_acog",				"weapon",0.10},
			{"C1987_G3_eotech",				"weapon",0.15},
			{"C1987_G3_aimshot",			"weapon",0.15},
			{"RPG7V",						"weapon",0.05},
			{"RH_mk22sd",					"weapon",1.05},
			{"RH_mk22vsd",					"weapon",1.05},
			{"RH_mp5kpdw",					"weapon",3.10},
			{"RH_rk95aim",					"weapon",3.23},
			{"RH_rk95sd",					"weapon",3.15},
			{"RH_rk95sdaim",				"weapon",3.13},
			{"RH_aks47g",					"weapon",3.01},
			{"revolver_gold_EP1",			"weapon",0.01},
			{"RH_aks74mkgl",				"weapon",3.23},
			{"vil_val",						"weapon",0.15},
			{"vil_val_c",					"weapon",0.15},
			{"RH_oc14sd",					"weapon",1.06},
			{"RH_oc14sp",					"weapon",1.04},
			{"RH_oc14glsp",					"weapon",1.03},
			{"RH_akmssd",					"weapon",3.05},
			{"RH_ak47gl",					"weapon",3.06},
			{"RH_aks74uptsp",				"weapon",3.03},
			{"vil_RPK",						"weapon",2.10},
			{"vil_RPK75_Romania",			"weapon",2.10},
			{"KPFS_RPD",					"weapon",2.10},
			{"vil_aks_74_un_kobra",			"weapon",3.10},
			{"vil_ak_74m_k",				"weapon",3.10},
			{"vil_ak_74m_eot",				"weapon",3.10},	
			{"vil_ak12",					"weapon",3.10},
			{"vil_ak12_ap",					"weapon",3.10},
			{"vil_ak12_gp",					"weapon",3.10},
			{"VIL_AMD",						"weapon",3.05},
			{"VIL_AEK_GL",					"weapon",3.10},
			{"VIL_ABAKAN",					"weapon",3.10},
			{"VIL_ABAKAN_GP",				"weapon",3.10},
			{"VIL_ABAKAN_P29",				"weapon",3.10},
		//Attachements
			{"Attachment_Sup",				"magazine",0.15},
			{"Attachment_GP25",				"magazine",1.08},
			{"Attachment_PSO1",				"magazine",1.08},
			{"Attachment_Kobra",			"magazine",1.08},
			{"Attachment_CCO",				"magazine",1.04},
			{"Attachment_Holo",				"magazine",1.06},
			{"Attachment_ACOG",				"magazine",0.50},
			{"Attachment_SCOPED",			"magazine",0.20},
		//special
			{"MedBox2",						"object",1.15},
			{"AmmoBoxSmall_762",			"object",0.50},
			{"50Rnd_127x107_DSHKM",			"magazine",0.50},
		//mags special
			{"Skin_Sniper1_DZ",				"magazine",0.75},
		//bags
			{"DZ_CivilBackpack_EP1",		"object",0.15}, 
			{"DZ_Backpack_EP1",				"object",0.15}, 
			{"DZ_Backpack_EP1_des",			"object",0.15}, 
			{"DZ_Backpack_EP1_wdl",			"object",0.15}, 
		//multiple spawns
			{"",							"medical",0.25},
			{"",							"civilianMagazines",0.30},
			{"",							"militaryMagazines",0.60},
			{"",							"civilianAmmo",0.30},
			{"",							"militaryAmmo",0.60},
			{"",							"militaryEAST",0.20}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		zombieClassSlow[] = {"z_doctor_slow","z_doctor_slow","z_doctor_slow"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
			{"MedBox2",						"object",0.07},
			{"MedBox1",						"object",0.07},
			{"ItemBandage",					"magazine",0.11},
			{"ItemPainkiller",				"magazine",0.05},
			{"ItemMorphine",				"magazine",0.05},
			{"ItemEpinephrine",				"magazine",0.03},
			{"ItemChloroform",				"magazine",0.03},
			{"ItemAntibacterialWipe",		"magazine",0.05},
			{"ItemAntibiotic",				"magazine",0.08},
			{"emptyBloodBag",				"magazine",0.10},
			{"bloodBagOPOS",				"magazine",0.04},
			{"bloodBagONEG",				"magazine",0.15},
			{"bloodBagABPOS",				"magazine",0.04},
			{"bloodBagABNEG",				"magazine",0.04},
			{"bloodBagBPOS",				"magazine",0.04},
			{"bloodBagBNEG",				"magazine",0.04},
			{"bloodBagAPOS",				"magazine",0.04},
			{"bloodBagANEG",				"magazine",0.04},
			{"equip_gauzepackaged",			"magazine",0.02},
			{"equip_gauze",					"magazine",0.04},
			{"bloodTester",					"magazine",0.06},
			{"transfusionKit",				"magazine",0.04},
		//multiple spawns
			{"",							"medical",0.50},
			{"",							"Trash",0.20}
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_new_worker2","z_new_worker3","z_new_worker4"};
		zombieClassSlow[] = {"z_soldier_slow","z_soldier_heavy_slow","z_policeman_slow","z_worker2_slow","z_worker3_slow"};
		lootChance = 0.3;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular",					"weapon",0.05},
			{"ItemFlashlightRed",			"weapon",0.06},
			{"ItemKnife",					"weapon",0.06},
			{"ItemMap",						"weapon",0.03},
			{"ItemEtool",					"weapon",0.03},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"weapon",0.07},
			{"ItemFlashlight",				"weapon",0.07},
			{"ItemMatchbox",				"weapon",0.07},
		//weapons
			//GL
			{"FlareWhite_M203",				"magazine",0.03},
			{"FlareGreen_M203",				"magazine",0.03},
			{"FlareRed_M203",				"magazine",0.03},
			{"FlareYellow_M203",			"magazine",0.03},
			{"1Rnd_Smoke_M203",				"magazine",0.03},
			{"1Rnd_SmokeRed_M203",			"magazine",0.03},
			{"1Rnd_SmokeGreen_M203",		"magazine",0.03},
			{"1Rnd_SmokeYellow_M203",		"magazine",0.03},
			{"HandGrenade_East",			"magazine",0.02},
			{"1Rnd_HE_GP25",				"magazine",0.02},
			{"RH_1Rnd_30mm",				"magazine",0.02},
		//pistols
			{"RH_m1911old",					"weapon",0.05},
			{"RH_m1911",					"weapon",0.02},
			{"RH_deagle",					"weapon",0.01},
			{"RH_mk22",						"weapon",0.05},
			{"RH_mk22v",					"weapon",0.05},
			{"RH_browninghp",				"weapon",0.04},
			{"RH_pmsd",						"weapon",0.01},
			{"RH_ppk",						"weapon",0.08},
			{"RH_anac",						"weapon",0.02},
			{"RH_bull",						"weapon",0.02},
			{"RH_python",					"weapon",0.01},
		//Stanag rifles
		//AK rifles
			{"RH_rk95",						"weapon",0.13},
			{"RH_rk95ag",					"weapon",0.02},
			{"RH_rk95aim",					"weapon",0.03},
			{"RH_rk95sd",					"weapon",0.03},
			{"RH_ak47",						"weapon",0.13},
			{"RH_akm",						"weapon",0.13},
			{"RH_gr1",						"weapon",0.07},
			{"RH_ak103",					"weapon",0.13},
			{"RH_ak104",					"weapon",0.12},
			{"RH_ak105",					"weapon",0.11},
			{"RH_ak107",					"weapon",0.11},
			{"RH_ak74",						"weapon",0.11},
			{"RH_ak74m",					"weapon",0.11},
			{"RH_ak74k",					"weapon",0.10},
			{"RH_aks74",					"weapon",0.11},
			{"RH_aks74m",					"weapon",0.10},
			{"RH_aks74p",					"weapon",0.05},
			{"RH_aks74u",					"weapon",0.09},
			{"RH_akms",						"weapon",0.06},
			{"RH_akmsp",					"weapon",0.04},
			{"RH_akmgl",					"weapon",0.09},
			{"RH_an94",						"weapon",0.08},
			{"RH_an94gl",					"weapon",0.03},
			{"KPFS_RPD",					"weapon",0.01},
			{"RH_akmssd",					"weapon",0.03},
			{"RH_ak47gl",					"weapon",0.06},
			{"VIL_AEK1",					"weapon",0.10},
			{"VIL_AEK2",					"weapon",0.10},
			{"VIL_AEK_GL",					"weapon",0.10},
			{"VIL_ABAKAN",					"weapon",0.10},
			{"VIL_ABAKAN_GP",				"weapon",0.10},
			{"VIL_ABAKAN_P29",				"weapon",0.10},
		//shotguns
			{"M1014_DZ",					"weapon",0.09},
			{"Remington870_lamp",			"weapon",0.09},
		//smgs
			{"RH_uzi",						"weapon",0.05},
			{"RH_mac10",					"weapon",0.05},
			{"RH_tmp",						"weapon",0.05},
			{"RH_tmpsd",					"weapon",0.02},
			{"RH_pp2000",					"weapon",0.05},
			{"RH_mp5a5",					"weapon",0.06},
			{"RH_mp5a5aim",					"weapon",0.04},
			{"RH_mp5sd6",					"weapon",0.04},
			{"RH_ump",						"weapon",0.03},
			{"RH_umpaim",					"weapon",0.01},
			{"RH_p90i",						"weapon",0.03},
			{"RH_P90eot",					"weapon",0.01},
			{"RH_kriss",					"weapon",0.04},
			{"C1987_MP7_t",					"weapon",0.03},
			{"C1987_MP7_aim_t",				"weapon",0.02},
			{"C1987_MP7_acog_t",			"weapon",0.01},
			{"KPFS_MP44",					"weapon",0.01},
			{"RH_bizonsdk",					"weapon",0.03},
			{"RH_bizon",					"weapon",0.04},
			{"RH_bizonsd",					"weapon",0.02},
		   //backpack
			{"DZ_Backpack_OD",				"object",0.01},
			{"DZ_Backpack_DES",				"object",0.01},
			{"DZ_Backpack_3DES",			"object",0.01},
			{"DZ_Backpack_WDL",				"object",0.01},
			{"DZ_Backpack_MAR",				"object",0.01},
			{"DZ_Backpack_DPM",				"object",0.01},
			{"DZ_British_ACU",				"object",0.01}, 
			{"DZ_Gun_Pack_EP1",				"object",0.01}, 	
			{"DZ_Backpack_NVG",				"object",0.01},
			{"DZ_Backpack_UCP",				"object",0.01},
		//Attachements
			{"Attachment_GP25",				"magazine",0.13},
			{"Attachment_PSO1",				"magazine",0.13},
			{"Attachment_Kobra",			"magazine",0.13},
		//special
		//mags special
			{"ItemSandbag",					"magazine",0.04},		
		//multiple spawns
			{"",							"military",0.90},
			{"",							"Trash",0.80},
			{"",							"civilianMagazines",1.00},
			{"",							"militaryMagazines",2.00},
			{"",							"westernMagazines",0.10},
			{"",							"civilianAmmo",1.00},
			{"",							"militaryAmmo",1.00},
			{"",							"westernAmmo",0.10},
			{"",							"generic",0.40},
			{"",							"medical",0.05}
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_new_worker2","z_new_worker3","z_new_worker4"};
		zombieClassSlow[] = {"z_soldier_heavy_slow","z_worker2_slow","z_worker3_slow"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular",					"weapon",0.03},
			{"ItemFlashlightRed",			"weapon",0.05},
			{"ItemKnife",					"weapon",0.05},
			{"ItemMap",						"weapon",0.03},
			{"ItemRadio",					"weapon",0.02},
		//GL
			{"FlareWhite_M203",				"magazine",0.03},
			{"FlareGreen_M203",				"magazine",0.03},
			{"FlareRed_M203",				"magazine",0.03},
			{"FlareYellow_M203",			"magazine",0.03},
			{"1Rnd_Smoke_M203",				"magazine",0.03},
			{"1Rnd_SmokeRed_M203",			"magazine",0.03},
			{"1Rnd_SmokeGreen_M203",		"magazine",0.03},
			{"1Rnd_SmokeYellow_M203",		"magazine",0.03},
			{"HandGrenade_East",			"magazine",0.02},
			{"1Rnd_HE_GP25",				"magazine",0.03},
			{"RH_1Rnd_30mm",				"magazine",0.03},
		//pistols
			{"RH_m1911old",					"weapon",0.05},
			{"RH_m1911",					"weapon",0.02},
			{"RH_deagle",					"weapon",0.05},
			{"RH_mk22",						"weapon",0.05},
			{"RH_mk22sd",					"weapon",0.01},
			{"RH_mk22v",					"weapon",0.05},
			{"RH_mk22vsd",					"weapon",0.01},
			{"RH_browninghp",				"weapon",0.04},
			{"RH_pmsd",						"weapon",0.02},
			{"RH_ppk",						"weapon",0.08},
			{"RH_anac",						"weapon",0.02},
			{"RH_bull",						"weapon",0.02},
			{"RH_python",					"weapon",0.01},
			{"RH_aps",						"weapon",0.01},
		//Stanag rifles
		//AK rifles
			{"RH_ak47",						"weapon",0.12},
			{"RH_aks47b",					"weapon",0.09},
			{"RH_ak47gl",					"weapon",0.09},
			{"RH_rk95",						"weapon",0.12},
			{"Sa58V_EP1",					"weapon",0.06},
			{"RH_akm",						"weapon",0.12},
			{"RH_gr1",						"weapon",0.07},
			{"RH_ak103",					"weapon",0.12},
			{"RH_ak103gl",					"weapon",0.10},
			{"RH_ak103k",					"weapon",0.04},
			{"RH_ak103kgl",					"weapon",0.03},
			{"RH_ak103sp",					"weapon",0.04},
			{"RH_ak103glsp",				"weapon",0.03},
			{"RH_ak104",					"weapon",0.12},
			{"RH_ak104k",					"weapon",0.07},
			{"RH_ak104gl",					"weapon",0.07},
			{"RH_ak104kgl",					"weapon",0.07},
			{"RH_ak104sp",					"weapon",0.03},
			{"RH_ak104glsp",				"weapon",0.03},
			{"RH_ak105",					"weapon",0.12},
			{"RH_ak105k",					"weapon",0.04},
			{"RH_ak105kgl",					"weapon",0.04},
			{"RH_ak105sp",					"weapon",0.04},
			{"RH_ak105glsp",				"weapon",0.04},
			{"RH_ak107",					"weapon",0.12},
			{"RH_ak107k",					"weapon",0.04},
			{"RH_ak107gl",					"weapon",0.10},
			{"RH_ak107kgl",					"weapon",0.04},
			{"RH_ak107sp",					"weapon",0.04},
			{"RH_ak107glsp",				"weapon",0.04},
			{"RH_ak74",						"weapon",0.12},
			{"RH_ak74m",					"weapon",0.12},
			{"RH_ak74msp",					"weapon",0.04},
			{"RH_ak74k",					"weapon",0.12},
			{"RH_aks74",					"weapon",0.12},
			{"RH_aks74m",					"weapon",0.09},
			{"RH_aks74p",					"weapon",0.07},
			{"RH_aks74u",					"weapon",0.07},
			{"RH_aks74uk",					"weapon",0.07},
			{"RH_aks74usd",					"weapon",0.07},
			{"RH_akms",						"weapon",0.06},
			{"RH_akmsp",					"weapon",0.04},
			{"RH_akmgl",					"weapon",0.09},
			{"RH_an94",						"weapon",0.08},
			{"RH_an94gl",					"weapon",0.06},
			{"RH_rk95ag",					"weapon",0.02},
			{"RH_rk95aim",					"weapon",0.02},
			{"RH_rk95sd",					"weapon",0.01},
			{"RH_rk95sdaim",				"weapon",0.01},
			{"RH_rk95sdag",					"weapon",0.01},
			{"RH_aks74upt",					"weapon",0.06},
			{"RH_oc14",						"weapon",0.01},
			{"RH_oc14gl",					"weapon",0.01},
			{"VIL_AEK1",					"weapon",0.10},
			{"VIL_AEK2",					"weapon",0.10},
			{"VIL_AEK_GL",					"weapon",0.10},
			{"VIL_ABAKAN",					"weapon",0.10},
			{"VIL_ABAKAN_GP",				"weapon",0.10},
			{"VIL_ABAKAN_P29",				"weapon",0.10},
		//sniper, dmr, battle rifle
		//machineguns
			{"RH_rpk74",					"weapon",0.04},
			{"RH_rpk74m",					"weapon",0.04},
			{"RH_rpk47",					"weapon",0.03},
			//smgs
			{"RH_uzi",						"weapon",0.05},
			{"RH_mac10",					"weapon",0.05},
			{"RH_tmp",						"weapon",0.05},
			{"RH_tmpsd",					"weapon",0.02},
			{"RH_pp2000",					"weapon",0.05},
			{"RH_mp5a5",					"weapon",0.06},
			{"RH_mp5a5aim",					"weapon",0.04},
			{"RH_mp5sd6",					"weapon",0.04},
			{"RH_ump",						"weapon",0.03},
			{"RH_umpaim",					"weapon",0.01},
			{"RH_p90i",						"weapon",0.03},
			{"RH_P90eot",					"weapon",0.01},
			{"RH_kriss",					"weapon",0.04},
			{"C1987_MP7_t",					"weapon",0.03},
			{"C1987_MP7_aim_t",				"weapon",0.02},
			{"C1987_MP7_acog_t",			"weapon",0.01},
			{"RH_bizonsdk",					"weapon",0.03},
			{"RH_bizon",					"weapon",0.04},
			{"RH_bizonsd",					"weapon",0.02},
		//special
			{"WeaponHolder_ItemCamoNet",	"object",0.03},
		//mags special
	    //Attachements
			{"Attachment_GP25",				"magazine",0.07},
			{"Attachment_PSO1",				"magazine",0.05},
			{"Attachment_Kobra",			"magazine",0.05},
		//object
			{"DZ_Backpack_OD",				"object",0.01},
			{"DZ_Backpack_DES",				"object",0.01},
			{"DZ_Backpack_3DES",			"object",0.01},
			{"DZ_Backpack_WDL",				"object",0.01},
			{"DZ_Backpack_MAR",				"object",0.01},
			{"DZ_Backpack_DPM",				"object",0.01},
			{"DZ_British_ACU",				"object",0.01}, // 18
			{"DZ_CivilBackpack_EP1",		"object",0.01}, // 24	
			{"DZ_Backpack_NVG",				"object",0.01},
			{"DZ_Backpack_UCP",				"object",0.01},	
		//multiple spawns
			{"",							"military",0.90},
			{"",							"Trash",0.50},
			{"",							"generic",0.40},
			{"",							"civilianMagazines",0.40},
			{"",							"militaryMagazines",1.60},
			{"",							"westernMagazines",0.10},
			{"",							"civilianAmmo",0.40},
			{"",							"militaryAmmo",0.60},
			{"",							"westernAmmo",0.10},
			{"",							"medical",0.05}
		};
	};
	class Hunting: Default {
		zombieChance = 0.6;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		zombieClassSlow[] = {"z_hunter_slow","z_hunter_slow","z_hunter_slow"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMap",						"weapon",0.06},
			{"ItemFlashlight",				"weapon",0.06},
			{"ItemKnife",					"weapon",0.05},
			{"ItemMatchbox",				"weapon",0.07},
			{"ItemCompass",					"weapon",0.02},
			{"ItemRadio",					"weapon",0.02},
			{"WeaponHolder_ItemHatchet",	"object",0.02},
		//weapons
			{"Crossbow_DZ",					"weapon",0.02},
			{"Crossbow_Stock",				"weapon",0.03},
			{"MeleeMachete",				"weapon",0.04},
			{"huntingrifle",				"weapon",0.01},
			{"MR43",						"weapon",0.08}, 			
			{"Winchester1866",				"weapon",0.06},	
			{"LeeEnfield",					"weapon",0.06},
			{"Mosin_Nagant",				"weapon",0.05},
			{"Mosin_Nagant_Scoped",			"weapon",0.02},
			{"KPFS_KarS",					"weapon",0.01},
			{"KPFS_M1_Carbine",				"weapon",0.01},
			{"KPFS_M1_Garand",				"weapon",0.01},
			{"KPFS_M1_Garand_M84",			"weapon",0.01},
			{"RH_ak47_Civ",					"weapon",0.01},
		//special
			{"WeaponHolder_ItemDomeTent",	"object",0.02},
			{"ItemSandbag",					"magazine",0.04},
		//mags special
			{"equip_rope",					"magazine",0.03},
			{"equip_string",				"magazine",0.04},	
		//med
			{"ItemBandage",					"magazine",0.5},
			{"ItemHeatPack",				"magazine",0.02},
			{"ItemWaterbottleUnfilled",		"magazine",0.02},
			{"FoodCanRusUnlabeled",			"magazine",0.02},
			{"FoodCanRusStew",				"magazine",0.02},
			{"FoodCanRusPork",				"magazine",0.02},
			{"equip_duct_tape",				"magazine",0.03},
			{"FoodNutmix",					"magazine",0.03},
		//backpacks
			{"DZ_British_ACU",				"object",0.02}, 
			{"DZ_Backpack_6DES",			"object",0.01},
			{"DZ_Backpack_DMAR",			"object",0.01},
			{"DZ_Backpack_TAK",				"object",0.01},
		//multiple spawns
			{"",							"Trash",0.20},
			{"",							"civilianMagazines",0.06},
			{"",							"militaryMagazines",0.04},
			{"",							"civilianAmmo",0.15},
			{"",							"militaryAmmo",0.10},
			{"",							"generic",0.30}
		};
	};
	class Firestation: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_new_worker2","z_new_worker3","z_new_worker4"};
		zombieClassSlow[] = {"z_soldier_slow","z_soldier_heavy_slow","z_policeman_slow","z_worker2","z_worker3"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular",					"weapon",0.05},
			{"ItemFlashlightRed",			"weapon",0.06},
			{"ItemKnife",					"weapon",0.06},
			{"ItemMap",						"weapon",0.03},
			{"ItemEtool",					"weapon",0.03},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"weapon",0.07},
			{"ItemFlashlight",				"weapon",0.07},
			{"ItemMatchbox",				"weapon",0.07},
			{"WeaponHolder_ItemHatchet",	"object",0.05},
		//weapons
			//pistols
			{"RH_m1911old",					"weapon",0.05},
			{"RH_m1911",					"weapon",0.02},
			{"RH_deagle",					"weapon",0.01},
			{"RH_mk22",						"weapon",0.05},
			{"RH_mk22v",					"weapon",0.05},
			{"RH_browninghp",				"weapon",0.04},
			{"RH_pmsd",						"weapon",0.01},
			{"RH_ppk",						"weapon",0.08},
			{"RH_anac",						"weapon",0.02},
			{"RH_bull",						"weapon",0.02},
			{"RH_python",					"weapon",0.01},
		//shotguns
			{"M1014_DZ",					"weapon",0.10},
			{"Remington870_lamp",			"weapon",0.10},
		//smgs
			{"RH_uzi",						"weapon",0.01},
			{"RH_bizon",					"weapon",0.01},
			{"RH_mac10",					"weapon",0.01},
			{"RH_tmp",						"weapon",0.01},
			{"RH_tmpsd",					"weapon",0.01},
			{"RH_pp2000",					"weapon",0.01},
			{"RH_mp5a5",					"weapon",0.01},
			{"RH_mp5a5aim",					"weapon",0.01},
			{"RH_mp5sd6",					"weapon",0.01},
			{"RH_ump",						"weapon",0.01},
			{"RH_umpaim",					"weapon",0.01},
			{"RH_p90i",						"weapon",0.01},
			{"RH_P90eot",					"weapon",0.01},
			{"RH_kriss",					"weapon",0.01},
			{"C1987_MP7_t",					"weapon",0.01},
			{"C1987_MP7_aim_t",				"weapon",0.01},
			{"C1987_MP7_acog_t",			"weapon",0.01},
			{"KPFS_M1_Thompson",			"weapon",0.01},
			{"KPFS_MP44",					"weapon",0.01},
			{"RH_bizonsdk",					"weapon",0.01},
			{"RH_bizon",					"weapon",0.01},
			{"RH_bizonsd",					"weapon",0.01},
		   //backpack
			{"DZ_Backpack_OD",				"object",0.01},
			{"DZ_Backpack_DES",				"object",0.01},
			{"DZ_Backpack_3DES",			"object",0.01},
			{"DZ_Backpack_WDL",				"object",0.01},
			{"DZ_Backpack_MAR",				"object",0.01},
			{"DZ_Backpack_DPM",				"object",0.01},
			{"DZ_British_ACU",				"object",0.01}, 
			{"DZ_Gun_Pack_EP1",				"object",0.01}, 
			{"DZ_CivilBackpack_EP1",		"object",0.01}, 
			{"DZ_Backpack_NVG",				"object",0.01},
			{"DZ_Backpack_UCP",				"object",0.01},
		//Attachements
		//special
		//mags special
			{"ItemSandbag",					"magazine",0.04},		
		//multiple spawns
			{"",							"military",0.70},
			{"",							"Trash",0.50},
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.70},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.20},
			{"",							"generic",0.60},
			{"",							"medical",0.05}
		};
	};
	class MilitaryMilHouse: Default {
		zombieChance = 0.9;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};
		zombieClassSlow[] = {"z_soldier_slow","z_soldier_heavy_slow","z_soldier_pilot_slow"};
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {	
		//one spawn
		//tools
			{"Binocular",					"weapon",0.05},
			{"ItemFlashlightRed",			"weapon",0.06},
			{"ItemKnife",					"weapon",0.06},
			{"ItemMap",						"weapon",0.03},
			{"ItemEtool",					"weapon",0.03},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"weapon",0.07},
			{"ItemFlashlight",				"weapon",0.07},
			{"ItemMatchbox",				"weapon",0.07},
		//weapons
			//GL
			{"FlareWhite_M203",				"magazine",0.01},
			{"FlareGreen_M203",				"magazine",0.01},
			{"FlareRed_M203",				"magazine",0.01},
			{"FlareYellow_M203",			"magazine",0.01},
			{"1Rnd_Smoke_M203",				"magazine",0.01},
			{"1Rnd_SmokeRed_M203",			"magazine",0.01},
			{"1Rnd_SmokeGreen_M203",		"magazine",0.01},
			{"1Rnd_SmokeYellow_M203",		"magazine",0.01},
			{"HandGrenade_East",			"magazine",0.03},
			{"1Rnd_HE_GP25",				"magazine",0.03},
			{"RH_1Rnd_30mm",				"magazine",0.03},
		//pistol
			{"RH_m1911old",					"weapon",0.05},
			{"RH_m1911",					"weapon",0.02},
			{"RH_deagle",					"weapon",0.01},
			{"RH_mk22",						"weapon",0.05},
			{"RH_mk22v",					"weapon",0.05},
			{"RH_browninghp",				"weapon",0.04},
			{"RH_pmsd",						"weapon",0.01},
			{"RH_ppk",						"weapon",0.08},
			{"RH_anac",						"weapon",0.02},
			{"RH_bull",						"weapon",0.02},
			{"RH_python",					"weapon",0.01},
		//AK rifles
			{"RH_rk95",						"weapon",0.13},
			{"RH_rk95ag",					"weapon",0.01},
			{"RH_rk95aim",					"weapon",0.01},
			{"RH_rk95sd",					"weapon",0.01},
			{"RH_ak47",						"weapon",0.13},
			{"RH_akm",						"weapon",0.13},
			{"RH_gr1",						"weapon",0.07},
			{"RH_ak103",					"weapon",0.13},
			{"RH_ak104",					"weapon",0.12},
			{"RH_ak105",					"weapon",0.11},
			{"RH_ak107",					"weapon",0.11},
			{"RH_ak74",						"weapon",0.11},
			{"RH_ak74m",					"weapon",0.11},
			{"RH_ak74k",					"weapon",0.10},
			{"RH_aks74",					"weapon",0.11},
			{"RH_aks74m",					"weapon",0.10},
			{"RH_aks74p",					"weapon",0.10},
			{"RH_aks74u",					"weapon",0.09},
			{"RH_akms",						"weapon",0.06},
			{"RH_akmsp",					"weapon",0.04},
			{"RH_akmgl",					"weapon",0.09},
			{"RH_an94",						"weapon",0.08},
			{"RH_an94gl",					"weapon",0.06},
			{"KPFS_RPD",					"weapon",0.01},
			{"RH_akmssd",					"weapon",0.05},
			{"RH_ak47gl",					"weapon",0.06},
			{"VIL_AEK1",					"weapon",0.10},
			{"VIL_AEK2",					"weapon",0.10},
			{"VIL_AEK_GL",					"weapon",0.10},
			{"VIL_ABAKAN",					"weapon",0.10},
			{"VIL_ABAKAN_GP",				"weapon",0.10},
			{"VIL_ABAKAN_P29",				"weapon",0.10},
		//shotguns
			{"M1014_DZ",					"weapon",0.09},
			{"Remington870_lamp",			"weapon",0.09},
		//smgs
			{"RH_uzi",						"weapon",0.05},
			{"RH_mac10",					"weapon",0.05},
			{"RH_tmp",						"weapon",0.05},
			{"RH_tmpsd",					"weapon",0.02},
			{"RH_pp2000",					"weapon",0.05},
			{"RH_mp5a5",					"weapon",0.06},
			{"RH_mp5a5aim",					"weapon",0.04},
			{"RH_mp5sd6",					"weapon",0.04},
			{"RH_ump",						"weapon",0.03},
			{"RH_umpaim",					"weapon",0.01},
			{"RH_p90i",						"weapon",0.03},
			{"RH_P90eot",					"weapon",0.01},
			{"RH_kriss",					"weapon",0.04},
			{"C1987_MP7_t",					"weapon",0.03},
			{"C1987_MP7_aim_t",				"weapon",0.02},
			{"C1987_MP7_acog_t",			"weapon",0.01},
			{"KPFS_MP44",					"weapon",0.01},
			{"RH_bizonsdk",					"weapon",0.03},
			{"RH_bizon",					"weapon",0.04},
			{"RH_bizonsd",					"weapon",0.02},
		   //backpack
			{"DZ_Backpack_OD",				"object",0.01},
			{"DZ_Backpack_DES",				"object",0.01},
			{"DZ_Backpack_3DES",			"object",0.01},
			{"DZ_Backpack_WDL",				"object",0.01},
			{"DZ_Backpack_MAR",				"object",0.01},
			{"DZ_Backpack_DPM",				"object",0.01},
			{"DZ_British_ACU",				"object",0.01}, 
			{"DZ_Gun_Pack_EP1",				"object",0.01}, 
			{"DZ_Backpack_NVG",				"object",0.01},
			{"DZ_Backpack_UCP",				"object",0.01},
		//Attachements
			{"Attachment_GP25",				"magazine",0.06},
			{"Attachment_PSO1",				"magazine",0.04},
			{"Attachment_Kobra",			"magazine",0.04},
		//special
		//mags special
			{"ItemSandbag",					"magazine",0.04},		
		//multiple spawns
			{"",							"military",0.90},
			{"",							"Trash",0.40},
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.70},
			{"",							"westernMagazines",0.10},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.60},
			{"",							"westernAmmo",0.10},
			{"",							"generic",0.40},
			{"",							"medical",0.05}
//loot goes here
		};
	};
	class MilitaryMilBarracks: Default {
		zombieChance = 0.9;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};
		zombieClassSlow[] = {"z_soldier_slow","z_soldier_heavy_slow","z_soldier_pilot_slow"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {			
		//one spawn
		//tools
			{"Binocular",					"weapon",0.05},
			{"ItemFlashlightRed",			"weapon",0.06},
			{"ItemKnife",					"weapon",0.06},
			{"ItemMap",						"weapon",0.03},
			{"ItemEtool",					"weapon",0.03},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"weapon",0.07},
			{"ItemFlashlight",				"weapon",0.07},
			{"ItemMatchbox",				"weapon",0.07},
		//weapons
		//GL
			{"FlareWhite_M203",				"magazine",0.01},
			{"FlareGreen_M203",				"magazine",0.01},
			{"FlareRed_M203",				"magazine",0.01},
			{"FlareYellow_M203",			"magazine",0.01},
			{"1Rnd_Smoke_M203",				"magazine",0.01},
			{"1Rnd_SmokeRed_M203",			"magazine",0.01},
			{"1Rnd_SmokeGreen_M203",		"magazine",0.01},
			{"1Rnd_SmokeYellow_M203",		"magazine",0.01},
			{"HandGrenade_East",			"magazine",0.03},
			{"1Rnd_HE_GP25",				"magazine",0.03},
			{"RH_1Rnd_30mm",				"magazine",0.03},
		//pistols
			{"RH_m1911old",					"weapon",0.05},
			{"RH_m1911",					"weapon",0.02},
			{"RH_mk22",						"weapon",0.05},
			{"RH_mk22v",					"weapon",0.05},
			{"RH_browninghp",				"weapon",0.04},
			{"RH_pmsd",						"weapon",0.01},
			{"RH_ppk",						"weapon",0.08},
			{"RH_anac",						"weapon",0.02},
			{"RH_bull",						"weapon",0.02},
			{"RH_python",					"weapon",0.01},
		//AK rifles
			{"RH_rk95",						"weapon",0.13},
			{"RH_rk95ag",					"weapon",0.01},
			{"RH_rk95aim",					"weapon",0.01},
			{"RH_rk95sd",					"weapon",0.01},
			{"RH_ak47",						"weapon",0.13},
			{"RH_akm",						"weapon",0.13},
			{"RH_gr1",						"weapon",0.07},
			{"RH_ak103",					"weapon",0.13},
			{"RH_ak104",					"weapon",0.12},
			{"RH_ak105",					"weapon",0.11},
			{"RH_ak107",					"weapon",0.11},
			{"RH_ak74",						"weapon",0.11},
			{"RH_ak74m",					"weapon",0.11},
			{"RH_ak74k",					"weapon",0.10},
			{"RH_aks74",					"weapon",0.11},
			{"RH_aks74m",					"weapon",0.10},
			{"RH_aks74p",					"weapon",0.10},
			{"RH_aks74u",					"weapon",0.09},
			{"RH_akms",						"weapon",0.06},
			{"RH_akmsp",					"weapon",0.04},
			{"RH_akmgl",					"weapon",0.09},
			{"RH_an94",						"weapon",0.08},
			{"RH_an94gl",					"weapon",0.06},
			{"KPFS_RPD",					"weapon",0.01},
			{"RH_akmssd",					"weapon",0.05},
			{"RH_ak47gl",					"weapon",0.06},	
			{"VIL_AEK1",					"weapon",0.10},
			{"VIL_AEK2",					"weapon",0.10},
			{"VIL_AEK_GL",					"weapon",0.10},
			{"VIL_ABAKAN",					"weapon",0.10},
			{"VIL_ABAKAN_GP",				"weapon",0.10},
			{"VIL_ABAKAN_P29",				"weapon",0.10},
		//shotguns
			{"M1014_DZ",					"weapon",0.09},
			{"Remington870_lamp",			"weapon",0.09},
		//smgs
			{"RH_uzi",						"weapon",0.05},
			{"RH_mac10",					"weapon",0.05},
			{"RH_tmp",						"weapon",0.05},
			{"RH_tmpsd",					"weapon",0.02},
			{"RH_pp2000",					"weapon",0.05},
			{"RH_mp5a5",					"weapon",0.06},
			{"RH_mp5a5aim",					"weapon",0.04},
			{"RH_mp5sd6",					"weapon",0.04},
			{"RH_ump",						"weapon",0.03},
			{"RH_umpaim",					"weapon",0.01},
			{"RH_p90i",						"weapon",0.03},
			{"RH_P90eot",					"weapon",0.01},
			{"RH_kriss",					"weapon",0.04},
			{"C1987_MP7_t",					"weapon",0.03},
			{"C1987_MP7_aim_t",				"weapon",0.02},
			{"C1987_MP7_acog_t",			"weapon",0.01},
			{"KPFS_MP44",					"weapon",0.01},
			{"RH_bizonsdk",					"weapon",0.03},
			{"RH_bizon",					"weapon",0.04},
			{"RH_bizonsd",					"weapon",0.02},
		   //backpack
			{"DZ_Backpack_OD",				"object",0.01},
			{"DZ_Backpack_DES",				"object",0.01},
			{"DZ_Backpack_3DES",			"object",0.01},
			{"DZ_Backpack_WDL",				"object",0.01},
			{"DZ_Backpack_MAR",				"object",0.01},
			{"DZ_Backpack_DPM",				"object",0.01},
			{"DZ_British_ACU",				"object",0.01}, 
			{"DZ_Gun_Pack_EP1",				"object",0.01}, 	
			{"DZ_Backpack_NVG",				"object",0.01},
			{"DZ_Backpack_UCP",				"object",0.01},
		//Attachements
			{"Attachment_GP25",				"magazine",0.06},
			{"Attachment_PSO1",				"magazine",0.04},
			{"Attachment_Kobra",			"magazine",0.04},
		//special
		//mags special
			{"ItemSandbag",					"magazine",0.04},		
		//multiple spawns
			{"",							"military",0.90},
			{"",							"Trash",0.60},
			{"",							"civilianMagazines",0.20},
			{"",							"militaryMagazines",0.80},
			{"",							"westernMagazines",0.10},
			{"",							"civilianAmmo",0.20},
			{"",							"militaryAmmo",0.50},
			{"",							"westernAmmo",0.10},
			{"",							"generic",0.40},
			{"",							"medical",0.05}
		};
	};
	class MilitaryBarracksSmall: Default {
		zombieChance = 0.9;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier_pilot"};
		zombieClassSlow[] = {"z_soldier_slow","z_soldier_heavy_slow","z_soldier_pilot_slow"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular",					"weapon",0.05},
			{"ItemFlashlightRed",			"weapon",0.06},
			{"ItemKnife",					"weapon",0.06},
			{"ItemMap",						"weapon",0.03},
			{"ItemEtool",					"weapon",0.03},
			{"ItemRadio",					"weapon",0.02},
			{"ItemCompass",					"weapon",0.07},
			{"ItemFlashlight",				"weapon",0.07},
			{"ItemMatchbox",				"weapon",0.07},
		//weapons
		//GL
			{"FlareWhite_M203",				"magazine",0.01},
			{"FlareGreen_M203",				"magazine",0.01},
			{"FlareRed_M203",				"magazine",0.01},
			{"FlareYellow_M203",			"magazine",0.01},
			{"1Rnd_Smoke_M203",				"magazine",0.01},
			{"1Rnd_SmokeRed_M203",			"magazine",0.01},
			{"1Rnd_SmokeGreen_M203",		"magazine",0.01},
			{"1Rnd_SmokeYellow_M203",		"magazine",0.01},
			{"HandGrenade_East",			"magazine",0.04},
			{"1Rnd_HE_GP25",				"magazine",0.04},
			{"RH_1Rnd_30mm",				"magazine",0.04},
		//pistols
			{"RH_m1911old",					"weapon",0.05},
			{"RH_m1911",					"weapon",0.02},
			{"RH_deagle",					"weapon",0.01},
			{"RH_mk22",						"weapon",0.05},
			{"RH_mk22v",					"weapon",0.05},
			{"RH_browninghp",				"weapon",0.04},
			{"RH_pmsd",						"weapon",0.01},
			{"RH_ppk",						"weapon",0.08},
			{"RH_anac",						"weapon",0.02},
			{"RH_bull",						"weapon",0.02},
			{"RH_python",					"weapon",0.01},
		//AK rifles
			{"RH_rk95",						"weapon",0.13},
			{"RH_rk95ag",					"weapon",0.01},
			{"RH_rk95aim",					"weapon",0.01},
			{"RH_rk95sd",					"weapon",0.01},
			{"RH_ak47",						"weapon",0.13},
			{"RH_akm",						"weapon",0.13},
			{"RH_gr1",						"weapon",0.07},
			{"RH_ak103",					"weapon",0.13},
			{"RH_ak104",					"weapon",0.12},
			{"RH_ak105",					"weapon",0.11},
			{"RH_ak107",					"weapon",0.11},
			{"RH_ak74",						"weapon",0.11},
			{"RH_ak74m",					"weapon",0.11},
			{"RH_ak74k",					"weapon",0.10},
			{"RH_aks74",					"weapon",0.11},
			{"RH_aks74m",					"weapon",0.10},
			{"RH_aks74p",					"weapon",0.10},
			{"RH_aks74u",					"weapon",0.09},
			{"RH_akms",						"weapon",0.06},
			{"RH_akmsp",					"weapon",0.04},
			{"RH_akmgl",					"weapon",0.09},
			{"RH_an94",						"weapon",0.08},
			{"RH_an94gl",					"weapon",0.06},
			{"KPFS_RPD",					"weapon",0.01},
			{"RH_akmssd",					"weapon",0.05},
			{"RH_ak47gl",					"weapon",0.06},
			{"VIL_AEK1",					"weapon",0.10},
			{"VIL_AEK2",					"weapon",0.10},
			{"VIL_AEK_GL",					"weapon",0.10},
			{"VIL_ABAKAN",					"weapon",0.10},
			{"VIL_ABAKAN_GP",				"weapon",0.10},
			{"VIL_ABAKAN_P29",				"weapon",0.10},
		//shotguns
			{"M1014_DZ",					"weapon",0.09},
			{"Remington870_lamp",			"weapon",0.09},
		//smgs
			{"RH_uzi",						"weapon",0.05},
			{"RH_mac10",					"weapon",0.05},
			{"RH_tmp",						"weapon",0.05},
			{"RH_tmpsd",					"weapon",0.02},
			{"RH_pp2000",					"weapon",0.05},
			{"RH_mp5a5",					"weapon",0.06},
			{"RH_mp5a5aim",					"weapon",0.04},
			{"RH_mp5sd6",					"weapon",0.04},
			{"RH_ump",						"weapon",0.03},
			{"RH_umpaim",					"weapon",0.01},
			{"RH_p90i",						"weapon",0.03},
			{"RH_P90eot",					"weapon",0.01},
			{"RH_kriss",					"weapon",0.04},
			{"C1987_MP7_t",					"weapon",0.03},
			{"C1987_MP7_aim_t",				"weapon",0.02},
			{"C1987_MP7_acog_t",			"weapon",0.01},
			{"KPFS_MP44",					"weapon",0.01},
			{"RH_bizonsdk",					"weapon",0.03},
			{"RH_bizon",					"weapon",0.04},
			{"RH_bizonsd",					"weapon",0.02},
		   //backpack
			{"DZ_Backpack_OD",				"object",0.01},
			{"DZ_Backpack_DES",				"object",0.01},
			{"DZ_Backpack_3DES",			"object",0.01},
			{"DZ_Backpack_WDL",				"object",0.01},
			{"DZ_Backpack_MAR",				"object",0.01},
			{"DZ_Backpack_DPM",				"object",0.01},
			{"DZ_British_ACU",				"object",0.01}, // 18
			{"DZ_Gun_Pack_EP1",				"object",0.01}, // 24	
			{"DZ_CivilBackpack_EP1",		"object",0.01}, // 24	
			{"DZ_Backpack_NVG",				"object",0.01},
			{"DZ_Backpack_UCP",				"object",0.01},
		//Attachements
			{"Attachment_GP25",				"magazine",0.06},
			{"Attachment_PSO1",				"magazine",0.04},
			{"Attachment_Kobra",			"magazine",0.04},
		//special
		//mags special
			{"ItemSandbag",					"magazine",0.04},		
		//multiple spawns
			{"",							"military",0.90},
			{"",							"Trash",0.50},
			{"",							"civilianMagazines",0.40},
			{"",							"militaryMagazines",0.80},
			{"",							"westernMagazines",0.10},
			{"",							"civilianAmmo",0.40},
			{"",							"militaryAmmo",0.60},
			{"",							"westernAmmo",0.10},
			{"",							"generic",0.60},
			{"",							"medical",0.05}
		};
	};

#include "CfgBuildingPos.hpp"

};