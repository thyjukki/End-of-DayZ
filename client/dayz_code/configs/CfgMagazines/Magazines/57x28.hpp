class RH_57x28mm_50RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="FN P90 Magazine (Empty)";
	model="\RH_smg\mags\mag_p90.p3d";
	picture="\RH_smg\inv\m_p90.paa";
	class ammoType
	{
		class RH_smg_57x28mm_Round {
			ammoMag = "RH_57x28mm_50RND_Mag";
		};
		class RH_smg_45ACP_SD_Round {
			ammoMag = "RH_smg_57x28mm_SD_Round";
		};
	};
};

class RH_57x28mm_50RND_Mag: 30Rnd_9x19_MP5
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_57x28mm_50RND_Mag_Empty";
};

class RH_57x28mm_50RND_SD_Mag: 30Rnd_9x19_MP5SD
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_57x28mm_50RND_Mag_Empty";
};