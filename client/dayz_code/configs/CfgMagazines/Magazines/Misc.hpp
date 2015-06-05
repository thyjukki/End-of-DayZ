//CZ550
class 5x_22_LR_17_HMR_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7x64 mm <BR/>Rounds: 5 <BR/>Used in: CZ 550";
	displayname = "CZ 550 Magazine (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "5x_22_LR_17_HMR";
		};
	};
};

class 5x_22_LR_17_HMR: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "5x_22_LR_17_HMR_Empty";
};

class 10x_303_Empty : emptiedMagazine { //FIXME
	descriptionshort = "Caliber: .303<br/>Rounds: 10<br/>Used in: Lee Enfield Mk III";
	displayname = "Lee Enfield Mag (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
	scope = 2;

	class ammoType
	{
		class B_303_Ball {
			ammoMag = "10x_303";
		};
	};
};

//Lee-Enfield
class 10x_303: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "10x_303_Empty";
};

//Winchester 1866
class 15Rnd_W1866_Slug: CA_Magazine
{
	model = "\z\addons\dayz_communityassets\models\winammo.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_winammo_ca.paa";
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "15Rnd_W1866_Slug_Empty";
};