class 100Rnd_762x54_PK : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};
};

// SVD
class 10Rnd_762x54_SVD_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x54mmR <br/>Rounds: 10 <br/>Used in: SVD Dragunov";
	displayname = "SVD Dragunov Mag. (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_762x54_noTracer {
			ammoMag = "10Rnd_762x54_SVD";
		};
	};
};

class 10Rnd_762x54_SVD : CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "10Rnd_762x54_SVD_Empty";
};


class KPFS_5Rnd_762x54_Mosin_Empty: emptiedMagazine
{
	scope=2;
	picture="\kpfs_weapons2\Data\icons\m_sks_ca.paa";
	displayName="Mosin magazine (Empty)";

	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_5Rnd_762x54_Mosin";
		};
	};
};

class KPFS_5Rnd_762x54_Mosin: 10Rnd_762x54_SVD
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "KPFS_5Rnd_762x54_Mosin_Empty";
};

class Mosin_Nagant_Ammo: CA_Magazine
{
	scope = 2;
	displayName = "Mosin Nagant Ammo";
	model="\dayz_equip\models\mag5rnd.p3d";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\ammo.paa";
	count = 5;
	ammo = "Mosin_762";
	descriptionShort = "5 Individual 7.62mm Mosin Nagant Cartridges";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};


//TODO(Jukki) add to empty
//PK
class 100Rnd_762x54_PK_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x54mm <br/>Rounds: 100 <br/>Used in: PK";
	displayname = "PKM Mag. (Empty)";
	scope = 2;
	type = "2 * 		256";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "100Rnd_762x54_PK";
		};
	};
};


//TODO(Jukki) add to empty
//SV 98
class vil_10Rnd_762x54_SV_Empty : emptiedMagazine {
	scope = public;
	displayName = "SV-98 Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	descriptionShort = $STR_TGW_VIL_MS_SV98;
	class ammoType
	{
		class B_762x54_noTracer {
			ammoMag = "vil_10Rnd_762x54_SV";
		};
	};
};

//SVDK mag
//TODO(Jukki) add to empty
class vil_10Rnd_SVDK_Empty : emptiedMagazine {
	scope = public;
	displayName = "SVDK Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	descriptionShort = $STR_VIL_MS_SVDK;
	class ammoType
	{
		class Vil_B_93x64_Ball {
			ammoMag = "vil_10Rnd_SVDK";
		};
	};
};