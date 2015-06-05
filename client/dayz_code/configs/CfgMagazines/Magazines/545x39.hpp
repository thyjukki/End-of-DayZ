// AK-74 30rnd
class 30Rnd_545x39_AK_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 30 <br/>Used in: AK-74, AK-74 Kobra, AKS-74U, AK-107 and RPK-74";
	displayname = "30Rnd. AK (Empty)";
	picture = "\CA\weapons\ak\data\equip\m_ak74_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "30Rnd_545x39_AK";
		};
		class B_545x39_SD {
			ammoMag = "30Rnd_545x39_AKSD";
		};
	};
};

class 30Rnd_545x39_AK : CA_Magazine
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "30Rnd_545x39_AK_Empty";
};

class 30Rnd_545x39_AKSD : 30Rnd_545x39_AK
{
	picture = "\z\addons\dayz_communityweapons\magazines\data\m_ak74sd_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class RH_30Rnd_545x39_AKSU_mag: 30Rnd_545x39_AK {
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

// AK-74 45nd
class RH_45Rnd_545x39_mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="RPK74 45rnd mag (Empty)";
	picture="\RH_aks\inv\m_rpk74.paa";
	model="\RH_aks\mags\mag_rpk74.p3d";
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "RH_45Rnd_545x39_mag";
		};
	};
};

class RH_45Rnd_545x39_mag: 30Rnd_545x39_AK
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_45Rnd_545x39_mag_Empty";
};

class 75Rnd_545x39_RPK : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "75Rnd_545x39_RPK_Empty";
};