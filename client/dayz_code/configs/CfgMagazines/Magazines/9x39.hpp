class RH_20Rnd_9x39_SP6_mag: 30Rnd_545x39_AK
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_20Rnd_9x39_SP6_mag_Empty";
};

class RH_20Rnd_9x39_val_mag: 30Rnd_545x39_AK
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_20Rnd_9x39_val_mag_Empty";
};


// TODO(Jukki) remove either this or RH version, add to base class
class vil_10Rnd_9x39_SP6_VSS_Empty : emptiedMagazine {
	scope = public;
	picture = "\CA\weapons\data\equip\M_VSSx10_CA.paa";
	displayName = "10Rnd. SP6 (Empty)";
	descriptionShort = $STR_TGW_VIL_MS_SP6VSS;
	class ammoType
	{
		class vil_B_9x39_SP6 {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS";
		};
	};
};

class vil_20Rnd_9x39_SP6_VAL_Empty : emptiedMagazine {
	scope = public;
	picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
	displayName = "20Rnd. SP6 (Empty)";
	descriptionShort = $STR_TGW_VIL_MS_SP6VAL;
	class ammoType
	{
		class vil_B_9x39_SP6 {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL";
		};
	};
};


class RH_20Rnd_9x39_val_mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Val mag (Empty)";
	picture="\CA\weapons\data\equip\M_VSSx20_CA.paa";
	descriptionShort="$STR_TGW_VIL_MS_SP6VAL";
	class ammoType
	{
		class RH_B_9x39_SD {
			ammoMag = "RH_20Rnd_9x39_val_mag";
		};
	};
};