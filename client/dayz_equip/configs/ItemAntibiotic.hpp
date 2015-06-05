class ItemAntibiotic_base : CA_Magazine {
	scope = 1;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_17;
	model = "\dayz_equip\models\med_antibiotic_gear.p3d";
	picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_17;
};

class ItemAntibiotic : ItemAntibiotic_base {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_17;
	model = "\dayz_equip\models\med_antibiotic_gear.p3d";
	picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_17;
	
	class medical {
		chance = 0.50;
		amount = -1;
		qtyRemaining = "ItemAntibiotic6";
	};
	
	class ItemActions {
		class Use {
			text = $STR_TAKE_ANTIBIOTIC;
			script = "spawn player_useMeds;";
		};
	};
};
class ItemAntibiotic6 : ItemAntibiotic {
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "Azithromycin is a broad spectrum antibiotic used to treat or prevent certain bacterial infections. 6 Remaining";
	
	class medical {
		amount = 6;
		qtyRemaining = "ItemAntibiotic5";
	};
};
class ItemAntibiotic5 : ItemAntibiotic {
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "Azithromycin is a broad spectrum antibiotic used to treat or prevent certain bacterial infections. 5 Remaining";
	
	class medical {
		amount = 5;
		qtyRemaining = "ItemAntibiotic4";
	};
};
class ItemAntibiotic4 : ItemAntibiotic {
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "Azithromycin is a broad spectrum antibiotic used to treat or prevent certain bacterial infections. 4 Remaining";
	
	class medical {
		amount = 4;
		qtyRemaining = "ItemAntibiotic3";
	};
};
class ItemAntibiotic3 : ItemAntibiotic {
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "Azithromycin is a broad spectrum antibiotic used to treat or prevent certain bacterial infections. 3 Remaining";
	
	class medical {
		amount = 3;
		qtyRemaining = "ItemAntibiotic2";
	};
};
class ItemAntibiotic2 : ItemAntibiotic {
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "Azithromycin is a broad spectrum antibiotic used to treat or prevent certain bacterial infections. 2 Remaining";
	
	class medical {
		amount = 2;
		qtyRemaining = "ItemAntibiotic1";
	};
	
};
class ItemAntibiotic1 : ItemAntibiotic {
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "Azithromycin is a broad spectrum antibiotic used to treat or prevent certain bacterial infections. 1 Remaining";
	
	class medical {
		amount = 1;
		qtyRemaining = "ItemAntibioticEmpty";
	};
};

class ItemAntibioticEmpty : ItemAntibiotic_base {
	scope = 2;
	displayName = $STR_EQUIP_NAME_17;
	descriptionShort = "EmptyBox of Azithromycin.";
};