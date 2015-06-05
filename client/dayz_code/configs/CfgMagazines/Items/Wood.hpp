class ItemLog: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemLog;//"Wooden Log"
	picture = "\z\addons\dayz_buildings\equip\item_log.paa";
	model = "z\addons\dayz_buildings\models\logs.p3d";
	descriptionShort = $STR_BLD_desc_ItemLog;//"Rough Wooden Log"
	class ItemActions
	{
		class Crafting
		{
			text = $STR_BLD_craft_ItemLog;//"Wooden Plank"
			script = "spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"ItemPlank","CfgMagazines",2}};
			input[] = {{"ItemLog","CfgMagazines",1}};
		};
	};
};	

class ItemPlank: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_BLD_name_ItemPlank;//"Sawn Planks"
	picture = "\z\addons\dayz_buildings\equip\item_plank.paa";
	model = "z\addons\dayz_buildings\models\planks.p3d";
	descriptionShort = $STR_BLD_desc_ItemPlank;//"Saw Planks"
	class ItemActions
	{
		class Crafting
		{
			text = $STR_BLD_craft_ItemPlank;//"Wood Piles"
			script = "spawn player_craftItem;";
			neednearby[] = {}; 
			requiretools[] = {"ItemHatchet"};
			output[] = {{"PartWoodPile","CfgMagazines",2}};
			input[] = {{"ItemPlank","CfgMagazines",1}};
		};
	};
};