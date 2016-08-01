class CfgPatches
{
	class DGR_M24_A2
	{
		units[]={};
		weapons[]=
		{
			"DGR_M24",
			"DGR_M24SD",
			"DGR_M24_TWS",
			"DGR_M24SD_TWS",
			"DGR_M24NV",
			"DGR_M24SDNV"
		};
		requiredVersion=1.620000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons2",
			"CAWeapons_E",
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class DGR_M24_A2
		{
			list[]=
			{
				"DGR_M24_A2"
			};
		};
	};
};
class CfgWeapons
{
	class M24;
	class DGR_M24: M24
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "DGR_M24SD";
			};
		};
		scope=2;
		dexterity=1;
		ACE_bipod=1;
		magazines[]=
		{
			"762x51_X1",
			"762x51_SD_X1",
			"762x51_HP_X1",
			"762x51_RUBBER_X1",
			"762x51_TRACER_X1",
			"762x51_BT_X1",
			"5Rnd_762x51_M24",
			"5Rnd_762x51_M24SD",
			"5Rnd_762x51_M24_hp",
			"5Rnd_762x51_M24_tracer",
			"5Rnd_762x51_M24_rubber",
			"5Rnd_762x51_M24_bt"
		};
		displayname="M24 3.5-10x Mil-Line";
		dispersion=0.000200;
		UiPicture="\CA\weapons\data\Ico\i_sniper_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		model="\DGR_M24_A2\DGR_M24.p3d";
		picture="\DGR_M24_A2\Pics\DGR_M24.paa";
		aiRateOfFire=10;
		aiRateOfFireDistance=2000;
		aiDispersionCoefX=0;
		aiDispersionCoefY=0;
		minRange=1;
		minRangeProbab=0.990000;
		midRange=900;
		midRangeProbab=0.990000;
		maxRange=1500;
		maxRangeProbab=0.990000;
		weaponInfoType="RscWeaponZeroing";
		begin1[]=
		{
			"\DGR_M24A2_A2\Sounds\M24A2.ogg",
			1.000000,
			1,
			300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		soundContinuous=0;
		reloadMagazineSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Magazine.ogg",
			1.778279,
			1
		};
		reloadSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Bolt.ogg",
			0.002000,
			1
		};
		reloadTime=2;
		backgroundReload=1;
		modelOptics="\UKF_L115A3\scope\P3L-Fine_mildot.p3d";
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.0249;
				opticsZoomMax = 0.0249;
				opticsZoomInit = 0.0249;
				memoryPointCamera = "Konec hlavne";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
				visionMode[] = {"Normal"};
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
			};
			class Kolimator
			{
				visionMode[]={};
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.700000;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
				discreteInitIndex=0;
				discretefov[]={};
				optics=1;
				modelOptics="-";
			};
		};
	};
	class DGR_M24SD: DGR_M24
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "DGR_M24";
			};
		};
		scope=2;
		dexterity=1;
		ACE_bipod=1;
		displayname="M24 3.5-10x Mil-Line SD";
		model="\DGR_M24_A2\DGR_M24SD.p3d";
		picture="\DGR_M24_A2\Pics\DGR_M24SD.paa";
		ace_suppressed=1;
		fireLightDuration=0;
		fireLightIntensity=0;
		begin1[]=
		{
			"\DGR_M24_A2\Sounds\M24_SD.ogg",
			1.000000,
			1,
			300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		soundContinuous=0;
		reloadMagazineSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Magazine.ogg",
			1.778279,
			1
		};
		reloadSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Bolt.ogg",
			0.002000,
			1
		};
		reloadTime=2;
		backgroundReload=1;
	};
	class DGR_M24_TWS: DGR_M24
	{
		scope=2;
		dexterity=1;
		ACE_bipod=1;
		displayname="M24 AN/PAS-13";
		model="\DGR_M24_A2\DGR_M24_TWS.p3d";
		picture="\DGR_M24_A2\Pics\DGR_M24_TWS.paa";
		begin1[]=
		{
			"\DGR_M24_A2\Sounds\M24.ogg",
			1.000000,
			1,
			300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		soundContinuous=0;
		reloadMagazineSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Magazine.ogg",
			1.778279,
			1
		};
		reloadSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Bolt.ogg",
			0.002000,
			1
		};
		reloadTime=2;
		backgroundReload=1;
		ace_sa_enabled=1;
		ace_sa_adj_mode="angle";
		ace_sa_elev_unit="mil";
		ace_sa_wind_unit="mil";
		ace_sa_stepelevation=0.100000;
		ace_sa_stepwindage=0.100000;
		ace_sa_minelevation=-10;
		ace_sa_maxelevation=20;
		ace_sa_windage=10;
		ace_sa_minrange=1;
		ace_sa_maxrange=3000;
		ace_sa_range_unit="meters";
		ace_sa_defaultrange=0;
		ace_sa_defaultelevation=0;
		ace_sa_zerooffset=0;
		ace_sa_zeroelev=0;
		ace_sa_defaultwindage=0;
		modelOptics="\DGR_Scopes\reticles\Dagger_10x_HTWS_M24.p3d";
		class OpticsModes
		{
			class Stepscope
			{
				visionMode[]=
				{
					"Ti"
				};
				thermalMode[]={0,1};
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.018690;
				opticsZoomMax=0.056640;
				opticsZoomInit=0.018690;
				memoryPointCamera="luneta";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				weaponInfoType="RscWeaponEmpty";
				discreteDistance[]={345};
				discreteDistanceInitIndex=0;
				distanceZoomMin=1;
				distanceZoomMax=1;
				discretefov[]={0.056640,0.018690};
				discreteInitIndex=0;
			};
			class Kolimator
			{
				visionMode[]={};
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.700000;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
				discreteInitIndex=0;
				discretefov[]={};
				optics=1;
				modelOptics="-";
			};
		};
	};
	class DGR_M24SD_TWS: DGR_M24_TWS
	{
		scope=2;
		dexterity=1;
		ACE_bipod=1;
		displayname="M24 AN/PAS-13 SD";
		model="\DGR_M24_A2\DGR_M24SD_TWS.p3d";
		picture="\DGR_M24_A2\Pics\DGR_M24SD_TWS.paa";
		ace_suppressed=1;
		fireLightDuration=0;
		fireLightIntensity=0;
		begin1[]=
		{
			"\DGR_M24_A2\Sounds\M24_SD.ogg",
			1.000000,
			1,
			300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		soundContinuous=0;
		reloadMagazineSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Magazine.ogg",
			1.778279,
			1
		};
		reloadSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Bolt.ogg",
			0.002000,
			1
		};
		reloadTime=2;
		backgroundReload=1;
	};
	class DGR_M24NV: DGR_M24
	{
		scope=2;
		dexterity=1;
		ACE_bipod=1;
		displayname="M24 AN/PVS-10";
		model="\DGR_M24_A2\DGR_M24NV.p3d";
		picture="\DGR_M24_A2\Pics\DGR_M24NV.paa";
		begin1[]=
		{
			"\DGR_M24_A2\Sounds\M24.ogg",
			1.000000,
			1,
			300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		soundContinuous=0;
		reloadMagazineSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Magazine.ogg",
			1.778279,
			1
		};
		reloadSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Bolt.ogg",
			0.002000,
			1
		};
		reloadTime=2;
		backgroundReload=1;
		ace_sa_enabled=1;
		ace_sa_adj_mode="angle";
		ace_sa_elev_unit="moa";
		ace_sa_wind_unit="moa";
		ace_sa_stepelevation=0.500000;
		ace_sa_stepwindage=0.500000;
		ace_sa_minelevation=-10;
		ace_sa_maxelevation=65;
		ace_sa_windage=65;
		ace_sa_minrange=10;
		ace_sa_maxrange=3000;
		ace_sa_range_unit="meters";
		ace_sa_defaultrange=0;
		ace_sa_defaultelevation=0;
		ace_sa_zerooffset=0;
		ace_sa_zeroelev=0;
		ace_sa_defaultwindage=0;
		modelOptics="\DGR_Scopes\reticles\Dagger_8x_Mil_Line_NV.p3d";
		class OpticsModes
		{
			class StepScope
			{
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.023360;
				opticsZoomMax=0.053400;
				opticsZoomInit=0.023360;
				distanceZoomMin=1;
				distanceZoomMax=3000;
				memoryPointCamera="luneta";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				weaponInfoType="RscWeaponEmpty";
				discreteInitIndex=0;
				discreteDistance[]={345};
				discreteDistanceInitIndex=0;
				discretefov[]={0.053400,0.023360};
			};
			class Kolimator
			{
				visionMode[]={};
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.700000;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
				discreteInitIndex=0;
				discretefov[]={};
				optics=1;
				modelOptics="-";
			};
		};
	};
	class DGR_M24SDNV: DGR_M24NV
	{
		scope=2;
		dexterity=1;
		ACE_bipod=1;
		displayname="M24 AN/PVS-10 SD";
		model="\DGR_M24_A2\DGR_M24SDNV.p3d";
		picture="\DGR_M24_A2\Pics\DGR_M24SDNV.paa";
		ace_suppressed=1;
		fireLightDuration=0;
		fireLightIntensity=0;
		begin1[]=
		{
			"\DGR_M24_A2\Sounds\M24_SD.ogg",
			1.000000,
			1,
			300
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		soundContinuous=0;
		reloadMagazineSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Magazine.ogg",
			1.778279,
			1
		};
		reloadSound[]=
		{
			"\DGR_M24_A2\Sounds\M24_Bolt.ogg",
			0.002000,
			1
		};
		reloadTime=2;
		backgroundReload=1;
	};
};
