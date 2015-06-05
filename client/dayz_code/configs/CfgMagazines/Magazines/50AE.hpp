class RH_7Rnd_50_AE_Empty: emptiedMagazine
{
	scope=2;
	displayName=".50 AE (Empty)";
	picture="\RH_de\inv\m_de.paa";
	model="\RH_de\mags\mag_de.p3d";
	type=16;
	class ammoType
	{
		class RH_50_AE_Ball {
			ammoMag = "RH_7Rnd_50_AE";
		};
	};
};

class RH_7Rnd_50_AE: CA_Magazine
{
	class ItemActions {
		COMBINE_MAG
	};

	emptyMag = "RH_7Rnd_50_AE_Empty";
};