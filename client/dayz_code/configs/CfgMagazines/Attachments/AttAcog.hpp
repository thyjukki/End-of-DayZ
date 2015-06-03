class AttAcog : CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_ACOG;
	picture = "\z\addons\dayz_communityassets\pictures\attachment_acg.paa";
	descriptionShort = $STR_EQUIP_DESC_ACOG;
	
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

class AttPSO : CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_PSO;
	picture = "\z\addons\dayz_communityassets\pictures\attchement_pso.paa";
	descriptionShort = $STR_EQUIP_DESC_PSO;
	
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