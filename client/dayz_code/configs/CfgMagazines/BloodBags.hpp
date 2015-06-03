class bloodBagANEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: A-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type A- that is compatible A-, A+, AB-, AB+ recipients";
};
class bloodBagAPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: A+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type A+ that is compatible A+ and AB+ recipients";
};
class bloodBagBNEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: B-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type B- that is compatible B-, B+, AB+, AB- recipients";
};
class bloodBagBPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: B+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type B+ that is compatible B+ and AB+ recipients";
};
class bloodBagABNEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: AB-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type AB- that is compatible AB+ and AB- recipients";
};
class bloodBagABPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: AB+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type AB+ that is compatible AB+ recipients";
};
class bloodBagONEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: O-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type O- that is compatible with all recipients";
};
class bloodBagOPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Bag: O+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "A blood bag ready for transfusion kits, type O+ that is compatible O+, AB+, A+, B+ recipients";
};

//Whole blood bags -- Can only be obtained by taking blood from another player.
class wholeBloodBagANEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: A-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type A- that is compatible A- recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagAPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: A+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type A+ that is compatible A+ recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagBNEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: B-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type B- that is compatible B- recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagBPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: B+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type B+ that is compatible B+ recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagABNEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: AB-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type AB- that is compatible AB- recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagABPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: AB+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type AB+ that is compatible AB+ recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagONEG : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood: O-";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type O- that is compatible with O- recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};
class wholeBloodBagOPOS : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Whole Blood Bag: O+";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	descriptionShort = "Personal blood Bag, type O+ that is compatible O+ recipients";
	class ItemActions {
		class Use {
			text = "Use Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};

//MISC tools needed
class bloodTester : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Blood Testing Kit";
	model = "z\addons\dayz_communityassets\models\blood_test.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_blood_test_ca.paa";
	descriptionShort = "Used to determine RH and blood type";
	class ItemActions {
		class Use {
			text = "Test Blood";
			script = "spawn player_useMeds;";
		};
	};
};

class transfusionKit : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Transfusion Kit";
	model = "z\addons\dayz_communityassets\models\blood_transfuse.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bloodbag_transfuse_CA.paa";
	descriptionShort = "A blood transfusion kit that is required to perform blood transfusions and fill blood bags";
	class ItemActions {
		class Use {
			text = "Fill Blood Bag";
			script = "spawn player_useMeds;";
		};
	};
};

class emptyBloodBag : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = "Empty Blood Bag";
	model = "z\addons\dayz_communityassets\models\bbag_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_empty_ca.paa";
	descriptionShort = "An empty bag that is yet to be filled with blood";
};
