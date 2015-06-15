class CfgPatches
{
	class UKF_SniperWeps
	{
		units[]=
		{
			"UKF_sniper",
			"UKF_sniper_sd"
		};
		weapons[]=
		{
			"UKF_L115A3",//TODO(Jukki) Ammo for this?!?
			"UKF_L115A3_fgrip",
			"UKF_L115A3_wdl",
			"UKF_L115A3_wdl_fgrip",
			"UKF_L115A3_des",
			"UKF_L115A3_des_fgrip",
			"UKF_L115A3_sd",
			"UKF_L115A3_sd_fgrip",
			"UKF_L115A3_sd_wdl",
			"UKF_L115A3_sd_wdl_fgrip",
			"UKF_L115A3_sd_des",
			"UKF_L115A3_sd_des_fgrip"
		};
		requiredVersion=1.030000;
		requiredAddons[]=
		{
			"CAWeapons2",
			"CACharacters2"
		};
	};
};
L115_noGripOrBipod=0;
L115_noCQBsights=0;


class CfgRecoils
{
	L115Recoil[]={0,0,0,0.090000,0.010000,0.050000,0.006000,-0.040000,-0.090000,0.010000,0,0};
	L115RecoilProne[]={0,0,0,0.100000,0.003000,0.005000,0.050000,-0.003000,-0.010000,0.050000,0,0};
};
class CfgWeapons
{
	class M24;
	class UKF_L115A3: M24
	{
		scope=2;
		model="\UKF_L115A3\UKF_L115A3.p3d";
		displayName="L115A3";
		descriptionShort="Accuracy International L115A3";
		dexterity=1.000000;
		ACE_bipod=0;
		ACE_WEIGHT=6.800000;
		ACE_Size=9000;
		ACE_NoPack=1;
		modelOptics="\UKF_L115A3\scope\P3L-Fine_mildot.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		optics=1;
		opticsZoomMin=0.024900;
		opticsZoomMax=0.124500;
		opticsZoomInit=0.124500;
		distanceZoomMin=519;
		distanceZoomMax=519;
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_sniper_CA.paa";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\UKF_L115A3\anims\UKF_L115A3.rtm"
		};
		magazines[]=
		{
			"338_x1",
			"338_HP_x1",
			"338_TRACER_x1",
			"338_RUBBER_x1",
			"338_BT_x1",
			"UKF_5Rnd_338_Mag",
			"UKF_5Rnd_338_Mag_hp",
			"UKF_5Rnd_338_Mag_tracer",
			"UKF_5Rnd_338_Mag_rubber",
			"UKF_5Rnd_338_Mag_hp"
		};
		reloadMagazineSound[]=
		{
			"ca\sounds\weapons\rifles\reload-m16-3",
			0.100000,
			1,
			20
		};
		reloadsound[]=
		{
			"\UKF_L115A3\snd\l115boltcycle.ogg",
			0.031623,
			1,
			20
		};
		begin1[]=
		{
			"\UKF_L115A3\snd\l115.ogg",
			1.711890,
			1,
			1300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		autoFire=0;
		reloadTime=2;
		dispersion=0.000030;
		minRange=2;
		minRangeProbab=0.100000;
		midRange=800;
		midRangeProbab=0.700000;
		maxRange=1500;
		maxRangeProbab=0.050000;
		recoil="L115Recoil";
		recoilProne="L115RecoilProne";
		class Library
		{
			libTextDesc="The Accuracy International L115A3 'Long Range Rifle' (LRR) was introduced in 2008 as part of the Sniper System Improvement Programme (SSIP), replacing the AI L96A1 as the primary sniper weapon system of the United Kingdom's armed forces. It is the latest militarized version of the AI 'Arctic Warfare Super Mangum' (AWSM) which was first introduced to British forces in limited numbers back in the year 2000 as the L115A1. The L115A1 was introduced to extend the accurate range of recce platoon snipers out beyond the capabilities of the 7.62mm L96A1, with the aid of the larger .338 (8.6mm) Lapua round. Operational experience in Iraq and Afghanistan has shown fire-fights frequently occurring over long ranges, resulting in large-calibre rifles like the L115A3 being adopted more widely by British snipers. The L115A3 features a Schmidt and Bender 5-25x56 PM-II telescopic sight on a Picatinny rail, AI 'Tactical' muzzle brake, 27-inch fluted barrel, Harris bipod and a folding stock with butt spike. The rifle can be fitted with a suppressor to eliminate muzzle flash, and a Qioptiq Ltd. SniperVIPIR-2+ Thermal Weapon Sight. Weight = 6.8kg, Length = 1,300mm, Muzzle Velocity = 936m/s, Ammunition = .338 Lapua, in five-round box magazines.";
		};
		ace_sa_enabled=1;
		ace_sa_adj_mode="angle";
		ace_sa_defaultelevation=3.300000;
		ace_sa_zerooffset=0;
		ace_sa_defaultwindage=0;
		ace_sa_defaultrange=500;
		ace_sa_minelevation=-4;
		ace_sa_maxelevation=23;
		ace_sa_stepelevation=0.100000;
		ace_sa_windage=6;
		ace_sa_stepwindage=0.100000;
		ace_sa_minrange=100;
		ace_sa_maxrange=1500;
		ace_sa_elev_unit="mil";
		ace_sa_wind_unit="mil";
		ace_sa_range_unit="meters";
		ace_sa_zeroelev=100;
		ace_sa_table_elev[]=
		{
			{0,0},
			{100,0.500000},
			{200,1.200000},
			{300,1.800000},
			{400,2.600000},
			{500,3.300000},
			{550,3.700000},
			{600,4.200000},
			{650,4.600000},
			{700,5.000000},
			{750,5.500000},
			{800,6},
			{850,6.500000},
			{900,7},
			{950,7.600000},
			{1000,8.100000},
			{1050,8.700000},
			{1100,9.300000},
			{1150,9.900000},
			{1200,10.600000},
			{1250,11.300000},
			{1300,12},
			{1350,12.700000},
			{1400,13.500000},
			{1450,14.300000},
			{1500,15.100000}
		};
		ace_drift[]=
		{
			{0,0},
			{100,0.000000},
			{200,0.000000},
			{300,0.100000},
			{400,0.100000},
			{500,0.200000},
			{600,0.300000},
			{700,0.400000},
			{800,0.600000},
			{900,0.800000},
			{1000,1.100000},
			{1100,1.400000},
			{1200,1.700000},
			{1300,2.100000},
			{1400,2.600000},
			{1500,3.000000}
		};
	};
	class UKF_L115A3_fgrip: UKF_L115A3
	{
		model="\UKF_L115A3\UKF_L115A3_fgrip.p3d";
		ACE_bipod=1;
	};
	class UKF_L115A3_wdl: UKF_L115A3
	{
		model="\UKF_L115A3\Camo_G\UKF_L115A3_G.p3d";
		displayName="L115A3 (WD)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_w_ca.paa";
	};
	class UKF_L115A3_wdl_fgrip: UKF_L115A3_fgrip
	{
		model="\UKF_L115A3\Camo_G\UKF_L115A3_G_fgrip.p3d";
		displayName="L115A3 (WD)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_w_ca.paa";
	};
	class UKF_L115A3_des: UKF_L115A3
	{
		model="\UKF_L115A3\Camo_D\UKF_L115A3_D.p3d";
		displayName="L115A3 (D)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_d_ca.paa";
	};
	class UKF_L115A3_des_fgrip: UKF_L115A3_fgrip
	{
		model="\UKF_L115A3\Camo_D\UKF_L115A3_D_fgrip.p3d";
		displayName="L115A3 (D)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_d_ca.paa";
	};
	class UKF_L115A3_sd: UKF_L115A3
	{
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		model="\UKF_L115A3\UKF_L115A3_sd.p3d";
		displayName="L115A3 SD";
		descriptionShort="Accuracy International L115A3 (SD)";
		ace_suppressed=1;
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_sd_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_sniper_CA.paa";
		begin1[]=
		{
			"\UKF_L115A3\snd\l115_sd.ogg",
			1.579280,
			1,
			1000
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		class Library
		{
			libTextDesc="Accuracy International L115A3 (suppressed)";
		};
	};
	class UKF_L115A3_sd_fgrip: UKF_L115A3_sd
	{
		model="\UKF_L115A3\UKF_L115A3_sd_fgrip.p3d";
		ACE_bipod=1;
	};
	class UKF_L115A3_sd_wdl: UKF_L115A3_sd
	{
		model="\UKF_L115A3\Camo_G\UKF_L115A3_G_SD.p3d";
		displayName="L115A3 SD (WD)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_wsd_ca.paa";
	};
	class UKF_L115A3_sd_wdl_fgrip: UKF_L115A3_sd_fgrip
	{
		model="\UKF_L115A3\Camo_G\UKF_L115A3_G_SD_fgrip.p3d";
		displayName="L115A3 SD (WD)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_wsd_ca.paa";
	};
	class UKF_L115A3_sd_des: UKF_L115A3_sd
	{
		model="\UKF_L115A3\Camo_D\UKF_L115A3_D_SD.p3d";
		displayName="L115A3 SD (D)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_dsd_ca.paa";
	};
	class UKF_L115A3_sd_des_fgrip: UKF_L115A3_sd_fgrip
	{
		model="\UKF_L115A3\Camo_D\UKF_L115A3_D_SD_fgrip.p3d";
		displayName="L115A3 SD (D)";
		picture="\UKF_L115A3\Equip\w_UKF_L115A3_dsd_ca.paa";
	};
};