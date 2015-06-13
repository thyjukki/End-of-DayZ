class CfgPatches
{
	class KPFS_MG1
	{
		units[]={};
		weapons[]=
		{
			"KPFS_MG1"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E",
			"CAWeapons_E_fnfal",
			"CAWeapons_Colt1911"
		};
	};
};
class OpticsModes;
class IronSights;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgRecoils
{
	KPFS_MG42recoil[]=
	{
		0.000000,
		0.006400,
		"0.0021*		4*		3/4",
		0.020000,
		0.006400,
		"0.0021*		4*		3/4",
		0.070000,
		0.004000,
		"0.0044*		4*		3/4",
		0.210000,
		0.000000,
		0.000000
	};
	KPFS_MG42recoilbipod[]=
	{
		0.000000,
		0.006400,
		"0.0021*		1/10*		3/4",
		"0.020/2",
		0.006400,
		"0.0021*		1/10*		3/4",
		"0.070/2",
		0.004000,
		"0.0044*		1/10*		3/4",
		"0.210/2",
		0.000000,
		0.000000
	};
	KPFS_MG42recoilAI[]=
	{
		0.000000,
		0.006400,
		"0.0021*		1/3*		3/4",
		"0.020/2",
		0.006400,
		"0.0021*		1/3*		3/4",
		"0.070/2",
		0.004000,
		"0.0044*		1/3*		3/4",
		"0.210/2",
		0.000000,
		0.000000
	};
};
class CfgAmmo
{
	class B_762x51_Ball;
	class KPFS_B_792x57_Ball: B_762x51_Ball
	{
		hit="7.8*1.1";
		typicalSpeed=755;
		airFriction=-0.000800;
		caliber=1.100000;
		airLock=1;
		tracerScale=1.000000;
		tracerStartTime="0.10/2";
		tracerEndTime="1.19*1.25";
	};
};

class CfgWeapons
{
	class M240;
	class KPFS_MG42: M240
	{
		scope=2;
		displayName="$STR_KPFS_MG1";
		model="\kpfs_weapons2\mg42\mg42.p3d";
		picture="\kpfs_weapons2\data\icons\w_mg1_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_mg_CA.paa";
		cursor="MGCursor";
		cursoraim="\ca\Weapons\Data\w_lock";
		magazines[]=
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"KPFS_250Rnd_MG42",
			"KPFS_250Rnd_MG42SD",
			"KPFS_250Rnd_MG42_hp",
			"KPFS_250Rnd_MG42_tracer",
			"KPFS_250Rnd_MG42_rubber",
			"KPFS_250Rnd_MG42_bt"
		};
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\mgunreload.wav",
			0.005000,
			1
		};
		modes[]=
		{
			"manual",
			"close",
			"medium",
			"far"
		};
		class animationsources
		{
			class revolving
			{
				source="revolving";
				weapon="mg42";
			};
		};
		class manual: Mode_FullAuto
		{
			sound[]=
			{
				"\kpfs_weapons2\sound\mg42.wav",
				10,
				1
			};
			soundBurst=0;
			recoil="KPFS_MG42recoil";
			recoilProne="KPFS_MG42recoilbipod";
			reloadTime="1/(1200 / 60)";
			dispersion="0.35/100";
			minRangeProbab=0.000000;
			midRangeProbab=0.000000;
			maxRangeProbab=0.000000;
		};
		class close: manual
		{
			showToPlayer=0;
			burst=3;
			sound[]=
			{
				"\kpfs_weapons2\sound\mg42_b3.wav",
				10,
				1
			};
			soundBurst=1;
			reloadTime="1/(1200 / 60)";
			recoil="KPFS_MG42recoilAI";
			recoilProne="KPFS_MG42recoilbipod";
			dispersion="0.35/100";
			aiRateOfFire="1.0/2";
			aiRateOfFireDistance=300;
			minRange=0.100000;
			minRangeProbab=0.100000;
			midRange=100;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.040000;
		};
		class medium: close
		{
			burst=5;
			sound[]=
			{
				"\kpfs_weapons2\sound\mg42_b5.wav",
				10,
				1
			};
			soundBurst=1;
			aiRateOfFire="1.5/2";
			aiRateOfFireDistance=600;
			minRange=300;
			minRangeProbab=0.100000;
			midRange=450;
			midRangeProbab=0.500000;
			maxRange=600;
			maxRangeProbab=0.040000;
		};
		class far: close
		{
			burst=10;
			aiRateOfFire="2.0/2";
			aiRateOfFireDistance=1000;
			minRange=600;
			minRangeProbab=0.100000;
			midRange=800;
			midRangeProbab=0.500000;
			maxRange=1000;
			maxRangeProbab=0.040000;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_MG1";
		};
		class Armory
		{
			author="$STR_AUTHOR_KPFS_UPD";
		};
	};
};
