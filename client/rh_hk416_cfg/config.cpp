class CfgPatches
{
	class RH_hk416_cfg
	{
		units[]=
		{
			"RHhk416ammobox"
		};
		weapons[]=
		{
			"RH_hk416",
			"RH_hk416aim",
			"RH_hk416acog",
			"RH_hk416eotech",
			"RH_hk416sd",
			"RH_hk416sdaim",
			"RH_hk416sdeotech",
			"RH_hk416gl",
			"RH_hk416glaim",
			"RH_hk416glacog",
			"RH_hk416gleotech",
			"RH_hk416sdgl",
			"RH_hk416sdglaim",
			"RH_hk416sdgleotech",
			"RH_hk416s",
			"RH_hk416saim",
			"RH_hk416seotech",
			"RH_hk416sacog",
			"RH_hk416sgl",
			"RH_hk416sglaim",
			"RH_hk416sgleotech",
			"RH_hk416sglacog",
			"RH_ctar21",
			"RH_ctar21glacog",
			"RH_ctar21m",
			"RH_ctar21mgl",
			"RH_star21",
			"RH_hk417",
			"RH_hk417aim",
			"RH_hk417acog",
			"RH_hk417eotech",
			"RH_hk417sp",
			"RH_hk417sd",
			"RH_hk417sdaim",
			"RH_hk417sdacog",
			"RH_hk417sdeotech",
			"RH_hk417sdsp",
			"RH_hk417s",
			"RH_hk417saim",
			"RH_hk417sacog",
			"RH_hk417seotech",
			"RH_hk417sgl",
			"RH_hk417sglaim",
			"RH_hk417sglacog",
			"RH_hk417sgleotech",
			"RH_acr",
			"RH_acracog",
			"RH_acraim",
			"RH_acreotech",
			"RH_acrgl",
			"RH_acrglacog",
			"RH_acrglaim",
			"RH_acrgleotech",
			"RH_acrb",
			"RH_acrbacog",
			"RH_acrbaim",
			"RH_acrbeotech",
			"RH_acrbgl",
			"RH_acrbglacog",
			"RH_acrbglaim",
			"RH_acrbgleotech",
			"RH_mas",
			"RH_masacog",
			"RH_masaim",
			"RH_maseotech",
			"RH_masb",
			"RH_masbacog",
			"RH_masbaim",
			"RH_masbeotech",
			"RH_massd",
			"RH_massdacog",
			"RH_massdaim",
			"RH_massdeotech",
			"RH_masbsd",
			"RH_masbsdacog",
			"RH_masbsdaim",
			"RH_masbsdeotech"
		};
		requiredVersion=1.020000;
		requiredAddons[]=
		{
			"CAweapons"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class RH_hk416_cfg
		{
			list[]=
			{
				"RH_hk416_cfg"
			};
		};
	};
};
class cfgRecoils
{
	RH_assaultRiflesBasehk[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000500,0.140000,0,0};
	RH_assaultRiflesBasePronehk[]={0,0.005000,0.005000,0.005000,0.010000,0.009000,0.075000,0.005000,-0.000300,0.130000,0,0};
	RH_Hk416Recoil[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000400,0.130000,0,0};
	RH_Hk417_Recoil[]={0,0.014000,0.015000,0.020000,0.014000,0.015000,0.070000,0.005000,0.018000,0.130000,0,0};
	RH_Hk417_RecoilProne[]={0,0.010000,0.006000,0.013000,0.010000,0.006000,0.100000,0.008000,0.001000,0.120000,0,0};
	RH_AG36GLBase[]={0,0.030000,0.050000,0.130000,0.010000,-0.001000,0.260000,0,0};
};
class Mode_SemiAuto
{
};
class Mode_Burst: Mode_SemiAuto
{
};
class Mode_FullAuto: Mode_SemiAuto
{
};
class cfgWeapons
{
	class Default;
	class PistolCore;
	class Pistol;
	class RifleCore;
	class MGunCore;
	class LauncherCore;
	class GrenadeCore;
	class CannonCore;
	class Launcher;
	class GrenadeLauncher: Default
	{
	};
	class RocketPods: LauncherCore
	{
	};
	class MissileLauncher: LauncherCore
	{
	};
	class MGun: MGunCore
	{
	};
	class Rifle: RifleCore
	{
	};
	class M16_base: Rifle
	{
		class Single: Mode_SemiAuto
		{
		};
		class Burst: Mode_Burst
		{
		};
		class FullAuto: Mode_FullAuto
		{
		};
	};
	class M4A1: M16_base
	{
	};
	class M4SPR: M4A1
	{
	};
	class M16A2: M16_base
	{
	};
	class RH_hk416: M4A1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416aim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk416eotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416acog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416gl";
			};
			class UseAtt4 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416sd";
			};
		};
		scope=2;
		model="\RH_hk416\RH_hk416.p3d";
		picture="\RH_hk416\inv\hk416.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		optics=1;
		opticsDisablePeripherialVision=1;
		displayName="HK416";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\Hk416_anim.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_hk416\sound\Hk416_Reload.wss",
			0.056234,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk416.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000;
			dispersion=0.002500;
			recoil="RH_hk416Recoil";
			recoilProne="RH_assaultRiflesBasePronehk";
			minRange=2;
			minRangeProbab=0.100000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk416.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000;
			recoil="RH_hk416Recoil";
			recoilProne="RH_assaultRiflesBasePronehk";
			dispersion=0.002500;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=90;
			maxRangeProbab=0.050000;
		};
	};
	class RH_hk416s: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416saim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk416seotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416sacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sgl";
			};
		};
		displayName="Hk416 Cqb";
		model="\RH_hk416\RH_hk416s.p3d";
		picture="\RH_hk416\inv\hk416s.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\hk416cqb_anim.rtm"
		};
	};
	class RH_hk416saim: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416s";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sglaim";
			};
		};
		displayName="Hk416 Cqb Aimpoint";
		model="\RH_hk416\RH_hk416saim.p3d";
		picture="\RH_hk416\inv\hk416saim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk416seotech: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk416s";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sgleotech";
			};
		};
		displayName="Hk416 Cqb Eotech";
		model="\RH_hk416\RH_hk416seotech.p3d";
		picture="\RH_hk416\inv\hk416seotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk416sacog: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416s";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sglacog";
			};
		};
		displayName="Hk416 Cqb Acog";
		model="\RH_hk416\RH_hk416sacog.p3d";
		picture="\RH_hk416\inv\hk416sacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_hk416sd: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416sdaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk416sdeotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416sdacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sdgl";
			};
			class UseAtt4 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416";
			};
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		displayName="Hk416 SD";
		model="\RH_hk416\RH_hk416sd.p3d";
		picture="\RH_hk416\inv\hk416sd.paa";
		opticsDisablePeripherialVision=1;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk416sd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk416sd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_hk416sdaim: RH_hk416sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416aim";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sdglaim";
			};
		};
		displayName="Hk416 SD Aimpoint";
		model="\RH_hk416\RH_hk416sdaim.p3d";
		picture="\RH_hk416\inv\hk416sdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk416sdeotech: RH_hk416sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk416sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416eotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416sdgleotech";
			};
		};
		displayName="Hk416 SD Eotech";
		model="\RH_hk416\RH_hk416sdeotech.p3d";
		picture="\RH_hk416\inv\hk416sdeotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk416aim: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_hk416";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416sdaim";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416glaim";
			};
		};
		displayName="Hk416 Aimpoint";
		model="\RH_hk416\RH_hk416aim.p3d";
		picture="\RH_hk416\inv\hk416aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk416eotech: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk416sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416sdeotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416gleotech";
			};
		};
		displayName="Hk416 Eotech";
		model="\RH_hk416\RH_hk416eotech.p3d";
		picture="\RH_hk416\inv\hk416eotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk416acog: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk416glacog";
			};
		};
		displayName="Hk416 Acog";
		model="\RH_hk416\RH_hk416acog.p3d";
		picture="\RH_hk416\inv\hk416acog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_hk416gl: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416glaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk416gleotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416glacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416sdgl";
			};
			class UseAtt5 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416";
			};
		};
		displayName="Hk416 AG36";
		model="\RH_hk416\RH_hk416gl.p3d";
		picture="\RH_hk416\inv\hk416gl.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416glaim: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416gl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416aim";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416sdglaim";
			};
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		displayName="HK416 Aimpoint AG36";
		model="\RH_hk416\RH_hk416glaim.p3d";
		picture="\RH_hk416\inv\hk416glaim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"RH_hk416Muzzle",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_hk416Muzzle: RH_hk416
		{
			opticsDisablePeripherialVision=1;
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416gleotech: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk416gl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416eotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416sdgleotech";
			};
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		displayName="Hk416 Eotech AG36";
		model="\RH_hk416\RH_hk416gleotech.p3d";
		picture="\RH_hk416\inv\Hk416gleotech.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416glacog: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_hk416gl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416acog";
			};
		};
		displayName="Hk416 Acog AG36";
		model="\RH_hk416\RH_hk416glacog.p3d";
		picture="\RH_hk416\inv\hk416glacog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		modelOptics="\RH_hk416\NWD_acog_ta31f"; //TODO(Jukki) Try if this is the right way to do it
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sgl: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416sglaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk416sgleotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416sglacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416s";
			};
		};
		displayName="Hk416 Cqb M203";
		model="\RH_hk416\RH_hk416sgl.p3d";
		picture="\RH_hk416\inv\hk416sgl.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sglaim: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_hk416sgl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416saim";
			};
		};
		displayName="HK416 Cqb Aimpoint M203";
		model="\RH_hk416\RH_hk416sglaim.p3d";
		picture="\RH_hk416\inv\hk416sglaim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sgleotech: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk416sgl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416seotech";
			};
		};
		displayName="Hk416 Cqb Eotech M203";
		model="\RH_hk416\RH_hk416sgleotech.p3d";
		picture="\RH_hk416\inv\Hk416sgleotech.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sglacog: RH_hk416s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk416sgl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416sacog";
			};
		};
		displayName="Hk416 Cqb Acog M203";
		model="\RH_hk416\RH_hk416sglacog.p3d";
		picture="\RH_hk416\inv\hk416sglacog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		class ACOG
		{
			opticsID=1;
			useModelOptics=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"OpticsBlur1"
			};
			opticsZoomMin=0.071945;
			opticsZoomMax=0.071945;
			opticsZoomInit=0.071945;
			memoryPointCamera="opticView";
			visionMode[]=
			{
				"Normal"
			};
			opticsFlare="true";
			opticsDisablePeripherialVision="true";
			distanceZoomMin=189;
			distanceZoomMax=189;
			cameraDir="";
		};
		class Kolimator: ACOG
		{
			opticsID=2;
			useModelOptics=0;
			opticsFlare="false";
			opticsDisablePeripherialVision="false";
			opticsZoomMin=0.250000;
			opticsZoomMax=1.100000;
			opticsZoomInit=0.500000;
			memoryPointCamera="eye";
			visionMode[]={};
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sdgl: RH_hk416sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416sdglaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk416sdgleotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416gl";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416sd";
			};
		};
		displayName="Hk416 SD AG36";
		model="\RH_hk416\RH_hk416sdgl.p3d";
		picture="\RH_hk416\inv\hk416sdgl.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sdglaim: RH_hk416sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_hk416sdgl";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416glaim";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416sdaim";
			};
		};
		displayName="HK416 SD Aimpoint AG36";
		model="\RH_hk416\RH_hk416sdglaim.p3d";
		picture="\RH_hk416\inv\hk416sdglaim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk416sdgleotech: RH_hk416sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk416sdgl";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_hk416gleotech";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk416sdeotech";
			};
		};
		displayName="Hk416 SD Eotech AG36";
		model="\RH_hk416\RH_hk416sdgleotech.p3d";
		picture="\RH_hk416\inv\hk416sdgleotech.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk417: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk417aim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk417eotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417acog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_hk417sp";
			};
			class UseAtt4 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417sd";
			};
		};
		displayName="Hk417";
		model="\RH_hk416\RH_hk417.p3d";
		picture="\RH_hk416\inv\hk417.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		descriptionShort="HK417 is a battle rifle designed and manufactured in Germany by HK. It is essentially an enlarged HK416. Chambered for the 7.62x51mm NATO round";
		reloadMagazineSound[]=
		{
			"\RH_hk416\sound\Hk416_Reload.wss",
			0.056234,
			1,
			20
		};
		magazines[]=
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"RH_20Rnd_762x51_hk417",
			"RH_20Rnd_762x51_hk417",
			"RH_20Rnd_762x51_hk417SD",
			"RH_20Rnd_762x51_hk417_hp",
			"RH_20Rnd_762x51_hk417_tracer",
			"RH_20Rnd_762x51_hk417_rubber",
			"RH_20Rnd_762x51_hk417_bt"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk417.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.001500;
			reloadTime=0.100000;
			recoil="RH_Hk417_Recoil";
			recoilProne="RH_Hk417_RecoilProne";
			minRange=2;
			minRangeProbab=0.100000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.500000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk417.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.004000;
			reloadTime=0.100000;
			recoil="RH_Hk417_Recoil";
			recoilProne="RH_Hk417_RecoilProne";
			minRange=2;
			minRangeProbab=0.100000;
			midRange=50;
			midRangeProbab=0.580000;
			maxRange=100;
			maxRangeProbab=0.040000;
		};
	};
	class RH_hk417aim: RH_hk417
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_hk417";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417sdaim";
			};
		};
		displayName="Hk417 Aimpoint";
		model="\RH_hk416\RH_hk417aim.p3d";
		picture="\RH_hk416\inv\hk417aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk417eotech: RH_hk417
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417sdeotech";
			};
		};
		displayName="Hk417 Eotech";
		model="\RH_hk416\RH_hk417eotech.p3d";
		picture="\RH_hk416\inv\hk417eotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk417acog: RH_hk417
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417sdacog";
			};
		};
		displayName="Hk417 Acog";
		model="\RH_hk416\RH_hk417acog.p3d";
		picture="\RH_hk416\inv\hk417acog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_hk417sp: RH_hk417
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417sdsp";
			};
		};
		displayName="Hk417 Sniper";
		model="\RH_hk416\RH_hk417sp.p3d";
		picture="\RH_hk416\inv\hk417sp.paa";
		modelOptics="\RH_hk416\fnc_875x_illum_round_mildot.p3d";
		optics=1;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.033574;
				opticsZoomMax=0.087666;
				opticsZoomInit=0.087666;
				memoryPointCamera="eye";
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=325;
				distanceZoomMax=325;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex=2;
			};
		};
	};
	class RH_hk417s: RH_hk417
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk417saim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk417seotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417sacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk417sgl";
			};
		};
		displayName="Hk417 Cqb";
		model="\RH_hk416\RH_hk417s.p3d";
		picture="\RH_hk416\inv\hk417s.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
	};
	class RH_hk417saim: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_hk417s";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk417sglaim";
			};
		};
		displayName="Hk417 Cqb Aimpoint";
		model="\RH_hk416\RH_hk417saim.p3d";
		picture="\RH_hk416\inv\hk417saim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk417seotech: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk417s";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk417sgleotech";
			};
		};
		displayName="Hk417 Cqb Eotech";
		model="\RH_hk416\RH_hk417seotech.p3d";
		picture="\RH_hk416\inv\hk417seotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk417sacog: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_hk417s";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_hk417sglacog";
			};
		};
		displayName="Hk417 Cqb Acog";
		model="\RH_hk416\RH_hk417sacog.p3d";
		picture="\RH_hk416\inv\hk417sacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_hk417sd: RH_hk417
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk417sdaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk417sdeotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417sdacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_hk417sdsp";
			};
			class UseAtt4 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417";
			};
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		displayName="Hk417 SD";
		model="\RH_hk416\RH_hk417sd.p3d";
		picture="\RH_hk416\inv\hk417sd.paa";
		opticsDisablePeripherialVision=1;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk417sd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\hk417sd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_hk417sdaim: RH_hk417sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417aim";
			};
		};
		displayName="Hk417 SD Aimpoint";
		model="\RH_hk416\RH_hk417sdaim.p3d";
		picture="\RH_hk416\inv\hk417sdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk417sdeotech: RH_hk417sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417eotech";
			};
		};
		displayName="Hk417 SD Eotech";
		model="\RH_hk416\RH_hk417sdeotech.p3d";
		picture="\RH_hk416\inv\hk417sdeotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_hk417sdacog: RH_hk417sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417acog";
			};
		};
		displayName="Hk417 SD Acog";
		model="\RH_hk416\RH_hk417sdacog.p3d";
		picture="\RH_hk416\inv\hk417sdacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_hk417sdsp: RH_hk417sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_hk417sd";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_hk417sp";
			};
		};
		displayName="Hk417 SD Sniper";
		model="\RH_hk416\RH_hk417sdsp.p3d";
		picture="\RH_hk416\inv\hk417sdsp.paa";
		modelOptics="\RH_hk416\fnc_875x_illum_round_mildot.p3d";
		optics=1;
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.033574;
				opticsZoomMax=0.087666;
				opticsZoomInit=0.087666;
				memoryPointCamera="eye";
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=325;
				distanceZoomMax=325;
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				discreteDistance[]={100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex=2;
			};
		};
	};
	class RH_hk417sgl: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_hk417sglaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_hk417sgleotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417sglacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk417s";
			};
		};
		displayName="Hk417c AG36";
		model="\RH_hk416\RH_hk417sgl.p3d";
		picture="\RH_hk416\inv\hk417sgl.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk417sglaim: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_hk417sgl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk417saim";
			};
		};
		displayName="Hk417c Aimpoint AG36";
		model="\RH_hk416\RH_hk417sglaim.p3d";
		picture="\RH_hk416\inv\hk417sglaim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk417sgleotech: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_hk417sgl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk417seotech";
			};
		};
		displayName="Hk417c Eotech AG36";
		model="\RH_hk416\RH_hk417sgleotech.p3d";
		picture="\RH_hk416\inv\hk417sgleotech.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_hk417sglacog: RH_hk417s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_hk417sgl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_hk417sacog";
			};
		};
		displayName="Hk417c Acog AG36";
		model="\RH_hk416\RH_hk417sglacog.p3d";
		picture="\RH_hk416\inv\hk417sglacog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		modelOptics="\RH_hk416\NWD_acog_ta31f";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		muzzles[]=
		{
			"this",
			"RH_AG36Muzzle"
		};
		dexterity=1.590000;
		class RH_AG36Muzzle: GrenadeLauncher
		{
			displayName="AG36";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_ctar21: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_ctar21m";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_ctar21gl";
			};
		};
		displayName="CTAR 21";
		model="\RH_hk416\RH_ctar21.p3d";
		picture="\RH_hk416\inv\ctar21.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CA\weapons\Data\Anim\Bizon.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_hk416\sound\ctar21_Reload.wss",
			0.056234,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\ctar21.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\ctar21.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_ctar21glacog: RH_ctar21
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_ctar21gl";
			};
		};
		displayName="CTAR 21 Acog M203";
		model="\RH_hk416\RH_ctar21glacog.p3d";
		picture="\RH_hk416\inv\ctar21glacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_scargl.rtm"
		};
		dexterity=1.590000;

		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle"
		};
		class RH_M203Muzzle: GrenadeLauncher
		{
			displayName="M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_ctar21m: RH_ctar21
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_ctar21";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_ctar21mgl";
			};
		};
		displayName="CTAR 21 Mars";
		model="\RH_hk416\RH_ctar21m.p3d";
		picture="\RH_hk416\inv\ctar21m.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		irDistance=100;
	};
	class RH_ctar21mgl: RH_ctar21
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_ctar21gl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_ctar21m";
			};
		};
		displayName="CTAR 21 Mars M203";
		model="\RH_hk416\RH_ctar21mgl.p3d";
		picture="\RH_hk416\inv\ctar21mgl.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
		irDistance=100;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle"
		};
		dexterity=1.590000;
		class RH_M203Muzzle: GrenadeLauncher
		{
			displayName="M203";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_star21: RH_ctar21
	{
		delete ItemActions;
		displayName="STAR 21 Acog";
		model="\RH_hk416\RH_star21.p3d";
		picture="\RH_hk416\inv\star21.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_mas: RH_hk416
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_masaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_maseotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_masacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_massd";
			};
		};
		displayName="Magpul Masada";
		model="\RH_hk416\RH_mas.p3d";
		picture="\RH_hk416\inv\mas.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		reloadMagazineSound[]=
		{
			"\RH_hk416\sound\ctar21_Reload.wss",
			0.056234,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\acr.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\acr.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_masaim: RH_mas
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_mas";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_massdaim";
			};
		};
		displayName="Magp Masada Aimpoint";
		model="\RH_hk416\RH_masaim.p3d";
		picture="\RH_hk416\inv\masaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_maseotech: RH_mas
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_mas";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_massdeotech";
			};
		};
		displayName="Magp Masada Eotech";
		model="\RH_hk416\RH_maseotech.p3d";
		picture="\RH_hk416\inv\maseotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_masacog: RH_mas
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_mas";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_massdacog";
			};
		};
		displayName="Magp Masada Acog";
		model="\RH_hk416\RH_masacog.p3d";
		picture="\RH_hk416\inv\masacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_massd: RH_mas
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_massdaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_massdeotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_massdacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_mas";
			};
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		displayName="Masada SD";
		model="\RH_hk416\RH_massd.p3d";
		picture="\RH_hk416\inv\massd.paa";
		opticsDisablePeripherialVision=1;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\massd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\massd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_massdaim: RH_massd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_massd";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masaim";
			};
		};
		displayName="Masada SD Aimpoint";
		model="\RH_hk416\RH_massdaim.p3d";
		picture="\RH_hk416\inv\massdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_massdeotech: RH_massd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_massd";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_maseotech";
			};
		};
		displayName="Masada SD Eotech";
		model="\RH_hk416\RH_massdeotech.p3d";
		picture="\RH_hk416\inv\massdeotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_massdacog: RH_massd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_massd";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masacog";
			};
		};
		displayName="Masada SD Acog";
		model="\RH_hk416\RH_massdacog.p3d";
		picture="\RH_hk416\inv\massdacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_masb: RH_mas
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_masbaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_masbeotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_masbacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbsd";
			};
		};
		displayName="Magp Masada Black";
		model="\RH_hk416\RH_masb.p3d";
		picture="\RH_hk416\inv\masb.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
	};
	class RH_masbaim: RH_masb
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_masb";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbsdaim";
			};
		};
		displayName="Magp Masada Aimpoint Black";
		model="\RH_hk416\RH_masbaim.p3d";
		picture="\RH_hk416\inv\masbaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_masbeotech: RH_masb
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_masb";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbsdeotech";
			};
		};
		displayName="Magp Masada Eotech Black";
		model="\RH_hk416\RH_masbeotech.p3d";
		picture="\RH_hk416\inv\masbeotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_masbacog: RH_masb
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_masb";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbsdacog";
			};
		};
		displayName="Magp Masada Acog Black";
		model="\RH_hk416\RH_masbacog.p3d";
		picture="\RH_hk416\inv\masbacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_masbsd: RH_masb
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach CCO";
				att = "Attachment_CCO";
				out = "RH_masbsdaim";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach HOLO";
				att = "Attachment_HOLO";
				out = "RH_masbsdeotech";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_masbsdacog";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masb";
			};
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		displayName="Masada SD Black";
		model="\RH_hk416\RH_masbsd.p3d";
		picture="\RH_hk416\inv\masbsd.paa";
		opticsDisablePeripherialVision=1;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\massd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\massd.wss",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_masbsdaim: RH_masbsd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach CCO";
				att = "Attachment_CCO";
				out = "RH_masbsd";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbaim";
			};
		};
		displayName="Masada SD Aimpoint Black";
		model="\RH_hk416\RH_masbsdaim.p3d";
		picture="\RH_hk416\inv\masbsdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_masbsdeotech: RH_masbsd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_masbsd";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbeotech";
			};
		};
		displayName="Masada SD Eotech Black";
		model="\RH_hk416\RH_masbsdeotech.p3d";
		picture="\RH_hk416\inv\masbsdeotech.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_masbsdacog: RH_masbsd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_masbsd";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_masbacog";
			};
		};
		displayName="Masada SD Acog Black";
		model="\RH_hk416\RH_masbsdacog.p3d";
		picture="\RH_hk416\inv\masbsdacog.paa";
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_acr: RH_hk416
	{
		displayName="Bushmaster ACR";
		model="\RH_hk416\RH_acr.p3d";
		picture="\RH_hk416\inv\acr.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		reloadMagazineSound[]=
		{
			"\RH_hk416\sound\ctar21_Reload.wss",
			0.056234,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_hk416\sound\acr.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_hk416\sound\acr.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_acraim: RH_acr
	{
		displayName="Bush ACR Aimpoint";
		model="\RH_hk416\RH_acraim.p3d";
		picture="\RH_hk416\inv\acraim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_acrgrip.rtm"
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_acreotech: RH_acr
	{
		displayName="Bush ACR Eotech";
		model="\RH_hk416\RH_acreotech.p3d";
		picture="\RH_hk416\inv\acreotech.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_acrgrip.rtm"
		};
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_acracog: RH_acr
	{
		displayName="Bush ACR Acog";
		model="\RH_hk416\RH_acracog.p3d";
		picture="\RH_hk416\inv\acracog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_acrgrip.rtm"
		};
		modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.071945;
				opticsZoomMax=0.071945;
				opticsZoomInit=0.071945;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
	};
	class RH_acrgl: RH_acr
	{
		displayName="Bush ACR ELGM";
		model="\RH_hk416\RH_acrgl.p3d";
		picture="\RH_hk416\inv\acrgl.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"RH_acrMuzzle",
			"RH_ELGMMuzzle"
		};
		dexterity=1.590000;
		class RH_acrMuzzle: RH_acr
		{
		};
		class RH_ELGMMuzzle: GrenadeLauncher
		{
			displayName="ELGM";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_acrglaim: RH_acrgl
	{
		displayName="Bush ACR Aimpoint ELGM";
		model="\RH_hk416\RH_acrglaim.p3d";
		picture="\RH_hk416\inv\acrglaim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"RH_acrMuzzle",
			"RH_ELGMMuzzle"
		};
		dexterity=1.590000;
		class RH_acrMuzzle: RH_acr
		{
			opticsDisablePeripherialVision=1;
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class RH_ELGMMuzzle: GrenadeLauncher
		{
			displayName="ELGM";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_acrgleotech: RH_acrgl
	{
		displayName="Bush ACR Eotech ELGM";
		model="\RH_hk416\RH_acrgleotech.p3d";
		picture="\RH_hk416\inv\acrgleotech.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"RH_acrMuzzle",
			"RH_ELGMMuzzle"
		};
		dexterity=1.590000;
		class RH_acrMuzzle: RH_acr
		{
			opticsDisablePeripherialVision=1;
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class RH_ELGMMuzzle: GrenadeLauncher
		{
			displayName="ELGM";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_acrglacog: RH_acrgl
	{
		displayName="Bush ACR Acog ELGM";
		model="\RH_hk416\RH_acrglacog.p3d";
		picture="\RH_hk416\inv\acrglacog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_hk416\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"RH_acrMuzzle",
			"RH_ELGMMuzzle"
		};
		dexterity=1.590000;
		class RH_acrMuzzle: RH_acr
		{
			modelOptics="\RH_hk416\NWD_acog_ta31f.p3d";
			class OpticsModes
			{
				class ACOG
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.071945;
					opticsZoomMax=0.071945;
					opticsZoomInit=0.071945;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare="true";
					opticsDisablePeripherialVision="true";
					distanceZoomMin=189;
					distanceZoomMax=189;
					cameraDir="";
				};
				class Kolimator: ACOG
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare="false";
					opticsDisablePeripherialVision="false";
					opticsZoomMin=0.250000;
					opticsZoomMax=1.100000;
					opticsZoomInit=0.500000;
					memoryPointCamera="eye";
					visionMode[]={};
				};
			};
		};
		class RH_ELGMMuzzle: GrenadeLauncher
		{
			displayName="ELGM";
			magazines[]=
			{
				"1Rnd_HE_M203",
				"FlareWhite_M203",
				"FlareGreen_M203",
				"FlareRed_M203",
				"FlareYellow_M203",
				"1Rnd_Smoke_M203",
				"1Rnd_SmokeRed_M203",
				"1Rnd_SmokeGreen_M203",
				"1Rnd_SmokeYellow_M203"
			};
			sound[]=
			{
				"\RH_hk416\sound\AG36.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_hk416\sound\AG36_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			recoil="RH_AG36GLbase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.220000;
			opticsZoomMax=0.950000;
			opticsZoomInit=0.420000;
		};
	};
	class RH_acrb: RH_acr
	{
		displayName="Bushmaster ACR Black";
		model="\RH_hk416\RH_acrb.p3d";
		picture="\RH_hk416\inv\acrb.paa";
	};
	class RH_acrbaim: RH_acraim
	{
		displayName="Bush ACR Aimpoint Black";
		model="\RH_hk416\RH_acrbaim.p3d";
		picture="\RH_hk416\inv\acrbaim.paa";
	};
	class RH_acrbeotech: RH_acreotech
	{
		displayName="Bush ACR Eotech Black";
		model="\RH_hk416\RH_acrbeotech.p3d";
		picture="\RH_hk416\inv\acrbeotech.paa";
	};
	class RH_acrbacog: RH_acracog
	{
		displayName="Bush ACR Acog Black";
		model="\RH_hk416\RH_acrbacog.p3d";
		picture="\RH_hk416\inv\acrbacog.paa";
	};
	class RH_acrbgl: RH_acrgl
	{
		displayName="Bush ACR ELGM Black";
		model="\RH_hk416\RH_acrbgl.p3d";
		picture="\RH_hk416\inv\acrbgl.paa";
	};
	class RH_acrbglaim: RH_acrglaim
	{
		displayName="Bush ACR Aimpoint ELGM Black";
		model="\RH_hk416\RH_acrbglaim.p3d";
		picture="\RH_hk416\inv\acrbglaim.paa";
	};
	class RH_acrbgleotech: RH_acrgleotech
	{
		displayName="Bush ACR Eotech ELGM Black";
		model="\RH_hk416\RH_acrbgleotech.p3d";
		picture="\RH_hk416\inv\acrbgleotech.paa";
	};
	class RH_acrbglacog: RH_acrglacog
	{
		displayName="Bush ACR Acog ELGM Black";
		model="\RH_hk416\RH_acrbglacog.p3d";
		picture="\RH_hk416\inv\acrbglacog.paa";
	};
};
class cfgVehicles
{
	class ReammoBox;
	class RHhk416ammobox: ReammoBox
	{
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="RH Hk416 weapons box";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=200;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine="30Rnd_556x45_StanagSD";
				count=200;
			};
			class _xx_RH_20Rnd_762x51_hk417
			{
				magazine="RH_20Rnd_762x51_hk417";
				count=200;
			};
			class _xx_20Rnd_762x51_DMR
			{
				magazine="20Rnd_762x51_DMR";
				count=200;
			};
			class _xx_1rnd_HE_M203
			{
				magazine="1rnd_HE_M203";
				count=30;
			};
			class _xx_HandGrenade_West
			{
				magazine="HandGrenade_West";
				count=50;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=6;
			};
			class _xx_FlareRed_M203
			{
				magazine="FlareRed_M203";
				count=6;
			};
			class _xx_FlareGreen_M203
			{
				magazine="FlareGreen_M203";
				count=6;
			};
			class _xx_FlareYellow_M203
			{
				magazine="FlareYellow_M203";
				count=6;
			};
		};
		class TransportWeapons
		{
			class _xx_RH_hk416
			{
				weapon="RH_hk416";
				count=6;
			};
			class _xx_RH_hk416s
			{
				weapon="RH_hk416s";
				count=6;
			};
			class _xx_RH_hk416saim
			{
				weapon="RH_hk416saim";
				count=6;
			};
			class _xx_RH_hk416seotech
			{
				weapon="RH_hk416seotech";
				count=6;
			};
			class _xx_RH_hk416sacog
			{
				weapon="RH_hk416sacog";
				count=6;
			};
			class _xx_RH_hk416GL
			{
				weapon="RH_hk416GL";
				count=6;
			};
			class _xx_RH_hk416GLACOG
			{
				weapon="RH_hk416GLACOG";
				count=6;
			};
			class _xx_RH_hk416GLAim
			{
				weapon="RH_hk416GLaim";
				count=6;
			};
			class _xx_RH_hk416GLeotech
			{
				weapon="RH_hk416GLeotech";
				count=6;
			};
			class _xx_RH_hk416sGL
			{
				weapon="RH_hk416sGL";
				count=6;
			};
			class _xx_RH_hk416sGLACOG
			{
				weapon="RH_hk416sGLACOG";
				count=6;
			};
			class _xx_RH_hk416sGLAim
			{
				weapon="RH_hk416sGLaim";
				count=6;
			};
			class _xx_RH_hk416sGLeotech
			{
				weapon="RH_hk416sGLeotech";
				count=6;
			};
			class _xx_RH_hk416SD
			{
				weapon="RH_hk416SD";
				count=6;
			};
			class _xx_RH_hk416SDAIM
			{
				weapon="RH_hk416SDAIM";
				count=6;
			};
			class _xx_RH_hk416SDeotech
			{
				weapon="RH_hk416SDeotech";
				count=6;
			};
			class _xx_RH_hk416SDGL
			{
				weapon="RH_hk416SDGL";
				count=6;
			};
			class _xx_RH_hk416SDGLAIM
			{
				weapon="RH_hk416SDGLAIM";
				count=6;
			};
			class _xx_RH_hk416SDGLeotech
			{
				weapon="RH_hk416SDGLeotech";
				count=6;
			};
			class _xx_RH_hk416AIM
			{
				weapon="RH_hk416AIM";
				count=6;
			};
			class _xx_RH_hk416ACOG
			{
				weapon="RH_hk416ACOG";
				count=6;
			};
			class _xx_RH_hk416eotech
			{
				weapon="RH_hk416eotech";
				count=6;
			};
			class _xx_RH_ctar21
			{
				weapon="RH_ctar21";
				count=6;
			};
			class _xx_RH_ctar21glacog
			{
				weapon="RH_ctar21glacog";
				count=6;
			};
			class _xx_RH_ctar21m
			{
				weapon="RH_ctar21m";
				count=6;
			};
			class _xx_RH_ctar21mgl
			{
				weapon="RH_ctar21mgl";
				count=6;
			};
			class _xx_RH_star21
			{
				weapon="RH_star21";
				count=6;
			};
			class _xx_RH_hk417
			{
				weapon="RH_hk417";
				count=6;
			};
			class _xx_RH_hk417s
			{
				weapon="RH_hk417s";
				count=6;
			};
			class _xx_RH_hk417saim
			{
				weapon="RH_hk417saim";
				count=6;
			};
			class _xx_RH_hk417seotech
			{
				weapon="RH_hk417seotech";
				count=6;
			};
			class _xx_RH_hk417sacog
			{
				weapon="RH_hk417sacog";
				count=6;
			};
			class _xx_RH_hk417sGL
			{
				weapon="RH_hk417sGL";
				count=6;
			};
			class _xx_RH_hk417sGLACOG
			{
				weapon="RH_hk417sGLACOG";
				count=6;
			};
			class _xx_RH_hk417sGLAim
			{
				weapon="RH_hk417sGLaim";
				count=6;
			};
			class _xx_RH_hk417sGLeotech
			{
				weapon="RH_hk417sGLeotech";
				count=6;
			};
			class _xx_RH_hk417SD
			{
				weapon="RH_hk417SD";
				count=6;
			};
			class _xx_RH_hk417SDAIM
			{
				weapon="RH_hk417SDAIM";
				count=6;
			};
			class _xx_RH_hk417SDeotech
			{
				weapon="RH_hk417SDeotech";
				count=6;
			};
			class _xx_RH_hk417sdsp
			{
				weapon="RH_hk417sdsp";
				count=6;
			};
			class _xx_RH_hk417sp
			{
				weapon="RH_hk417sp";
				count=6;
			};
			class _xx_RH_hk417sdACOG
			{
				weapon="RH_hk417sdACOG";
				count=6;
			};
			class _xx_RH_hk417AIM
			{
				weapon="RH_hk417AIM";
				count=6;
			};
			class _xx_RH_hk417ACOG
			{
				weapon="RH_hk417ACOG";
				count=6;
			};
			class _xx_RH_hk417eotech
			{
				weapon="RH_hk417eotech";
				count=6;
			};
			class _xx_RH_mas
			{
				weapon="RH_mas";
				count=6;
			};
			class _xx_RH_masSD
			{
				weapon="RH_masSD";
				count=6;
			};
			class _xx_RH_masSDAIM
			{
				weapon="RH_masSDAIM";
				count=6;
			};
			class _xx_RH_masSDeotech
			{
				weapon="RH_masSDeotech";
				count=6;
			};
			class _xx_RH_massdACOG
			{
				weapon="RH_massdACOG";
				count=6;
			};
			class _xx_RH_masAIM
			{
				weapon="RH_masAIM";
				count=6;
			};
			class _xx_RH_masACOG
			{
				weapon="RH_masACOG";
				count=6;
			};
			class _xx_RH_maseotech
			{
				weapon="RH_maseotech";
				count=6;
			};
			class _xx_RH_masb
			{
				weapon="RH_masb";
				count=6;
			};
			class _xx_RH_masbSD
			{
				weapon="RH_masbSD";
				count=6;
			};
			class _xx_RH_masbSDAIM
			{
				weapon="RH_masbSDAIM";
				count=6;
			};
			class _xx_RH_masbSDeotech
			{
				weapon="RH_masbSDeotech";
				count=6;
			};
			class _xx_RH_masbsdACOG
			{
				weapon="RH_masbsdACOG";
				count=6;
			};
			class _xx_RH_masbAIM
			{
				weapon="RH_masbAIM";
				count=6;
			};
			class _xx_RH_masbACOG
			{
				weapon="RH_masbACOG";
				count=6;
			};
			class _xx_RH_masbeotech
			{
				weapon="RH_masbeotech";
				count=6;
			};
			class _xx_RH_acr
			{
				weapon="RH_acr";
				count=6;
			};
			class _xx_RH_acrAIM
			{
				weapon="RH_acrAIM";
				count=6;
			};
			class _xx_RH_acrACOG
			{
				weapon="RH_acrACOG";
				count=6;
			};
			class _xx_RH_acreotech
			{
				weapon="RH_acreotech";
				count=6;
			};
			class _xx_RH_acrgl
			{
				weapon="RH_acrgl";
				count=6;
			};
			class _xx_RH_acrglAIM
			{
				weapon="RH_acrglAIM";
				count=6;
			};
			class _xx_RH_acrglACOG
			{
				weapon="RH_acrglACOG";
				count=6;
			};
			class _xx_RH_acrgleotech
			{
				weapon="RH_acrgleotech";
				count=6;
			};
			class _xx_RH_acrb
			{
				weapon="RH_acrb";
				count=6;
			};
			class _xx_RH_acrbAIM
			{
				weapon="RH_acrbAIM";
				count=6;
			};
			class _xx_RH_acrbACOG
			{
				weapon="RH_acrbACOG";
				count=6;
			};
			class _xx_RH_acrbeotech
			{
				weapon="RH_acrbeotech";
				count=6;
			};
			class _xx_RH_acrbgl
			{
				weapon="RH_acrbgl";
				count=6;
			};
			class _xx_RH_acrbglAIM
			{
				weapon="RH_acrbglAIM";
				count=6;
			};
			class _xx_RH_acrbglACOG
			{
				weapon="RH_acrbglACOG";
				count=6;
			};
			class _xx_RH_acrbgleotech
			{
				weapon="RH_acrbgleotech";
				count=6;
			};
		};
	};
};
