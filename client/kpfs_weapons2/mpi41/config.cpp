class CfgPatches
{
	class KPFS_PPSH
	{
		units[]={};
		weapons[]=
		{
			"KPFS_PPSH"
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
	class KPFS_B_762x25_Ball: BulletBase
	{
		hit=7;
		typicalSpeed=490;
		airFriction=-0.001513;
		caliber=0.330000;
		cartridge="FxCartridge_Small_2";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1;
	};
};

class Mode_FullAuto;
class Far;
class Medium;
class Short;
class cfgWeapons
{
	class AK_BASE;
	class KPFS_PPSh: AK_BASE
	{
		scope=2;
		displayName="$STR_KPFS_PPSH";
		model="\kpfs_weapons2\mpi41\ppsh.p3d";
		picture="\kpfs_weapons2\data\icons\w_ppsh_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		value=1;
		optics=1;
		opticsZoomMin=0.270000;
		opticsZoomMax=0.420000;
		distanceZoomMin=50;
		distanceZoomMax=50;
		magazines[]=
		{
			"KPFS_71Rnd_762x25_PPSh",
			"KPFS_71Rnd_762x25_PPSh_hp",
			"KPFS_71Rnd_762x25_PPSh_tracer",
			"KPFS_71Rnd_762x25_PPSh_rubber",
			"KPFS_71Rnd_762x25_PPSh_bt"
		};
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\ppsh_reload.wav",
			0.005623,
			1
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		modes[]=
		{
			"FullAuto",
			"Far",
			"Medium",
			"Short"
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\kpfs_weapons2\sound\ppsh.wav",
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
			reloadTime=0.070000;
			autoReload=0;
			canLock=0;
			ffCount=1;
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_prone_2outof10";
			dispersion=0.004500;
			aiRateOfFire=0.001000;
			aiRateOfFireDistance=10;
			aiDispersionCoefX=10;
			aiDispersionCoefY=10;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=5;
			midRangeProbab=0.700000;
			maxRange=10;
			maxRangeProbab=0.050000;
		};
		class Far: FullAuto
		{
			displayName="$STR_DN_MODE_SEMIAUTO";
			showToPlayer=1;
			autoFire=0;
			aiRateOfFireDistance=300;
			aiRateOfFire=10;
			minRange=150;
			minRangeProbab=0.050000;
			midRange=250;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.040000;
		};
		class Medium: FullAuto
		{
			showToPlayer=0;
			ffCount=3;
			burst=3;
			autoFire=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=100;
			minRange=100;
			minRangeProbab=0.050000;
			midRange=125;
			midRangeProbab=0.500000;
			maxRange=150;
			maxRangeProbab=0.040000;
		};
		class Short: Medium
		{
			showToPlayer=0;
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
			libTextDesc="$STR_KPFSS_PPSH";
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
	};
};
