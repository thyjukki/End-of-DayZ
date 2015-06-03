class ItemMatchbox : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3;
	qtyRemaining = "Item5Matchbox";
	chance = 30;
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item5Matchbox : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_A;
	qtyRemaining = "Item4Matchbox";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};

class Item4Matchbox : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_B;
	qtyRemaining = "Item3Matchbox";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item3Matchbox : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_C;
	qtyRemaining = "Item2Matchbox";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item2Matchbox : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_D;
	qtyRemaining = "Item1Matchbox";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};
class Item1Matchbox : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_E;
	qtyRemaining = "ItemMatchboxEmpty";
	
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_LIGHTFIRE;
			script = "spawn player_makeFire;";
			use[] = {"PartWoodPile"};
		};
	};
};


class ItemMatchboxEmpty : ItemCore {
	scope = public;
	displayName = $STR_EQUIP_NAME_3_EMPTY;
	model = "\dayz_equip\models\matchbox_gear.p3d";
	picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_3_EMPTY;
};