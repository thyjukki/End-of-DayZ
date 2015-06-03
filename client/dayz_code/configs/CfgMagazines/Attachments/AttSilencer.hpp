class AttSilencer : CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_SILENCER;
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	descriptionShort = $STR_EQUIP_DESC_SILENCER;
	
	class ItemActions {
		class AttPrimary {
			text = $STR_ACTIONS_ATTACHTOPRIMARY;
			script = "spawn player_useAttchment;";
		};
		class AttSecondary {
			text = $STR_ACTIONS_ATTACHTOSECONDARY;
			script = "spawn player_useAttchmentSidearm;";
		};
	};
};