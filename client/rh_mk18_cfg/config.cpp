class CfgPatches
{
	class RH_mk18
	{
		units[]=
		{
			"RHmk18box"
		};
		weapons[]=
		{
			"RH_mk18",
			"RH_mk18t",
			"RH_Mk18aim",
			"RH_Mk18acog",
			"RH_Mk18eot",
			"RH_Mk18sd",
			"RH_Mk18sdaim",
			"RH_Mk18sdacog",
			"RH_Mk18sdeot",
			"RH_Mk18gl",
			"RH_Mk18glaim",
			"RH_Mk18glacog",
			"RH_Mk18gleot",
			"RH_mk18d",
			"RH_Mk18daim",
			"RH_Mk18dacog",
			"RH_Mk18deot",
			"RH_Mk18dsd",
			"RH_Mk18dsdaim",
			"RH_Mk18dsdacog",
			"RH_Mk18dsdeot",
			"RH_Mk18dgl",
			"RH_Mk18dglaim",
			"RH_Mk18dglacog",
			"RH_Mk18dglaeot",
			"RH_mk18dc",
			"RH_mk18dcaim",
			"RH_mk18dcacog",
			"RH_mk18dceot",
			"RH_mk18dcsd",
			"RH_mk18dcsdaim",
			"RH_mk18dcsdacog",
			"RH_mk18dcsdeot",
			"RH_mk18dcgl",
			"RH_mk18dcglaim",
			"RH_mk18dcglacog",
			"RH_mk18dcglaeot"
		};
		requiredVersion=1.040000;
		requiredAddons[]=
		{
			"CAweapons"
		};
	};
};
class CfgRecoils
{
	RH_MkassaultRiflesBase[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000500,0.140000,0,0};
	RH_MkassaultRiflesBaseProne[]={0,0.005000,0.005000,0.005000,0.010000,0.009000,0.075000,0.005000,-0.000300,0.130000,0,0};
	RH_Mk18Recoil[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000400,0.130000,0,0};
	RH_Mk_M203GLBase[]={0,0.030000,0.050000,0.130000,0.010000,-0.001000,0.260000,0,0};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class M16_base: Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
		class M203Muzzle;
	};
	class M4A1: M16_base
	{
	};
	class RH_Mk18: M4A1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_Mk18gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_Mk18acog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18aim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18eot";
			};
			class UseAtt4 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18sd";
			};
		};
		displayName="Mk18";
		model="\RH_Mk18\RH_Mk18";
		picture="\RH_Mk18\inv\mk18.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_Mk18\Anim\RH_Mk18.rtm"
		};
		irDistance=0;
		reloadMagazineSound[]=
		{
			"\RH_Mk18\sound\m4_Reload",
			0.056234,
			1,
			20
		};
		ace_mv[]=
		{
			"ACE_B_556x45_S",
			792,
			"ACE_B_556x45_SB_S",
			720,
			"ACE_B_556x45_T",
			792,
			"B_556x45_Ball",
			792,
			"ACE_B_556x45_SB",
			720
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mk18\sound\m4",
				1.778280,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.086000;
			dispersion=0.002500;
			recoil="RH_Mk18Recoil";
			recoilProne="RH_mkassaultRiflesBaseProne";
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
				"\RH_mk18\sound\m4",
				1.778280,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.086000;
			recoil="RH_Mk18Recoil";
			recoilProne="RH_mkassaultRiflesBaseProne";
			dispersion=0.002500;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=60;
			midRangeProbab=0.700000;
			maxRange=90;
			maxRangeProbab=0.050000;
		};
	};
	class RH_Mk18d: RH_Mk18
	{
		delete ItemActions;
		displayName="Mk18 tan";
		model="\RH_Mk18\RH_Mk18d";
		picture="\RH_Mk18\inv\mk18d.paa";
	};
	class RH_mk18dc: RH_Mk18
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_mk18dcgl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_mk18dcacog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mk18dcaim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_mk18dceot";
			};
			class UseAtt4 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_mk18dcsd";
			};
		};
		displayName="Mk18 desert";
		model="\RH_Mk18\RH_mk18dc";
		picture="\RH_Mk18\inv\mk18dc.paa";
	};
	class RH_Mk18t: RH_Mk18
	{
		delete ItemActions;
		displayName="Mk18 tact";
		model="\RH_mk18\RH_Mk18t";
		picture="\RH_mk18\inv\mk18t.paa";
		irDistance=100;
	};
	class RH_Mk18aim: RH_Mk18t
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18glaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18sdaim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_Mk18";
			};
		};
		displayName="Mk18 Aimpoint";
		model="\RH_mk18\RH_Mk18aim";
		picture="\RH_mk18\inv\mk18aim.paa";
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_Mk18daim: RH_Mk18aim
	{
		delete ItemActions;
		displayName="Mk18 tan Aimpoint";
		model="\RH_mk18\RH_Mk18daim";
		picture="\RH_mk18\inv\mk18daim.paa";
	};
	class RH_mk18dcaim: RH_Mk18aim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_mk18dcglaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_mk18dcsdaim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_mk18dc";
			};
		};
		displayName="Mk18 desert Aimpoint";
		model="\RH_mk18\RH_mk18dcaim";
		picture="\RH_mk18\inv\mk18dcaim.paa";
	};
	class RH_Mk18eot: RH_Mk18t
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18gleot";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18sdeot";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_Mk18";
			};
		};
		displayName="Mk18 EOTech";
		model="\RH_mk18\RH_Mk18eot";
		picture="\RH_mk18\inv\mk18eot.paa";
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_Mk18deot: RH_Mk18eot
	{
		delete ItemActions;
		displayName="Mk18 tan EOTech";
		model="\RH_mk18\RH_Mk18deot";
		picture="\RH_mk18\inv\mk18deot.paa";
	};
	class RH_mk18dceot: RH_Mk18eot
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18dcglaeot";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18dcsdeot";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_Mk18dc";
			};
		};
		displayName="Mk18 desert EOTech";
		model="\RH_mk18\RH_Mk18dceot";
		picture="\RH_mk18\inv\mk18dceot.paa";
	};
	class RH_Mk18acog: RH_Mk18t
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18sdacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18glacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_Mk18";
			};
		};
		displayName="Mk18 ACOG";
		model="\RH_mk18\RH_Mk18acog";
		picture="\RH_mk18\inv\mk18acog.paa";
		modelOptics="\RH_mk18\NWD_acog_ta31RMR";
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
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
	};
	class RH_Mk18dacog: RH_Mk18acog
	{
		delete ItemActions;
		displayName="Mk18 tan ACOG";
		model="\RH_mk18\RH_Mk18dacog";
		picture="\RH_mk18\inv\mk18dacog.paa";
	};
	class RH_mk18dcacog: RH_Mk18acog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18dcsdacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18dcglacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_Mk18dc";
			};
		};
		displayName="Mk18 desert ACOG";
		model="\RH_mk18\RH_mk18dcacog";
		picture="\RH_mk18\inv\mk18dcacog.paa";
	};
	class RH_Mk18sd: RH_Mk18t
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18sdeot";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_Mk18sdacog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18sdaim";
			};
			class UseAtt3 : UseAtt{
				text = "Detach Silencer";
				script = "spawn player_removeAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_Mk18";
			};
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		displayName="Mk18 SD";
		model="\RH_mk18\RH_Mk18sd";
		picture="\RH_mk18\inv\mk18sd.paa";
		ace_mv[]=
		{
			"ACE_B_556x45_S",
			800,
			"ACE_B_556x45_SB_S",
			740,
			"ACE_B_556x45_T",
			800,
			"B_556x45_Ball",
			800,
			"ACE_B_556x45_SB",
			740
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mk18\sound\m4sd",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.061000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mk18\sound\m4sd",
				1.000000,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.061000;
		};
	};
	class RH_Mk18dsd: RH_Mk18sd
	{
		delete ItemActions;
		displayName="Mk18 tan SD";
		model="\RH_mk18\RH_Mk18dsd";
		picture="\RH_mk18\inv\mk18dsd.paa";
	};
	class RH_mk18dcsd: RH_Mk18sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18dcsdeot";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_Mk18dcsdacog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18dcsdaim";
			};
			class UseAtt3 : UseAtt{
				text = "Detach Silencer";
				script = "spawn player_removeAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_Mk18dc";
			};
		};
		displayName="Mk18 desert SD";
		model="\RH_mk18\RH_mk18dcsd";
		picture="\RH_mk18\inv\mk18dcsd.paa";
	};
	class RH_Mk18sdaim: RH_Mk18sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_Mk18sd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18aim";
			};
		};
		
		displayName="Mk18 SD Aimpoint";
		model="\RH_mk18\RH_Mk18sdaim";
		picture="\RH_mk18\inv\mk18sdaim.paa";
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_Mk18dsdaim: RH_Mk18sdaim
	{
		delete ItemActions;
		displayName="Mk18 tan SD Aimpoint";
		model="\RH_mk18\RH_Mk18dsdaim";
		picture="\RH_mk18\inv\mk18dsdaim.paa";
	};
	class RH_mk18dcsdaim: RH_Mk18sdaim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_Mk18dcsd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18dcaim";
			};
		};
		displayName="Mk18 desert SD Aimpoint";
		model="\RH_mk18\RH_mk18dcsdaim";
		picture="\RH_mk18\inv\mk18dcsdaim.paa";
	};
	class RH_Mk18sdacog: RH_Mk18sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_Mk18sd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18acog";
			};
		};
		displayName="Mk18 SD ACOG";
		model="\RH_mk18\RH_Mk18sdacog";
		picture="\RH_mk18\inv\mk18sdacog.paa";
		modelOptics="\RH_mk18\NWD_acog_ta31RMR";
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
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
	};
	class RH_Mk18dsdacog: RH_Mk18sdacog
	{
		delete ItemActions;
		displayName="Mk18 tan SD ACOG";
		model="\RH_mk18\RH_Mk18dsdacog";
		picture="\RH_mk18\inv\mk18dsdacog.paa";
	};
	class RH_mk18dcsdacog: RH_Mk18sdacog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_mk18dcsd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_mk18dcacog";
			};
		};
		displayName="Mk18 desert SD ACOG";
		model="\RH_mk18\RH_mk18dcsdacog";
		picture="\RH_mk18\inv\mk18dcsdacog.paa";
	};
	class RH_Mk18sdeot: RH_Mk18sd
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_Mk18sd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18holo";
			};
		};
		displayName="Mk18 SD EOTech";
		model="\RH_mk18\RH_Mk18sdeot";
		picture="\RH_mk18\inv\mk18sdeot.paa";
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_Mk18dsdeot: RH_Mk18sdeot
	{
		delete ItemActions;
		displayName="Mk18 tan SD EOTech";
		model="\RH_mk18\RH_Mk18dsdeot";
		picture="\RH_mk18\inv\mk18dsdeot.paa";
	};
	class RH_mk18dcsdeot: RH_Mk18sdeot
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_Mk18dcsd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Mk18dcholo";
			};
		};
		displayName="Mk18 desert SD EOTech";
		model="\RH_mk18\RH_mk18dcsdeot";
		picture="\RH_mk18\inv\mk18dcsdeot.paa";
	};
	class RH_Mk18gl: RH_Mk18t
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_Mk18glacog";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18glaim";
			};
			class UseAtt3 : UseAtt1{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18gleot";
			};
		};
		displayName="Mk18 M203";
		model="\RH_mk18\RH_Mk18gl";
		picture="\RH_mk18\inv\mk18gl.paa";
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
		dexterity=1.590000;
		class RH_M203Muzzle: M203Muzzle
		{
			sound[]=
			{
				"\RH_mk18\sound\M203",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_mk18\sound\M203_Reload",
				0.056234,
				1,
				20
			};
			recoil="RH_Mk_M203GLBase";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class RH_M203Muzzle_AI: RH_M203Muzzle
		{
			cameraDir="";
			memoryPointCamera="";
			showtoplayer=0;
			minRange=50;
			minRangeProbab=0.500000;
			midRange=200;
			midRangeProbab=0.800000;
			maxRange=400;
			maxRangeProbab=0.100000;
		};
	};
	class RH_Mk18dgl: RH_Mk18gl
	{
		delete ItemActions;
		displayName="Mk18 tan M203";
		model="\RH_mk18\RH_Mk18dgl";
		picture="\RH_mk18\inv\mk18dgl.paa";
	};
	class RH_mk18dcgl: RH_Mk18gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18dc";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_Mk18dcglacog";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18glaim";
			};
			class UseAtt3 : UseAtt1{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18gleot";
			};
		};
		displayName="Mk18 desert M203";
		model="\RH_mk18\RH_mk18dcgl";
		picture="\RH_mk18\inv\mk18dcgl.paa";
	};
	class RH_Mk18glaim: RH_Mk18gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18aim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18gl";
			};
		};
		displayName="Mk18 Aimpoint M203";
		model="\RH_mk18\RH_Mk18glaim";
		picture="\RH_mk18\inv\mk18glaim.paa";
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_Mk18dglaim: RH_Mk18glaim
	{
		delete ItemActions;
		displayName="Mk18 tan Aimpoint M203";
		model="\RH_mk18\RH_Mk18dglaim";
		picture="\RH_mk18\inv\mk18dglaim.paa";
	};
	class RH_mk18dcglaim: RH_Mk18glaim
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18dcaim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Mk18dcgl";
			};
		};
		displayName="Mk18 desert Aimpoint M203";
		model="\RH_mk18\RH_mk18dcglaim";
		picture="\RH_mk18\inv\mk18dcglaim.paa";
	};
	class RH_Mk18gleot: RH_Mk18gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18eot";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18gl";
			};
		};
		displayName="Mk18 EOTech M203";
		model="\RH_mk18\RH_Mk18gleot";
		picture="\RH_mk18\inv\mk18gleot.paa";
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_Mk18dgleot: RH_Mk18gleot
	{
		delete ItemActions;
		displayName="Mk18 tan EOTech M203";
		model="\RH_mk18\RH_Mk18dgleot";
		picture="\RH_mk18\inv\mk18dgleot.paa";
	};
	class RH_mk18dcgleot: RH_Mk18gleot
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18dceot";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_Mk18dcgl";
			};
		};
		displayName="Mk18 desert EOTech M203";
		model="\RH_mk18\RH_mk18dcgleot";
		picture="\RH_mk18\inv\mk18dcgleot.paa";
	};
	class RH_Mk18glacog: RH_Mk18gl
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18acog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_Mk18gl";
			};
		};
		displayName="Mk18 ACOG M203";
		model="\RH_mk18\RH_Mk18glacog";
		picture="\RH_mk18\inv\mk18glacog.paa";
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
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.250000;
				opticsZoomMax=1.100000;
				opticsZoomInit=0.500000;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle",
			"RH_M203Muzzle_AI"
		};
	};
	class RH_Mk18dglacog: RH_Mk18glacog
	{
		delete ItemActions;
		displayName="Mk18 tan ACOG M203";
		model="\RH_mk18\RH_Mk18dglacog";
		picture="\RH_mk18\inv\mk18dglacog.paa";
	};
	class RH_mk18dcglacog: RH_Mk18glacog
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_Mk18dcacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_Mk18dcgl";
			};
		};
		displayName="Mk18 desert ACOG M203";
		model="\RH_mk18\RH_mk18dcglacog";
		picture="\RH_mk18\inv\mk18dcglacog.paa";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class RHmk18box: ReammoBox
	{
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="RH Mk18 weapons box";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=200;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine="30Rnd_545x39_AK";
				count=200;
			};
			class _xx_30Rnd_556x45_G36
			{
				magazine="30Rnd_556x45_G36";
				count=200;
			};
			class _xx_100Rnd_556x45_BetaCMag
			{
				magazine="100Rnd_556x45_BetaCMag";
				count=200;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine="30Rnd_556x45_StanagSD";
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
			class _xx_RH_Mk18
			{
				weapon="RH_Mk18";
				count=6;
			};
			class _xx_RH_Mk18t
			{
				weapon="RH_Mk18t";
				count=6;
			};
			class _xx_RH_Mk18aim
			{
				weapon="RH_Mk18aim";
				count=6;
			};
			class _xx_RH_Mk18eot
			{
				weapon="RH_Mk18eot";
				count=6;
			};
			class _xx_RH_Mk18acog
			{
				weapon="RH_Mk18acog";
				count=6;
			};
			class _xx_RH_Mk18GL
			{
				weapon="RH_Mk18GL";
				count=6;
			};
			class _xx_RH_Mk18GLACOG
			{
				weapon="RH_Mk18GLACOG";
				count=6;
			};
			class _xx_RH_Mk18GLAim
			{
				weapon="RH_Mk18GLaim";
				count=6;
			};
			class _xx_RH_Mk18GLeot
			{
				weapon="RH_Mk18GLeot";
				count=6;
			};
			class _xx_RH_Mk18SD
			{
				weapon="RH_Mk18SD";
				count=6;
			};
			class _xx_RH_Mk18SDAIM
			{
				weapon="RH_Mk18SDAIM";
				count=6;
			};
			class _xx_RH_Mk18SDAcog
			{
				weapon="RH_Mk18SDAcog";
				count=6;
			};
			class _xx_RH_Mk18SDeot
			{
				weapon="RH_Mk18SDeot";
				count=6;
			};
			class _xx_RH_Mk18d
			{
				weapon="RH_Mk18d";
				count=6;
			};
			class _xx_RH_Mk18daim
			{
				weapon="RH_Mk18daim";
				count=6;
			};
			class _xx_RH_Mk18deot
			{
				weapon="RH_Mk18deot";
				count=6;
			};
			class _xx_RH_Mk18dacog
			{
				weapon="RH_Mk18dacog";
				count=6;
			};
			class _xx_RH_Mk18dGL
			{
				weapon="RH_Mk18dGL";
				count=6;
			};
			class _xx_RH_Mk18dGLACOG
			{
				weapon="RH_Mk18dGLACOG";
				count=6;
			};
			class _xx_RH_Mk18dGLAim
			{
				weapon="RH_Mk18dGLaim";
				count=6;
			};
			class _xx_RH_Mk18dGLeot
			{
				weapon="RH_Mk18dGLeot";
				count=6;
			};
			class _xx_RH_Mk18dSD
			{
				weapon="RH_Mk18dSD";
				count=6;
			};
			class _xx_RH_Mk18dSDAIM
			{
				weapon="RH_Mk18dSDAIM";
				count=6;
			};
			class _xx_RH_Mk18dSDAcog
			{
				weapon="RH_Mk18dSDAcog";
				count=6;
			};
			class _xx_RH_Mk18dSDeot
			{
				weapon="RH_Mk18dSDeot";
				count=6;
			};
			class _xx_RH_Mk18dc
			{
				weapon="RH_Mk18dc";
				count=6;
			};
			class _xx_RH_Mk18dcaim
			{
				weapon="RH_Mk18dcaim";
				count=6;
			};
			class _xx_RH_Mk18dceot
			{
				weapon="RH_Mk18dceot";
				count=6;
			};
			class _xx_RH_Mk18dcacog
			{
				weapon="RH_Mk18dcacog";
				count=6;
			};
			class _xx_RH_Mk18dcGL
			{
				weapon="RH_Mk18dcGL";
				count=6;
			};
			class _xx_RH_Mk18dcGLACOG
			{
				weapon="RH_Mk18dcGLACOG";
				count=6;
			};
			class _xx_RH_Mk18dcGLAim
			{
				weapon="RH_Mk18dcGLaim";
				count=6;
			};
			class _xx_RH_Mk18dcGLeot
			{
				weapon="RH_Mk18dcGLeot";
				count=6;
			};
			class _xx_RH_Mk18dcSD
			{
				weapon="RH_Mk18dcSD";
				count=6;
			};
			class _xx_RH_Mk18dcSDAIM
			{
				weapon="RH_Mk18dcSDAIM";
				count=6;
			};
			class _xx_RH_Mk18dcSDAcog
			{
				weapon="RH_Mk18dcSDAcog";
				count=6;
			};
			class _xx_RH_Mk18dcSDeot
			{
				weapon="RH_Mk18dcSDeot";
				count=6;
			};
		};
	};
};
