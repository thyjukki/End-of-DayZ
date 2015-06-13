class CfgPatches
{
	class KPFS_BW_US_WEAP
	{
		units[]={};
		weapons[]=
		{
			"KPFS_M1_Garand",
			"KPFS_M1_Garand_M84",
			"KPFS_M1_Carbine",
			"KPFS_M1_Thompson",
			"KPFS_BAR"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E",
			"CAWeapons_E_M14"
		};
	};
};
class cfgRecoils
{
	KPFS_Garandrecoil[]=
	{
		0.002000,
		0.013100,
		"0.0105*		3/4",
		0.020000,
		0.013100,
		"0.0105*		3/4",
		0.040000,
		0.007100,
		"0.0147*		3/4",
		0.090000,
		0.000000,
		0.000000
	};
	KPFS_Garandrecoilprone[]=
	{
		0.000000,
		0.013100,
		"0.0105*		1/4*		3/4",
		0.020000,
		0.013100,
		"0.0105*		1/4*		3/4",
		0.040000,
		0.007100,
		"0.0147*		1/4*		3/4",
		0.190000,
		0.000000,
		0.000000
	};
	KPFS_GarandM84recoil[]={0.030000,0.020000,0.025000,0.070000,0.025000,0.030000,0.650000,0.000000,0.000000};
	KPFS_Carbinerecoil[]=
	{
		0.000000,
		0.010000,
		"0.0133*		3/4",
		0.020000,
		0.010000,
		"0.0133*		3/4",
		0.020000,
		0.006700,
		"0.0152*		3/4",
		0.010000,
		0.000000,
		0.001000
	};
	KPFS_Carbinerecoilprone[]=
	{
		0.000000,
		0.010000,
		"0.0133*		1/4*		3/4",
		0.020000,
		0.010000,
		"0.0133*		1/4*		3/4",
		0.020000,
		0.006700,
		"0.0152*		1/4*		3/4",
		0.160000,
		0.000000,
		0.000000
	};
	KPFS_Thompsonrecoil[]=
	{
		0.000000,
		0.006700,
		"0.0084*		3/4",
		0.020000,
		0.006700,
		"0.0084*		3/4",
		0.025000,
		0.004700,
		"0.0101*		3/4",
		0.050000,
		0.000000,
		0.000000
	};
	KPFS_Thompsonrecoilprone[]=
	{
		0.000000,
		0.006700,
		"0.0084*		1/2*		3/4",
		0.020000,
		0.006700,
		"0.0084*		1/2*		3/4",
		0.025000,
		0.004700,
		"0.0101*		1/2*		3/4",
		0.050000,
		0.000000,
		0.000000
	};
	KPFS_BARrecoil[]=
	{
		0.000000,
		0.008000,
		"0.0027*		3/4",
		0.020000,
		0.008000,
		"0.0027*		3/4",
		0.050000,
		0.004900,
		"0.0046*		3/4",
		0.150000,
		0.000000,
		0.000000
	};
	KPFS_BARrecoilprone[]=
	{
		0.000000,
		0.008000,
		"0.0027*		1/6*		3/4",
		0.020000,
		0.008000,
		"0.0027*		1/6*		3/4",
		0.050000,
		0.004900,
		"0.0046*		1/6*		3/4",
		0.150000,
		0.000000,
		0.000000
	};
	KPFS_BARrecoilbipod[]=
	{
		0.000000,
		0.008000,
		"0.0027*		1/10*		3/4",
		"0.020/2",
		0.008000,
		"0.0027*		1/10*		3/4",
		"0.050/2",
		0.004900,
		"0.0046*		1/10*		3/4",
		"0.150/2",
		0.000000,
		0.000000
	};
	KPFS_BARrecoilAI[]=
	{
		0.000000,
		0.008000,
		"0.0027*		1/3*		3/4",
		"0.020/2",
		0.008000,
		"0.0027*		1/3*		3/4",
		"0.050/2",
		0.004900,
		"0.0046*		1/3*		3/4",
		"0.150/2",
		0.000000,
		0.000000
	};
};
class CfgAmmo
{
	class BulletBase;
	class KPFS_B_762x63_Ball: BulletBase
	{
		cost=0.200000;
		hit="7.1*1.1";
		typicalSpeed=850;
		airFriction=-0.001050;
		caliber=1.000000;
		airLock=1;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=1.000000;
		tracerStartTime="0.081/2";
		tracerEndTime="0.97*1.25";
		visibleFireTime=3;
		deflecting=10;
		muzzleEffect="";
	};
	class KPFS_B_1143x23_Ball: BulletBase
	{
		cost=0.200000;
		hit="7.9*1.1";
		typicalSpeed=280;
		airFriction=-0.001854;
		caliber=0.500000;
		visibleFire=16;
		audibleFire=12;
		cartridge="FxCartridge_Small";
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=1.000000;
		tracerStartTime=0.082000;
		tracerEndTime=0.650000;
		deflecting=10;
		muzzleEffect="";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KPFS_15Rnd_cal30_Carbine: CA_Magazine
	{
		scope=2;
		displayName="$STR_KPFS_15RND_CAL30";
		picture="\kpfs_weapons2\data\icons\m_carbine_ca.paa";
		count=15;
		ammo="KPFS_B_762x63_Ball";
		initSpeed=853;
		descriptionShort="$STR_KPFSS_15RND_CAL30";
	};
	class KPFS_8Rnd_cal30_60_Gar: KPFS_15Rnd_cal30_Carbine
	{
		scope=2;
		displayName="$STR_KPFS_8RND_CAL30_60";
		picture="\kpfs_weapons2\data\icons\m_garand_ca.paa";
		count=8;
		ammo="KPFS_B_762x63_Ball";
		initSpeed=853;
		descriptionShort="$STR_KPFSS_8RND_CAL30_60";
	};
	class KPFS_20Rnd_cal30_60_bar: CA_Magazine
	{
		scope=2;
		displayName="$STR_KPFS_30RND_CAL30_60";
		ammo="KPFS_B_762x63_Ball";
		count=20;
		initSpeed=853;
		picture="\kpfs_weapons2\data\icons\m_bar_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Far;
class Medium;
class Short;
class Scope;
class Ironsights;
class cfgWeapons
{
	class M14_EP1;
	class KPFS_M1_Carbine: M14_EP1
	{
		displayName="$STR_KPFS_CARBINE";
		model="\kpfs_weapons2\us\m1carbine";
		picture="\kpfs_weapons2\data\icons\w_carbine_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		value=1;
		opticsZoomMin=0.270000;
		opticsZoomMax=0.420000;
		distanceZoomMin=50;
		distanceZoomMax=50;
		modes[]=
		{
			"Single"
		};
		magazines[]=
		{
			"30cal_x1",
			"30cal_HP_x1",
			"30cal_RUBBER_x1",
			"30cal_TRACER_x1",
			"30cal_BT_x1",
			"KPFS_15Rnd_cal30_Carbine",
			"KPFS_15Rnd_cal30_Carbine_hp",
			"KPFS_15Rnd_cal30_Carbine_tracer",
			"KPFS_15Rnd_cal30_Carbine_rubber",
			"KPFS_15Rnd_cal30_Carbine_bt"
		};
		reloadTime=2;
		backgroundReload=1;
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\m1carbine_reload.wav",
			0.050000,
			1
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\kpfs_weapons2\sound\M1Carbine_01.wav",
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
			reloadTime=0.100000;
			ffCount=1;
			recoil="KPFS_Carbinerecoil";
			recoilProne="KPFS_Carbinerecoilprone";
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
				"\kpfs_weapons2\sound\M1Carbine_01_distant.wav",
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
			minRange=150;
			minRangeProbab=0.050000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=250;
			maxRangeProbab=0.040000;
		};
		class Medium: Single
		{
			showToPlayer=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000;
			midRange=100;
			midRangeProbab=0.500000;
			maxRange=150;
			maxRangeProbab=0.040000;
		};
		class Short: Single
		{
			showToPlayer=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=5;
			minRangeProbab=0.050000;
			midRange=25;
			midRangeProbab=0.500000;
			maxRange=50;
			maxRangeProbab=0.040000;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_CARBINE";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		discreteDistance[]={100,200,300};
		discreteDistanceInitIndex=1;
	};
	class KPFS_M1_Garand: M14_EP1
	{
		displayName="$STR_KPFS_GARAND";
		model="\kpfs_weapons2\us\garand";
		picture="\kpfs_weapons2\data\icons\w_garand_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		value=1;
		opticsZoomMin=0.270000;
		opticsZoomMax=0.420000;
		magazines[]=
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"KPFS_8Rnd_cal30_60_Gar",
			"KPFS_8Rnd_cal30_60_GarSD",
			"KPFS_8Rnd_cal30_60_Gar_hp",
			"KPFS_8Rnd_cal30_60_Gar_tracer",
			"KPFS_8Rnd_cal30_60_Gar_rubber",
			"KPFS_8Rnd_cal30_60_Gar_bt"
		};
		reloadTime=2;
		backgroundReload=1;
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\m1garand_reload.wav",
			0.050000,
			1
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
				"\kpfs_weapons2\sound\M1Garand_01.wav",
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
			reloadTime=0.100000;
			ffCount=1;
			recoil="KPFS_Garandrecoil";
			recoilProne="KPFS_Garandrecoilprone";
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
				"\kpfs_weapons2\sound\M1Garand_01_distant.wav",
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
			libTextDesc="$STR_KPFS_LIB_GARAND";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=1;
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach Scope";
				script = "spawn player_useAttchment;";
				att = "Attachment_SCOPED";
				out = "KPFS_M1_Garand_M84";
			};
		};	
	};
	class KPFS_M1_Garand_M84: KPFS_M1_Garand
	{
		displayName="$STR_KPFS_GARAND_M84";
		model="\kpfs_weapons2\us\garand_m84";
		picture="\kpfs_weapons2\data\icons\w_garand_m84_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_sniper_CA.paa";
		dexterity=1.350000;
		modelOptics="\kpfs_weapons2\optika_sniperw";
		modes[]=
		{
			"Single"
		};
		magazines[]=
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"KPFS_8Rnd_cal30_60_Gar",
			"KPFS_8Rnd_cal30_60_GarSD",
			"KPFS_8Rnd_cal30_60_Gar_hp",
			"KPFS_8Rnd_cal30_60_Gar_tracer",
			"KPFS_8Rnd_cal30_60_Gar_rubber",
			"KPFS_8Rnd_cal30_60_Gar_bt"
		};
		reloadTime=2;
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
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_GARAND_M84";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		class ItemActions
		{
			class UseAtt
			{
				isAttachment = 1;
				text = "Detach Scope";
				script = "spawn player_removeAttchment;";
				att = "Attachment_SCOPED";
				out = "KPFS_M1_Garand";
			};
		};	
	};
	class AK_47_M;
	class KPFS_M1_Thompson: AK_47_M
	{
		scope=2;
		displayName="$STR_KPFS_THOMPSON";
		model="\kpfs_weapons2\us\thompson";
		picture="\kpfs_weapons2\data\icons\w_thompson_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		value=1;
		opticsZoomMin=0.320000;
		opticsZoomMax=0.500000;
		distanceZoomMin=50;
		distanceZoomMax=50;
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"KPFS_30Rnd_45ACP_Thompson",
			"KPFS_30Rnd_45ACP_Thompson_hp",
			"KPFS_30Rnd_45ACP_Thompson_tracer",
			"KPFS_30Rnd_45ACP_Thompson_rubber",
			"KPFS_30Rnd_45ACP_Thompson_bt"
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
				"\kpfs_weapons2\sound\thompson.wss",
				1.258925,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			reloadTime=0.085000;
			autoReload=0;
			ffCount=1;
			recoil="KPFS_Thompsonrecoil";
			recoilProne="KPFS_Thompsonrecoilprone";
			dispersion=0.009000;
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
		class Far: Full
		{
			begin1[]=
			{
				"\kpfs_weapons2\sound\thompson_01_distant.wav",
				1.258925,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			autoFire=0;
			showToPlayer=0;
			aiRateOfFireDistance=200;
			aiRateOfFire=10;
			minRange=150;
			minRangeProbab=0.050000;
			midRange=175;
			midRangeProbab=0.500000;
			maxRange=200;
			maxRangeProbab=0.040000;
		};
		class Medium: Full
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
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000;
			midRange=50;
			midRangeProbab=0.500000;
			maxRange=100;
			maxRangeProbab=0.040000;
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_THOMPSON";
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
	};
	class KPFS_BAR: AK_47_M
	{
		displayName="$STR_KPFS_BAR";
		model="\kpfs_weapons2\us\bar";
		picture="\kpfs_weapons2\data\icons\w_bar_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		value=1;
		dexterity=0.350000;
		opticsZoomMin=0.270000;
		opticsZoomMax=0.420000;
		magazines[]=
		{
			"KPFS_20Rnd_cal30_60_bar"
		};
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\bar_reload.wav",
			0.050000,
			1
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
				"\kpfs_weapons2\sound\BAR_01.wav",
				1.258925,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			reloadTime=0.110000;
			ffCount=1;
			recoil="KPFS_BARrecoil";
			recoilProne="KPFS_BARrecoilProne";
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
			begin1[]=
			{
				"\kpfs_weapons2\sound\bar_01_distant.wav",
				1.258925,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
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
			libTextDesc="$STR_KPFS_LIB_BAR";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=3;
	};
};
