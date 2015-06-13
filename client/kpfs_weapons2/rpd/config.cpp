class CfgPatches
{
	class KPFS_RPD
	{
		units[]={};
		weapons[]=
		{
			"KPFS_RPD"
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
	class RPK_74;
	class KPFS_RPD: RPK_74
	{
		scope=2;
		model="\kpfs_weapons2\rpd\rpd";
		displayName="$STR_KPFS_RPD";
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=2;
		aiDispersionCoefY=14.000000;
		aiDispersionCoefX=14.000000;
		dexterity=1.210000;
		picture="\kpfs_weapons2\data\icons\w_rpd_ca.paa";
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\rpd_reload",
			0.056234,
			1,
			25
		};
		magazines[]=
		{
			"762x39_x1",
			"762x39_SD_x1",
			"762x39_HP_x1",
			"762x39_TRACER_x1",
			"762x39_RUBBER_x1",
			"762x39_BT_x1",
			"KPFS_100Rnd_762x39_RPD",
			"KPFS_100Rnd_762x39_RPD_SD",
			"KPFS_100Rnd_762x39_RPD_hp",
			"KPFS_100Rnd_762x39_RPD_tracer",
			"KPFS_100Rnd_762x39_RPD_rubber",
			"KPFS_100Rnd_762x39_RPD_bt"
		};
		magazineReloadTime=8;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\Data\Anim\AK.rtm"
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		UiPicture="\CA\weapons\data\Ico\i_mg_CA.paa";
		class manual: manual
		{
			begin1[]=
			{
				"\kpfs_weapons2\sound\rpd.wss",
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_machinegun_prone_3outof10";
			dispersion=0.001250;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.300000;
			midRange=5;
			midRangeProbab=0.580000;
			maxRange=10;
			maxRangeProbab=0.040000;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000;
			midRange=20;
			midRangeProbab=0.580000;
			maxRange=50;
			maxRangeProbab=0.040000;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=1.500000;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000;
			midRange=200;
			midRangeProbab=0.580000;
			maxRange=400;
			maxRangeProbab=0.040000;
		};
		class medium: close
		{
			burst=12;
			aiRateOfFire=2.500000;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000;
			midRange=400;
			midRangeProbab=0.580000;
			maxRange=620;
			maxRangeProbab=0.040000;
		};
		class animationsources
		{
			class revolving
			{
				source="revolving";
				weapon="rpd";
			};
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_RPD";
		};
		class Armory
		{
			author="$STR_AUTHOR_VILAS_UPD";
		};
	};
};
