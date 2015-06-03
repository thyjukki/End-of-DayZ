class AttAimpoint : CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_AIM;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_aim.paa";
	descriptionShort = $STR_EQUIP_DESC_AIM;
	
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

class AttKobra : CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_KOBRA;
	picture = "\z\addons\dayz_communityassets\pictures\attchement_kobra.paa";
	descriptionShort = $STR_EQUIP_DESC_KOBRA;
	
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