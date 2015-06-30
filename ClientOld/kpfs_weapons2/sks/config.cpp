class CfgPatches
{
	class KPFS_SKS
	{
		units[]={};
		weapons[]=
		{
			"KPFS_SKS"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};

class manual;
class close;
class Single;
class FullAuto;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class AK_BASE;
	class KPFS_KarS: AK_BASE
	{
		scope=2;
		model="\kpfs_weapons2\sks\sks";
		picture="\kpfs_weapons2\data\icons\w_sks_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[]=
		{
			"762x39_x1",
			"762x39_SD_x1",
			"762x39_HP_x1",
			"762x39_TRACER_x1",
			"762x39_RUBBER_x1",
			"762x39_BT_x1",
			"KPFS_10Rnd_762x39_SKS",
			"KPFS_10Rnd_762x39_SKS_SD",
			"KPFS_10Rnd_762x39_SKS_hp",
			"KPFS_10Rnd_762x39_SKS_tracer",
			"KPFS_10Rnd_762x39_SKS_rubber",
			"KPFS_10Rnd_762x39_SKS_bt"
		};
		displayName="$STR_KPFS_SKS";
		descriptionShort="<br />Ammo: 7.62x39 mm";
		dexterity=1.570000;
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\svt40_reload.wav",
			0.056234,
			1,
			10
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		modes[]=
		{
			"Single"
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=2;
		class Single: Single
		{
			displayName="";
			begin1[]=
			{
				"\kpfs_weapons2\sound\svt40_01.wav",
				1.778280,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.100000;
			recoil="recoil_single_primary_5outof10";
			recoilProne="recoil_single_primary_prone_5outof10";
			dispersion=0.001800;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=200;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.050000;
			aiRateOfFire=10;
			aiRateOfFireDistance=500;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_SKS";
		};
		class Armory
		{
			author="$STR_AUTHOR_VILAS";
		};
	};
};
