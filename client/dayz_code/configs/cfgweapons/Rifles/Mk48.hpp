class Mk48_CCO_DZ : Mk_48
{
	model = "z\addons\dayz_communityweapons\mk48\mk48_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_cco_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_CCO_NAME;
	
	type = WeaponSlotPrimary;
	
	magazines[] =
	{
		"762x51_x1",
		"762x51_SD_x1",
		"762x51_HP_x1",
		"762x51_TRACER_x1",
		"762x51_RUBBER_x1",
		"762x51_BT_x1",
		"100Rnd_762x51_M240",
		"100Rnd_762x51_M240SD",
		"100Rnd_762x51_M240_hp",
		"100Rnd_762x51_M240_tracer",
		"100Rnd_762x51_M240_rubber",
		"100Rnd_762x51_M240_bt",
		"200Rnd_762x51_M240",
		"200Rnd_762x51_M240SD",
		"200Rnd_762x51_M240_hp",
		"200Rnd_762x51_M240_tracer",
		"200Rnd_762x51_M240_rubber",
		"200Rnd_762x51_M240_bt"
	};
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;
};

class Mk48_DZ : Mk48_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\mk48\mk48.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
};

class Mk48_Holo_DZ : Mk48_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\mk48\mk48_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\mk48\data\w_mk48_holo_camo_ca.paa";
	displayName = $STR_DZ_WPN_MK48_HOLO_NAME;
};

/*legacy*/
class Mk_48_DZ : Mk_48
{
};