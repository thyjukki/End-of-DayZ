class KPFS_8Rnd_cal30_60_Gar_Empty: emptiedMagazine
{
	scope=2;
	displayName="Garand clip (Empty)";
	picture="\kpfs_weapons2\data\icons\m_garand_ca.paa";
	descriptionShort="$STR_KPFSS_8RND_CAL30_60";
	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar";
		};
	};
};

class KPFS_15Rnd_cal30_Carbine_Empty: emptiedMagazine
{
	scope=2;
	displayName="Carbine magazine (Empty)";
	picture="\kpfs_weapons2\data\icons\m_carbine_ca.paa";
	descriptionShort="$STR_KPFSS_15RND_CAL30";
	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_15Rnd_cal30_Carbine";
		};
	};
};

class KPFS_15Rnd_cal30_Carbine: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_15Rnd_cal30_Carbine_Empty";
};

class KPFS_8Rnd_cal30_60_Gar: KPFS_15Rnd_cal30_Carbine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_8Rnd_cal30_60_Gar_Empty";
};

class KPFS_20Rnd_cal30_60_bar: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_20Rnd_cal30_60_bar_Empty";
};