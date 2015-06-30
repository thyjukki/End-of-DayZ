class CfgPatches
{
	class KPFS_TT33
	{
		units[]={};
		weapons[]=
		{
			"KPFS_TT33"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class KPFS_762x25_Ball: BulletBase
	{
		cartridge="FxCartridge_Small";
		hit=8;
		cost=5;
		typicalspeed=410;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KPFS_8Rnd_762x25_TT33: CA_Magazine
	{
		scope=2;
		type=16;
		ammo="KPFS_762x25_Ball";
		count=8;
		initSpeed=420;
		picture="\kpfs_weapons2\data\icons\m_tt33_ca.paa";
		displayName="$STR_KPFS_TT33_MAG";
		descriptionShort="$STR_KPFSS_TT33_MAG";
	};
};
class Mode_SemiAuto;
class Far;
class Medium;
class Short;
class cfgWeapons
{
	class Makarov;
	class KPFS_TT33: Makarov
	{
		scope=2;
		model="\kpfs_weapons2\tt33\tt33";
		picture="\kpfs_weapons2\data\icons\w_tt33_ca.paa";
		displayName="$STR_KPFS_TT33";
		dispersion=0.015000;
		magazines[]=
		{
			"KPFS_8Rnd_762x25_TT33"
		};
		modes[]=
		{
			"Single",
			"Far",
			"Medium",
			"Short"
		};
		class Single: Mode_SemiAuto
		{
			displayName="$STR_KPFS_TT33";
			begin1[]=
			{
				"kpfs_weapons2\sound\tt33_01.wav",
				1.000000,
				1,
				"1000"""
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.100000;
		};
		class Far: Single
		{
			begin1[]=
			{
				"kpfs_weapons2\sound\tt33_01_distant.wav",
				1.000000,
				1,
				"1000"""
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
			minRangeProbab=0.050000;
			midRange=50;
			midRangeProbab=0.500000;
			maxRange=80;
			maxRangeProbab=0.040000;
		};
		class Medium: Single
		{
			showToPlayer=0;
			aiRateOfFire=2.500000;
			aiRateOfFireDistance=30;
			minRange=20;
			minRangeProbab=0.050000;
			midRange=25;
			midRangeProbab=0.500000;
			maxRange=30;
			maxRangeProbab=0.040000;
		};
		class Short: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=15;
			minRange=10;
			minRangeProbab=0.050000;
			midRange=15;
			midRangeProbab=0.500000;
			maxRange=20;
			maxRangeProbab=0.040000;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_TT33";
		};
		class Armory
		{
			author="$STR_AUTHOR_KPFS_UPD";
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={50};
		discreteDistanceInitIndex=0;
	};
};
