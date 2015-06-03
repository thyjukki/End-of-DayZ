class Flare : GrenadeLauncher {
		class ThrowMuzzle;
		class MolotovCocktailMuzzle : ThrowMuzzle {
			displayName = $STR_ACTION_THROW;
			magazines[] = {
				"TrashJackDaniels", 
				"ItemSodaEmpty", 
				"TrashTinCan",
				"FoodCanGriffEmpty",
				"FoodCanBadguyEmpty",
				"FoodCanBoneboyEmpty",
				"FoodCanCornEmpty",
				"FoodCanCurgonEmpty",
				"FoodCanDemonEmpty",
				"FoodCanFraggleosEmpty",
				"FoodCanHerpyEmpty",
				"FoodCanDerpyEmpty",
				"FoodCanOrlokEmpty",
				"FoodCanPowellEmpty",
				"FoodCanTylersEmpty",
				"FoodCanUnlabeledEmpty",
				"FoodCanRusUnlabeledEmpty",
				"FoodCanRusPorkEmpty",
				"FoodCanRusPeasEmpty",
				"FoodCanRusMilkEmpty",
				"FoodCanRusCornEmpty",
				"FoodCanRusStewEmpty",
				"ItemSodaCokeEmpty",
				"ItemSodaPepsiEmpty",
				"ItemSodaMdewEmpty",
				"ItemSodaMtngreenEmpty",
				"ItemSodaR4z0rEmpty",
				"ItemSodaClaysEmpty",
				"ItemSodaSmashtEmpty", 
				"ItemSodaDrwasteEmpty", 
				"ItemSodaLemonadeEmpty", 
				"ItemSodaLvgEmpty", 
				"ItemSodaMzlyEmpty", 
				"ItemSodaRabbitEmpty"
			};          
		};
		class SmokeGrenade: ThrowMuzzle
		{
			displayName="$STR_MAG_ACTION_6";
			magazines[]=
			{
				"SmokeShell",
				"SmokeShellRed",
				"SmokeShellGreen",
				"SmokeShellBlue",
				"SmokeShellOrange",
				"SmokeShellPurple",
				"SmokeShellYellow"
			};
		};
		class GrenadeFrag: ThrowMuzzle
		{
			displayName="$STR_MAG_ACTION2_4";
			magazines[]=
			{
				"HandGrenade_East"
			};
		};
	}; 