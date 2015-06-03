class AttScope : CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_SCOPE;
	picture = "\z\addons\dayz_communityassets\pictures\attchment _sniperscope.paa";
	descriptionShort = $STR_EQUIP_DESC_SCOPE;
	
	class ItemActions {
		class AttPrimary {
			text = $STR_ACTIONS_ATTACHTOPRIMARY;
			script = "spawn player_useAttchment;";
		};
		/*class AttSecondary {
			text = $STR_ACTIONS_ATTACHTOSECONDARY;
			script = "spawn player_useAttchment;";
		};*/
	};
};