class CfgPatches
{
	class KPFS_Mosin_Nagant_Rifle
	{
		units[]={};
		weapons[]=
		{
			"KPFS_Mosin_Nagant",
			"KPFS_Mosin_Nagant_PU"
		};
		requiredVersion=1.620000;
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
	class KPFS_B_762x54_Ball: BulletBase
	{
		cartridge="FxCartridge_762";
		caliber=0.500000;
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1;
		airLock=0;
		tracerScale=1;
		tracerStartTime=0.075000;
		tracerEndTime=1;
		airFriction=-0.000960;
	};
};

class Far;
class Medium;
class Short;
class Single;
class Mode_SemiAuto;
class Scope;
class Ironsights;
class cfgWeapons
{
	class LeeEnfield;
	class KPFS_Mosin_Nagant: LeeEnfield
	{
		scope=2;
		displayName="$STR_KPFS_MOSIN";
		model="\kpfs_weapons2\mosin\mosin_nagant";
		picture="\kpfs_weapons2\data\icons\w_mosin_ca.paa";
		magazines[]=
		{
			"KPFS_5Rnd_762x54_Mosin",
			"KPFS_5Rnd_762x54_Mosin_hp",
			"KPFS_5Rnd_762x54_Mosin_tracer",
			"KPFS_5Rnd_762x54_Mosin_rubber",
			"KPFS_5Rnd_762x54_Mosin_bt"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"kpfs_weapons2\mosin\mosin_anim.rtm"
		};
		value=1;
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		opticsZoomMin=0.270000;
		opticsZoomMax=0.420000;
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\nagant_rechamber.wav",
			0.010000,
			1,
			20
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
			begin1[]=
			{
				"\kpfs_weapons2\sound\nagant_01.wav",
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
			reloadTime=2;
			ffCount=1;
			recoil="recoil_single_primary_5outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.000250;
			aiRateOfFire=0.001000;
			aiRateOfFireDistance=10;
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
				"\kpfs_weapons2\sound\nagant_01_distant.wav",
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
			aiRateOfFireDistance=500;
			aiRateOfFire=10;
			minRange=300;
			minRangeProbab=0.050000;
			midRange=400;
			midRangeProbab=0.500000;
			maxRange=500;
			maxRangeProbab=0.040000;
		};
		class Medium: Single
		{
			showToPlayer=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=300;
			minRange=100;
			minRangeProbab=0.050000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.040000;
		};
		class Short: Single
		{
			showToPlayer=0;
			aiRateOfFire=1;
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
			libTextDesc="$STR_KPFS_LIB_MOSIN";
		};
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach Scope";
				script = "spawn player_useAttchment;";
				att = "Attachment_SCOPED";
				out = "KPFS_Mosin_Nagant_PU";
			};
		};	
	};
	class KPFS_Mosin_Nagant_PU: KPFS_Mosin_Nagant
	{
		scope=2;
		displayName="$STR_KPFS_MOSIN_PU";
		model="\kpfs_weapons2\mosin\mosin_nagant_pu";
		picture="\kpfs_weapons2\data\icons\w_mosin_pu_ca.paa";
		magazines[]=
		{
			"KPFS_5Rnd_762x54_Mosin",
			"KPFS_5Rnd_762x54_Mosin_hp",
			"KPFS_5Rnd_762x54_Mosin_tracer",
			"KPFS_5Rnd_762x54_Mosin_rubber",
			"KPFS_5Rnd_762x54_Mosin_bt"
		};
		UiPicture="\CA\weapons\data\Ico\i_sniper_CA.paa";
		modelOptics="\kpfs_weapons2\optika_snipere";
		backgroundReload=1;
		value=1000;
		nameSound="SniperRifle";
		aiDispersionCoefY=3;
		aiDispersionCoefX=3;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class Scope
			{
				OpticsID=1;
				UseModelOptics=1;
				MemoryPointCamera="Eye";
				opticsPPEffects[]=
				{
					"OpticsCHAbera3",
					"OpticsBlur3"
				};
				OpticsFlare=1;
				opticsDisablePeripherialVision=1;
				OpticsZoomInit=0.042500;
				opticsZoomMin=0.042500;
				opticsZoomMax=0.042500;
				distanceZoomMin=300;
				distanceZoomMax=300;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=2;
				VisionMode[]=
				{
					"Normal"
				};
				CameraDir="";
			};
			class Ironsights
			{
				OpticsID=2;
				UseModelOptics=0;
				MemoryPointCamera="Eye";
				OpticsPPEffects[]={};
				OpticsFlare=0;
				OpticsDisablePeripherialVision=0;
				OpticsZoomMin=0.250000;
				OpticsZoomMax=1.100000;
				OpticsZoomInit=0.500000;
				DistanceZoomMin=200;
				DistanceZoomMax=200;
				VisionMode[]={};
				CameraDir="";
			};
		};
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Scope";
				script = "spawn player_removeAttchment;";
				att = "Attachment_SCOPED";
				out = "KPFS_Mosin_Nagant";
			};
		};	
	};
};
