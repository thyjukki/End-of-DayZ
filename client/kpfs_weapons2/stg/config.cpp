class CfgPatches
{
	class KPFS_STG
	{
		units[]={};
		weapons[]=
		{
			"KPFS_STG44"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};
class cfgRecoils
{
	KPFS_MP44recoil[]=
	{
		0.000000,
		0.006000,
		"0.0037*		3/4",
		0.020000,
		0.006000,
		"0.0037*		3/4",
		0.040000,
		0.003400,
		"0.0052*		3/4",
		0.050000,
		0.000000,
		0.000000
	};
	KPFS_MP44recoilprone[]=
	{
		0.000000,
		0.006000,
		"0.0037*		1/4*		3/4",
		0.020000,
		0.006000,
		"0.0037*		1/4*		3/4",
		0.040000,
		0.003400,
		"0.0052*		1/4*		3/4",
		0.050000,
		0.000000,
		0.000000
	};
	KPFS_MP44recoilAI[]=
	{
		0.000000,
		0.006000,
		"0.0037*		1/3*		3/4",
		"0.020/2",
		0.006000,
		"0.0037*		1/3*		3/4",
		"0.040/2",
		0.003400,
		"0.0052*		1/3*		3/4",
		"0.050/2",
		0.000000,
		0.000000
	};
};


class Mode_FullAuto;
class Far;
class Medium;
class Short;
class cfgWeapons
{
	class Rifle;
	class KPFS_MP44: Rifle
	{
		scope=2;
		model="\kpfs_weapons2\stg\stg44";
		displayName="$STR_KPFS_STG44";
		picture="\kpfs_weapons2\data\icons\w_stg_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		dexterity=1.500000;
		cursor="RifleCursor";
		descriptionShort="<br />Ammo: 7.92x33";
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\AK47_dry_v1",
			0.000316,
			1
		};
		reloadMagazineSound[]=
		{
			"\ca\Weapons\Data\Sound\AK47_fill_v3",
			0.005623,
			1
		};
		magazines[]=
		{
			"792x33_x1",
			"792x33_BT_x1",
			"792x33_TRACER_x1",
			"792x33_RUBBER_x1",
			"792x33_BT_x1",
			"KPFS_30Rnd_792x33_STG44",
			"KPFS_30Rnd_792x33_STG44_hp",
			"KPFS_30Rnd_792x33_STG44_tracer",
			"KPFS_30Rnd_792x33_STG44_rubber",
			"KPFS_30Rnd_792x33_STG44_bt"
		};
		modes[]=
		{
			"Full",
			"Far",
			"Medium",
			"Short"
		};
		class Full: Mode_FullAuto
		{
			begin1[]=
			{
				"\kpfs_weapons2\sound\stg.wav",
				10,
				1
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="KPFS_MP44recoil";
			recoilProne="KPFS_MP44recoilprone";
			dispersion=0.006000;
			aiRateOfFire=0.001000;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=5;
			midRangeProbab=0.700000;
			maxRange=10;
			maxRangeProbab=0.050000;
		};
		class Far: Full
		{
			showToPlayer=1;
			displayName="$STR_DN_MODE_SEMIAUTO";
			autoFire=0;
			aiRateOfFireDistance=500;
			aiRateOfFire=5;
			minRange=300;
			minRangeProbab=0.050000;
			midRange=400;
			midRangeProbab=0.500000;
			maxRange=500;
			maxRangeProbab=0.040000;
		};
		class Medium: Full
		{
			showToPlayer=0;
			burst=3;
			ffCount=3;
			autoFire=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=100;
			minRangeProbab=0.050000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.040000;
		};
		class Short: Medium
		{
			aiRateOfFire=0.050000;
			aiRateOfFireDistance=100;
			minRange=10;
			minRangeProbab=0.050000;
			midRange=50;
			midRangeProbab=0.500000;
			maxRange=100;
			maxRangeProbab=0.040000;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_STG44";
		};
		class Armory
		{
			author="$STR_AUTHOR_KPFS_UPD";
		};
		aiDispersionCoefY=5;
		aiDispersionCoefX=5;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=3;
	};
};
