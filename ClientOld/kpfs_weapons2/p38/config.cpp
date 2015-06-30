class CfgPatches
{
	class KPFS_P38
	{
		units[]={};
		weapons[]=
		{
			"KPFS_P38",
			"KPFS_P38k"
		};
		requiredVersion=1.000000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KPFS_8Rnd_9x19_P38: CA_Magazine
	{
		scope=2;
		displayName="$STR_KPFS_P38_MAG";
		type=16;
		ammo="B_9x19_Ball";
		count=8;
		initSpeed=365;
		picture="\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		descriptionShort="$STR_KPFSS_P38_MAG";
	};
};
class Mode_SemiAuto;
class Far;
class Medium;
class Short;
class cfgWeapons
{
	class M9;
	class KPFS_P38: M9
	{
		scope=2;
		magazines[]=
		{
			"KPFS_8Rnd_9x19_P38"
		};
		model="\kpfs_weapons2\p38\p38.p3d";
		displayName="$STR_KPFS_P38";
		picture="\kpfs_weapons2\data\icons\w_p38_ca.paa";
		modes[]=
		{
			"Single",
			"Far",
			"Medium",
			"Short"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"kpfs_weapons2\sound\Luger_01.wav",
				1.000000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			reloadTime=0.050000;
			autoReload=0;
			canLock=0;
			ffCount=1;
			recoil="recoil_single_pistol_2outof3";
			recoilProne="recoil_single_pistol_prone_2outof3";
			opticsZoomMin=0.320000;
			opticsZoomMax=0.500000;
			dispersion=0.002500;
			aiRateOfFire=0.001000;
			aiRateOfFireDistance=10;
			aiDispersionCoefX=5;
			aiDispersionCoefY=5;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=5;
			midRangeProbab=0.700000;
			maxRange=10;
			maxRangeProbab=0.050000;
		};
		class Far: Single
		{
			begin1[]=
			{
				"kpfs_weapons\sound\Luger_01_distant.wav",
				1.000000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			showToPlayer=0;
			aiRateOfFireDistance=80;
			aiRateOfFire=5;
			minRange=30;
			minRangeProbab=0.100000;
			midRange=50;
			midRangeProbab=0.400000;
			maxRange=80;
			maxRangeProbab=0.010000;
		};
		class Medium: Single
		{
			showToPlayer=0;
			aiRateOfFire=2.500000;
			aiRateOfFireDistance=30;
			minRange=20;
			minRangeProbab=0.200000;
			midRange=25;
			midRangeProbab=0.600000;
			maxRange=30;
			maxRangeProbab=0.050000;
		};
		class Short: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=15;
			minRange=10;
			minRangeProbab=0.300000;
			midRange=15;
			midRangeProbab=0.900000;
			maxRange=20;
			maxRangeProbab=0.100000;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_P38";
		};
		class Armory
		{
			author="$STR_AUTHOR_KPFS";
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={50};
		discreteDistanceInitIndex=0;
	};
	class KPFS_P38k: KPFS_P38
	{
		displayName="$STR_KPFS_P38K";
		model="\kpfs_weapons2\p38\p38k.p3d";
		picture="\kpfs_weapons2\data\icons\w_p38k_ca.paa";
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_P38K";
		};
		class Armory
		{
			author="$STR_AUTHOR_KPFS";
		};
	};
};
