class 8Rnd_9x18_Makarov_Empty: emptiedMagazine {
	ammo = "B_9x18_Ball";
	descriptionshort = "Caliber: 9x18 mm Makarov <br/>Rounds: 8 <br/>Used in: Makarov";
	displayname = "Makarov Mag. (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
	scope = 2;
	type = 16;
	class ammoType
	{
		class B_9x18_Ball {
			ammoMag = "8Rnd_9x18_Makarov";
		};
		class B_9x18_SD {
			ammoMag = "8Rnd_9x18_MakarovSD";
		};
	};
};

class 8Rnd_9x18_Makarov : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "8Rnd_9x18_Makarov_Empty";
};

class 8Rnd_9x18_MakarovSD : 8Rnd_9x18_Makarov
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_makarovsd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class RH_20Rnd_9x18_aps: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_20Rnd_9x18_aps_Empty";
};

class RH_20Rnd_9x18_apsSD: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_20Rnd_9x18_aps_Empty";
};