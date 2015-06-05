class RH_8Rnd_762_tt33_Empty: emptiedMagazine
{
	scope=2;
	displayName="TT33 mag (Empty)";
	picture="\RH_de\inv\m_tt33.paa";
	model="\RH_de\mags\mag_tt33.p3d";
	type=16;
	class ammoType
	{
		class RH_762x25 {
			ammoMag = "RH_8Rnd_762_tt33";
		};
	};
};

class RH_8Rnd_762_tt33: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_8Rnd_762_tt33_Empty";
};

class KPFS_8Rnd_762x25_TT33: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_8Rnd_762x25_TT33_Empty";
};

class KPFS_71Rnd_762x25_PPSh: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_71Rnd_762x25_PPSh_Empty";
};