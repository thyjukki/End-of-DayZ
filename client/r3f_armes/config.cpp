class Mode_SemiAuto
{
};
class Mode_Burst: Mode_SemiAuto
{
};
class Mode_FullAuto: Mode_SemiAuto
{
};
class CfgPatches
{
	class r3f_armes
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.590000;
		requiredAddons[]=
		{
			"CaWeapons"
		};
		version="1.2";
		author="Team R3F";
		mail="nanucq@yahoo.fr";
	};
};
class CfgAmmo
{
	class Default;
	class BulletBase;
	class Rocketbase;
	class ThingEffect;
	class FxCartridge: ThingEffect
	{
		model="\ca\weapons_E\nabojnice";
		htMin=30;
		htMax=60;
		afMax=90;
		mfMax=90;
		mFact=1;
		tBody=100;
	};
	class FxCartridge_762: FxCartridge
	{
		model="\ca\weapons\nabojnice_762";
	};
	class FxCartridge_127: FxCartridge
	{
		model="\ca\weapons\nabojnice_127";
	};
	class R3F_762x51_Ball: BulletBase
	{
		hit=15;
		typicalSpeed=820;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.200000;
		airFriction=-0.000867;
		caliber=0.900000;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=1.200000;
		tracerStartTime=0.065000;
		tracerEndTime=1;
		nvgOnly=1;
	};
	class R3F_762x51_Ball_SD: R3F_762x51_Ball
	{
		hit=12;
		typicalSpeed=480;
		visibleFire=0.160000;
		audibleFire=0.160000;
		tracerStartTime=-1;
	};
	class R3F_762x51_Minimi_Ball: R3F_762x51_Ball
	{
		hit=15;
		airFriction=-0.002000;
		caliber=1;
		tracerEndTime=2;
		nvgOnly=0;
	};
	class R3F_127x99_Ball: BulletBase
	{
		hit=32;
		typicalSpeed=780;
		indirectHit=4;
		indirectHitRange=0.010000;
		cartridge="FxCartridge_127";
		visibleFire=22;
		audibleFire=22;
		visibleFireTime=3;
		cost=20;
		airFriction=-0.000600;
		caliber=2.200000;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=1.200000;
		tracerStartTime=0.065000;
		tracerEndTime=1;
		nvgOnly=1;
		muzzleEffect="BIS_Effects_HeavySniper";
	};
	class R3F_127x99_PEI: R3F_127x99_Ball
	{
		hit=100;
		indirectHit=10;
		indirectHitRange=0.200000;
		cost=20;
		explosive=0.100000;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		caliber=11;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=1.200000;
		tracerStartTime=0.065000;
		tracerEndTime=3.500000;
		nvgOnly=1;
		muzzleEffect="BIS_Effects_HeavyCaliber";
	};
	class R3F_AT4CS_AT: Rocketbase
	{
		hit=700;
		indirectHit=40;
		indirectHitRange=4;
		model="\r3f_armes\roquette_AT4CS.p3d";
		cost=2000;
		maxSpeed=290;
		thrustTime=0.200000;
		thrust=0.100000;
		sideAirFriction=0.800000;
		timeToLive=10;
		visibleFire=24;
		audibleFire=16;
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class R3F_10Rnd_762x51_FRF2: CA_Magazine
	{
		scope=2;
		displayName="$STR_R3F_10Rnd_762x51_FRF2";
		count=10;
		initSpeed=820;
		tracersEvery=0;
		ammo="R3F_762x51_Ball";
		picture="\r3f_armes\Data\Icons\R3F_Munitions_FRF2.paa";
		model="\r3f_armes\chargeur_FRF2.p3d";
		descriptionShort="$STR_R3F_10Rnd_762x51_FRF2_DESC";
		weight=0.400000;
		class Library
		{
			libTextDesc="$STR_R3F_10Rnd_762x51_FRF2_LIB";
		};
	};
	class R3F_10Rnd_762x51_SD_FRF2: R3F_10Rnd_762x51_FRF2
	{
		scope=2;
		displayName="$STR_R3F_10Rnd_762x51_SD_FRF2";
		initSpeed=480;
		ammo="R3F_762x51_Ball_SD";
		picture="\r3f_armes\Data\Icons\R3F_Munitions_FRF2_SD.paa";
		descriptionShort="$STR_R3F_10Rnd_762x51_SD_FRF2_DESC";
		class Library
		{
			libTextDesc="$STR_R3F_10Rnd_762x51_SD_FRF2_LIB";
		};
	};
	class R3F_20Rnd_762x51_HK417: CA_Magazine
	{
		scope=2;
		displayName="$STR_R3F_20Rnd_762x51_HK417";
		count=20;
		initSpeed=820;
		tracersEvery=0;
		ammo="R3F_762x51_Ball";
		picture="\r3f_armes\Data\Icons\R3F_Munitions_hk417.paa";
		model="\r3f_armes\chargeur_hk417.p3d";
		descriptionShort="$STR_R3F_20Rnd_762x51_HK417_DESC";
		weight=0.700000;
		class Library
		{
			libTextDesc="$STR_R3F_20Rnd_762x51_HK417_LIB";
		};
	};
	class R3F_20Rnd_762x51_TRACER_HK417: R3F_20Rnd_762x51_HK417
	{
		scope=2;
		displayName="$STR_R3F_20Rnd_762x51_TRACER_HK417";
		tracersEvery=1;
		picture="\r3f_armes\Data\Icons\R3F_Munitions_hk417_tracer.paa";
		descriptionShort="$STR_R3F_20Rnd_762x51_TRACER_HK417_DESC";
		class Library
		{
			libTextDesc="$STR_R3F_20Rnd_762x51_TRACER_HK417_LIB";
		};
	};
	class R3F_20Rnd_762x51_SD_HK417: R3F_20Rnd_762x51_HK417
	{
		scope=2;
		displayName="$STR_R3F_20Rnd_762x51_SD_HK417";
		initSpeed=480;
		ammo="R3F_762x51_Ball_SD";
		picture="\r3f_armes\Data\Icons\R3F_Munitions_hk417_SD.paa";
		descriptionShort="$STR_R3F_20Rnd_762x51_SD_HK417_DESC";
		class Library
		{
			libTextDesc="$STR_R3F_20Rnd_762x51_SD_HK417_LIB";
		};
	};
	class R3F_7Rnd_127x99_PGM: CA_Magazine
	{
		scope=2;
		displayName="$STR_R3F_7Rnd_127x99_PGM";
		count=7;
		initSpeed=780;
		tracersEvery=0;
		type="2 * 		256";
		ammo="R3F_127x99_Ball";
		picture="\r3f_armes\Data\Icons\R3F_Munitions_PGM.paa";
		model="\r3f_armes\chargeur_PGM_Hecate_II.p3d";
		descriptionShort="$STR_R3F_7Rnd_127x99_PGM_DESC";
		weight=1.300000;
		class Library
		{
			libTextDesc="$STR_R3F_7Rnd_127x99_PGM_LIB";
		};
	};
	class R3F_7Rnd_127x99_PEI_PGM: R3F_7Rnd_127x99_PGM
	{
		scope=2;
		displayName="$STR_R3F_7Rnd_127x99_PEI_PGM";
		initSpeed=780;
		tracersEvery=1;
		ammo="R3F_127x99_PEI";
		picture="\r3f_armes\Data\Icons\R3F_Munitions_PGM_PEI.paa";
		descriptionShort="$STR_R3F_7Rnd_127x99_PEI_PGM_DESC";
		weight=1.400000;
		class Library
		{
			libTextDesc="$STR_R3F_7Rnd_127x99_PEI_PGM_LIB";
		};
	};
	class R3F_AT4CS_Mag: CA_LauncherMagazine
	{
		scope=2;
		displayName="$STR_R3F_AT4CS_Mag";
		initSpeed=260;
		reloadAction="ManActReloadAT";
		ammo="R3F_AT4CS_AT";
		type="4 * 		256";
		picture="\r3f_armes\Data\Icons\R3F_roquetteAT4CS.paa";
		model="\r3f_armes\roquette_AT4CS.p3d";
		descriptionShort="$STR_R3F_AT4CS_Mag_DESC";
		weight=7.600000;
		class Library
		{
			libTextDesc="$STR_R3F_AT4CS_Mag_LIB";
		};
	};
};
class CfgWeapons
{
	class Default;
	class Rifle;
	class Launcher;
	class M136;
	class M249;
	class M240;
	class GrenadeLauncher;
	class Laserdesignator;
	class ItemGPS;
	
	class R3F_Famas_F1_SUB: Rifle
	{
		scope=2;
		displayName="$STR_R3F_Famas_F1";
		descriptionShort="$STR_R3F_Famas_F1_DESC";
		model="\r3f_armes\famas_F1.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas.rtm"
		};
		optics=1;
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		drySound[]=
		{
			"\r3f_armes\sons\Dry.wss",
			0.010000,
			1
		};
		reloadMagazineSound[]=
		{
			"\r3f_armes\sons\Famas_Reload.wss",
			0.056250,
			1,
			20
		};
		dexterity=1.600000;
		value=1000;
		magazines[]=
		{
			"556x45_x1",
			"556x45_SD_x1",
			"556x45_HP_x1",
			"556x45_TRACER_x1",
			"556x45_RUBBER_x1",
			"556x45_BT_x1",
			"R3F_25Rnd_556x45_FAMAS",
			"R3F_25Rnd_556x45_FAMASSD",
			"R3F_25Rnd_556x45_FAMAS_hp",
			"R3F_25Rnd_556x45_FAMAS_tracer",
			"R3F_25Rnd_556x45_FAMAS_rubber",
			"R3F_25Rnd_556x45_FAMAS_bt"
		};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\sons\famas.wss",
				1.000000,
				1.100000,
				1000
			};
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.100000,
				1000
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=300;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.100000,
				1000
			};
			soundContinuous=0;
			reloadTime=0.060000;
			ffCount=30;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class Lance_Grenades: GrenadeLauncher
		{
			displayName="Lance Grenade M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeYellow_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203"
			};
			begin1[]=
			{
				"\r3f_armes\Sons\gr_launcher_3.wss",
				1,
				1,
				200
			};
			begin2[]=
			{
				"\r3f_armes\Sons\gr_launcher_4.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				0.500000,
				"begin2",
				0.500000
			};
			reloadMagazineSound[]=
			{
				"\r3f_armes\Sons\gr_launcher_reload",
				1,
				1,
				30
			};
			drySound[]=
			{
				"\r3f_armes\Sons\gr_launcher_dry",
				1.122020,
				1,
				40
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			optics="true";
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
		class FlashLight
		{
			color[]={0.600000,0.900000,0.900000,0.900000};
			ambient[]={0.100000,0.100000,0.100000,1};
			position="flash dir";
			direction="flash";
			angle=30;
			scale[]={0.500000,0.500000,0.200000};
			brightness=0.300000;
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		aiRateOfFire=1;
		aiRateOfFireDistance=700;
		weight=3.800000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_LIB";
		};
	};
	class R3F_Famas_F1: Rifle
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "R3F_Famas_F1_AIM";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "R3F_Famas_F1_EOT";
			};
		};
		scope=2;
		displayName="$STR_R3F_Famas_F1";
		descriptionShort="$STR_R3F_Famas_F1_DESC";
		model="\r3f_armes\famas_F1.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas.rtm"
		};
		optics=1;
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		drySound[]=
		{
			"\r3f_armes\sons\Dry.wss",
			0.010000,
			1
		};
		reloadMagazineSound[]=
		{
			"\r3f_armes\sons\Famas_Reload.wss",
			0.056250,
			1,
			20
		};
		dexterity=1.600000;
		value=1000;
		magazines[]=
		{
			"556x45_x1",
			"556x45_SD_x1",
			"556x45_HP_x1",
			"556x45_TRACER_x1",
			"556x45_RUBBER_x1",
			"556x45_BT_x1",
			"R3F_25Rnd_556x45_FAMAS",
			"R3F_25Rnd_556x45_FAMASSD",
			"R3F_25Rnd_556x45_FAMAS_hp",
			"R3F_25Rnd_556x45_FAMAS_tracer",
			"R3F_25Rnd_556x45_FAMAS_rubber",
			"R3F_25Rnd_556x45_FAMAS_bt"
		};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\sons\famas.wss",
				1.000000,
				1.100000,
				1000
			};
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.100000,
				1000
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=300;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.100000,
				1000
			};
			soundContinuous=0;
			reloadTime=0.060000;
			ffCount=30;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class Lance_Grenades: GrenadeLauncher
		{
			displayName="Lance Grenade M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeYellow_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203"
			};
			begin1[]=
			{
				"\r3f_armes\Sons\gr_launcher_3.wss",
				1,
				1,
				200
			};
			begin2[]=
			{
				"\r3f_armes\Sons\gr_launcher_4.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				0.500000,
				"begin2",
				0.500000
			};
			reloadMagazineSound[]=
			{
				"\r3f_armes\Sons\gr_launcher_reload",
				1,
				1,
				30
			};
			drySound[]=
			{
				"\r3f_armes\Sons\gr_launcher_dry",
				1.122020,
				1,
				40
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			optics="true";
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
		class FlashLight
		{
			color[]={0.600000,0.900000,0.900000,0.900000};
			ambient[]={0.100000,0.100000,0.100000,1};
			position="flash dir";
			direction="flash";
			angle=30;
			scale[]={0.500000,0.500000,0.200000};
			brightness=0.300000;
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		aiRateOfFire=1;
		aiRateOfFireDistance=700;
		weight=3.800000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_LIB";
		};
	};
	class R3F_Famas_F1_AIM: R3F_Famas_F1_SUB
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "R3F_Famas_F1";
			};
		};
		displayName="$STR_R3F_Famas_F1_AIM";
		descriptionShort="$STR_R3F_Famas_F1_AIM_DESC";
		model="\r3f_armes\famas_F1_AIM.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_AIM.paa";
		memoryPointCamera="eye_AIM";
		class OpticsModes
		{
			class AIM
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye_AIM";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsDisablePeripherialVision=0;
			};
			class Oeilleton: AIM
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		weight=4.000000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_AIM_LIB";
		};
	};
	class R3F_Famas_F1_EOT: R3F_Famas_F1_SUB
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "R3F_Famas_F1";
			};
			class UseAtt1{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "R3F_Famas_F1_EOT_HG_SD";
			};
		};
		displayName="$STR_R3F_Famas_F1_EOT";
		descriptionShort="$STR_R3F_Famas_F1_EOT_DESC";
		model="\r3f_armes\famas_F1_EOT.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_EOT.paa";
		memoryPointCamera="eye_EOT";
		class OpticsModes
		{
			class EOT
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye_EOT";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsDisablePeripherialVision=0;
			};
			class Oeilleton: EOT
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		weight=4.000000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_EOT_LIB";
		};
	};
	class R3F_Famas_F1_EOT_HG_SD: R3F_Famas_F1_SUB
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "R3F_Famas_F1_EOT";
			};
		};
		displayName="$STR_R3F_Famas_F1_EOT_HG_SD";
		descriptionShort="$STR_R3F_Famas_F1_EOT_HG_SD_DESC";
		model="\r3f_armes\famas_F1_EOT_HG_SD.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_EOT_HG_SD.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_HG.rtm"
		};
		distanceZoomMin=150;
		distanceZoomMax=150;
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=100;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			soundContinuous=0;
			reloadTime=0.060000;
			ffCount=25;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=60;
			maxRangeProbab=0.050000;
		};
		class OpticsModes
		{
			class EOT
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye_EOT";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				distanceZoomMin=150;
				distanceZoomMax=150;
				cameraDir="";
				opticsDisablePeripherialVision=0;
			};
			class Oeilleton: EOT
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		weight=4.700000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_EOT_HG_SD_LIB";
		};
	};
	class R3F_Famas_F1_J4_M203: R3F_Famas_F1_SUB
	{
		delete ItemActions;
		displayName="$STR_R3F_Famas_F1_J4_M203";
		descriptionShort="$STR_R3F_Famas_F1_J4_M203_DESC";
		model="\r3f_armes\Famas_F1_J4_M203.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_J4_M203.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_M203.rtm"
		};
		muzzles[]=
		{
			"this",
			"Lance_Grenades"
		};
		memoryPointCamera="eye_j4";
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J4.p3d";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class J4
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.062500;
				opticsZoomMax=0.062500;
				opticsZoomInit=0.062500;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye_j4";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=2;
			};
			class Oeilleton: J4
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irdistance=300;
		weight=5.300000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_J4_M203_LIB";
		};
	};
	class R3F_Famas_F1_J4_M203_SD: R3F_Famas_F1_J4_M203
	{
		delete ItemActions;
		displayName="$STR_R3F_Famas_F1_J4_M203_SD";
		descriptionShort="$STR_R3F_Famas_F1_J4_M203_SD_DESC";
		model="\r3f_armes\Famas_F1_J4_M203_SD.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_J4_M203_SD.paa";
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=100;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			soundContinuous=0;
			reloadTime=0.060000;
			ffCount=25;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=60;
			maxRangeProbab=0.050000;
		};
		weight=5.800000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_F1_J4_M203_SD_LIB";
		};
	};
	class R3F_Famas_surb: R3F_Famas_F1_SUB
	{
		delete ItemActions;
		displayName="$STR_R3F_Famas_surb";
		descriptionShort="$STR_R3F_Famas_surb_DESC";
		model="\r3f_armes\famas_surb.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb.paa";
		dexterity=2;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=300;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			soundContinuous=0;
			reloadTime=0.060000;
			ffCount=25;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		weight=3.600000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_surb_LIB";
		};
	};
	class R3F_Famas_surb_AIM_HG: R3F_Famas_surb
	{
		displayName="$STR_R3F_Famas_surb_AIM_HG";
		descriptionShort="$STR_R3F_Famas_surb_AIM_HG_DESC";
		model="\r3f_armes\famas_surb_AIM_HG.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_AIM_HG.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_HG.rtm"
		};
		weight=4.000000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_surb_AIM_HG_LIB";
		};
	};
	class R3F_Famas_surb_EOT_SD: R3F_Famas_surb
	{
		displayName="$STR_R3F_Famas_surb_EOT_SD";
		descriptionShort="$STR_R3F_Famas_surb_EOT_SD_DESC";
		model="\r3f_armes\famas_surb_EOT_SD.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_EOT_SD.paa";
		distanceZoomMin=150;
		distanceZoomMax=150;
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.060000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=100;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas_SD.wss",
				1.200000,
				1,
				200
			};
			soundContinuous=0;
			reloadTime=0.060000;
			ffCount=25;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=60;
			maxRangeProbab=0.050000;
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irdistance=300;
		weight=4.300000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_surb_EOT_SD_LIB";
		};
	};
	class R3F_Famas_surb_AIM_SD: R3F_Famas_surb_EOT_SD
	{
		displayName="$STR_R3F_Famas_surb_AIM_SD";
		descriptionShort="$STR_R3F_Famas_surb_AIM_SD_DESC";
		model="\r3f_armes\famas_surb_AIM_SD.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_AIM_SD.paa";
		weight=4.300000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_surb_AIM_SD_LIB";
		};
	};
	class R3F_Famas_surb_EOT_M203: R3F_Famas_surb
	{
		displayName="$STR_R3F_Famas_surb_EOT_M203";
		descriptionShort="$STR_R3F_Famas_surb_EOT_M203_DESC";
		model="\r3f_armes\famas_surb_EOT_M203.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_EOT_M203.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_M203.rtm"
		};
		muzzles[]=
		{
			"this",
			"Lance_Grenades"
		};
		weight=5.100000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_surb_EOT_M203_LIB";
		};
	};
	class R3F_Famas_G2_SUB: R3F_Famas_F1_SUB
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "R3F_Famas_G2_J4_HG";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "R3F_Famas_G2_AIM_HG";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "R3F_Famas_G2_EOT";
			};
		};
		displayName="$STR_R3F_Famas_G2";
		descriptionShort="$STR_R3F_Famas_G2_DESC";
		model="\r3f_armes\Famas_G2.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2.paa";
		magazines[]=
		{
			"556x45_x1",
			"556x45_SD_x1",
			"556x45_HP_x1",
			"556x45_TRACER_x1",
			"556x45_RUBBER_x1",
			"556x45_BT_x1",
			"20Rnd_556x45_Stanag",
			"20Rnd_556x45_StanagSD",
			"20Rnd_556x45_Stanag_hp",
			"20Rnd_556x45_Stanag_tracer",
			"20Rnd_556x45_Stanag_rubber",
			"20Rnd_556x45_Stanag_bt",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_Stanag_hp",
			"30Rnd_556x45_Stanag_tracer",
			"30Rnd_556x45_Stanag_rubber",
			"30Rnd_556x45_Stanag_bt",
			"100Rnd_556x45_BetaCMag",
			"100Rnd_556x45_BetaCMagSD",
			"100Rnd_556x45_BetaCMag_hp",
			"100Rnd_556x45_BetaCMag_tracer",
			"100Rnd_556x45_BetaCMag_rubber",
			"100Rnd_556x45_BetaCMag_bt"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			reloadTime=0.054000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.054000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=300;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			soundContinuous=0;
			reloadTime=0.054000;
			ffcount=30;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		weight=3.700000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_G2_LIB";
		};
	};
	class R3F_Famas_G2: R3F_Famas_F1_SUB
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "R3F_Famas_G2_J4";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "R3F_Famas_G2_AIM_HG";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "R3F_Famas_G2_EOT";
			};
		};
		displayName="$STR_R3F_Famas_G2";
		descriptionShort="$STR_R3F_Famas_G2_DESC";
		model="\r3f_armes\Famas_G2.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2.paa";
		magazines[]=
		{
			"556x45_x1",
			"556x45_SD_x1",
			"556x45_HP_x1",
			"556x45_TRACER_x1",
			"556x45_RUBBER_x1",
			"556x45_BT_x1",
			"20Rnd_556x45_Stanag",
			"20Rnd_556x45_StanagSD",
			"20Rnd_556x45_Stanag_hp",
			"20Rnd_556x45_Stanag_tracer",
			"20Rnd_556x45_Stanag_rubber",
			"20Rnd_556x45_Stanag_bt",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_Stanag_hp",
			"30Rnd_556x45_Stanag_tracer",
			"30Rnd_556x45_Stanag_rubber",
			"30Rnd_556x45_Stanag_bt",
			"100Rnd_556x45_BetaCMag",
			"100Rnd_556x45_BetaCMagSD",
			"100Rnd_556x45_BetaCMag_hp",
			"100Rnd_556x45_BetaCMag_tracer",
			"100Rnd_556x45_BetaCMag_rubber",
			"100Rnd_556x45_BetaCMag_bt"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			reloadTime=0.054000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			soundBurst=0;
			ffcount=3;
			reloadTime=0.054000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=300;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			sound[]=
			{
				"\r3f_armes\Sons\famas.wss",
				1.000000,
				1.000000,
				1000
			};
			soundContinuous=0;
			reloadTime=0.054000;
			ffcount=30;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.005000;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		weight=3.700000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_G2_LIB";
		};
	};
	class R3F_Famas_G2_EOT: R3F_Famas_G2_SUB
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "R3F_Famas_G2";
			};
		};
		displayName="$STR_R3F_Famas_G2_EOT";
		descriptionShort="$STR_R3F_Famas_G2_EOT_DESC";
		model="\r3f_armes\famas_G2_EOT.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_EOT.paa";
		memoryPointCamera="eye_EOT";
		class OpticsModes
		{
			class EOT
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye_EOT";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				opticsDisablePeripherialVision=0;
			};
			class Oeilleton: EOT
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		weight=3.900000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_G2_EOT_LIB";
		};
	};
	class R3F_Famas_G2_J4: R3F_Famas_G2_SUB
	{
		delete ItemActions;
		displayName="$STR_R3F_Famas_G2_J4";
		descriptionShort="$STR_R3F_Famas_G2_J4_DESC";
		model="\r3f_armes\Famas_G2_J4.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_J4.paa";
		memoryPointCamera="eye_j4";
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J4.p3d";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class J4
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.062500;
				opticsZoomMax=0.062500;
				opticsZoomInit=0.062500;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye_j4";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=2;
			};
			class Oeilleton: J4
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		weight=4.100000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_G2_J4_LIB";
		};
	};
	class R3F_Famas_G2_J4_HG: R3F_Famas_G2_J4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "R3F_Famas_G2";
			};
		};
		displayName="$STR_R3F_Famas_G2_J4_HG";
		descriptionShort="$STR_R3F_Famas_G2_J4_HG_DESC";
		model="\r3f_armes\Famas_G2_J4_HG.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_HG.rtm"
		};
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_J4_HG.paa";
		weight=4.300000;
	};
	class R3F_Famas_G2_AIM_M203: R3F_Famas_G2_SUB
	{
		displayName="$STR_R3F_Famas_G2_AIM_M203";
		descriptionShort="$STR_R3F_Famas_G2_AIM_M203_DESC";
		model="\r3f_armes\Famas_G2_AIM_M203.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_AIM_M203.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_M203.rtm"
		};
		muzzles[]=
		{
			"this",
			"Lance_Grenades"
		};
		memoryPointCamera="eye_AIM";
		class OpticsModes
		{
			class AIM
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye_AIM";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				opticsDisablePeripherialVision=0;
			};
			class Oeilleton: AIM
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irdistance=300;
		weight=5.200000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_G2_AIM_M203_LIB";
		};
	};
	class R3F_Famas_G2_AIM_HG: R3F_Famas_G2_SUB
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "R3F_Famas_G2";
			};
		};
		displayName="$STR_R3F_Famas_G2_AIM_HG";
		descriptionShort="$STR_R3F_Famas_G2_AIM_HG_DESC";
		model="\r3f_armes\Famas_G2_AIM_HG.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_AIM_HG.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_HG.rtm"
		};
		class OpticsModes
		{
			class AIM
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye_AIM";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				opticsDisablePeripherialVision=0;
			};
			class Oeilleton: AIM
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		weight=4.100000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_G2_AIM_HG_LIB";
		};
	};
	class R3F_Famas_felin: R3F_Famas_G2_SUB
	{
		delete ItemActions;
		displayName="$STR_R3F_Famas_felin";
		descriptionShort="$STR_R3F_Famas_felin_DESC";
		model="\r3f_armes\Famas_felin.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Famas_felin.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Famas_Felin.rtm"
		};
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_felin.p3d";
		opticsZoomMin=0.025000;
		opticsZoomMax=0.083000;
		opticsZoomInit=0.083000;
		distanceZoomMin=300;
		distanceZoomMax=300;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class Felin
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.025000;
				opticsZoomMax=0.083000;
				opticsZoomInit=0.083000;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				opticsPPEffects[]={};
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={2};
				discreteDistance[]={100,200,300,400,500,600};
				discreteDistanceInitIndex=2;
			};
		};
		weight=5.800000;
		class Library
		{
			libTextDesc="$STR_R3F_Famas_FELIN_LIB";
		};
	};
	class R3F_FRF2_J8: Rifle
	{
		scope=2;
		displayName="$STR_R3F_FRF2_J8";
		descriptionShort="$STR_R3F_FRF2_J8_DESC";
		model="\r3f_armes\frf2_J8.p3d";
		picture="\r3f_armes\Data\Icons\R3F_FRF2_J8.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\FrF2.rtm"
		};
		dexterity=0.700000;
		value=1000;
		magazines[]=
		{
			"R3F_10Rnd_762x51_FRF2"
		};
		modes[]=
		{
			"Single"
		};
		reloadSound[]=
		{
			"\r3f_armes\Sons\frf2_reloadshot.wss",
			0.056250,
			1.400000,
			15
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\r3f_armes\Sons\frf2.wss",
				1.500000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadMagazineSound[]=
			{
				"\r3f_armes\Sons\frf2_reload.wss",
				0.056250,
				1,
				20
			};
			reloadTime=2.200000;
			recoil="recoil_single_primary_6outof10";
			recoilprone="recoil_single_primary_prone_5outof10";
			dispersion=0.000200;
			minRange=0.200000;
			minRangeProbab=0.200000;
			midRange=400;
			midRangeProbab=0.700000;
			maxRange=800;
			maxRangeProbab=0.050000;
		};
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J8.p3d";
		opticsZoomMin=0.031250;
		opticsZoomMax=0.031250;
		opticsZoomInit=0.031250;
		distanceZoomMin=150;
		distanceZoomMax=150;
		class OpticsModes
		{
			class J8
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.031250;
				opticsZoomMax=0.031250;
				opticsZoomInit=0.031250;
				distanceZoomMin=150;
				distanceZoomMax=150;
				memoryPointCamera="eye_J8";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
			};
		};
		weight=6.100000;
		class Library
		{
			libTextDesc="$STR_R3F_FRF2_J8_LIB";
		};
	};
	class R3F_FRF2_J8_SD: R3F_FRF2_J8
	{
		displayName="$STR_R3F_FRF2_J8_SD";
		descriptionShort="$STR_R3F_FRF2_J8_SD_DESC";
		model="\r3f_armes\frf2_J8_SD.p3d";
		picture="\r3f_armes\Data\Icons\R3F_FRF2_J8_SD.paa";
		magazines[]=
		{
			"R3F_10Rnd_762x51_SD_FRF2"
		};
		modes[]=
		{
			"Single"
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		reloadSound[]=
		{
			"\r3f_armes\Sons\frf2_reloadshot.wss",
			0.056250,
			1.400000,
			15
		};
		weaponInfoType="RscWeaponZeroing";
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\r3f_armes\Sons\frf2_SD.wss",
				1.500000,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			reloadMagazineSound[]=
			{
				"\r3f_armes\Sons\frf2_reload.wss",
				0.056250,
				1,
				20
			};
			reloadTime=2.200000;
			recoil="recoil_single_primary_4outof10";
			recoilprone="recoil_single_primary_prone_3outof10";
			dispersion=0.000300;
			minRange=0.200000;
			minRangeProbab=0.200000;
			midRange=300;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		modelOptics="\r3f_armes\Optiques\optique_J10_MILDOT.p3d";
		class OpticsModes
		{
			class J8
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.031250;
				opticsZoomMax=0.031250;
				opticsZoomInit=0.031250;
				distanceZoomMin=150;
				distanceZoomMax=150;
				memoryPointCamera="eye_J8";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500,600};
				discreteDistanceInitIndex=2;
			};
		};
		weight=6.600000;
		class Library
		{
			libTextDesc="$STR_R3F_FRF2_J8_SD_LIB";
		};
	};
	class R3F_PGM_Hecate_II: Rifle
	{
		scope=2;
		displayName="$STR_R3F_PGM_Hecate_II";
		descriptionShort="$STR_R3F_PGM_Hecate_II_DESC";
		model="\r3f_armes\PGM_Hecate_II.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Pgm_J10.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\Pgm.rtm"
		};
		dexterity=0.400000;
		value=1500;
		type=5;
		magazines[]=
		{
			"R3F_7Rnd_127x99_PGM",
			"R3F_7Rnd_127x99_PEI_PGM"
		};
		modes[]=
		{
			"Single"
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		reloadSound[]=
		{
			"\r3f_armes\Sons\pgm_reloadshot.wss",
			0.056250,
			1,
			15
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\r3f_armes\Sons\pgm.wss",
				3,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			reloadMagazineSound[]=
			{
				"\r3f_armes\Sons\pgm_Reload.wss",
				0.056250,
				1,
				20
			};
			reloadTime=3.000000;
			recoil="recoil_single_primary_6outof10";
			recoilprone="recoil_single_primary_prone_5outof10";
			dispersion=0.000300;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=1200;
			midRangeProbab=0.700000;
			maxRange=1800;
			maxRangeProbab=0.500000;
		};
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J10.p3d";
		opticsZoomMin=0.025000;
		opticsZoomMax=0.025000;
		opticsZoomInit=0.025000;
		distanceZoomMin=100;
		distanceZoomMax=100;
		class OpticsModes
		{
			class J10
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.025000;
				opticsZoomMax=0.025000;
				opticsZoomInit=0.025000;
				distanceZoomMin=1400;
				distanceZoomMax=1400;
				memoryPointCamera="eye_J10";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
			};
		};
		weight=16.299999;
		class Library
		{
			libTextDesc="$STR_R3F_PGM_Hecate_II_LIB";
		};
	};
	class R3F_PGM_Hecate_II_MILDOT: R3F_PGM_Hecate_II
	{
		displayName="$STR_R3F_PGM_Hecate_II_MILDOT";
		descriptionShort="$STR_R3F_PGM_Hecate_II_MILDOT_DESC";
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J10_MILDOT.p3d";
		opticsZoomMin=0.025000;
		opticsZoomMax=0.025000;
		opticsZoomInit=0.025000;
		distanceZoomMin=100;
		distanceZoomMax=100;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class J10_MILDOT
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.025000;
				opticsZoomMax=0.025000;
				opticsZoomInit=0.025000;
				distanceZoomMin=1200;
				distanceZoomMax=1200;
				memoryPointCamera="eye_J10";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
				discreteDistanceInitIndex=7;
			};
		};
		weight=16.299999;
		class Library
		{
			libTextDesc="$STR_R3F_PGM_Hecate_II_MILDOT_LIB";
		};
	};
	class R3F_PGM_Hecate_II_POLY: R3F_PGM_Hecate_II_MILDOT
	{
		displayName="$STR_R3F_PGM_Hecate_II_POLY";
		descriptionShort="$STR_R3F_PGM_Hecate_II_POLY_DESC";
		model="\r3f_armes\pgm_Hecate_II_Poly.p3d";
		picture="\r3f_armes\Data\Icons\R3F_Pgm_POLY.paa";
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_Zeiss.p3d";
		opticsZoomMin=0.010420;
		opticsZoomMax=0.041670;
		opticsZoomInit=0.041670;
		distanceZoomMin=500;
		distanceZoomMax=500;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class ZEISS_MILDOT
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.010420;
				opticsZoomMax=0.041670;
				opticsZoomInit=0.041670;
				distanceZoomMin=500;
				distanceZoomMax=500;
				memoryPointCamera="eye_J10";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=2;
			};
		};
		weight=16.299999;
		class Library
		{
			libTextDesc="$STR_R3F_PGM_Hecate_II_POLY_LIB";
		};
	};
	class R3F_AT4CS: M136
	{
		scope=2;
		displayName="$STR_R3F_AT4CS";
		descriptionShort="$STR_R3F_AT4CS_DESC";
		model="\r3f_armes\AT4CS.p3d";
		modelSpecial="\r3f_armes\AT4CS.p3d";
		modelOptics="-";
		magazines[]=
		{
			"R3F_AT4CS_Mag"
		};
		picture="\r3f_armes\Data\icons\R3F_AT4CS.paa";
		UiPicture="\CA\weapons\Data\Ico\i_at_CA.paa";
		recoil="launcherBase";
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=400;
		weight=0;
		class Library
		{
			libTextDesc="$STR_R3F_AT4CS_LIB";
		};
	};
	class R3F_Minimi_EOT: M249
	{
		scope=2;
		bullet1[]=
		{
			"ca\sounds\weapons\shells\big_shell_metal_01",
			0.070795,
			1,
			15
		};
		bullet2[]=
		{
			"ca\sounds\weapons\shells\big_shell_metal_03",
			0.070795,
			1,
			15
		};
		bullet3[]=
		{
			"ca\sounds\weapons\shells\big_shell_metal_02",
			0.070795,
			1,
			15
		};
		bullet4[]=
		{
			"ca\sounds\weapons\shells\big_shell_metal_01",
			0.070795,
			1,
			15
		};
		bullet5[]=
		{
			"ca\sounds\weapons\shells\big_shell_dirt_01",
			0.070795,
			1,
			15
		};
		bullet6[]=
		{
			"ca\sounds\weapons\shells\big_shell_dirt_02",
			0.070795,
			1,
			15
		};
		bullet7[]=
		{
			"ca\sounds\weapons\shells\big_shell_dirt_03",
			0.070795,
			1,
			15
		};
		bullet8[]=
		{
			"ca\sounds\weapons\shells\big_shell_dirt_04",
			0.070795,
			1,
			15
		};
		bullet9[]=
		{
			"ca\sounds\weapons\shells\big_shell_soft_01",
			0.070795,
			1,
			15
		};
		bullet10[]=
		{
			"ca\sounds\weapons\shells\big_shell_soft_02",
			0.070795,
			1,
			15
		};
		bullet11[]=
		{
			"ca\sounds\weapons\shells\big_shell_soft_03",
			0.070795,
			1,
			15
		};
		bullet12[]=
		{
			"ca\sounds\weapons\shells\big_shell_soft_04",
			0.070795,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.083000,
			"bullet2",
			0.083000,
			"bullet3",
			0.083000,
			"bullet4",
			0.083000,
			"bullet5",
			0.083000,
			"bullet6",
			0.083000,
			"bullet7",
			0.083000,
			"bullet8",
			0.083000,
			"bullet9",
			0.083000,
			"bullet10",
			0.083000,
			"bullet11",
			0.083000,
			"bullet12",
			0.083000
		};
		displayName="$STR_R3F_Minimi_EOT";
		descriptionShort="$STR_R3F_Minimi_EOT_DESC";
		model="\r3f_armes\Minimi_EOT.p3d";
		picture="\r3f_armes\Data\icons\R3F_minimi_EOT.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\minimi.rtm"
		};
		UiPicture="\CA\weapons\Data\Ico\i_mg_CA.paa";
		dexterity=0.600000;
		type="1	 + 	4";
		reloadMagazineSound[]=
		{
			"\r3f_armes\Sons\Minimi_reload",
			0.060000,
			1,
			25
		};
		magazines[]=
		{
			"556x45_x1",
			"556x45_SD_x1",
			"556x45_HP_x1",
			"556x45_TRACER_x1",
			"556x45_RUBBER_x1",
			"556x45_BT_x1",
			"100Rnd_556x45_M249",
			"100Rnd_556x45_M249SD",
			"100Rnd_556x45_M249_hp",
			"100Rnd_556x45_M249_tracer",
			"100Rnd_556x45_M249_rubber",
			"100Rnd_556x45_M249_bt",
			"200Rnd_556x45_M249",
			"200Rnd_556x45_M249SD",
			"200Rnd_556x45_M249_hp",
			"200Rnd_556x45_M249_tracer",
			"200Rnd_556x45_M249_rubber",
			"200Rnd_556x45_M249_bt",
			"20Rnd_556x45_Stanag",
			"20Rnd_556x45_StanagSD",
			"20Rnd_556x45_Stanag_hp",
			"20Rnd_556x45_Stanag_tracer",
			"20Rnd_556x45_Stanag_rubber",
			"20Rnd_556x45_Stanag_bt",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_Stanag_hp",
			"30Rnd_556x45_Stanag_tracer",
			"30Rnd_556x45_Stanag_rubber",
			"30Rnd_556x45_Stanag_bt"
		};

		initSpeed=915;
		irDistance=0;
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: Mode_FullAuto
		{
			reloadTime=0.066000;
			recoil="recoil_auto_machinegun_6outof10";
			recoilProne="recoil_auto_machinegun_prone_3outof10";
			dispersion=0.000800;
			begin1[]=
			{
				"\r3f_armes\Sons\minimi.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=1;
			minRangeProbab=0.300000;
			midRange=5;
			midRangeProbab=0.580000;
			maxRange=10;
			maxRangeProbab=0.040000;
			showToPlayer="true";
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
			showToPlayer="false";
		};
		class short: close
		{
			burst=6;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.050000;
			midRange=100;
			midRangeProbab=0.580000;
			maxRange=200;
			maxRangeProbab=0.040000;
		};
		class medium: close
		{
			burst=8;
			aiRateOfFire=4;
			aiRateOfFireDistance=400;
			minRange=200;
			minRangeProbab=0.050000;
			midRange=300;
			midRangeProbab=0.580000;
			maxRange=400;
			maxRangeProbab=0.040000;
		};
		class far: close
		{
			burst=7;
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			minRange=400;
			minRangeProbab=0.050000;
			midRange=500;
			midRangeProbab=0.400000;
			maxRange=600;
			maxRangeProbab=0.010000;
		};
		aiDispersionCoefY=17.000000;
		aiDispersionCoefX=17.000000;
		weight=7.000000;
		class Library
		{
			libTextDesc="$STR_R3F_Minimi_EOT_LIB";
		};
	};
	class R3F_Minimi_J4: R3F_Minimi_EOT
	{
		displayName="$STR_R3F_Minimi_J4";
		descriptionShort="$STR_R3F_Minimi_J4_DESC";
		model="\r3f_armes\Minimi_J4.p3d";
		picture="\r3f_armes\Data\icons\R3F_minimi_J4.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\minimi.rtm"
		};
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J4.p3d";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class J4
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.062500;
				opticsZoomMax=0.062500;
				opticsZoomInit=0.062500;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=2;
			};
		};
		weight=7.200000;
		class Library
		{
			libTextDesc="$STR_R3F_Minimi_J4_LIB";
		};
	};
	class R3F_Minimi_AIM_HG: R3F_Minimi_EOT
	{
		displayName="$STR_R3F_Minimi_AIM_HG";
		descriptionShort="$STR_R3F_Minimi_AIM_HG_DESC";
		model="\r3f_armes\Minimi_AIM_HG.p3d";
		picture="\r3f_armes\Data\icons\R3F_minimi_AIM_HG.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\Mk48.rtm"
		};
		class manual: Mode_FullAuto
		{
			reloadTime=0.066000;
			recoil="recoil_auto_machinegun_5outof10";
			recoilProne="recoil_auto_machinegun_prone_5outof10";
			dispersion=0.000800;
			begin1[]=
			{
				"\r3f_armes\Sons\minimi.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=1;
			minRangeProbab=0.300000;
			midRange=5;
			midRangeProbab=0.580000;
			maxRange=10;
			maxRangeProbab=0.040000;
			showToPlayer="true";
		};
		weight=6.800000;
	};
	class R3F_Minimi_762_EOT_HG: M240
	{
		scope=2;
		displayName="$STR_R3F_Minimi_762_EOT_HG";
		descriptionShort="$STR_R3F_Minimi_762_EOT_HG_DESC";
		model="\r3f_armes\Minimi_762_EOT_HG.p3d";
		picture="\r3f_armes\Data\icons\R3F_minimi_762_EOT_HG.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\Mk48.rtm"
		};
		UiPicture="\CA\weapons\Data\Ico\i_mg_CA.paa";
		dexterity=0.400000;
		magazines[] =
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"100Rnd_762x51_M240",
			"100Rnd_762x51_M240SD",
			"100Rnd_762x51_M240_hp",
			"100Rnd_762x51_M240_tracer",
			"100Rnd_762x51_M240_rubber",
			"100Rnd_762x51_M240_bt",
			"200Rnd_762x51_M240",
			"200Rnd_762x51_M240SD",
			"200Rnd_762x51_M240_hp",
			"200Rnd_762x51_M240_tracer",
			"200Rnd_762x51_M240_rubber",
			"200Rnd_762x51_M240_bt"
		};
		initSpeed=820;
		irDistance=0;
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: Mode_FullAuto
		{
			reloadTime=0.075000;
			recoil="recoil_auto_machinegun_5outof10";
			recoilProne="recoil_auto_machinegun_prone_5outof10";
			dispersion=0.002000;
			begin1[]=
			{
				"\r3f_armes\Sons\minimi762.wss",
				1.750000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			soundContinuous=0;
			soundBurst="false";
			minRange=1;
			minRangeProbab=0.300000;
			midRange=5;
			midRangeProbab=0.580000;
			maxRange=10;
			maxRangeProbab=0.040000;
			showToPlayer="true";
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
			showToPlayer="false";
		};
		class short: close
		{
			burst=6;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.050000;
			midRange=100;
			midRangeProbab=0.580000;
			maxRange=200;
			maxRangeProbab=0.040000;
		};
		class medium: close
		{
			burst=8;
			aiRateOfFire=4;
			aiRateOfFireDistance=400;
			minRange=200;
			minRangeProbab=0.050000;
			midRange=300;
			midRangeProbab=0.580000;
			maxRange=400;
			maxRangeProbab=0.040000;
		};
		class far: close
		{
			burst=7;
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			minRange=400;
			minRangeProbab=0.050000;
			midRange=500;
			midRangeProbab=0.400000;
			maxRange=600;
			maxRangeProbab=0.010000;
		};
		aiDispersionCoefY=7.000000;
		aiDispersionCoefX=7.000000;
		weight=8.100000;
		class Library
		{
			libTextDesc="$STR_R3F_Minimi_762_EOT_HG_LIB";
		};
	};
	class R3F_Minimi_762_J4: R3F_Minimi_762_EOT_HG
	{
		displayName="$STR_R3F_Minimi_762_J4";
		descriptionShort="$STR_R3F_Minimi_762_J4_DESC";
		model="\r3f_armes\Minimi_762_J4.p3d";
		picture="\r3f_armes\Data\icons\R3F_minimi_762_J4.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\minimi.rtm"
		};
		class manual: Mode_FullAuto
		{
			reloadTime=0.075000;
			recoil="recoil_auto_machinegun_5outof10";
			recoilProne="recoil_auto_machinegun_prone_3outof10";
			dispersion=0.002000;
			begin1[]=
			{
				"\r3f_armes\Sons\minimi762.wss",
				1.750000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			soundContinuous=0;
			soundBurst="false";
			minRange=1;
			minRangeProbab=0.300000;
			midRange=5;
			midRangeProbab=0.580000;
			maxRange=10;
			maxRangeProbab=0.040000;
			showToPlayer="true";
		};
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_J4.p3d";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class J4
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.062500;
				opticsZoomMax=0.062500;
				opticsZoomInit=0.062500;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceInitIndex=2;
			};
		};
		weight=8.100000;
		class Library
		{
			libTextDesc="$STR_R3F_Minimi_762_J4_LIB";
		};
	};
	class R3F_Minimi_762_OB50: R3F_Minimi_762_J4
	{
		displayName="$STR_R3F_Minimi_762_OB50";
		descriptionShort="$STR_R3F_Minimi_762_OB50_DESC";
		model="\r3f_armes\Minimi_762_OB50.p3d";
		picture="\r3f_armes\Data\icons\R3F_minimi_762_OB50.paa";
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_OB50.p3d";
		weaponInfoType="RscWeaponEmpty";
		class OpticsModes
		{
			class OB50
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.078125;
				opticsZoomMax=0.078125;
				opticsZoomInit=0.078125;
				distanceZoomMin=100;
				distanceZoomMax=100;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
			};
		};
		weight=8.400000;
		class Library
		{
			libTextDesc="$STR_R3F_Minimi_762_OB50_LIB";
		};
	};
	class R3F_HK417M_AIM: Rifle
	{
		scope=2;
		displayName="$STR_R3F_HK417M_AIM";
		descriptionShort="$STR_R3F_HK417M_AIM_DESC";
		model="\r3f_armes\hk417M_AIM.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417M_AIM.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\hk417.rtm"
		};
		drySound[]=
		{
			"\r3f_armes\sons\Dry.wss",
			0.010000,
			1
		};
		reloadMagazineSound[]=
		{
			"\r3f_armes\sons\hk417_Reload.wss",
			0.056250,
			1,
			20
		};
		dexterity=1.000000;
		value=1000;
		magazines[]=
		{
			"R3F_20Rnd_762x51_HK417",
			"R3F_20Rnd_762x51_TRACER_HK417"
		};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\r3f_armes\sons\hk417.wss",
				1.500000,
				1,
				1000
			};
			begin2[]=
			{
				"\r3f_armes\sons\hk417.wss",
				1.500000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.500000,
				"begin2",
				0.500000
			};
			reloadTime=0.100000;
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.000150;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=400;
			midRangeProbab=0.700000;
			maxRange=800;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\r3f_armes\sons\hk417.wss",
				1.500000,
				1,
				1000
			};
			begin2[]=
			{
				"\r3f_armes\sons\hk417.wss",
				1.500000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.500000,
				"begin2",
				0.500000
			};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=20;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_2outof10";
			dispersion=0.002500;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=80;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		aiRateOfFire=1;
		aiRateOfFireDistance=700;
		weight=4.600000;
		class Library
		{
			libTextDesc="$STR_R3F_HK417M_AIM_LIB";
		};
	};
	class R3F_HK417L_NF: R3F_HK417M_AIM
	{
		scope=2;
		displayName="$STR_R3F_HK417L_NF";
		descriptionShort="$STR_R3F_HK417L_NF_DESC";
		model="\r3f_armes\hk417L_NF.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417L_NF.paa";
		dexterity=1.200000;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\r3f_armes\sons\hk417L1.wss",
				1.500000,
				1,
				1500
			};
			begin2[]=
			{
				"\r3f_armes\sons\hk417L2.wss",
				1.500000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				0.500000,
				"begin2",
				0.500000
			};
			reloadTime=0.100000;
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.000150;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=400;
			midRangeProbab=0.700000;
			maxRange=800;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\r3f_armes\sons\hk417L1.wss",
				1.500000,
				1,
				1000
			};
			begin2[]=
			{
				"\r3f_armes\sons\hk417L2.wss",
				1.500000,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.500000,
				"begin2",
				0.500000
			};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=20;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_2outof10";
			dispersion=0.002500;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=80;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		optics=1;
		modelOptics="\r3f_armes\Optiques\optique_NF.p3d";
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.016660;
		opticsZoomMax=0.071420;
		opticsZoomInit=0.071420;
		distanceZoomMin=400;
		distanceZoomMax=400;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class NF_MILDOT
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.010420;
				opticsZoomMax=0.041670;
				opticsZoomInit=0.041670;
				distanceZoomMin=400;
				distanceZoomMax=400;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				visionMode[]={};
				discreteDistance[]={300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
				discreteDistanceInitIndex=2;
			};
		};
		weight=5.700000;
		class Library
		{
			libTextDesc="$STR_R3F_HK417L_NF_LIB";
		};
	};
	class R3F_HK417S_EOT_HG: R3F_HK417M_AIM
	{
		displayName="$STR_R3F_HK417S_EOT_HG";
		descriptionShort="$STR_R3F_HK417S_EOT_HG_DESC";
		model="\r3f_armes\hk417S_EOT_HG.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417S_EOT_HG.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\hk417_HG.rtm"
		};
		dexterity=0.800000;
		weight=4.600000;
		class Library
		{
			libTextDesc="$STR_R3F_HK417S_EOT_HG";
		};
	};
	class R3F_HK417S_HG_SD: R3F_HK417M_AIM
	{
		displayName="$STR_R3F_HK417S_HG_SD";
		descriptionShort="$STR_R3F_HK417S_HG_SD_DESC";
		model="\r3f_armes\hk417S_HG_SD.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417S_HG_SD.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\r3f_armes\Anim\hk417_HG.rtm"
		};
		dexterity=0.800000;
		magazines[]=
		{
			"R3F_20Rnd_762x51_SD_HK417"
		};
		distanceZoomMin=200;
		distanceZoomMax=200;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\r3f_armes\sons\hk417SD.wss",
				1.500000,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			reloadTime=0.100000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_2outof10";
			dispersion=0.000200;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=200;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\r3f_armes\sons\hk417SD.wss",
				1.500000,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1.000000
			};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=20;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_2outof10";
			dispersion=0.003000;
			minRange=0;
			minRangeProbab=0.200000;
			midRange=80;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		weight=4.900000;
		class Library
		{
			libTextDesc="$STR_R3F_HK417S_HG_SD_LIB";
		};
	};
	class R3F_HK417L_NF_DES: R3F_HK417L_NF
	{
		displayName="$STR_R3F_HK417L_NF_DES";
		model="\r3f_armes\hk417L_NF_DES.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417L_NF_DES.paa";
	};
	class R3F_HK417M_AIM_DES: R3F_HK417M_AIM
	{
		displayName="$STR_R3F_HK417M_AIM_DES";
		model="\r3f_armes\hk417M_AIM_DES.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417M_AIM_DES.paa";
	};
	class R3F_HK417S_EOT_HG_DES: R3F_HK417S_EOT_HG
	{
		displayName="$STR_R3F_HK417S_EOT_HG_DES";
		model="\r3f_armes\hk417S_EOT_HG_DES.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417S_EOT_HG_DES.paa";
	};
	class R3F_HK417S_HG_SD_DES: R3F_HK417S_HG_SD
	{
		displayName="$STR_R3F_HK417S_HG_SD_DES";
		model="\r3f_armes\hk417S_HG_SD_DES.p3d";
		picture="\r3f_armes\Data\Icons\R3F_HK417S_HG_SD_DES.paa";
	};
	class R3F_JIM_LR: Laserdesignator
	{
		displayName="$STR_R3F_JIM_LR";
		descriptionShort="$STR_R3F_JIM_LR_DESC";
		magazines[]=
		{
			"Laserbatteries"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2};
		modelOptics="\r3f_armes\Optiques\optique_jim_lr.p3d";
		opticsZoomMin=0.015625;
		opticsZoomMax=0.125000;
		opticsZoomInit=0.125000;
		weaponInfoType="RscWeaponRangeFinder";
		model="\r3f_armes\jim_LR.p3d";
		Picture="\r3f_armes\Data\Icons\R3F_jim_lr.paa";
		weight=2.800000;
		class Library
		{
			libTextDesc="$STR_R3F_JIM_LR_LIB";
		};
	};
	class R3F_Famas_F1_DES: R3F_Famas_F1_SUB
	{
		displayName="$STR_R3F_Famas_F1_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_DES.paa";
		model="\r3f_armes\famas_F1_DES.p3d";
	};
	class R3F_Famas_F1_AIM_DES: R3F_Famas_F1_AIM
	{
		displayName="$STR_R3F_Famas_F1_AIM_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_AIM_DES.paa";
		model="\r3f_armes\Famas_F1_AIM_DES.p3d";
	};
	class R3F_Famas_F1_EOT_DES: R3F_Famas_F1_EOT
	{
		displayName="$STR_R3F_Famas_F1_EOT_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_EOT_DES.paa";
		model="\r3f_armes\Famas_F1_EOT_DES.p3d";
	};
	class R3F_Famas_F1_EOT_HG_SD_DES: R3F_Famas_F1_EOT_HG_SD
	{
		displayName="$STR_R3F_Famas_F1_EOT_HG_SD_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_EOT_HG_SD_DES.paa";
		model="\r3f_armes\Famas_F1_EOT_HG_SD_DES.p3d";
	};
	class R3F_Famas_F1_J4_M203_DES: R3F_Famas_F1_J4_M203
	{
		displayName="$STR_R3F_Famas_F1_J4_M203_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_J4_M203_DES.paa";
		model="\r3f_armes\Famas_F1_J4_M203_DES.p3d";
	};
	class R3F_Famas_F1_J4_M203_SD_DES: R3F_Famas_F1_J4_M203_SD
	{
		displayName="$STR_R3F_Famas_F1_J4_M203_SD_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_F1_J4_M203_SD_DES.paa";
		model="\r3f_armes\Famas_F1_J4_M203_SD_DES.p3d";
	};
	class R3F_Famas_surb_DES: R3F_Famas_surb
	{
		displayName="$STR_R3F_Famas_surb_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_DES.paa";
		model="\r3f_armes\Famas_surb_DES.p3d";
	};
	class R3F_Famas_surb_AIM_HG_DES: R3F_Famas_surb_AIM_HG
	{
		displayName="$STR_R3F_Famas_surb_AIM_HG_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_AIM_HG_DES.paa";
		model="\r3f_armes\Famas_surb_AIM_HG_DES.p3d";
	};
	class R3F_Famas_surb_EOT_SD_DES: R3F_Famas_surb_EOT_SD
	{
		displayName="$STR_R3F_Famas_surb_EOT_SD_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_EOT_SD_DES.paa";
		model="\r3f_armes\Famas_surb_EOT_SD_DES.p3d";
	};
	class R3F_Famas_surb_AIM_SD_DES: R3F_Famas_surb_AIM_SD
	{
		displayName="$STR_R3F_Famas_surb_AIM_SD_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_AIM_SD_DES.paa";
		model="\r3f_armes\Famas_surb_AIM_SD_DES.p3d";
	};
	class R3F_Famas_surb_EOT_M203_DES: R3F_Famas_surb_EOT_M203
	{
		displayName="$STR_R3F_Famas_surb_EOT_M203_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_surb_EOT_M203_DES.paa";
		model="\r3f_armes\Famas_surb_EOT_M203_DES.p3d";
	};
	class R3F_Famas_G2_DES: R3F_Famas_G2_SUB
	{
		displayName="$STR_R3F_Famas_G2_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_DES.paa";
		model="\r3f_armes\Famas_G2_DES.p3d";
	};
	class R3F_Famas_G2_EOT_DES: R3F_Famas_G2_EOT
	{
		displayName="$STR_R3F_Famas_G2_EOT_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_EOT_DES.paa";
		model="\r3f_armes\Famas_G2_EOT_DES.p3d";
	};
	class R3F_Famas_G2_J4_DES: R3F_Famas_G2_J4
	{
		displayName="$STR_R3F_Famas_G2_J4_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_J4_DES.paa";
		model="\r3f_armes\Famas_G2_J4_DES.p3d";
	};
	class R3F_Famas_G2_J4_HG_DES: R3F_Famas_G2_J4_HG
	{
		displayName="$STR_R3F_Famas_G2_J4_HG_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_J4_HG_DES.paa";
		model="\r3f_armes\Famas_G2_J4_HG_DES.p3d";
	};
	class R3F_Famas_G2_AIM_M203_DES: R3F_Famas_G2_AIM_M203
	{
		displayName="$STR_R3F_Famas_G2_AIM_M203_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_AIM_M203_DES.paa";
		model="\r3f_armes\Famas_G2_AIM_M203_DES.p3d";
	};
	class R3F_Famas_G2_AIM_HG_DES: R3F_Famas_G2_AIM_HG
	{
		displayName="$STR_R3F_Famas_G2_AIM_HG_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_G2_AIM_HG_DES.paa";
		model="\r3f_armes\Famas_G2_AIM_HG_DES.p3d";
	};
	class R3F_Famas_felin_DES: R3F_Famas_felin
	{
		displayName="$STR_R3F_Famas_felin_DES";
		picture="\r3f_armes\Data\Icons\R3F_Famas_felin_DES.paa";
		model="\r3f_armes\Famas_felin_DES.p3d";
	};
	class R3F_FRF2_J8_DES: R3F_FRF2_J8
	{
		displayName="$STR_R3F_FRF2_J8_DES";
		picture="\r3f_armes\Data\Icons\R3F_Frf2_J8_DES.paa";
		model="\r3f_armes\frf2_J8_DES.p3d";
	};
	class R3F_FRF2_J8_SD_DES: R3F_FRF2_J8_SD
	{
		displayName="$STR_R3F_FRF2_J8_SD_DES";
		picture="\r3f_armes\Data\Icons\R3F_Frf2_J8_SD_DES.paa";
		model="\r3f_armes\frf2_J8_SD_DES.p3d";
	};
	class R3F_PGM_Hecate_II_DES: R3F_PGM_Hecate_II
	{
		displayName="$STR_R3F_PGM_Hecate_II_DES";
		picture="\r3f_armes\Data\Icons\R3F_Pgm_J10_DES.paa";
		model="\r3f_armes\pgm_Hecate_II_DES.p3d";
	};
	class R3F_PGM_Hecate_II_MILDOT_DES: R3F_PGM_Hecate_II_MILDOT
	{
		displayName="$STR_R3F_PGM_Hecate_II_MILDOT_DES";
		picture="\r3f_armes\Data\Icons\R3F_Pgm_J10_DES.paa";
		model="\r3f_armes\pgm_Hecate_II_DES.p3d";
	};
	class R3F_JIM_LR_DES: R3F_JIM_LR
	{
		displayName="$STR_R3F_JIM_LR_DES";
		picture="\r3f_armes\Data\Icons\R3F_Jim_LR_DES.paa";
		model="\r3f_armes\JIM_LR_DES.p3d";
	};
};
class cfgVehicles
{
	class ReammoBox;
	class R3F_WeaponBox: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_R3F_WeaponBox";
		model="\r3f_armes\R3F_AmmoBox.p3d";
		transportMaxMagazines=1000000.000000;
		transportMaxWeapons=1000000.000000;
		class TransportMagazines
		{
			class _xx_R3F_25Rnd_556x45_FAMAS
			{
				magazine="R3F_25Rnd_556x45_FAMAS";
				count=200;
			};
			class _xx_R3F_10Rnd_762x51_FRF2
			{
				magazine="R3F_10Rnd_762x51_FRF2";
				count=200;
			};
			class _xx_R3F_10Rnd_762x51_SD_FRF2
			{
				magazine="R3F_10Rnd_762x51_SD_FRF2";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_HK417
			{
				magazine="R3F_20Rnd_762x51_HK417";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_TRACER_HK417
			{
				magazine="R3F_20Rnd_762x51_TRACER_HK417";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_SD_HK417
			{
				magazine="R3F_20Rnd_762x51_SD_HK417";
				count=200;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine="1Rnd_SmokeRed_M203";
				count=200;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=200;
			};
			class _xx_R3F_7Rnd_127x99_PGM
			{
				magazine="R3F_7Rnd_127x99_PGM";
				count=100;
			};
			class _xx_R3F_7Rnd_127x99_PEI_PGM
			{
				magazine="R3F_7Rnd_127x99_PEI_PGM";
				count=100;
			};
			class _xx_R3F_AT4CS_Mag
			{
				magazine="R3F_AT4CS_Mag";
				count=100;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine="200Rnd_556x45_M249";
				count=100;
			};
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_R3F_Famas_F1
			{
				weapon="R3F_Famas_F1";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT
			{
				weapon="R3F_Famas_F1_EOT";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_HG_SD
			{
				weapon="R3F_Famas_F1_EOT_HG_SD";
				count=50;
			};
			class _xx_R3F_Famas_F1_AIM
			{
				weapon="R3F_Famas_F1_AIM";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203
			{
				weapon="R3F_Famas_F1_J4_M203";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_SD
			{
				weapon="R3F_Famas_F1_J4_M203_SD";
				count=50;
			};
			class _xx_R3F_Famas_felin
			{
				weapon="R3F_Famas_felin";
				count=50;
			};
			class _xx_R3F_Famas_G2
			{
				weapon="R3F_Famas_G2";
				count=50;
			};
			class _xx_R3F_Famas_G2_EOT
			{
				weapon="R3F_Famas_G2_EOT";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4
			{
				weapon="R3F_Famas_G2_J4";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_HG
			{
				weapon="R3F_Famas_G2_J4_HG";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_M203
			{
				weapon="R3F_Famas_G2_AIM_M203";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_HG
			{
				weapon="R3F_Famas_G2_AIM_HG";
				count=50;
			};
			class _xx_R3F_Famas_surb
			{
				weapon="R3F_Famas_surb";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_SD
			{
				weapon="R3F_Famas_surb_EOT_SD";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_HG
			{
				weapon="R3F_Famas_surb_AIM_HG";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_SD
			{
				weapon="R3F_Famas_surb_AIM_SD";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_M203
			{
				weapon="R3F_Famas_surb_EOT_M203";
				count=50;
			};
			class _xx_R3F_FRF2_J8
			{
				weapon="R3F_FRF2_J8";
				count=50;
			};
			class _xx_R3F_FRF2_J8_SD
			{
				weapon="R3F_FRF2_J8_SD";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II
			{
				weapon="R3F_PGM_Hecate_II";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_MILDOT
			{
				weapon="R3F_PGM_Hecate_II_MILDOT";
				count=50;
			};
			class _xx_R3F_AT4CS
			{
				weapon="R3F_AT4CS";
				count=50;
			};
			class _xx_R3F_Minimi_EOT
			{
				weapon="R3F_Minimi_EOT";
				count=50;
			};
			class _xx_R3F_Minimi_J4
			{
				weapon="R3F_Minimi_J4";
				count=50;
			};
			class _xx_R3F_Minimi_762_J4
			{
				weapon="R3F_Minimi_762_J4";
				count=50;
			};
			class _xx_R3F_Minimi_762_OB50
			{
				weapon="R3F_Minimi_762_OB50";
				count=50;
			};
			class _xx_R3F_Minimi_AIM_HG
			{
				weapon="R3F_minimi_AIM_HG";
				count=50;
			};
			class _xx_R3F_Minimi_762_EOT_HG
			{
				weapon="R3F_Minimi_762_EOT_HG";
				count=50;
			};
			class _xx_R3F_JIM_LR
			{
				weapon="R3F_JIM_LR";
				count=50;
			};
			class _xx_R3F_Famas_F1_DES
			{
				weapon="R3F_Famas_F1_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_DES
			{
				weapon="R3F_Famas_F1_EOT_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_HG_SD_DES
			{
				weapon="R3F_Famas_F1_EOT_HG_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_AIM_DES
			{
				weapon="R3F_Famas_F1_AIM_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_DES
			{
				weapon="R3F_Famas_F1_J4_M203_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_SD_DES
			{
				weapon="R3F_Famas_F1_J4_M203_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_felin_DES
			{
				weapon="R3F_Famas_felin_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_DES
			{
				weapon="R3F_Famas_G2_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_EOT_DES
			{
				weapon="R3F_Famas_G2_EOT_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_DES
			{
				weapon="R3F_Famas_G2_J4_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_HG_DES
			{
				weapon="R3F_Famas_G2_J4_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_M203_DES
			{
				weapon="R3F_Famas_G2_AIM_M203_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_HG_DES
			{
				weapon="R3F_Famas_G2_AIM_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_DES
			{
				weapon="R3F_Famas_surb_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_SD_DES
			{
				weapon="R3F_Famas_surb_EOT_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_HG_DES
			{
				weapon="R3F_Famas_surb_AIM_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_SD_DES
			{
				weapon="R3F_Famas_surb_AIM_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_M203_DES
			{
				weapon="R3F_Famas_surb_EOT_M203_DES";
				count=50;
			};
			class _xx_R3F_FRF2_J8_DES
			{
				weapon="R3F_FRF2_J8_DES";
				count=50;
			};
			class _xx_R3F_FRF2_J8_SD_DES
			{
				weapon="R3F_FRF2_J8_SD_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_DES
			{
				weapon="R3F_PGM_Hecate_II_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_MILDOT_DES
			{
				weapon="R3F_PGM_Hecate_II_MILDOT_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_POLY
			{
				weapon="R3F_PGM_Hecate_II_POLY";
				count=50;
			};
			class _xx_R3F_JIM_LR_DES
			{
				weapon="R3F_JIM_LR_DES";
				count=50;
			};
			class _xx_NVGoggles
			{
				weapon="NVGoggles";
				count=50;
			};
			class _xx_R3F_HK417L_NF
			{
				weapon="R3F_HK417L_NF";
				count=50;
			};
			class _xx_R3F_HK417M_AIM
			{
				weapon="R3F_HK417M_AIM";
				count=50;
			};
			class _xx_R3F_HK417L_NF_DES
			{
				weapon="R3F_HK417L_NF_DES";
				count=50;
			};
			class _xx_R3F_HK417M_AIM_DES
			{
				weapon="R3F_HK417M_AIM_DES";
				count=50;
			};
			class _xx_R3F_HK417S_EOT_HG
			{
				weapon="R3F_HK417S_EOT_HG";
				count=50;
			};
			class _xx_R3F_HK417S_EOT_HG_DES
			{
				weapon="R3F_HK417S_EOT_HG_DES";
				count=50;
			};
			class _xx_R3F_HK417S_HG_SD
			{
				weapon="R3F_HK417S_HG_SD";
				count=50;
			};
			class _xx_R3F_HK417S_HG_SD_DES
			{
				weapon="R3F_HK417S_HG_SD_DES";
				count=50;
			};
		};
	};
	class R3F_WeaponBox_Full: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_R3F_WeaponBox_Full";
		model="\r3f_armes\R3F_AmmoBox.p3d";
		transportMaxMagazines=1000000000.000000;
		transportMaxWeapons=1000000000.000000;
		class TransportMagazines
		{
			class _xx_R3F_25Rnd_556x45_FAMAS
			{
				magazine="R3F_25Rnd_556x45_FAMAS";
				count=200;
			};
			class _xx_R3F_10Rnd_762x51_FRF2
			{
				magazine="R3F_10Rnd_762x51_FRF2";
				count=200;
			};
			class _xx_R3F_10Rnd_762x51_SD_FRF2
			{
				magazine="R3F_10Rnd_762x51_SD_FRF2";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_HK417
			{
				magazine="R3F_20Rnd_762x51_HK417";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_TRACER_HK417
			{
				magazine="R3F_20Rnd_762x51_TRACER_HK417";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_SD_HK417
			{
				magazine="R3F_20Rnd_762x51_SD_HK417";
				count=200;
			};
			class _xx_R3F_7Rnd_127x99_PGM
			{
				magazine="R3F_7Rnd_127x99_PGM";
				count=100;
			};
			class _xx_R3F_7Rnd_127x99_PEI_PGM
			{
				magazine="R3F_7Rnd_127x99_PEI_PGM";
				count=100;
			};
			class _xx_R3F_AT4CS_Mag
			{
				magazine="R3F_AT4CS_Mag";
				count=100;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine="200Rnd_556x45_M249";
				count=100;
			};
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=50;
			};
			class _xx_HandGrenade_West
			{
				magazine="HandGrenade_West";
				count=200;
			};
			class _xx_Smokeshell
			{
				magazine="Smokeshell";
				count=200;
			};
			class _xx_Smokeshellred
			{
				magazine="Smokeshellred";
				count=200;
			};
			class _xx_Smokeshellgreen
			{
				magazine="Smokeshellgreen";
				count=200;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=200;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=200;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=200;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=200;
			};
			class _xx_Mine
			{
				magazine="Mine";
				count=50;
			};
			class _xx_PipeBomb
			{
				magazine="PipeBomb";
				count=50;
			};
			class _xx_15Rnd_9x19_M9
			{
				magazine="15Rnd_9x19_M9";
				count=200;
			};
			class _xx_15Rnd_9x19_M9SD
			{
				magazine="15Rnd_9x19_M9SD";
				count=200;
			};
			class _xx_STINGER
			{
				magazine="STINGER";
				count=50;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=200;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=200;
			};
			class _xx_FlareGreen_M203
			{
				magazine="FlareGreen_M203";
				count=200;
			};
			class _xx_FlareRed_M203
			{
				magazine="FlareRed_M203";
				count=200;
			};
			class _xx_FlareYellow_M203
			{
				magazine="FlareYellow_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine="1Rnd_SmokeRed_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeGreen_M203
			{
				magazine="1Rnd_SmokeGreen_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeYellow_M203
			{
				magazine="1Rnd_SmokeYellow_M203";
				count=200;
			};
			class _xx_1Rnd_Smoke_M203
			{
				magazine="1Rnd_Smoke_M203";
				count=200;
			};
			class _xx_IRStrobe
			{
				magazine="IRStrobe";
				count=30;
			};
		};
		class TransportWeapons
		{
			class _xx_R3F_Famas_F1
			{
				weapon="R3F_Famas_F1";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT
			{
				weapon="R3F_Famas_F1_EOT";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_HG_SD
			{
				weapon="R3F_Famas_F1_EOT_HG_SD";
				count=50;
			};
			class _xx_R3F_Famas_F1_AIM
			{
				weapon="R3F_Famas_F1_AIM";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203
			{
				weapon="R3F_Famas_F1_J4_M203";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_SD
			{
				weapon="R3F_Famas_F1_J4_M203_SD";
				count=50;
			};
			class _xx_R3F_Famas_felin
			{
				weapon="R3F_Famas_felin";
				count=50;
			};
			class _xx_R3F_Famas_G2
			{
				weapon="R3F_Famas_G2";
				count=50;
			};
			class _xx_R3F_Famas_G2_EOT
			{
				weapon="R3F_Famas_G2_EOT";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4
			{
				weapon="R3F_Famas_G2_J4";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_HG
			{
				weapon="R3F_Famas_G2_J4_HG";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_M203
			{
				weapon="R3F_Famas_G2_AIM_M203";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_HG
			{
				weapon="R3F_Famas_G2_AIM_HG";
				count=50;
			};
			class _xx_R3F_Famas_surb
			{
				weapon="R3F_Famas_surb";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_SD
			{
				weapon="R3F_Famas_surb_EOT_SD";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_HG
			{
				weapon="R3F_Famas_surb_AIM_HG";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_SD
			{
				weapon="R3F_Famas_surb_AIM_SD";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_M203
			{
				weapon="R3F_Famas_surb_EOT_M203";
				count=50;
			};
			class _xx_R3F_FRF2_J8
			{
				weapon="R3F_FRF2_J8";
				count=50;
			};
			class _xx_R3F_FRF2_J8_SD
			{
				weapon="R3F_FRF2_J8_SD";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II
			{
				weapon="R3F_PGM_Hecate_II";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_MILDOT
			{
				weapon="R3F_PGM_Hecate_II_MILDOT";
				count=50;
			};
			class _xx_R3F_AT4CS
			{
				weapon="R3F_AT4CS";
				count=50;
			};
			class _xx_R3F_Minimi_EOT
			{
				weapon="R3F_Minimi_EOT";
				count=50;
			};
			class _xx_R3F_Minimi_J4
			{
				weapon="R3F_Minimi_J4";
				count=50;
			};
			class _xx_R3F_Minimi_762_J4
			{
				weapon="R3F_Minimi_762_J4";
				count=50;
			};
			class _xx_R3F_Minimi_762_OB50
			{
				weapon="R3F_Minimi_762_OB50";
				count=50;
			};
			class _xx_R3F_minimi_AIM_HG
			{
				weapon="R3F_minimi_AIM_HG";
				count=50;
			};
			class _xx_R3F_Minimi_762_EOT_HG
			{
				weapon="R3F_Minimi_762_EOT_HG";
				count=50;
			};
			class _xx_R3F_JIM_LR
			{
				weapon="R3F_JIM_LR";
				count=50;
			};
			class _xx_R3F_Famas_F1_DES
			{
				weapon="R3F_Famas_F1_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_DES
			{
				weapon="R3F_Famas_F1_EOT_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_HG_SD_DES
			{
				weapon="R3F_Famas_F1_EOT_HG_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_AIM_DES
			{
				weapon="R3F_Famas_F1_AIM_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_DES
			{
				weapon="R3F_Famas_F1_J4_M203_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_SD_DES
			{
				weapon="R3F_Famas_F1_J4_M203_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_felin_DES
			{
				weapon="R3F_Famas_felin_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_DES
			{
				weapon="R3F_Famas_G2_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_EOT_DES
			{
				weapon="R3F_Famas_G2_EOT_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_DES
			{
				weapon="R3F_Famas_G2_J4_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_HG_DES
			{
				weapon="R3F_Famas_G2_J4_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_M203_DES
			{
				weapon="R3F_Famas_G2_AIM_M203_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_HG_DES
			{
				weapon="R3F_Famas_G2_AIM_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_DES
			{
				weapon="R3F_Famas_surb_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_SD_DES
			{
				weapon="R3F_Famas_surb_EOT_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_HG_DES
			{
				weapon="R3F_Famas_surb_AIM_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_SD_DES
			{
				weapon="R3F_Famas_surb_AIM_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_M203_DES
			{
				weapon="R3F_Famas_surb_EOT_M203_DES";
				count=50;
			};
			class _xx_R3F_FRF2_J8_DES
			{
				weapon="R3F_FRF2_J8_DES";
				count=50;
			};
			class _xx_R3F_FRF2_J8_SD_DES
			{
				weapon="R3F_FRF2_J8_SD_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_DES
			{
				weapon="R3F_PGM_Hecate_II_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_MILDOT_DES
			{
				weapon="R3F_PGM_Hecate_II_MILDOT_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_POLY
			{
				weapon="R3F_PGM_Hecate_II_POLY";
				count=50;
			};
			class _xx_R3F_JIM_LR_DES
			{
				weapon="R3F_JIM_LR_DES";
				count=50;
			};
			class _xx_NVGoggles
			{
				weapon="NVGoggles";
				count=50;
			};
			class _xx_M9
			{
				weapon="M9";
				count=50;
			};
			class _xx_M9SD
			{
				weapon="M9SD";
				count=50;
			};
			class _xx_STINGER
			{
				weapon="STINGER";
				count=50;
			};
			class _xx_R3F_HK417L_NF
			{
				weapon="R3F_HK417L_NF";
				count=50;
			};
			class _xx_R3F_HK417M_AIM
			{
				weapon="R3F_HK417M_AIM";
				count=50;
			};
			class _xx_R3F_HK417L_NF_DES
			{
				weapon="R3F_HK417L_NF_DES";
				count=50;
			};
			class _xx_R3F_HK417M_AIM_DES
			{
				weapon="R3F_HK417M_AIM_DES";
				count=50;
			};
			class _xx_R3F_HK417S_EOT_HG
			{
				weapon="R3F_HK417S_EOT_HG";
				count=50;
			};
			class _xx_R3F_HK417S_EOT_HG_DES
			{
				weapon="R3F_HK417S_EOT_HG_DES";
				count=50;
			};
			class _xx_R3F_HK417S_HG_SD
			{
				weapon="R3F_HK417S_HG_SD";
				count=50;
			};
			class _xx_R3F_HK417S_HG_SD_DES
			{
				weapon="R3F_HK417S_HG_SD_DES";
				count=50;
			};
		};
	};
	class R3F_WeaponBox_Full_NoTherm: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_R3F_WeaponBox_Full_Notherm";
		model="\r3f_armes\R3F_AmmoBox.p3d";
		transportMaxMagazines=1000000000.000000;
		transportMaxWeapons=1000000000.000000;
		class TransportMagazines
		{
			class _xx_R3F_25Rnd_556x45_FAMAS
			{
				magazine="R3F_25Rnd_556x45_FAMAS";
				count=200;
			};
			class _xx_R3F_10Rnd_762x51_FRF2
			{
				magazine="R3F_10Rnd_762x51_FRF2";
				count=200;
			};
			class _xx_R3F_10Rnd_762x51_SD_FRF2
			{
				magazine="R3F_10Rnd_762x51_SD_FRF2";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_HK417
			{
				magazine="R3F_20Rnd_762x51_HK417";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_TRACER_HK417
			{
				magazine="R3F_20Rnd_762x51_TRACER_HK417";
				count=200;
			};
			class _xx_R3F_20Rnd_762x51_SD_HK417
			{
				magazine="R3F_20Rnd_762x51_SD_HK417";
				count=200;
			};
			class _xx_R3F_7Rnd_127x99_PGM
			{
				magazine="R3F_7Rnd_127x99_PGM";
				count=100;
			};
			class _xx_R3F_7Rnd_127x99_PEI_PGM
			{
				magazine="R3F_7Rnd_127x99_PEI_PGM";
				count=100;
			};
			class _xx_R3F_AT4CS_Mag
			{
				magazine="R3F_AT4CS_Mag";
				count=100;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine="200Rnd_556x45_M249";
				count=100;
			};
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=0;
			};
			class _xx_HandGrenade_West
			{
				magazine="HandGrenade_West";
				count=200;
			};
			class _xx_Smokeshell
			{
				magazine="Smokeshell";
				count=200;
			};
			class _xx_Smokeshellred
			{
				magazine="Smokeshellred";
				count=200;
			};
			class _xx_Smokeshellgreen
			{
				magazine="Smokeshellgreen";
				count=200;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=200;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=200;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=200;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=200;
			};
			class _xx_Mine
			{
				magazine="Mine";
				count=50;
			};
			class _xx_PipeBomb
			{
				magazine="PipeBomb";
				count=50;
			};
			class _xx_15Rnd_9x19_M9
			{
				magazine="15Rnd_9x19_M9";
				count=200;
			};
			class _xx_15Rnd_9x19_M9SD
			{
				magazine="15Rnd_9x19_M9SD";
				count=200;
			};
			class _xx_STINGER
			{
				magazine="STINGER";
				count=50;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=200;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=200;
			};
			class _xx_FlareGreen_M203
			{
				magazine="FlareGreen_M203";
				count=200;
			};
			class _xx_FlareRed_M203
			{
				magazine="FlareRed_M203";
				count=200;
			};
			class _xx_FlareYellow_M203
			{
				magazine="FlareYellow_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine="1Rnd_SmokeRed_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeGreen_M203
			{
				magazine="1Rnd_SmokeGreen_M203";
				count=200;
			};
			class _xx_1Rnd_SmokeYellow_M203
			{
				magazine="1Rnd_SmokeYellow_M203";
				count=200;
			};
			class _xx_1Rnd_Smoke_M203
			{
				magazine="1Rnd_Smoke_M203";
				count=200;
			};
			class _xx_IRStrobe
			{
				magazine="IRStrobe";
				count=30;
			};
		};
		class TransportWeapons
		{
			class _xx_R3F_Famas_F1
			{
				weapon="R3F_Famas_F1";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT
			{
				weapon="R3F_Famas_F1_EOT";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_HG_SD
			{
				weapon="R3F_Famas_F1_EOT_HG_SD";
				count=50;
			};
			class _xx_R3F_Famas_F1_AIM
			{
				weapon="R3F_Famas_F1_AIM";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203
			{
				weapon="R3F_Famas_F1_J4_M203";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_SD
			{
				weapon="R3F_Famas_F1_J4_M203_SD";
				count=50;
			};
			class _xx_R3F_Famas_felin
			{
				weapon="R3F_Famas_felin";
				count=0;
			};
			class _xx_R3F_Famas_G2
			{
				weapon="R3F_Famas_G2";
				count=50;
			};
			class _xx_R3F_Famas_G2_EOT
			{
				weapon="R3F_Famas_G2_EOT";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4
			{
				weapon="R3F_Famas_G2_J4";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_HG
			{
				weapon="R3F_Famas_G2_J4_HG";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_M203
			{
				weapon="R3F_Famas_G2_AIM_M203";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_HG
			{
				weapon="R3F_Famas_G2_AIM_HG";
				count=50;
			};
			class _xx_R3F_Famas_surb
			{
				weapon="R3F_Famas_surb";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_SD
			{
				weapon="R3F_Famas_surb_EOT_SD";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_HG
			{
				weapon="R3F_Famas_surb_AIM_HG";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_SD
			{
				weapon="R3F_Famas_surb_AIM_SD";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_M203
			{
				weapon="R3F_Famas_surb_EOT_M203";
				count=50;
			};
			class _xx_R3F_FRF2_J8
			{
				weapon="R3F_FRF2_J8";
				count=50;
			};
			class _xx_R3F_FRF2_J8_SD
			{
				weapon="R3F_FRF2_J8_SD";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II
			{
				weapon="R3F_PGM_Hecate_II";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_MILDOT
			{
				weapon="R3F_PGM_Hecate_II_MILDOT";
				count=50;
			};
			class _xx_R3F_AT4CS
			{
				weapon="R3F_AT4CS";
				count=50;
			};
			class _xx_R3F_Minimi_EOT
			{
				weapon="R3F_Minimi_EOT";
				count=50;
			};
			class _xx_R3F_Minimi_J4
			{
				weapon="R3F_Minimi_J4";
				count=50;
			};
			class _xx_R3F_Minimi_762_J4
			{
				weapon="R3F_Minimi_762_J4";
				count=50;
			};
			class _xx_R3F_Minimi_762_OB50
			{
				weapon="R3F_Minimi_762_OB50";
				count=50;
			};
			class _xx_R3F_minimi_AIM_HG
			{
				weapon="R3F_minimi_AIM_HG";
				count=50;
			};
			class _xx_R3F_Minimi_762_EOT_HG
			{
				weapon="R3F_Minimi_762_EOT_HG";
				count=50;
			};
			class _xx_R3F_JIM_LR
			{
				weapon="R3F_JIM_LR";
				count=0;
			};
			class _xx_R3F_Famas_F1_DES
			{
				weapon="R3F_Famas_F1_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_DES
			{
				weapon="R3F_Famas_F1_EOT_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_EOT_HG_SD_DES
			{
				weapon="R3F_Famas_F1_EOT_HG_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_AIM_DES
			{
				weapon="R3F_Famas_F1_AIM_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_DES
			{
				weapon="R3F_Famas_F1_J4_M203_DES";
				count=50;
			};
			class _xx_R3F_Famas_F1_J4_M203_SD_DES
			{
				weapon="R3F_Famas_F1_J4_M203_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_felin_DES
			{
				weapon="R3F_Famas_felin_DES";
				count=0;
			};
			class _xx_R3F_Famas_G2_DES
			{
				weapon="R3F_Famas_G2_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_EOT_DES
			{
				weapon="R3F_Famas_G2_EOT_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_DES
			{
				weapon="R3F_Famas_G2_J4_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_J4_HG_DES
			{
				weapon="R3F_Famas_G2_J4_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_M203_DES
			{
				weapon="R3F_Famas_G2_AIM_M203_DES";
				count=50;
			};
			class _xx_R3F_Famas_G2_AIM_HG_DES
			{
				weapon="R3F_Famas_G2_AIM_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_DES
			{
				weapon="R3F_Famas_surb_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_SD_DES
			{
				weapon="R3F_Famas_surb_EOT_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_HG_DES
			{
				weapon="R3F_Famas_surb_AIM_HG_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_AIM_SD_DES
			{
				weapon="R3F_Famas_surb_AIM_SD_DES";
				count=50;
			};
			class _xx_R3F_Famas_surb_EOT_M203_DES
			{
				weapon="R3F_Famas_surb_EOT_M203_DES";
				count=50;
			};
			class _xx_R3F_FRF2_J8_DES
			{
				weapon="R3F_FRF2_J8_DES";
				count=50;
			};
			class _xx_R3F_FRF2_J8_SD_DES
			{
				weapon="R3F_FRF2_J8_SD_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_DES
			{
				weapon="R3F_PGM_Hecate_II_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_MILDOT_DES
			{
				weapon="R3F_PGM_Hecate_II_MILDOT_DES";
				count=50;
			};
			class _xx_R3F_PGM_Hecate_II_POLY
			{
				weapon="R3F_PGM_Hecate_II_POLY";
				count=50;
			};
			class _xx_R3F_JIM_LR_DES
			{
				weapon="R3F_JIM_LR_DES";
				count=0;
			};
			class _xx_NVGoggles
			{
				weapon="NVGoggles";
				count=50;
			};
			class _xx_M9
			{
				weapon="M9";
				count=50;
			};
			class _xx_M9SD
			{
				weapon="M9SD";
				count=50;
			};
			class _xx_STINGER
			{
				weapon="STINGER";
				count=50;
			};
			class _xx_Binocular_Vector
			{
				weapon="Binocular_Vector";
				count=50;
			};
			class _xx_R3F_HK417L_NF
			{
				weapon="R3F_HK417L_NF";
				count=50;
			};
			class _xx_R3F_HK417M_AIM
			{
				weapon="R3F_HK417M_AIM";
				count=50;
			};
			class _xx_R3F_HK417L_NF_DES
			{
				weapon="R3F_HK417L_NF_DES";
				count=50;
			};
			class _xx_R3F_HK417M_AIM_DES
			{
				weapon="R3F_HK417M_AIM_DES";
				count=50;
			};
			class _xx_R3F_HK417S_EOT_HG
			{
				weapon="R3F_HK417S_EOT_HG";
				count=50;
			};
			class _xx_R3F_HK417S_EOT_HG_DES
			{
				weapon="R3F_HK417S_EOT_HG_DES";
				count=50;
			};
			class _xx_R3F_HK417S_HG_SD
			{
				weapon="R3F_HK417S_HG_SD";
				count=50;
			};
			class _xx_R3F_HK417S_HG_SD_DES
			{
				weapon="R3F_HK417S_HG_SD_DES";
				count=50;
			};
		};
	};
};
