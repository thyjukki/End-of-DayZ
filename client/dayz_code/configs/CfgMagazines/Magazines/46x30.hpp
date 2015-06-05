
class 40Rnd_46x30_mp7_Empty: emptiedMagazine
{
	scope=2;
	displayName="40Rnd. MP7 Mag (Empty)";
	picture="\C1987_Mp7\equip\gui_mp7_40_mag.paa";
	model="\C1987_Mp7\mp7_40_mag.p3d";
	descriptionShort="40Rnd. 4,6x30mm";
	class ammoType
	{
		class C1987_B_46x30_Ball {
			ammoMag = "40Rnd_46x30_mp7";
		};
		class C1987_B_46x30_sd_Ball {
			ammoMag = "40Rnd_46x30_sd_mp7";
		};
	};
};

class 40Rnd_46x30_mp7: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "40Rnd_46x30_mp7_Empty";
};

class 40Rnd_46x30_sd_mp7: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "40Rnd_46x30_mp7_Empty";
};


class 20Rnd_46x30_mp7_Empty: emptiedMagazine
{
	scope=2;
	displayName="20Rnd. MP7 Mag (Empty)";
	picture="\C1987_Mp7\equip\gui_mp7_20_mag.paa";
	model="\C1987_Mp7\mp7_20_mag.p3d";
	descriptionShort="20Rnd. 4,6x30mm";
	class ammoType
	{
		class C1987_B_46x30_Ball {
			ammoMag = "20Rnd_46x30_mp7";
		};
		class C1987_B_46x30_sd_Ball {
			ammoMag = "20Rnd_46x30_sd_mp7";
		};
	};
};

class 20Rnd_46x30_mp7: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "20Rnd_46x30_mp7_Empty";
};

class 20Rnd_46x30_sd_mp7: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "20Rnd_46x30_mp7_Empty";
};

class RH_46x30mm_40RND_Mag: 30Rnd_9x19_MP5
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_46x30mm_40RND_Mag_Empty";
};

class RH_46x30mm_40RND_SD_Mag: 30Rnd_9x19_MP5SD
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_46x30mm_40RND_Mag_Empty";
};