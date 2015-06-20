class Flare : GrenadeLauncher {
		muzzles[] = {"RoadFlareMuzzle", "ChemLightMuzzle", "MolotovCocktailMuzzle", "SmokeShellMuzzle"};
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
				"FoodCanBeefEmpty",
				"FoodCanPotatoesEmpty",
				"ItemSodaClaysEmpty",
				"ItemSodaCokeEmpty",
				"ItemSodaDrwasteEmpty",
				"ItemSodaFrankaEmpty",
				"ItemSodaGrapeDrinkEmpty",
				"ItemSodaLemonadeEmpty",
				"ItemSodaLirikEmpty",
				"ItemSodaLvgEmpty",
				"ItemSodaMdewEmpty",
				"ItemSodaMtngreenEmpty",
				"ItemSodaMzlyEmpty",
				"ItemSodaPeppsyEmpty",
				"ItemSodaPepsiEmpty",
				"ItemSodaR4z0rEmpty",
				"ItemSodaRabbitEmpty",
				"ItemSodaRocketFuelEmpty",
				"ItemSodaSacriteEmpty",
				"ItemSodaSherbetEmpty",
				"ItemSodaSmashtEmpty"
			};          
		};

		class SmokeShellMuzzle : ThrowMuzzle
		{
			displayName="Smoke Grenade";
			magazines[]={"SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"};
			cursor="\ca\Weapons\Data\clear_empty";
			cursoraim="Vehicle_Grenade_W";
			cursorSize=1;
		};
}; 