class CfgPatches
{
	class RH_m4_cfg
	{
		units[]=
		{
			"RHm4m16ammobox"
		};
		weapons[]=
		{
			"RH_ar10",
			"RH_ar10s",
			"RH_m4",
			"RH_m4a1",
			"RH_m4r",
			"RH_m4a1r",
			"RH_m4aim",
			"RH_m4a1aim",
			"RH_m4eotech",
			"RH_m4a1eotech",
			"RH_m4acog",
			"RH_m4a1acog",
			"RH_m4sd",
			"RH_m4sdaim",
			"RH_m4sdacog",
			"RH_m4sdeotech",
			"RH_m4gl",
			"RH_m4glaim",
			"RH_m4glacog",
			"RH_m4glaeotech",
			"RH_m4sdgl",
			"RH_m4sdglaim",
			"RH_m4sdglacog",
			"RH_m4sdgleotech",
			"RH_m4m",
			"RH_m4maim",
			"RH_m4meotech",
			"RH_m4macog",
			"RH_M4aim_wdl",
			"RH_M4gleotech_wdl",
			"RH_M4sdaim_wdl",
			"RH_M4sdgleotech_wdl",
			"RH_m4sbr",
			"RH_m4sbraim",
			"RH_m4sbreotech",
			"RH_m4sbracog",
			"RH_m16a1",
			"RH_m16a1gl",
			"RH_m16a1s",
			"RH_m16a1sgl",
			"RH_m16a2",
			"RH_m16a2gl",
			"RH_m16a2aim",
			"RH_m16a2glaim",
			"RH_m16a2s",
			"RH_m16a2sgl",
			"RH_m16a3",
			"RH_m16a3gl",
			"RH_m16a3aim",
			"RH_m16a3s",
			"RH_m16a3sgl",
			"RH_m16a3c",
			"RH_m16a3cs",
			"RH_m16a4",
			"RH_m16a4gl",
			"RH_m16a4acog",
			"RH_m16a4glacog",
			"RH_m16a4aim",
			"RH_m16a4glaim",
			"RH_m16a4eotech",
			"RH_m16a4gleotech",
			"RH_mk12",
			"RH_mk12mod1",
			"RH_mk12sd",
			"RH_mk12mod1sd",
			"RH_M249",
			"RH_M249acog",
			"RH_M249elcan",
			"RH_M249p",
			"RH_M249pacog",
			"RH_M249pelcan",
			"RH_Mk48mod1",
			"RH_Mk48mod1acog",
			"RH_Mk48mod1elcan"
		};
		requiredVersion=1.520000;
		requiredAddons[]={};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class RH_m4_cfg
		{
			list[]=
			{
				"RH_m4_cfg"
			};
		};
	};
};
class CfgRecoils
{
	RH_assaultRiflesBase[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000500,0.140000,0,0};
	RH_assaultRiflesBaseProne[]={0,0.005000,0.005000,0.005000,0.010000,0.009000,0.075000,0.005000,-0.000300,0.130000,0,0};
	RH_M4A1Recoil[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000400,0.130000,0,0};
	RH_M203GLBase[]={0,0.030000,0.050000,0.130000,0.010000,-0.001000,0.260000,0,0};
	RH_M249_Recoil[]={0,0.006000,-0.003000,0.050000,0.006000,0.006000,0.030000,0.006000,0.006000,0.170000,0,0};
	RH_M249_RecoilProne[]={0,0.005000,0.002000,0.070000,0.005000,-0.001500,0.120000,0,0};
	RH_Mk48_Recoil[]={0,0.010000,0.002000,0.050000,0.010000,0.003000,0.040000,0.006000,0.020000,0.170000,0,0};
	RH_Mk48_RecoilProne[]={0,0.010000,0.001200,0.090000,0.009000,-0.001000,0.150000,0,0};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class RifleCore;
	class GrenadeLauncher: Default
	{
	};
	class Rifle: RifleCore
	{
		class M203Muzzle: GrenadeLauncher
		{
		};
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
		class RH_M203Muzzle: M203Muzzle
		{
			sound[]=
			{
				"\RH_m4\sound\M203.wss",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_m4\sound\M203_Reload.wss",
				0.000316,
				1,
				20
			};
			recoil="RH_M203GLbase";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class RH_M203Muzzle_AI: RH_M203Muzzle
		{
			cameraDir="";
			memoryPointCamera="";
			showToPlayer=0;
			minRangeProbab=0.500000;
			midRangeProbab=0.800000;
			maxRangeProbab=0.100000;
		};
		magazines[] =
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
	};
	class M16A2: M16_base
	{
		magazines[] =
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
	};
	class RH_M16a1: M16A2
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a1gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a1s";
			};
		};
		displayName="M16A1";
		model="\RH_m4\RH_m16a1.p3d";
		picture="\RH_m4\inv\m16a1.paa";
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\M4_Reload.wss",
			0.056234,
			1,
			20
		};
		handAnim[]={};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		ace_weight=2.900000;
		dexterity=1.800000;
		irDistance=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_m4\sound\m16a1.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.080000;
			recoil="RH_assaultRiflesBase";
			recoilProne="RH_assaultRiflesBaseProne";
			dispersion=0.002000;
			aiRateOfFire=1;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_m4\sound\m16a1.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.080000;
			recoil="RH_assaultRiflesBase";
			recoilProne="RH_assaultRiflesBaseProne";
			dispersion=0.002000;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=80;
			maxRangeProbab=0.050000;
		};
		
		

	};
	class RH_M16a1s: RH_M16a1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a1sglgl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m16a1";
			};
		};
		displayName="M16A1 Scope";
		model="\RH_m4\RH_M16a1s.p3d";
		picture="\RH_m4\inv\m16a1s.paa";
		modelOptics="\RH_m4\NWD_colt_4x20.p3d";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=3.400000;
		dexterity=1.600000;
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
	};
	class RH_M16a1gl: RH_M16a1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_M16a1sgl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M16a1";
			};
		};
		displayName="M16A1 M203";
		model="\RH_m4\RH_m16a1gl.p3d";
		picture="\RH_m4\inv\m16a1gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.300000;
		dexterity=1.400000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M16a1sgl: RH_M16a1gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_M16a1gl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach M203";
				att = "Attachment_M203";
				out = "RH_M16a1s";
			};
		};
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		displayName="M16A1 M203 Scope";
		model="\RH_m4\RH_m16a1sgl.p3d";
		picture="\RH_m4\inv\m16a1sgl.paa";
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.700000;
		dexterity=1.300000;
	};
	class RH_m16a2: M16A2
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a2gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a2s";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m16a2aim";
			};
		};
		model="\RH_m4\RH_m16a2.p3d";
		picture="\RH_m4\inv\m16a2.paa";
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\M4_Reload.wss",
			0.056234,
			1,
			20
		};
		handAnim[]={};
		ace_weight=3.500000;
		dexterity=1.600000;
		irDistance=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_m4\sound\m16s.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000;
			recoil="RH_assaultRiflesBase";
			recoilProne="RH_assaultRiflesBaseProne";
			dispersion=0.001750;
			aiRateOfFire=1;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class Burst: Burst
		{
			begin1[]=
			{
				"\RH_m4\sound\m16s.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000;
			recoil="RH_assaultRiflesBase";
			recoilProne="RH_assaultRiflesBaseProne";
			dispersion=0.001750;
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=120;
			maxRangeProbab=0.050000;
		};
	};
	class RH_M16a2gl: RH_m16a2
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a2";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a2sgl";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m16a2glaim";
			};
		};
		displayName="M16A2 M203";
		model="\RH_m4\RH_m16a2gl.p3d";
		picture="\RH_m4\inv\m16a2gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.900000;
		dexterity=1.300000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_m16a2aim: RH_m16a2
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a2glaim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m16a2";
			};
		};
		displayName="M16A2 Aimpoint";
		model="\RH_m4\RH_m16a2aim.p3d";
		picture="\RH_m4\inv\m16a2aim.paa";
		ace_weight=3.800000;
		dexterity=1.500000;
	};
	class RH_M16a2glaim: RH_M16a2gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a2aim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m16a2gl";
			};
		};
		displayName="M16A2 M203 Aimpoint";
		model="\RH_m4\RH_m16a2glaim.p3d";
		picture="\RH_m4\inv\m16a2glaim.paa";
		ace_weight=5.100000;
		dexterity=1.200000;
	};
	class RH_M16a2s: RH_m16a2
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a2sgl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m16a2";
			};
		};
		displayName="M16A2 Scope";
		model="\RH_m4\RH_M16a2s.p3d";
		picture="\RH_m4\inv\m16a2s.paa";
		modelOptics="\RH_m4\NWD_colt_4x20.p3d";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=4.000000;
		dexterity=1.400000;
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
	};
	class RH_M16a2sgl: RH_M16a2s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a2gl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m16a2gl";
			};
		};
		displayName="M16A2 M203 Scope";
		model="\RH_m4\RH_m16a2sgl.p3d";
		picture="\RH_m4\inv\m16a2sgl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=5.300000;
		dexterity=1.200000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M16a3: RH_M16a1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a3gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a3s";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m16a3aim";
			};
		};
		displayName="M16A3";
		model="\RH_m4\RH_m16a3.p3d";
		picture="\RH_m4\inv\m16a3.paa";
		ace_weight=3.500000;
		dexterity=1.600000;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_m4\sound\m16s.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000;
			dispersion=0.001750;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_m4\sound\m16s.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000;
			dispersion=0.001750;
		};
	};
	class RH_M16a3c: RH_M16a3
	{
		delete ItemActions;
		model="\RH_m4\RH_M16a3c.p3d";
		picture="\RH_m4\inv\M16a3c.paa";
	};
	class RH_M16a3gl: RH_M16a3
	{

		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a3";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a3sgl";
			};
		};

		displayName="M16A3 M203";
		model="\RH_m4\RH_m16a2gl.p3d";
		picture="\RH_m4\inv\m16a2gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.900000;
		dexterity=1.300000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M16a3aim: RH_M16a3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m16a3";
			};
		};
		displayName="M16A3 Aimpoint";
		model="\RH_m4\RH_M16a3aim.p3d";
		picture="\RH_m4\inv\M16a3aim.paa";
		ace_weight=3.800000;
		dexterity=1.500000;
	};
	class RH_M16a3s: RH_M16a3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attacach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a3sgl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m16a3";
			};
		};
		displayName="M16A3 Scope";
		model="\RH_m4\RH_M16a3s.p3d";
		picture="\RH_m4\inv\M16a3s.paa";
		modelOptics="\RH_m4\NWD_colt_4x20.p3d";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=4.000000;
		dexterity=1.400000;
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
	};
	class RH_M16a3cs: RH_M16a3s
	{
		model="\RH_m4\RH_M16a3cs.p3d";
		picture="\RH_m4\inv\M16a3cs.paa";
	};
	class RH_M16a3sgl: RH_M16a3s
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a3s";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a3gl";
			};
		};
		displayName="M16A3 M203 Scope";
		model="\RH_m4\RH_M16a3sgl.p3d";
		picture="\RH_m4\inv\M16a3sgl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=5.300000;
		dexterity=1.200000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M16a4: RH_m16a2
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a4acog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m16a2aim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m16a4eotech";
			};
		};
		displayName="M16A4";
		model="\RH_m4\RH_m16a4.p3d";
		picture="\RH_m4\inv\m16a4.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"
		};
		irDistance=150;
		ace_weight=3.800000;
		dexterity=1.600000;
	};
	class RH_M16A4aim: RH_M16a4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4glaim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m16a4";
			};
		};
		displayName="M16A4 Aimpoint";
		model="\RH_m4\RH_m16a4aim.p3d";
		picture="\RH_m4\inv\m16a4aim.paa";
		ace_weight=4.300000;
		dexterity=1.500000;
	};
	class RH_M16A4eotech: RH_M16a4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4gleotech";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_m16a4";
			};
		};
		displayName="M16A4 EOTech";
		model="\RH_m4\RH_m16a4eotech.p3d";
		picture="\RH_m4\inv\m16a4eotech.paa";
		ace_weight=4.200000;
		dexterity=1.500000;
	};
	class RH_M16A4acog: RH_M16a4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4glacog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m16a4";
			};
		};
		displayName="M16A4 ACOG";
		model="\RH_m4\RH_m16a4acog.p3d";
		picture="\RH_m4\inv\m16a4acog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=4.200000;
		dexterity=1.500000;
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
	};
	class RH_M16a4gl: RH_M16a4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4";
			};
			class UseAtt1 {
				isAttachment = 1;
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m16a4glacog";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m16a4glaim";
			};
			class UseAtt3 : UseAtt1{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m16a4gleotech";
			};
		};
		displayName="M16A4 M203";
		model="\RH_m4\RH_m16a4gl.p3d";
		picture="\RH_m4\inv\m16a4gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=5.100000;
		dexterity=1.200000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M16A4glaim: RH_M16a4gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4aim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m16a4gl";
			};
		};
		displayName="M16A4 M203 Aimpoint";
		model="\RH_m4\RH_M16A4glaim.p3d";
		picture="\RH_m4\inv\m16a4glaim.paa";
		ace_weight=5.600000;
		dexterity=1.200000;
	};
	class RH_M16A4gleotech: RH_M16a4gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4eotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m16a4gl";
			};
		};
		displayName="M16A4 M203 EOTech";
		model="\RH_m4\RH_M16A4gleotech.p3d";
		picture="\RH_m4\inv\m16a4glaim.paa";
		ace_weight=5.500000;
		dexterity=1.200000;
	};
	class RH_M16A4glacog: RH_M16A4acog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m16a4acog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m16a4gl";
			};
		};
		displayName="M16A4 M203 ACOG";
		model="\RH_m4\RH_m16a4glacog.p3d";
		picture="\RH_m4\inv\m16a4glacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=5.400000;
		dexterity=1.200000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class FN_FAL: M16A2
	{
		class Single;
	};
	class RH_ar10: FN_FAL
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_ar10s";
			};
		};
		displayName="AR-10";
		model="\RH_m4\RH_AR10.p3d";
		picture="\RH_m4\inv\ar10.paa";
		magazines[]=
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"RH_20Rnd_762x51_AR10",
			"RH_20Rnd_762x51_AR10SD",
			"RH_20Rnd_762x51_AR10_hp",
			"RH_20Rnd_762x51_AR10_tracer",
			"RH_20Rnd_762x51_AR10_rubber",
			"RH_20Rnd_762x51_AR10_bt"
		};
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\ar10_reload.wss",
			0.056234,
			1,
			20
		};
		handAnim[]={};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		ace_weight=3.300000;
		dexterity=1.600000;
		irDistance=0;
		class Single: Single
		{
			reloadTime=0.085000;
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.050000;
			begin1[]=
			{
				"\RH_m4\sound\ar10.wss",
				2.500000,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: Single
		{
			autoFire=1;
			displayName="$STR_DN_MODE_FULLAUTO";
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		class Library
		{
			libTextDesc="";
		};
	};
	class RH_ar10s: RH_ar10
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_ar10";
			};
		};
		displayName="AR-10 Scope";
		model="\RH_m4\RH_AR10s.p3d";
		picture="\RH_m4\inv\ar10s.paa";
		modelOptics="\RH_m4\NWD_colt_4x20.p3d";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=3.800000;
		dexterity=1.500000;
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			maxRange=700;
		};
	};
	class M4A1: M16_base
	{
		magazines[] =
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
		class Single: Single
		{
		};
		class Burst: Burst
		{
		};
		class FullAuto: FullAuto
		{
		};
	};
	class RH_M4: M4A1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4acog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4aim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4eotech";
			};
		};
		displayName="M4";
		model="\RH_m4\RH_m4a1.p3d";
		picture="\RH_m4\inv\m4a1.paa";
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\M4_Reload.wss",
			0.056234,
			1,
			20
		};
		handAnim[]={};
		modes[]=
		{
			"Single",
			"Burst"
		};
		ace_weight=2.700000;
		dexterity=1.900000;
		irDistance=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_m4\sound\m4.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.075000;
			dispersion=0.002250;
			recoil="RH_M4A1Recoil";
			recoilProne="RH_assaultRiflesBaseProne";
			aiRateOfFire=1;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class Burst: Burst
		{
			begin1[]=
			{
				"\RH_m4\sound\m4.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.075000;
			dispersion=0.002250;
			recoil="RH_M4A1Recoil";
			recoilProne="RH_assaultRiflesBaseProne";
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=120;
			maxRangeProbab=0.050000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_m4\sound\m4.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.075000;
			dispersion=0.002250;
			recoil="RH_M4A1Recoil";
			recoilProne="RH_assaultRiflesBaseProne";
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=80;
			maxRangeProbab=0.050000;
		};
	};
	class RH_M4a1: RH_M4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_M4a1gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4a1acog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4a1aim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4a1eotech";
			};
			class UseAtt4 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4sd";
			};
		};
		displayName="M4A1";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4r: RH_M4
	{
		displayName="M4 RIS";
		model="\RH_m4\RH_m4.p3d";
		picture="\RH_m4\inv\m4.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"
		};
		ace_weight=2.800000;
	};
	class RH_M4a1r: RH_M4r
	{
		displayName="M4A1 RIS";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4aim: RH_M4r
	{
		
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4glaim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_M4";
			};
		};
		displayName="M4 Aimpoint";
		model="\RH_m4\RH_m4aim.p3d";
		picture="\RH_m4\inv\m4a1aim.paa";
		irDistance=150;
		ace_weight=3.500000;
		dexterity=1.700000;
	};
	class RH_M4a1aim: RH_M4aim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4a1glaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4sdaim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m4a1";
			};
		};
		displayName="M4A1 Aimpoint";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4eotech: RH_M4aim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4gleotech";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_m4";
			};
		};
		displayName="M4 EOTech";
		model="\RH_m4\RH_m4eotech.p3d";
		picture="\RH_m4\inv\m4a1eotech.paa";
		ace_weight=3.400000;
	};
	class RH_M4a1eotech: RH_M4eotech
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4a1gleotech";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4sdeotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_m4a1";
			};
		};
		displayName="M4A1 EOTech";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4acog: RH_M4aim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4glacog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4";
			};
		};
		displayName="M4 ACOG";
		model="\RH_m4\RH_m4acog.p3d";
		picture="\RH_m4\inv\m4a1acog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco.p3d";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=3.300000;
		dexterity=1.700000;
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
	};
	class RH_M4a1acog: RH_M4acog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4a1glacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4sdacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4a1";
			};
		};
		displayName="M4A1 ACOG";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4gl: RH_M4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4glacog";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4glaim";
			};
			class UseAtt3 : UseAtt1{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4gleotech";
			};
		};
		displayName="M4 M203";
		model="\RH_m4\RH_m4gl.p3d";
		picture="\RH_m4\inv\m4a1gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.000000;
		dexterity=1.400000;
		descriptionShort="Assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M4a1gl: RH_M4gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4a1";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_M4a1glacog";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4a1glaim";
			};
			class UseAtt3 : UseAtt1{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_M4a1gleotech";
			};
			class UseAtt4 : UseAtt1{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4sdgl";
			};
		};
		displayName="M4A1 M203";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4glaim: RH_M4gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4aim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4gl";
			};
		};
		displayName="M4 M203 Aimpoint";
		model="\RH_m4\RH_m4glaim.p3d";
		picture="\RH_m4\inv\m4a1glaim.paa";
		irDistance=150;
		ace_weight=4.700000;
		dexterity=1.300000;
	};
	class RH_M4a1glaim: RH_M4glaim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4a1aim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4a1gl";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				script = "spawn player_useAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4sdglaim";
			};
		};
		displayName="M4A1 M203 Aimpoint";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4gleotech: RH_M4glaim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4eotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m4gl";
			};
		};
		displayName="M4 M203 EOTech";
		model="\RH_m4\RH_m4gleotech.p3d";
		picture="\RH_m4\inv\m4a1gleotech.paa";
	};
	class RH_M4a1gleotech: RH_M4gleotech
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4a1eotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m4a1gl";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				script = "spawn player_useAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4sdgleotech";
			};
		};
		displayName="M4A1 M203 EOTech";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4glacog: RH_M4acog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4acog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4gl";
			};
		};
		displayName="M4 M203 ACOG";
		model="\RH_m4\RH_m4glacog.p3d";
		picture="\RH_m4\inv\m4a1glacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.600000;
		dexterity=1.300000;
	};
	class RH_M4a1glacog: RH_M4glacog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4a1acog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4a1gl";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				script = "spawn player_useAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4sdglacog";
			};
		};
		displayName="M4A1 M203 ACOG";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
	};
	class RH_M4sd: RH_M4a1r
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdgl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4sdacog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4sdaim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4sdeotech";
			};
			class UseAtt4 : UseAtt{
				text = "Detach Silencer";
				script = "spawn player_removeAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4a1";
			};
		};
		displayName="M4A1 SD";
		model="\RH_m4\RH_m4sd.p3d";
		picture="\RH_m4\inv\m4a1sd.paa";
		irDistance=150;
		ace_weight=3.900000;
		dexterity=1.600000;
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		ace_suppressed=1;
		descriptionShort="Suppressed assault rifle<br/>Caliber: 5.56x45mm NATO";
		class Single: Single
		{
			dispersion=0.000200;
			maxrange=150;
			maxrangeprobab=0.050000;
			midrange=40;
			midrangeprobab=0.700000;
			minrange=2;
			minrangeprobab=0.300000;
			begin1[]=
			{
				"\RH_m4\sound\m4sd.wss",
				1,
				1,
				120
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class FullAuto: FullAuto
		{
			dispersion=0.000500;
			maxrange=40;
			maxrangeprobab=0.050000;
			midrange=20;
			midrangeprobab=0.700000;
			minrange=0;
			minrangeprobab=0.300000;
			begin1[]=
			{
				"\RH_m4\sound\m4sd.wss",
				1,
				1,
				120
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_M4sdaim: RH_M4sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdglaim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m4sd";
			};
			class UseAtt2 : UseAtt1{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1aim";
			};
		};
		displayName="M4A1 SD Aimpoint";
		model="\RH_m4\RH_m4sdaim.p3d";
		picture="\RH_m4\inv\m4a1sdaim.paa";
		ace_weight=4.400000;
		dexterity=1.500000;
	};
	class RH_M4sdeotech: RH_M4sdaim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdgleotech";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_m4sd";
			};
			class UseAtt2 : UseAtt1{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1eotech";
			};
		};
		displayName="M4A1 SD EOTech";
		model="\RH_m4\RH_m4sdeotech.p3d";
		picture="\RH_m4\inv\m4a1sdeotech.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rh_m4\anim\RH_m4t.rtm"
		};
		ace_weight=4.300000;
	};
	class RH_M4sdacog: RH_M4sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdglacog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4sd";
			};
			class UseAtt2 : UseAtt1{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1acog";
			};
		};
		displayName="M4A1 SD ACOG";
		model="\RH_m4\RH_m4sdacog.p3d";
		picture="\RH_m4\inv\m4a1sdacog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=4.200000;
		dexterity=1.500000;
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
	};
	class RH_M4sdgl: RH_M4sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1gl";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4sdglacog";
			};
			class UseAtt3 : UseAtt2{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4sdglaim";
			};
			class UseAtt4 : UseAtt2{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4sdgleotech";
			};
		};
		displayName="M4A1 M203 SD";
		model="\RH_m4\RH_m4sdgl.p3d";
		picture="\RH_m4\inv\m4a1sdgl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=4.700000;
		dexterity=1.300000;
		descriptionShort="Suppressed assault rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
	};
	class RH_M4sdglaim: RH_M4sdgl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdaim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1glaim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4sdgl";
			};
		};
		displayName="M4A1 M203 SD Aimpoint";
		model="\RH_m4\RH_m4sdglaim.p3d";
		picture="\RH_m4\inv\m4a1sdglaim.paa";
		irDistance=150;
		ace_weight=5.400000;
		dexterity=1.200000;
	};
	class RH_M4sdgleotech: RH_M4sdglaim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdholo";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1glholo";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_m4sdgl";
			};
		};
		displayName="M4A1 M203 SD EOTech";
		model="\RH_m4\RH_m4sdgleotech.p3d";
		picture="\RH_m4\inv\m4a1sdgleotech.paa";
	};
	class RH_M4sdglacog: RH_M4sdacog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4sdacog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4a1glacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4sdgl";
			};
		};
		displayName="M4A1 M203 SD ACOG";
		model="\RH_m4\RH_m4sdglacog.p3d";
		picture="\RH_m4\inv\m4a1sdglacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
		ace_weight=5.300000;
		dexterity=1.200000;
	};
	class RH_M4m: RH_M4a1
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_M4macog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4maim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_M4meotech";
			};
		};
		displayName="M4A1 Magpul";
		model="\RH_m4\RH_m4m.p3d";
		picture="\RH_m4\inv\m4m.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rh_m4\anim\RH_AFG_anim.rtm"
		};
		ace_weight=2.900000;
		dexterity=1.800000;
		class FlashLight
		{
			color[]={0.900000,0.900000,0.700000,0.900000};
			ambient[]={0.100000,0.100000,0.100000,1.000000};
			position="flash dir";
			direction="flash";
			angle=30;
			scale[]={1,1,0.500000};
			brightness=0.100000;
		};
	};
	class RH_M4maim: RH_M4m
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4m";
			};
		};
		displayName="M4A1 Magpul Aimpoint";
		model="\RH_m4\RH_m4maim.p3d";
		picture="\RH_m4\inv\m4maim.paa";
		ace_weight=3.400000;
		dexterity=1.600000;
	};
	class RH_M4meotech: RH_M4a1
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_M4m";
			};
		};
		displayName="M4A1 Magpul EOTech";
		model="\RH_m4\RH_m4meotech.p3d";
		picture="\RH_m4\inv\m4meotech.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rh_m4\anim\RH_AFG_anim.rtm"
		};
		irDistance=150;
		ace_weight=3.300000;
		dexterity=1.600000;
	};
	class RH_M4macog: RH_M4a1acog
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M4m";
			};
		};
		displayName="M4A1 Magpul ACOG";
		model="\RH_m4\RH_m4macog.p3d";
		picture="\RH_m4\inv\m4macog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rh_m4\anim\RH_AFG_anim.rtm"
		};
		ace_weight=3.200000;
		dexterity=1.700000;
	};
	class RH_M4aim_wdl: RH_M4a1
	{
		displayName="M4A1 Aimpoint Camo";
		model="\RH_m4\RH_m4aim_wdl.p3d";
		picture="\RH_m4\inv\m4a1aim_Wdl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rh_m4\anim\RH_m4t.rtm"
		};
		irDistance=150;
		ace_weight=3.300000;
		dexterity=1.700000;
	};
	class RH_M4gleotech_wdl: RH_M4a1gleotech
	{
		displayName="M4A1 M203 EOTech Camo";
		model="\RH_m4\RH_m4gleotech_wdl.p3d";
		picture="\RH_m4\inv\m4a1gleotech_wdl.paa";
	};
	class RH_M4sdaim_wdl: RH_M4sdaim
	{
		displayName="M4A1 SD Aimpoint Camo";
		model="\RH_m4\RH_m4sdaim_wdl.p3d";
		picture="\RH_m4\inv\m4a1sdaim_wdl.paa";
		ace_weight=4.100000;
		dexterity=1.500000;
	};
	class RH_M4sdgleotech_wdl: RH_M4sdgleotech
	{
		displayName="M4A1 M203 SD EOTech Camo";
		model="\RH_m4\RH_m4sdgleotech_wdl.p3d";
		picture="\RH_m4\inv\m4a1sdgleotech_wdl.paa";
	};
	class RH_M4sbr: RH_M4a1
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4sbracog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4sbraim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4sbreotech";
			};
		};
		displayName="M4A1 SBR";
		model="\RH_m4\RH_m4sbr.p3d";
		picture="\RH_m4\inv\m4sbr.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4sbr.rtm"
		};
		ace_weight=2.500000;
		dexterity=2.100000;
		ace_mv[]=
		{
			"B_556x45_Ball",
			740,
			"ACE_B_556x45_T",
			740,
			"ACE_B_556x45_SB",
			680,
			"ACE_B_556x45_S",
			740
		};
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO";
		class Single: Single
		{
			dispersion=0.002750;
			midRange=100;
			maxRange=300;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.002750;
		};
	};
	class RH_M4sbraim: RH_M4sbr
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4sbr";
			};
		};
		displayName="M4A1 SBR Aimpoint";
		model="\RH_m4\RH_m4sbraim.p3d";
		picture="\RH_m4\inv\m4sbraim.paa";
		ace_weight=2.800000;
		dexterity=1.900000;
	};
	class RH_M4sbreotech: RH_M4sbr
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_M4sbr";
			};
		};
		displayName="M4A1 SBR EOTech";
		model="\RH_m4\RH_m4sbreotech.p3d";
		picture="\RH_m4\inv\m4sbreotech.paa";
		ace_weight=3.000000;
		dexterity=1.900000;
	};
	class RH_M4sbracog: RH_M4sbr
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M4sbr";
			};
		};
		displayName="M4A1 SBR ACOG";
		model="\RH_m4\RH_m4sbracog.p3d";
		picture="\RH_m4\inv\m4sbracog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco";
		ace_weight=2.900000;
		dexterity=1.900000;
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=400;
		};
	};
	class M4SPR: M4A1
	{
		class Single: Single
		{
		};
	};
	class RH_MK12: M4SPR
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_mk12sd";
			};
		};
		displayName="Mk12 Mod0";
		model="\RH_m4\RH_mk12.p3d";
		picture="\RH_m4\inv\mk12.paa";
		handAnim[]={};
		ace_weight=4.000000;
		dexterity=1.400000;
		modes[]=
		{
			"Single"
		};
		irDistance=0;
		distanceZoomMin=360;
		distanceZoomMax=360;
		modelOptics="\ca\weapons\2Dscope_MilDot_10";
		opticsZoomMin=0.029624;
		opticsZoomMax=0.084640;
		opticsZoomInit=0.084640;
		discretefov[]={0.084640,0.029624};
		discreteInitIndex=0;
		opticsPPEffects[]=
		{
			"OpticsCHAbera2",
			"OpticsBlur1"
		};
		opticsFlare=1;
		visionMode[]=
		{
			"Normal"
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_m4\sound\m4.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.000300;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			maxRange=600;
		};
		class Library
		{
			libTextDesc="$STR_LIB_M4_SPR";
		};
		descriptionShort="$STR_DSS_M4_SPR";
	};
	class RH_MK12mod1: RH_MK12
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_MK12mod1sd";
			};
		};
		displayName="Mk12 Mod1";
		model="\RH_m4\RH_mk12mod1.p3d";
		picture="\RH_m4\inv\mk12mod1.paa";
	};
	class RH_MK12sd: RH_MK12
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_MK12";
			};
		};
		displayName="Mk12 Mod0 SD";
		model="\RH_m4\RH_mk12sd.p3d";
		picture="\RH_m4\inv\mk12sd.paa";
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		ace_suppressed=1;
		ace_weight=4.600000;
		dexterity=1.300000;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_m4\sound\m4sd.wss",
				1,
				1,
				120
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_MK12mod1sd: RH_MK12sd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_MK12mod1";
			};
		};
		displayName="Mk12 Mod1 SD";
		model="\RH_m4\RH_mk12mod1sd.p3d";
		picture="\RH_m4\inv\mk12mod1sd.paa";
	};
	class M249: Rifle
	{
		class manual: Mode_FullAuto
		{
		};
		class close: manual
		{
		};
		class short: close
		{
		};
		class medium: close
		{
		};
		class far: close
		{
		};
		magazines[] =
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
	};
	class RH_M249: M249
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_M249acog";
			};
		};
		scope=2;
		magazines[] =
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
		model="\RH_m4\RH_M249.p3d";
		picture="\RH_m4\inv\M249.paa";
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\M249_Reload.wss",
			0.056234,
			1,
			20
		};
		ace_weight=7.500000;
		dexterity=1.000000;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		irDistance=0;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=3;
		class manual: manual
		{
			begin1[]=
			{
				"\RH_m4\sound\m249.wss",
				1.800000,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.003500;
			recoil="RH_M249_Recoil";
			recoilProne="RH_M249_RecoilProne";
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=60;
			maxRangeProbab=0.050000;
		};
		class close: close
		{
			burst="8 + round random 4";
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.800000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		class short: short
		{
			burst="6 + round random 2";
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=100;
			minRangeProbab=0.800000;
			midRange=200;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class medium: medium
		{
			burst="4 + round random 2";
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.800000;
			midRange=400;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class far: far
		{
			burst="2 + round random 2";
			aiRateOfFire=3;
			aiRateOfFireDistance=800;
			minRange=400;
			minRangeProbab=0.800000;
			midRange=600;
			midRangeProbab=0.700000;
			maxRange=800;
			maxRangeProbab=0.050000;
		};
	};
	class RH_M249acog: RH_M249
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_M249";
			};
		};
		displayName="M249 ACOG";
		model="\RH_m4\RH_m249acog.p3d";
		picture="\RH_m4\inv\m249acog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=7.800000;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_M249elcan: RH_M249
	{
		delete ItemActions;
		displayName="M249 M145";
		model="\RH_m4\RH_m249elcan.p3d";
		picture="\RH_m4\inv\m249elcan.paa";
		modelOptics="\RH_m4\fnc_m145_m249.p3d";
		class OpticsModes
		{
			class M145
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.085333;
				opticsZoomMax=0.085333;
				opticsZoomInit=0.085333;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=308;
				distanceZoomMax=308;
				cameraDir="";
			};
			class Kolimator: M145
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=8.300000;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_M249p: RH_M249
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_M249pacog";
			};
		};
		displayName="M249 Para";
		model="\RH_m4\RH_m249p.p3d";
		picture="\RH_m4\inv\m249p.paa";
		ace_weight=7.200000;
		ace_mod_mv=1;
		ace_mv[]=
		{
			"B_556x45_Ball",
			880,
			"ACE_B_556x45_T",
			880,
			"ACE_B_556x45_SB",
			790
		};
	};
	class RH_M249pacog: RH_M249p
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_M249p";
			};
		};
		displayName="M249 Para ACOG";
		model="\RH_m4\RH_m249pacog.p3d";
		picture="\RH_m4\inv\m249pacog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco";
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=7.600000;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_M249pelcan: RH_M249p
	{
		delete ItemActions;
		displayName="M249 Para M145";
		model="\RH_m4\RH_m249pelcan.p3d";
		picture="\RH_m4\inv\m249pelcan.paa";
		modelOptics="\RH_m4\fnc_m145_m249.p3d";
		irDistance=150;
		class OpticsModes
		{
			class M145
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.085333;
				opticsZoomMax=0.085333;
				opticsZoomInit=0.085333;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=308;
				distanceZoomMax=308;
				cameraDir="";
			};
			class Kolimator: M145
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		ace_weight=8.300000;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		weaponInfoType="RscWeaponEmpty";
	};
	class M240: Rifle
	{
		class manual: Mode_FullAuto
		{
		};
		class close: manual
		{
		};
		class short: close
		{
		};
		class medium: close
		{
		};
		class far: close
		{
		};
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
	};
	class Mk_48: M240
	{
		class manual: manual
		{
		};
		class close: close
		{
		};
		class short: short
		{
		};
		class medium: medium
		{
		};
		class far: far
		{
		};
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
	};
	class RH_Mk48mod1: Mk_48
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach ACOG";
				att = "Attachment_ACOG";
				out = "RH_Mk48mod1acog";
			};
		};
		scope=2;
		displayName="Mk48 Mod1";
		model="\RH_m4\RH_Mk48mod1.p3d";
		picture="\RH_m4\inv\Mk48mod1.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\M249_Reload.wss",
			0.056234,
			1,
			20
		};
		ace_weight=8.400000;
		dexterity=1.000000;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		irDistance=0;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=3;
		class manual: manual
		{
			begin1[]=
			{
				"\RH_m4\sound\Mk48.wss",
				2.500000,
				1,
				2000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.080000;
			dispersion=0.003000;
			recoil="RH_Mk48_Recoil";
			recoilProne="RH_Mk48_RecoilProne";
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=60;
			maxRangeProbab=0.050000;
		};
		class close: close
		{
			dispersion=0.003000;
			recoil="RH_Mk48_Recoil";
			recoilProne="RH_Mk48_RecoilProne";
			burst="8 + round random 4";
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.800000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
		class short: short
		{
			dispersion=0.003000;
			recoil="RH_Mk48_Recoil";
			recoilProne="RH_Mk48_RecoilProne";
			burst="6 + round random 2";
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=100;
			minRangeProbab=0.800000;
			midRange=200;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class medium: medium
		{
			dispersion=0.003000;
			recoil="RH_Mk48_Recoil";
			recoilProne="RH_Mk48_RecoilProne";
			burst="4 + round random 2";
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.800000;
			midRange=400;
			midRangeProbab=0.700000;
			maxRange=600;
			maxRangeProbab=0.050000;
		};
		class far: far
		{
			dispersion=0.003000;
			recoil="RH_Mk48_Recoil";
			recoilProne="RH_Mk48_RecoilProne";
			burst="2 + round random 2";
			aiRateOfFire=3;
			aiRateOfFireDistance=800;
			minRange=400;
			minRangeProbab=0.800000;
			midRange=600;
			midRangeProbab=0.700000;
			maxRange=800;
			maxRangeProbab=0.050000;
		};
	};
	class RH_Mk48mod1acog: RH_Mk48mod1
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_Mk48mod1";
			};
		};
		displayName="Mk48 Mod1 ACOG";
		model="\RH_m4\RH_Mk48mod1acog.p3d";
		picture="\RH_m4\inv\Mk48mod1acog.paa";
		modelOptics="\RH_m4\fnc_acog_ta31rco";
		ace_weight=9.000000;
		irDistance=150;
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
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
			};
			class Kolimator: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_Mk48mod1elcan: RH_Mk48mod1
	{
		delete ItemActions;
		displayName="Mk48 Mod1 M145";
		model="\RH_m4\RH_Mk48mod1elcan.p3d";
		picture="\RH_m4\inv\Mk48mod1elcan.paa";
		modelOptics="\RH_m4\fnc_m145_m249.p3d";
		ace_weight=9.400000;
		irDistance=150;
		class OpticsModes
		{
			class M145
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.085333;
				opticsZoomMax=0.085333;
				opticsZoomInit=0.085333;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=308;
				distanceZoomMax=308;
				cameraDir="";
			};
			class Kolimator: M145
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		weaponInfoType="RscWeaponEmpty";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class RHm4m16ammobox: ReammoBox
	{
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="RH M4/M16 weapons box";
		class TransportMagazines
		{
			class _xx_RH_20Rnd_762x51_AR10
			{
				magazine="RH_20Rnd_762x51_AR10";
				count=200;
			};
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
			class _xx_100Rnd_556x45_BetaCMag
			{
				magazine="100Rnd_556x45_BetaCMag";
				count=200;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine="200Rnd_556x45_M249";
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
			class _xx_RH_ar10
			{
				weapon="RH_ar10";
				count=6;
			};
			class _xx_RH_ar10s
			{
				weapon="RH_ar10s";
				count=6;
			};
			class _xx_RH_M4m
			{
				weapon="RH_M4m";
				count=4;
			};
			class _xx_RH_M4maim
			{
				weapon="RH_M4maim";
				count=4;
			};
			class _xx_RH_M4meotech
			{
				weapon="RH_M4meotech";
				count=4;
			};
			class _xx_RH_M4macog
			{
				weapon="RH_M4macog";
				count=4;
			};
			class _xx_RH_M4
			{
				weapon="RH_M4";
				count=6;
			};
			class _xx_RH_M4A1
			{
				weapon="RH_M4a1";
				count=6;
			};
			class _xx_RH_M4r
			{
				weapon="RH_M4r";
				count=6;
			};
			class _xx_RH_M4a1r
			{
				weapon="RH_M4a1r";
				count=6;
			};
			class _xx_RH_M4aim
			{
				weapon="RH_M4aim";
				count=6;
			};
			class _xx_RH_M4a1aim
			{
				weapon="RH_M4a1aim";
				count=6;
			};
			class _xx_RH_M4eotech
			{
				weapon="RH_M4eotech";
				count=6;
			};
			class _xx_RH_M4a1eotech
			{
				weapon="RH_M4a1eotech";
				count=6;
			};
			class _xx_RH_M4acog
			{
				weapon="RH_M4acog";
				count=6;
			};
			class _xx_RH_M4a1acog
			{
				weapon="RH_M4a1acog";
				count=6;
			};
			class _xx_RH_M4gl
			{
				weapon="RH_M4gl";
				count=6;
			};
			class _xx_RH_M4a1gl
			{
				weapon="RH_M4a1gl";
				count=6;
			};
			class _xx_RH_M4glaim
			{
				weapon="RH_M4glaim";
				count=6;
			};
			class _xx_RH_M4a1glaim
			{
				weapon="RH_M4a1glaim";
				count=6;
			};
			class _xx_RH_M4gleotech
			{
				weapon="RH_M4gleotech";
				count=6;
			};
			class _xx_RH_M4a1gleotech
			{
				weapon="RH_M4a1gleotech";
				count=6;
			};
			class _xx_RH_M4glacog
			{
				weapon="RH_M4glacog";
				count=6;
			};
			class _xx_RH_M4a1glacog
			{
				weapon="RH_M4a1glacog";
				count=6;
			};
			class _xx_RH_M4sd
			{
				weapon="RH_M4sd";
				count=6;
			};
			class _xx_RH_M4sdaim
			{
				weapon="RH_M4sdaim";
				count=6;
			};
			class _xx_RH_M4sdeotech
			{
				weapon="RH_M4sdeotech";
				count=6;
			};
			class _xx_RH_M4sdacog
			{
				weapon="RH_M4sdacog";
				count=6;
			};
			class _xx_RH_M4sdgl
			{
				weapon="RH_M4sdgl";
				count=6;
			};
			class _xx_RH_sdglaim
			{
				weapon="RH_M4sdglaim";
				count=6;
			};
			class _xx_RH_M4sdglLeotech
			{
				weapon="RH_M4sdgleotech";
				count=6;
			};
			class _xx_RH_M4sdglacog
			{
				weapon="RH_M4sdglacog";
				count=6;
			};
			class _xx_RH_M4aim_wdl
			{
				weapon="RH_M4aim_wdl";
				count=6;
			};
			class _xx_RH_M4gleotech_wdl
			{
				weapon="RH_M4gleotech_wdl";
				count=6;
			};
			class _xx_RH_M4sdaim_wdl
			{
				weapon="RH_M4sdaim_wdl";
				count=6;
			};
			class _xx_RH_M4sdgleotech_wdl
			{
				weapon="RH_M4sdgleotech_wdl";
				count=6;
			};
			class _xx_RH_M4sbr
			{
				weapon="RH_M4sbr";
				count=6;
			};
			class _xx_RH_M4sbraim
			{
				weapon="RH_M4sbraim";
				count=6;
			};
			class _xx_RH_M4sbreotech
			{
				weapon="RH_M4sbreotech";
				count=6;
			};
			class _xx_RH_M4sbracog
			{
				weapon="RH_M4sbracog";
				count=6;
			};
			class _xx_RH_M16A1
			{
				weapon="RH_M16A1";
				count=6;
			};
			class _xx_RH_M16A1GL
			{
				weapon="RH_M16A1GL";
				count=6;
			};
			class _xx_RH_M16A1s
			{
				weapon="RH_M16A1s";
				count=6;
			};
			class _xx_RH_M16A1sGL
			{
				weapon="RH_M16A1sGL";
				count=6;
			};
			class _xx_RH_M16A2
			{
				weapon="RH_M16A2";
				count=6;
			};
			class _xx_RH_M16A2GL
			{
				weapon="RH_M16A2GL";
				count=6;
			};
			class _xx_RH_M16A2aim
			{
				weapon="RH_M16A2aim";
				count=6;
			};
			class _xx_RH_M16A2GLaim
			{
				weapon="RH_M16A2GLaim";
				count=6;
			};
			class _xx_RH_M16A2s
			{
				weapon="RH_M16A2s";
				count=6;
			};
			class _xx_RH_M16A2sGL
			{
				weapon="RH_M16A2sGL";
				count=6;
			};
			class _xx_RH_M16A3
			{
				weapon="RH_M16A3";
				count=6;
			};
			class _xx_RH_M16A3GL
			{
				weapon="RH_M16A3GL";
				count=6;
			};
			class _xx_RH_M16A3aim
			{
				weapon="RH_M16A3aim";
				count=6;
			};
			class _xx_RH_M16A3s
			{
				weapon="RH_M16A3s";
				count=6;
			};
			class _xx_RH_M16A3sGL
			{
				weapon="RH_M16A3sGL";
				count=6;
			};
			class _xx_RH_M16A3c
			{
				weapon="RH_M16A3c";
				count=6;
			};
			class _xx_RH_M16A3cs
			{
				weapon="RH_M16A3cs";
				count=6;
			};
			class _xx_RH_M16A4
			{
				weapon="RH_M16A4";
				count=6;
			};
			class _xx_RH_M16A4aim
			{
				weapon="RH_M16A4aim";
				count=6;
			};
			class _xx_RH_M16A4acog
			{
				weapon="RH_M16A4acog";
				count=6;
			};
			class _xx_RH_M16A4GL
			{
				weapon="RH_M16A4GL";
				count=6;
			};
			class _xx_RH_M16A4eotech
			{
				weapon="RH_M16A4eotech";
				count=6;
			};
			class _xx_RH_M16A4glacog
			{
				weapon="RH_M16A4glacog";
				count=6;
			};
			class _xx_RH_M16A4GLaim
			{
				weapon="RH_M16A4GLaim";
				count=6;
			};
			class _xx_RH_M16A4GLeotech
			{
				weapon="RH_M16A4GLeotech";
				count=6;
			};
			class _xx_RH_Mk12
			{
				weapon="RH_Mk12";
				count=6;
			};
			class _xx_RH_Mk12mod1
			{
				weapon="RH_Mk12mod1";
				count=6;
			};
			class _xx_RH_Mk12sd
			{
				weapon="RH_Mk12sd";
				count=6;
			};
			class _xx_RH_Mk12mod1sd
			{
				weapon="RH_Mk12mod1sd";
				count=6;
			};
			class _xx_RH_M249
			{
				weapon="RH_M249";
				count=6;
			};
			class _xx_RH_M249acog
			{
				weapon="RH_M249acog";
				count=6;
			};
			class _xx_RH_M249elcan
			{
				weapon="RH_M249elcan";
				count=6;
			};
			class _xx_RH_M249p
			{
				weapon="RH_M249p";
				count=6;
			};
			class _xx_RH_M249pacog
			{
				weapon="RH_M249pacog";
				count=6;
			};
			class _xx_RH_M249pelcan
			{
				weapon="RH_M249pelcan";
				count=6;
			};
			class _xx_RH_Mk48mod1
			{
				weapon="RH_Mk48mod1";
				count=6;
			};
			class _xx_RH_Mk48mod1acog
			{
				weapon="RH_Mk48mod1acog";
				count=6;
			};
			class _xx_RH_Mk48mod1elcan
			{
				weapon="RH_Mk48mod1elcan";
				count=6;
			};
		};
	};
};
