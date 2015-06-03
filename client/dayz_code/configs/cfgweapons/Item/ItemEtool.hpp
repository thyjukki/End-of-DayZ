//NotWorking _DZ Remove
class ItemEtool: ItemCore {
	scope = 2;
	displayName = $STR_EQUIP_NAME_1;
	descriptionShort = $STR_EQUIP_DESC_1;
	stashsmall = "StashSmall";
	stashmedium = "StashMedium";
	consume = "ItemSandbag";
	class ItemActions
	{
		class Use
		{
			text=$STR_CREATE_STASH;
			script="spawn player_createstash; r_action_count = r_action_count + 1;";
		};
	};
};