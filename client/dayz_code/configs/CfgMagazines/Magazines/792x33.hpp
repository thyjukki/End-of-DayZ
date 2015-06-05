class KPFS_30Rnd_792x33_STG44_Empty: emptiedMagazine
{
	scope=2;
	displayName="AR 44 Magazine (Empty)";
	picture="\kpfs_weapons2\data\icons\m_mp44_ca.paa";
	class ammoType
	{
		class KPFS_B_792x33_Ball {
			ammoMag = "KPFS_30Rnd_792x33_STG44";
		};
	};
};

class KPFS_30Rnd_792x33_STG44: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_30Rnd_792x33_STG44_Empty";
};