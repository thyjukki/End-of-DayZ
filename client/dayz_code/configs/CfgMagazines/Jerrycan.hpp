class ItemJerrycan : CA_Magazine {
	emptycan = "ItemJerrycanEmpty";
	displayName = $STR_ITEM_NAME_JERRYCAN;
	descriptionShort = $STR_ITEM_DESC_JERRYCAN;
	jerrycanType = "ItemFuelcan";
	fireIntensity = 6;
};

class ItemJerrycanKerosene : ItemJerrycan {
	emptycan = "ItemJerrycanEmpty";
	displayName = $STR_ITEM_NAME_JERRYCANKEROSENE;
	descriptionShort = $STR_ITEM_DESC_JERRYCANKEROSENE;
	jerrycanType = "ItemFuelcanKerosene";
	fireIntensity = 6;
}; 

class ItemJerrycanEmpty : ItemJerrycan {
	fullcan = "ItemJerrycan";
	displayName = $STR_ITEM_NAME_JERRYCAN_EMPTY;
	descriptionShort = $STR_ITEM_DESC_JERRYCAN_EMPTY;
};