class CfgPatches
{
	class RH_m14
	{
		units[]=
		{
			"RHm14box"
		};
		weapons[]=
		{
			"RH_m14",
			"RH_m14acog",
			"RH_m14aim",
			"RH_m14eot",
			"RH_m21",
			"RH_sc2",
			"RH_sc2acog",
			"RH_sc2aim",
			"RH_sc2eot",
			"RH_sc2shd",
			"RH_sc2sp",
			"RH_m1s",
			"RH_m1sacog",
			"RH_m1saim",
			"RH_m1seot",
			"RH_m1sshd",
			"RH_m1ssp",
			"RH_m1st",
			"RH_m1stacog",
			"RH_m1staim",
			"RH_m1steot",
			"RH_m1stshd",
			"RH_m1stsp"
		};
		requiredVersion=1.000000;
		requiredAddons[]=
		{
			"CAweapons"
		};
	};
};
class cfgRecoils
{
	RH_M14Recoil[]={0,0.013000,0.015000,0.020000,0.013000,0.015000,0.100000,0.009000,0.015000,0.120000,0,0};
	RH_M14prRecoil[]={0,0.012000,0.010000,0.013000,0.012000,0.010000,0.070000,0.007000,0,0.120000,0,0};
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
	class GrenadeLauncher;
	class RocketPods;
	class MissileLaunche;
	class MGun;
	class Rifle;
	class RH_m14: Rifle
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m14acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m14aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m14eot";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_m21";
			};
		};
		scope=2;
		model="\RH_m14\RH_m14.p3d";
		picture="\RH_m14\inv\m14.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		optics=1;
		opticsDisablePeripherialVision=1;
		displayName="M14";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M24.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_m14\Sound\M14_Reload.wss",
			0.056234,
			1,
			20
		};
		magazines[] =
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"20Rnd_762x51_DMR",
			"20Rnd_762x51_DMRSD",
			"20Rnd_762x51_DMR_hp",
			"20Rnd_762x51_DMR_tracer",
			"20Rnd_762x51_DMR_rubber",
			"20Rnd_762x51_DMR_bt"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_m14\Sound\m14.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundBurst=1;
			soundContinuous=0;
			multiplier=1;
			burst=1;
			dispersion=0.000071;
			reloadTime=0.100000;
			recoil="RH_M14Recoil";
			recoilProne="RH_M14prRecoil";
			aiRateOfFire=0.600000;
			aiRateOfFireDistance=550;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=400;
			midRangeProbab=0.700000;
			maxRange=650;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_m14\Sound\m14.wss",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.000285;
			reloadTime=0.100000;
			recoil="RH_M14Recoil";
			recoilProne="RH_M14prRecoil";
			minRange=2;
			minRangeProbab=0.100000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=90;
			maxRangeProbab=0.050000;
		};
		class Library
		{
			libTextDesc="The M14 rifle more formally the United States Rifle, Caliber 7.62 mm, M14 is an American selective fire battle rifle firing 7.62 × 51 mm NATO ammunition. Although largely superseded in military use by the M16 rifle, it remains in limited front line service with the United States Army, Marine Corps, and Navy. The M14 also provides the basis for the M21 and XM25 sniper rifles not to be confused with the XM25 grenade launcher.Mk14 EBR is shorter, more tactical version of the M14, with a retractable stock and multiple rails for more accessories.";
		};
	};
	class RH_m14acog: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m14";
			};
		};
		scope=2;
		model="\RH_m14\RH_m14acog.p3d";
		picture="\RH_m14\inv\m14acog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\NWD_acog_ta31f.p3d";
		displayName="M14 Acog";
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
				distanceZoomMin=100;
				distanceZoomMax=100;
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
	class RH_m14aim: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m14";
			};
		};
		scope=2;
		model="\RH_m14\RH_m14aim.p3d";
		picture="\RH_m14\inv\m14aim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M14 Aimpoint";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_m14eot: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m14";
			};
		};
		scope=2;
		model="\RH_m14\RH_m14eot.p3d";
		picture="\RH_m14\inv\m14eot.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M14 Eotech";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_m21: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_m14";
			};
		};
		scope=2;
		model="\RH_m14\RH_m21.p3d";
		picture="\RH_m14\inv\m21.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\fnc_10x_round_mildot";
		opticsZoomMin=0.029624;
		opticsZoomMax=0.082220;
		opticsZoomInit=0.082220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		displayName="M21";
		magazines[] =
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"20Rnd_762x51_DMR",
			"20Rnd_762x51_DMRSD",
			"20Rnd_762x51_DMR_hp",
			"20Rnd_762x51_DMR_tracer",
			"20Rnd_762x51_DMR_rubber",
			"20Rnd_762x51_DMR_bt"
		};
		modes[]=
		{
			"Single"
		};
	};
	class RH_sc2: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_sc2acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_sc2aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_sc2eot";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_sc2sp";
			};
		};
		scope=2;
		model="\RH_m14\RH_sc2.p3d";
		picture="\RH_m14\inv\sc2.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="Socom II";
	};
	class RH_sc2acog: RH_sc2
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_sc2";
			};
		};
		scope=2;
		model="\RH_m14\RH_sc2acog.p3d";
		picture="\RH_m14\inv\sc2acog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\NWD_acog_ta31f.p3d";
		displayName="Socom II Acog";
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
				distanceZoomMin=100;
				distanceZoomMax=100;
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
	class RH_sc2aim: RH_sc2
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_sc2";
			};
		};
		scope=2;
		model="\RH_m14\RH_sc2aim.p3d";
		picture="\RH_m14\inv\sc2aim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="Socom II Aimpoint";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_sc2eot: RH_sc2
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_sc2";
			};
		};
		scope=2;
		model="\RH_m14\RH_sc2eot.p3d";
		picture="\RH_m14\inv\sc2eot.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="Socom II Eotech";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_sc2shd: RH_sc2
	{
		delete itemActions;
		scope=2;
		model="\RH_m14\RH_sc2shd.p3d";
		picture="\RH_m14\inv\sc2shd.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		opticsZoomInit=0.249000;
		opticsZoomMin=0.062300;
		opticsZoomMax=0.249000;
		distanceZoomMin=189;
		distanceZoomMax=189;
		optics=1;
		modelOptics="\RH_m14\NWD_shortdot_cqb.p3d";
		displayName="Socom II Shortdot";
	};
	class RH_sc2sp: RH_sc2
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_sc2";
			};
		};
		scope=2;
		model="\RH_m14\RH_sc2sp.p3d";
		picture="\RH_m14\inv\sc2sp.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\fnc_10x_round_mildot";
		opticsZoomMin=0.029624;
		opticsZoomMax=0.082220;
		opticsZoomInit=0.082220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		displayName="Socom II SP";
	};
	class RH_m1s: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m1sacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m1saim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m1seot";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_m1ssp";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1s.p3d";
		picture="\RH_m14\inv\m1s.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m14\Anim\RH_m14cs.rtm"
		};
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M1SE1";
	};
	class RH_m1sacog: RH_m1s
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m1s";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1sacog.p3d";
		picture="\RH_m14\inv\m1sacog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\NWD_acog_ta31f.p3d";
		displayName="M1SE1 Acog";
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
				distanceZoomMin=100;
				distanceZoomMax=100;
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
	class RH_m1saim: RH_m1s
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m1s";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1saim.p3d";
		picture="\RH_m14\inv\m1saim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M1SE1 Aimpoint";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_m1seot: RH_m1s
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m1s";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1seot.p3d";
		picture="\RH_m14\inv\m1seot.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M1SE1 Eotech";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_m1sshd: RH_m1s
	{
		delete itemActions;
		scope=2;
		model="\RH_m14\RH_m1sshd.p3d";
		picture="\RH_m14\inv\m1sshd.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		opticsZoomInit=0.249000;
		opticsZoomMin=0.062300;
		opticsZoomMax=0.249000;
		distanceZoomMin=189;
		distanceZoomMax=189;
		optics=1;
		modelOptics="\RH_m14\NWD_shortdot_cqb.p3d";
		displayName="M1SE1 Shortdot";
	};
	class RH_m1ssp: RH_m1s
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_m1s";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1ssp.p3d";
		picture="\RH_m14\inv\m1ssp.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\fnc_10x_round_mildot";
		opticsZoomMin=0.029624;
		opticsZoomMax=0.082220;
		opticsZoomInit=0.082220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		displayName="M1SE1 SP";
	};
	class RH_m1st: RH_m14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m1stacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m1staim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m1steot";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_m1stsp";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1st.p3d";
		picture="\RH_m14\inv\m1st.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m14\Anim\RH_m14cs.rtm"
		};
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M1SE1 Tan";
	};
	class RH_m1stacog: RH_m1st
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m1st";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1stacog.p3d";
		picture="\RH_m14\inv\m1stacog.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\NWD_acog_ta31f.p3d";
		displayName="M1SE1 Tan Acog";
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
				distanceZoomMin=100;
				distanceZoomMax=100;
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
	class RH_m1staim: RH_m1st
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m1st";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1staim.p3d";
		picture="\RH_m14\inv\m1staim.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M1SE1 Tan Aimpoint";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_m1steot: RH_m1st
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m1st";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1steot.p3d";
		picture="\RH_m14\inv\m1steot.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="M1SE1 Tan Eotech";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_m1stshd: RH_m1st
	{
		delete itemActions;
		scope=2;
		model="\RH_m14\RH_m1stshd.p3d";
		picture="\RH_m14\inv\m1stshd.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		opticsZoomInit=0.249000;
		opticsZoomMin=0.062300;
		opticsZoomMax=0.249000;
		distanceZoomMin=189;
		distanceZoomMax=189;
		optics=1;
		modelOptics="\RH_m14\NWD_shortdot_cqb.p3d";
		displayName="M1SE1 Tan Shortdot";
	};
	class RH_m1stsp: RH_m1st
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_m1st";
			};
		};
		scope=2;
		model="\RH_m14\RH_m1stsp.p3d";
		picture="\RH_m14\inv\m1stsp.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics="\RH_m14\fnc_10x_round_mildot";
		opticsZoomMin=0.029624;
		opticsZoomMax=0.082220;
		opticsZoomInit=0.082220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		displayName="M1SE1 Tan SP";
	};
};
class cfgVehicles
{
	class ReammoBox;
	class RHm14box: ReammoBox
	{
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="RH M14 weapons box";
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_DMR
			{
				magazine="20Rnd_762x51_DMR";
				count=200;
			};
			class _xx_HandGrenade_West
			{
				magazine="HandGrenade_West";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_RH_m14
			{
				weapon="RH_m14";
				count=6;
			};
			class _xx_RH_m14acog
			{
				weapon="RH_m14acog";
				count=6;
			};
			class _xx_RH_m14aim
			{
				weapon="RH_m14aim";
				count=6;
			};
			class _xx_RH_m14eot
			{
				weapon="RH_m14eot";
				count=6;
			};
			class _xx_RH_m21
			{
				weapon="RH_m21";
				count=6;
			};
			class _xx_RH_sc2
			{
				weapon="RH_sc2";
				count=6;
			};
			class _xx_RH_sc2acog
			{
				weapon="RH_sc2acog";
				count=6;
			};
			class _xx_RH_sc2aim
			{
				weapon="RH_sc2aim";
				count=6;
			};
			class _xx_RH_sc2eot
			{
				weapon="RH_sc2eot";
				count=6;
			};
			class _xx_RH_sc2shd
			{
				weapon="RH_sc2shd";
				count=6;
			};
			class _xx_RH_sc2sp
			{
				weapon="RH_sc2sp";
				count=6;
			};
			class _xx_RH_m1s
			{
				weapon="RH_m1s";
				count=6;
			};
			class _xx_RH_m1sacog
			{
				weapon="RH_m1sacog";
				count=6;
			};
			class _xx_RH_m1saim
			{
				weapon="RH_m1saim";
				count=6;
			};
			class _xx_RH_m1seot
			{
				weapon="RH_m1seot";
				count=6;
			};
			class _xx_RH_m1sshd
			{
				weapon="RH_m1sshd";
				count=6;
			};
			class _xx_RH_m1ssp
			{
				weapon="RH_m1ssp";
				count=6;
			};
			class _xx_RH_m1st
			{
				weapon="RH_m1st";
				count=6;
			};
			class _xx_RH_m1stacog
			{
				weapon="RH_m1stacog";
				count=6;
			};
			class _xx_RH_m1staim
			{
				weapon="RH_m1staim";
				count=6;
			};
			class _xx_RH_m1steot
			{
				weapon="RH_m1steot";
				count=6;
			};
			class _xx_RH_m1stshd
			{
				weapon="RH_m1stshd";
				count=6;
			};
			class _xx_RH_m1stsp
			{
				weapon="RH_m1stsp";
				count=6;
			};
		};
	};
};
