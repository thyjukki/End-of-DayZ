// TODO(Jukki) We probably dont ned these?
class 5Rnd_127x99_as50 : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "5Rnd_127x99_as50_Empty";
};

class 10Rnd_127x99_m107 : CA_Magazine {

	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "10Rnd_127x99_m107_Empty";
};

//NOTE this is 127x108 round
//TODO(Jukki) add to base class
class 5Rnd_127x108_KSVK_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 12.7x108mm <br/>Rounds: 5 <br/>Used in: KSVK";
	displayname = "5RND. KSVK (Empty)";
	picture = "\CA\weapons\data\Equip\M_ksvk_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_127x108_Ball {
			ammoMag = "5Rnd_127x108_KSVK";
		};
	};
};

// TODO(Jukki) What is this even used for?
class 50Rnd_127x107_DSHKM_Empty: emptiedMagazine {
	type = 2*		256;
	displayname = "DShKM Mag (Empty)";
	scope = 2;
	class ammoType
	{
		class B_127x107_Ball {
			ammoMag = "50Rnd_127x107_DSHKM";
		};
	};
};