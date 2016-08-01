class CfgPatches
{
	class RHmgswp
	{
		units[]=
		{
			"RHmgswpammobox"
		};
		weapons[]=
		{
			"RH_AK102",
			"RH_AK102GL",
			"RH_M4C",
			"RH_M4CS",
			"RH_M4CSAIM",
			"RH_M4CSEOTECH",
			"RH_M4CSACOG",
			"RH_M4CT",
			"RH_M4CAIM",
			"RH_M4CEOTECH",
			"RH_M4CACOG",
			"RH_M4CTSD",
			"RH_M4CTSDAIM",
			"RH_M4CTSDACOG",
			"RH_M4CTSDEOTECH",
			"RH_M4CGL",
			"RH_M4CGLAIM",
			"RH_M4CGLEOTECH",
			"RH_M4CGLACOG",
			"RH_M4CTSDGL",
			"RH_M4CTSDGLAIM",
			"RH_M4CTSDGLACOG",
			"RH_M4CTSDGLEOTECH",
			"RH_M4CMK",
			"RH_M4CMKAIM",
			"RH_M4CMKEOTECH",
			"RH_M4CMKACOG",
			"RH_M14EBR",
			"RH_M14EBRSP",
			"RH_M14EBRGC",
			"RH_M14EBR_SD",
			"RH_M14EBRSP_SD",
			"RH_M14EBRGC_SD",
			"RH_MK21A5",
			"RH_MK21A5SD",
			"RH_MK14",
			"RH_MK14AIM",
			"RH_MK14ACOG",
			"RH_MK14EOTECH",
			"RH_MK14SD",
			"RH_MK14SDAIM",
			"RH_MK14SDACOG",
			"RH_MK14SDEOTECH",
			"RH_SCARL",
			"RH_SCARL_AIM",
			"RH_SCARLB_AIM",
			"RH_SCARL_DOC",
			"RH_SCARL_EOTECH",
			"RH_SCARL_ACOG",
			"RH_SCARL_MK4",
			"RH_SCARL_GL",
			"RH_SCARL_GL_AIM",
			"RH_SCARL_GL_EOTECH",
			"RH_SCARL_GL_ACOG",
			"RH_SCARLB_GL_ACOG",
			"RH_SCARL_SD_AIM",
			"RH_SCARL_SD_DOC",
			"RH_SCARL_SD_EOTECH",
			"RH_SCARLB_SD_EOTECH",
			"RH_SCARL_SD_ACOG",
			"RH_SCARL_SD_GL_AIM",
			"RH_SCARLB_SD_GL_AIM",
			"RH_SCARL_SD_GL_EOTECH",
			"RH_SCARL_SD_GL_ACOG",
			"RH_SCARH",
			"RH_SCARH_AIM",
			"RH_SCARH_EOTECH",
			"RH_SCARHB_EOTECH",
			"RH_SCARH_ACOG",
			"RH_SCARH_MK4",
			"RH_SCARH_SPECTERDR",
			"RH_SCARH_GL",
			"RH_SCARH_GL_AIM",
			"RH_SCARH_GL_EOTECH",
			"RH_SCARH_GL_ACOG",
			"RH_SCARHB_GL_ACOG",
			"RH_SCARH_GL_SPECTERDR",
			"RH_SCARH_SD_AIM",
			"RH_SCARHB_SD_AIM",
			"RH_SCARH_SD_EOTECH",
			"RH_SCARH_SD_ACOG",
			"RH_SCARH_SD_GL_AIM",
			"RH_SCARH_SD_GL_EOTECH",
			"RH_SCARHB_SD_GL_EOTECH",
			"RH_SCARAK",
			"RH_SCARAKAIM",
			"RH_SCARAKBAIM",
			"RH_SCARAKEOTECH",
			"RH_SCARAKACOG",
			"RH_XM8",
			"RH_XM8GL",
			"RH_XM8C",
			"RH_XM8SH",
			"RH_XM8SAW",
			"RH_XM8D",
			"RH_XM8DGL",
			"RH_XM8DC",
			"RH_XM8DSH",
			"RH_XM8DSAW",
			"RH_M4CT_F",
			"RH_M4CTSD_F",
			"RH_M4CTSDAIM_F",
			"RH_M4CTSDEOTECH_F",
			"RH_M4CTSDACOG_F",
			"RH_M4CTSDGL_F",
			"RH_M4CTSDGLAIM_F",
			"RH_M4CTSDGLEOTECH_F",
			"RH_M4CTSDGLACOG_F",
			"RH_M60E4",
			"RH_M60E4_EOTECH",
			"RH_M60E4_ACOG",
			"RH_M60E4_ELCAN",
			"RH_MK43",
			"RH_MK43_EOTECH",
			"RH_MK43_ACOG",
			"RH_MK43_ELCAN"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_AK",
			"CAWeapons_E",
			"CAWeapons_E_M14",
			"CAWeapons_E_scar",
			"CAWeapons_PMC_XM8"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class RHmgswp
		{
			list[]=
			{
				"RHmgswp"
			};
		};
	};
};
class CfgRecoils
{
	RH_mgs_M14Recoil[]={0,0.013000,0.015000,0.020000,0.013000,0.015000,0.100000,0.009000,0.015000,0.120000,0,0};
	RH_mgs_M14prRecoil[]={0,0.012000,0.010000,0.013000,0.012000,0.010000,0.070000,0.007000,0,0.120000,0,0};
	RH_mgs_assaultRiflesBase[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000500,0.140000,0,0};
	RH_mgs_assaultRiflesBaseProne[]={0,0.005000,0.005000,0.005000,0.010000,0.009000,0.075000,0.005000,-0.000300,0.130000,0,0};
	RH_mgs_M4A1Recoil[]={0,0.005000,0.005000,0.005000,0.010000,0.011000,0.090000,0.005000,-0.000400,0.130000,0,0};
	RH_mgs_M203GLBase[]={0,0.030000,0.050000,0.130000,0.010000,-0.001000,0.260000,0,0};
	RH_mgs_AK102Recoil[]={0,0.008000,0.006000,0.010000,0.008000,0.006000,0.040000,0.004000,0.012000,0.120000,0,0};
	RH_mgs_AK102RecoilProne[]={0,0.007000,0.003000,0.010000,0.007000,0.003000,0.170000,0.003000,0,0.220000,0,0};
	RH_SCAR_LRecoil[]={0,0.008000,0.006000,0.010000,0.008000,0.006000,0.040000,0.004000,0.012000,0.120000,0,0};
	RH_SCAR_LRecoilProne[]={0,0.005000,0.004000,0.010000,0.005000,0.004000,0.070000,0.004000,0.001000,0.160000,0,0};
	RH_SCAR_HRecoil[]={0,0.014000,0.015000,0.020000,0.014000,0.015000,0.070000,0.005000,0.018000,0.130000,0,0};
	RH_SCAR_HRecoilProne[]={0,0.010000,0.006000,0.013000,0.010000,0.006000,0.100000,0.008000,0.001000,0.120000,0,0};
	RH_xm8_Rifle_Recoil[]={0,0.008000,0.006000,0.010000,0.008000,0.006000,0.040000,0.004000,0.012000,0.170000,0,0};
	RH_xm8_Rifle_Recoil_B[]={0,0.008000,0.008000,0.010000,0.008000,0.008000,0.040000,0.006000,0.008000,0.170000,0,0};
	RH_xm8_Rifle_RecoilProne[]={0,0.005000,0.006000,0.010000,0.005000,0.006000,0.050000,0.003000,0.001000,0.120000,0,0};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class RH_30Rnd_556x45_AK: 30Rnd_556x45_Stanag//TODO(Jukki) Ak102 rounds
	{
		displayName="30Rnd. AK102";
		picture="\RH_mgswp\inv\m_ak102.paa";
		descriptionShort="Caliber: 5.56x45mm NATO<br/>Rounds: 30<br/>Used in: AK101, AK102";
		initSpeed=850;
	};
	class 8Rnd_B_Beneli_74Slug;
	class RH_5Rnd_B_Beneli_74Slug: 8Rnd_B_Beneli_74Slug
	{
		displayName="5Rnd 12Gauge Slug";
		descriptionShort="5Rnd 12Gauge Slug";
		count=5;
		type=16;
	};
	class 8Rnd_B_Beneli_Pellets;
	class RH_5Rnd_B_Beneli_Pellets: 8Rnd_B_Beneli_Pellets
	{
		displayName="5Rnd 12Gauge Buckshot";
		descriptionShort="5Rnd 12Gauge Buckshot";
		count=5;
		type=16;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class GrenadeLauncher;
	class AK_BASE: Rifle
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
		class GP25Muzzle: GrenadeLauncher
		{
		};
		class RH_GP30MUZZLE: GP25Muzzle
		{
			displayName="GP-30";
			sound[]=
			{
				"\RH_mgswp\Sound\GP30",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_mgswp\Sound\GP30_reload",
				0.031623,
				1,
				20
			};
			minRange=40;
			minRangeProbab=0;
			midRange=100;
			midRangeProbab=0;
			maxRange=400;
			maxRangeProbab=0;
			showtoplayer=1;
			opticsZoomMin=0.333330;
			opticsZoomMax=1;
			opticsZoomInit="0.33333*2";
			discretefov[]={};
			discreteInitIndex=0;
		};
		class RH_GP30MUZZLE_AI: RH_GP30MUZZLE
		{
			minRangeProbab=0.500000;
			midRangeProbab=0.800000;
			maxRangeProbab=0.020000;
			cameraDir="";
			memoryPointCamera="";
			showtoplayer=0;
		};
	};
	class AKS_BASE: AK_BASE
	{
	};
	class AKS_74_U: AKS_BASE
	{
	};
	class RH_AK102: AKS_74_U
	{
		displayName="AK102";
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\AK.rtm"
		};
		model="\RH_mgswp\RH_ak102.p3d";
		picture="\RH_mgswp\inv\ak102.paa";
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\ak102_reload",
			0.031623,
			1,
			20
		};
		magazines[]=
		{
			"RH_30Rnd_556x45_AK"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		ace_weight=3;
		dexterity="3.75/(3) + 0.5 + 0.1*(0)";
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\Sound\ak102",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.100000;
			recoil="RH_mgs_AK102Recoil";
			recoilProne="RH_mgs_AK102RecoilProne";
			dispersion=0.002500;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=150;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.030000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mgswp\Sound\ak102",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.100000;
			recoil="RH_mgs_AK102Recoil";
			recoilProne="RH_mgs_AK102RecoilProne";
			dispersion=0.002500;
			aiRateOfFire=0.200000;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.020000;
		};
		class Library
		{
			libTextDesc="The AK102 was designed for close quarters combat, and is commonly used by special forces and police. The rifles shorter barrel aids in clearing buildings and navigating tight spaces. The rifle is produced by Russia's leading small arms manufacturer Izhmash Small Arms. They produce four other variations of the rifle in different calibers, barrel lengths, and weights. The AK-102 comes with cleaning kit, oil bottle, and bayonet.";
		};
	};
	class RH_AK102GL: RH_AK102
	{
		displayName="AK102 GP-30";
		descriptionShort="CQB rifle with grenade launcher<br/>Caliber: 5.56x45mm NATO";
		model="\RH_mgswp\RH_ak102gl.p3d";
		picture="\RH_mgswp\inv\ak102gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CA\weapons2\Data\Anim\XM8GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_GP30MUZZLE",
			"RH_GP30MUZZLE_AI"
		};
		ace_weight="3+ 1.3";
		dexterity="3.75/(3+ 1.3) + 0.5 + 0.1*(0)";
	};
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
	class RH_M4C: M4A1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_m4cgl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4cacog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4caim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4ceotech";
			};
			class UseAtt4 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsd";
			};
		};
		displayName="M4A1 Custom";
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO";
		handAnim[]={};
		model="\RH_mgswp\RH_m4c.p3d";
		picture="\RH_mgswp\inv\m4c.paa";
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\M4_Reload",
			0.031623,
			1,
			20
		};
		ace_weight=2.700000;
		dexterity="3.75/(2.7) + 0.5 + 0.1*(0)";
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		irDistance=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\m4",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="RH_mgs_M4A1Recoil";
			recoilProne="RH_mgs_assaultRiflesBaseProne";
			aiRateOfFire=1;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mgswp\sound\m4",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="RH_mgs_M4A1Recoil";
			recoilProne="RH_mgs_assaultRiflesBaseProne";
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=100;
			maxRangeProbab=0.020000;
		};
		class RH_M203MUZZLE: M203Muzzle
		{
			sound[]=
			{
				"\RH_mgswp\sound\M203",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_mgswp\sound\M203_Reload",
				0.031623,
				1,
				20
			};
			recoil="RH_mgs_M203GLbase";
			minRange=40;
			minRangeProbab=0;
			midRange=100;
			midRangeProbab=0;
			maxRange=400;
			maxRangeProbab=0;
			showtoplayer=1;
			opticsZoomMin=0.333330;
			opticsZoomMax=1;
			opticsZoomInit="0.33333*2";
			discretefov[]={};
			discreteInitIndex=0;
		};
		class RH_M203MUZZLE_AI: RH_M203MUZZLE
		{
			minRangeProbab=0.500000;
			midRangeProbab=0.800000;
			maxRangeProbab=0.020000;
			cameraDir="";
			memoryPointCamera="";
			showtoplayer=0;
		};
		class RH_MKMuzzle: Rifle
		{
			displayName="Masterkey";
			magazines[]=
			{
				"RH_5Rnd_B_Beneli_Pellets",
				"RH_5Rnd_B_Beneli_74Slug"
			};
			sound[]=
			{
				"\RH_mgswp\sound\Masterkey",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_mgswp\sound\Masterkey_Reload",
				0.031623,
				1,
				20
			};
			reloadSound[]=
			{
				"\RH_mgswp\sound\Masterkey_pump",
				0.100000,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.500000;
			recoil="RH_mgs_M203GLbase";
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=50;
			minRange=0;
			minRangeProbab=0.500000;
			midRange=60;
			midRangeProbab=0.200000;
			maxRange=100;
			maxRangeProbab=0.030000;
			opticsZoomMin=0.333330;
			opticsZoomMax=1;
			opticsZoomInit="0.33333*2";
			discretefov[]={};
			discreteInitIndex=0;
		};
	};
	class RH_M4CS: RH_M4C
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4csaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4cseotech";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4csacog";
			};
		};
		displayName="M4A1 S.I.R.";
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>Vertical grip";
		model="\RH_mgswp\RH_m4cs.p3d";
		picture="\RH_mgswp\inv\m4cs.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		ace_weight="2.7+ 0.1";
		dexterity="3.75/(2.7+ 0.1) + 0.5 + 0.1*(1)";
	};
	class RH_M4CSAIM: RH_M4CS
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4CS";
			};
		};
		displayName="M4A1 S.I.R. CCO";
		model="\RH_mgswp\RH_m4csaim.p3d";
		picture="\RH_mgswp\inv\m4csaim.paa";
		ace_weight="2.7+ 0.1+ (0.25)*1.2";
		dexterity="3.75/(2.7+ 0.1+ (0.25)*1.2) + 0.5 + 0.1*(1)";
	};
	class RH_M4CSEOTECH: RH_M4CS
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_M4CS";
			};
		};
		displayName="M4A1 S.I.R. Holo";
		model="\RH_mgswp\RH_m4cseotech.p3d";
		picture="\RH_mgswp\inv\m4cseotech.paa";
		ace_weight="2.7+ 0.1+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 0.1+ (0.3)*1.2) + 0.5 + 0.1*(1)";
	};
	class RH_M4CSACOG: RH_M4CS
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M4CS";
			};
		};
		displayName="M4A1 S.I.R. ACOG";
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>Vertical grip";
		model="\RH_mgswp\RH_m4csacog.p3d";
		picture="\RH_mgswp\inv\m4csacog.paa";
		ace_weight="2.7+ 0.1+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 0.1+ (0.3)*1.2) + 0.5 + 0.1*(1)";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=600;
			maxRangeProbab=0.030000;
		};
	};
	class RH_M4CT: RH_M4C
	{
		delete ItemActions;
		displayName="M4A1 Custom Tactical";
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_m4ct.p3d";
		picture="\RH_mgswp\inv\m4ct.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4ct.rtm"
		};
		irDistance=150;
		ace_weight="2.7+ 0.1+ 0.2+ 0.2";
		dexterity="3.75/(2.7+ 0.1+ 0.2+ 0.2) + 0.5 + 0.1*(1)";
	};
	class RH_M4CT_F: RH_M4CT
	{
		delete ItemActions;
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>Flashlight, vertical grip";
		irDistance=0;
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
	class RH_M4CAIM: RH_M4C
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4cglaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdaim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_m4c";
			};
		};
		displayName="M4A1 Custom CCO";
		model="\RH_mgswp\RH_m4caim.p3d";
		picture="\RH_mgswp\inv\m4caim.paa";
		ace_weight="2.7+ (0.25)*1.2";
		dexterity="3.75/(2.7+ (0.25)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CEOTECH: RH_M4C
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4cgleotech";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdeotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_m4c";
			};
		};
		displayName="M4A1 Custom Holo";
		model="\RH_mgswp\RH_m4ceotech.p3d";
		picture="\RH_mgswp\inv\m4ceotech.paa";
		ace_weight="2.7+ (0.3)*1.2";
		dexterity="3.75/(2.7+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CACOG: RH_M4C
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4cglacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4c";
			};
		};
		displayName="M4A1 Custom ACOG";
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X";
		model="\RH_mgswp\RH_m4cacog.p3d";
		picture="\RH_mgswp\inv\m4cacog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="2.7+ (0.3)*1.2";
		dexterity="3.75/(2.7+ (0.3)*1.2) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=600;
			maxRangeProbab=0.030000;
		};
	};
	class RH_M4CTSD: RH_M4C
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4ctsdeotech";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4ctsdacog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4ctsdaim";
			};
			class UseAtt3 : UseAtt{
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_m4ctsdgl";
			};
			class UseAtt4 : UseAtt{
				text = "Detach Silencer";
				script = "spawn player_removeAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4c";
			};
		};
		displayName="M4A1 SD Custom";
		descriptionShort="Suppressed carbine<br/>Caliber: 5.56x45mm NATO<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_m4ctsd.p3d";
		picture="\RH_mgswp\inv\m4ctsd.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4ct.rtm"
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		ace_suppressed=1;
		irDistance=150;
		ace_weight="2.7+ 0.1+ 0.2+ 0.2+ 0.6";
		dexterity="3.75/(2.7+ 0.1+ 0.2+ 0.2+ 0.6) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\m4sd",
				1.000000,
				1,
				110
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
				"\RH_mgswp\sound\m4sd",
				1.000000,
				1,
				110
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_M4CTSD_F: RH_M4CTSD
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine<br/>Caliber: 5.56x45mm NATO<br/>Flashlight, vertical grip";
		irDistance=0;
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
	class RH_M4CTSDAIM: RH_M4CTSD
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach M203";
				att = "Attachment_M203";
				out = "RH_m4ctsdglaim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_M4CTSD";
			};
			class UseAtt2 : UseAtt1{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4caim";
			};
		};
		displayName="M4A1 SD Custom CCO";
		model="\RH_mgswp\RH_m4ctsdaim.p3d";
		picture="\RH_mgswp\inv\m4ctsdaim.paa";
		ace_weight="2.7+ 0.1+ 0.2+ 0.2+ 0.6+ (0.25)*1.2";
		dexterity="3.75/(2.7+ 0.1+ 0.2+ 0.2+ 0.6+ (0.25)*1.2) + 0.5 + 0.1*(1)";
	};
	class RH_M4CTSDAIM_F: RH_M4CTSDAIM
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine<br/>Caliber: 5.56x45mm NATO<br/>Flashlight, vertical grip";
		irDistance=0;
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
	class RH_M4CTSDEOTECH: RH_M4CTSD
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4ctsdgleotech";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_m4ctsd";
			};
			class UseAtt2 : UseAtt1{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4ceotech";
			};
		};
		displayName="M4A1 SD Custom Holo";
		model="\RH_mgswp\RH_m4ctsdeotech.p3d";
		picture="\RH_mgswp\inv\m4ctsdeotech.paa";
		ace_weight="2.7+ 0.1+ 0.2+ 0.2+ 0.6+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 0.1+ 0.2+ 0.2+ 0.6+ (0.3)*1.2) + 0.5 + 0.1*(1)";
	};
	class RH_M4CTSDEOTECH_F: RH_M4CTSDEOTECH
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine<br/>Caliber: 5.56x45mm NATO<br/>Flashlight, vertical grip";
		irDistance=0;
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
	class RH_M4CTSDACOG: RH_M4CTSD
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "RH_m4ctsdglacog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4ctsd";
			};
			class UseAtt2 : UseAtt1{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4cacog";
			};
		};
		displayName="M4A1 SD Custom ACOG";
		descriptionShort="Suppressed carbine<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_m4ctsdacog.p3d";
		picture="\RH_mgswp\inv\m4ctsdacog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="2.7+ 0.1+ 0.2+ 0.2+ 0.6+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 0.1+ 0.2+ 0.2+ 0.6+ (0.3)*1.2) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=600;
			maxRangeProbab=0.030000;
		};
	};
	class RH_M4CTSDACOG_F: RH_M4CTSDACOG
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>Flashlight, vertical grip";
		irDistance=0;
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
	class RH_M4CGL: RH_M4C
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4c";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4cglacog";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4cglaim";
			};
			class UseAtt3 : UseAtt1{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4cgleotech";
			};
			class UseAtt4 : UseAtt1{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdgl";
			};
		};
		displayName="M4A1 M203 Custom";
		descriptionShort="Carbine with M203 launcher<br/>Caliber: 5.56x45mm NATO";
		model="\RH_mgswp\RH_m4cgl.p3d";
		picture="\RH_mgswp\inv\m4cgl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203MUZZLE",
			"RH_M203MUZZLE_AI"
		};
		ace_weight="2.7+ 1.25";
		dexterity="3.75/(2.7+ 1.25) + 0.5 + 0.1*(0)";
	};
	class RH_M4CGLAIM: RH_M4CGL
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4caim";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4CGL";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				script = "spawn player_useAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdglaim";
			};
		};
		displayName="M4A1 M203 Custom CCO";
		model="\RH_mgswp\RH_m4cglaim.p3d";
		picture="\RH_mgswp\inv\m4cglaim.paa";
		ace_weight="2.7+ 1.25+ (0.25)*1.2";
		dexterity="3.75/(2.7+ 1.25+ (0.25)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CGLEOTECH: RH_M4CGL
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4ceotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_M4CGL";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				script = "spawn player_useAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdgleotech";
			};
		};
		displayName="M4A1 M203 Custom Holo";
		model="\RH_mgswp\RH_m4cgleotech.p3d";
		picture="\RH_mgswp\inv\m4cgleotech.paa";
		ace_weight="2.7+ 1.25+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 1.25+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CGLACOG: RH_M4CACOG
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4cacog";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M4CGL";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				script = "spawn player_useAttchment;";
				att = "Attachment_SupNATO";
				out = "RH_m4ctsdglacog";
			};
		};
		displayName="M4A1 M203 Custom ACOG";
		descriptionShort="Carbine with M203 launcher<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X";
		model="\RH_mgswp\RH_m4cglacog.p3d";
		picture="\RH_mgswp\inv\m4cglacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203MUZZLE",
			"RH_M203MUZZLE_AI"
		};
		ace_weight="2.7+ 1.25+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 1.25+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CTSDGL: RH_M4CTSD
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_m4ctsd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_m4cgl";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				script = "spawn player_useAttchment;";
				att = "Attachment_ACOG";
				out = "RH_m4ctsdglacog";
			};
			class UseAtt3 : UseAtt2{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4ctsdglaim";
			};
			class UseAtt4 : UseAtt2{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4ctsdgleotech";
			};
		};
		displayName="M4A1 M203 SD Custom";
		descriptionShort="Suppressed carbine with M203<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_m4ctsdgl.p3d";
		picture="\RH_mgswp\inv\m4ctsdgl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203MUZZLE",
			"RH_M203MUZZLE_AI"
		};
		ace_weight="2.7+ 1.25+ 0.2+ 0.2+ 0.6";
		dexterity="3.75/(2.7+ 1.25+ 0.2+ 0.2+ 0.6) + 0.5 + 0.1*(0)";
	};
	class RH_M4CTSDGL_F: RH_M4CTSDGL
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine with M203<br/>Caliber: 5.56x45mm NATO<br/>Flashlight";
		irDistance=0;
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
	class RH_M4CTSDGLAIM: RH_M4CTSDGL
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4CTSDAIM";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_M4CGLAIM";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4CTSDGL";
			};
		};
		displayName="M4A1 M203 SD Custom CCO";
		model="\RH_mgswp\RH_m4ctsdglaim.p3d";
		picture="\RH_mgswp\inv\m4ctsdglaim.paa";
		ace_weight="2.7+ 1.25+ 0.2+ 0.2+ 0.6+ (0.25)*1.2";
		dexterity="3.75/(2.7+ 1.25+ 0.2+ 0.2+ 0.6+ (0.25)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CTSDGLAIM_F: RH_M4CTSDGLAIM
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine with M203<br/>Caliber: 5.56x45mm NATO<br/>Flashlight";
		irDistance=0;
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
	class RH_M4CTSDGLEOTECH: RH_M4CTSDGL
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4CTSDEOTECH";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_M4CGLEOTECH";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_M4CTSDGL";
			};
		};
		displayName="M4A1 M203 SD Custom Holo";
		model="\RH_mgswp\RH_m4ctsdgleotech.p3d";
		picture="\RH_mgswp\inv\m4ctsdgleotech.paa";
		ace_weight="2.7+ 1.25+ 0.2+ 0.2+ 0.6+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 1.25+ 0.2+ 0.2+ 0.6+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CTSDGLEOTECH_F: RH_M4CTSDGLEOTECH
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine with M203<br/>Caliber: 5.56x45mm NATO<br/>Flashlight";
		irDistance=0;
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
	class RH_M4CTSDGLACOG: RH_M4CTSDACOG
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detach M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "RH_M4CTSDACOG";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_M4CGLACOG";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M4CTSDGL";
			};
		};
		displayName="M4A1 M203 SD Custom ACOG";
		descriptionShort="Suppressed carbine with M203<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>IR light";
		model="\RH_mgswp\RH_m4ctsdglacog.p3d";
		picture="\RH_mgswp\inv\m4ctsdglacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203MUZZLE",
			"RH_M203MUZZLE_AI"
		};
		ace_weight="2.7+ 1.25+ 0.2+ 0.2+ 0.6+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 1.25+ 0.2+ 0.2+ 0.6+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CTSDGLACOG_F: RH_M4CTSDGLACOG
	{
		delete ItemActions;
		descriptionShort="Suppressed carbine with M203<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>Flashlight";
		irDistance=0;
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
	class RH_M4CMK: RH_M4C
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_m4cmkaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_m4cmkeotech";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_m4cmkacog";
			};
		};
		displayName="M4A1 Masterkey";
		descriptionShort="Carbine with Masterkey shotgun<br/>Caliber: 5.56x45mm NATO";
		model="\RH_mgswp\RH_m4cmk.p3d";
		picture="\RH_mgswp\inv\m4cmk.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_MKMuzzle"
		};
		ace_weight="2.7+ 2.4";
		dexterity="3.75/(2.7+ 2.4) + 0.5 + 0.1*(0)";
	};
	class RH_M4CMKAIM: RH_M4CMK
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_M4CMK";
			};
		};
		displayName="M4A1 Masterkey CCO";
		model="\RH_mgswp\RH_m4cmkaim.p3d";
		picture="\RH_mgswp\inv\m4cmkaim.paa";
		ace_weight="2.7+ 2.4+ (0.25)*1.2";
		dexterity="3.75/(2.7+ 2.4+ (0.25)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CMKEOTECH: RH_M4CMK
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_M4CMK";
			};
		};
		displayName="M4A1 Masterkey Holo";
		model="\RH_mgswp\RH_m4cmkeotech.p3d";
		picture="\RH_mgswp\inv\m4cmkeotech.paa";
		ace_weight="2.7+ 2.4+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 2.4+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_M4CMKACOG: RH_M4CACOG
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M4CMK";
			};
		};
		displayName="M4A1 Masterkey ACOG";
		descriptionShort="Carbine with Masterkey shotgun<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X";
		model="\RH_mgswp\RH_m4cmkacog.p3d";
		picture="\RH_mgswp\inv\m4cmkacog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_MKMuzzle"
		};
		ace_weight="2.7+ 2.4+ (0.3)*1.2";
		dexterity="3.75/(2.7+ 2.4+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class M14_EP1: Rifle
	{
		class Single;
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
	};
	class RH_M14EBR: M14_EP1
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_M14EBRsp";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_M14EBR_SD";
			};
		};
		displayName="M14 EBR";
		descriptionShort="Battle rifle<br/>Caliber: 7.62x51mm NATO";
		model="\RH_mgswp\RH_m14ebr.p3d";
		picture="\RH_mgswp\inv\m14ebr.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M14ebr.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_mgswp\Sound\M14_Reload",
			0.031623,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"RH_Auto"
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
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		ace_weight=5.100000;
		dexterity="3.75/(5.1) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			displayName="$STR_DN_MODE_SEMIAUTO";
			begin1[]=
			{
				"\RH_mgswp\Sound\m14",
				1.778280,
				1,
				1700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.000700;
			reloadTime=0.082000;
			recoil="RH_mgs_M14Recoil";
			recoilProne="RH_mgs_M14prRecoil";
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
		class RH_Auto: Single
		{
			displayName="$STR_DN_MODE_FULLAUTO";
			autoFire=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.020000;
		};
		class Library
		{
			libTextDesc="The M14 rifle more formally the United States Rifle, Caliber 7.62 mm, M14 is an American selective fire battle rifle firing 7.62 × 51 mm NATO ammunition. Although largely superseded in military use by the M16 rifle, it remains in limited front line service with the United States Army, Marine Corps, and Navy. The M14 also provides the basis for the M21 and XM25 sniper rifles not to be confused with the XM25 grenade launcher. Mk14 EBR is shorter, more tactical version of the M14, with a retractable stock and multiple rails for more accessories.";
		};
	};
	class RH_M14EBRSP: RH_M14EBR
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_M14EBR";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_M14EBRSP_SD";
			};
		};
		displayName="M14 EBR Sniper";
		descriptionShort="Marksman rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 3-12X";
		model="\RH_mgswp\RH_m14ebrsp.p3d";
		picture="\RH_mgswp\inv\m14ebrsp.paa";
		uipicture="\ca\weapons\data\ico\i_sniper_ca.paa";
		modelOptics="\ca\Weapons_baf\LRR_optic";
		opticsZoomMin="0.28778/12";
		opticsZoomMax="0.28778/3";
		opticsZoomInit="0.28778/3";
		discretefov[]={};
		discreteInitIndex=0;
		visionMode[]=
		{
			"Normal"
		};
		distanceZoomMin=329;
		distanceZoomMax=329;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=2;
		ace_sys_weapons_TYPE=3;
		ace_weight="5.1+ (0.9)*1.2";
		dexterity="3.75/(5.1+ (0.9)*1.2) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=8;
			aiRateOfFireDistance=1000;
			minRange=0;
			minRangeProbab=0.500000;
			midRange=500;
			midRangeProbab=0.800000;
			maxRange=1000;
			maxRangeProbab=0.030000;
		};
	};
	class RH_M14EBRGC: RH_M14EBR
	{
		delete ItemAction;
		displayName="M14 EBR ShortDot";
		descriptionShort="Battle rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 1-4X";
		model="\RH_mgswp\RH_m14ebrgc.p3d";
		picture="\RH_mgswp\inv\m14ebrgc.paa";
		modelOptics="\RH_mgswp\NWD_shortdot_cqb.p3d";
		class OpticsModes
		{
			class ShortDot
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit=0.249000;
				opticsZoomMin=0.062300;
				opticsZoomMax=0.249000;
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
				discretefov[]={0.249000,0.062300};
				discreteInitIndex=1;
			};
		};
		ace_weight="5.1+ (0.6)*1.2";
		dexterity="3.75/(5.1+ (0.6)*1.2) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_M14EBR_SD: RH_M14EBR
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "RH_M14EBRSP_SD";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_M14EBR";
			};
		};
		displayName="M14 EBR SD";
		descriptionShort="Suppressed battle rifle<br/>Caliber: 7.62x51mm NATO";
		model="\RH_mgswp\RH_m14ebr_sd.p3d";
		picture="\RH_mgswp\inv\m14ebr_sd.paa";
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
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
		ace_suppressed=1;
		ace_weight="5.1+ 0.6";
		dexterity="3.75/(5.1+ 0.6) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\m14sd",
				1.000000,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class RH_Auto: RH_Auto
		{
			begin1[]=
			{
				"\RH_mgswp\sound\m14sd",
				1.000000,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_M14EBRSP_SD: RH_M14EBR_SD
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "RH_M14EBR_SD";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_M14EBRSP";
			};
		};
		displayName="M14 EBR SD Sniper";
		descriptionShort="Suppressed marksman rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 3-12X";
		model="\RH_mgswp\RH_m14ebrsp_sd.p3d";
		picture="\RH_mgswp\inv\m14ebrsp_sd.paa";
		uipicture="\ca\weapons\data\ico\i_sniper_ca.paa";
		modelOptics="\ca\Weapons_baf\LRR_optic";
		opticsZoomMin="0.28778/12";
		opticsZoomMax="0.28778/3";
		opticsZoomInit="0.28778/3";
		discretefov[]={};
		discreteInitIndex=0;
		visionMode[]=
		{
			"Normal"
		};
		distanceZoomMin=329;
		distanceZoomMax=329;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=2;
		ace_sys_weapons_TYPE=3;
		ace_weight="5.1+ (0.9)*1.2+ 0.6";
		dexterity="3.75/(5.1+ (0.9)*1.2+ 0.6) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=8;
			aiRateOfFireDistance=1000;
			minRange=0;
			minRangeProbab=0.500000;
			midRange=500;
			midRangeProbab=0.800000;
			maxRange=1000;
			maxRangeProbab=0.030000;
		};
	};
	class RH_M14EBRGC_SD: RH_M14EBR_SD
	{
		displayName="M14 EBR SD ShortDot";
		descriptionShort="Suppressed battle rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 1-4X";
		model="\RH_mgswp\RH_m14ebrgc_sd.p3d";
		picture="\RH_mgswp\inv\m14ebrgc_sd.paa";
		modelOptics="\RH_mgswp\NWD_shortdot_cqb.p3d";
		class OpticsModes
		{
			class ShortDot
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit=0.249000;
				opticsZoomMin=0.062300;
				opticsZoomMax=0.249000;
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
				discretefov[]={0.249000,0.062300};
				discreteInitIndex=1;
			};
		};
		ace_weight="5.1+ (0.6)*1.2+ 0.6";
		dexterity="3.75/(5.1+ (0.6)*1.2+ 0.6) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_MK21A5: RH_M14EBRSP
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK21A5SD";
			};
		};
		displayName="M21A5 EBR";
		descriptionShort="Sniper rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 10X<br/>Bipod";
		model="\RH_mgswp\RH_mk21a5.p3d";
		picture="\RH_mgswp\inv\mk21a5.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		modelOptics="\ca\weapons\2Dscope_MilDot_10";
		opticsZoomMin="0.28778/10";
		opticsZoomMax="0.28778/10";
		opticsZoomInit="0.28778/10";
		discretefov[]={};
		discreteInitIndex=0;
		visionMode[]=
		{
			"Normal"
		};
		distanceZoomMin=329;
		distanceZoomMax=329;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=2;
		ace_bipod=1;
		modes[]=
		{
			"Single"
		};
		ace_weight="6.8+ 0.1";
		dexterity="3.75/(6.8+ 0.1) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			dispersion=0.000450;
		};
	};
	class RH_MK21A5SD: RH_M14EBRSP_SD
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK21A5";
			};
		};
		displayName="M21A5 EBR SD";
		descriptionShort="Suppressed sniper rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 10X<br/>Bipod";
		model="\RH_mgswp\RH_mk21a5sd.p3d";
		picture="\RH_mgswp\inv\mk21a5sd.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		modelOptics="\ca\weapons\2Dscope_MilDot_10";
		opticsZoomMin="0.28778/10";
		opticsZoomMax="0.28778/10";
		opticsZoomInit="0.28778/10";
		discretefov[]={};
		discreteInitIndex=0;
		visionMode[]=
		{
			"Normal"
		};
		distanceZoomMin=329;
		distanceZoomMax=329;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=2;
		ace_bipod=1;
		modes[]=
		{
			"Single"
		};
		ace_weight="6.8+ 0.1+ 0.6";
		dexterity="3.75/(6.8+ 0.1+ 0.6) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			dispersion=0.000450;
		};
	};
	class RH_MK14: RH_M14EBR
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_MK14acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_MK14aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_MK14eot";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14SD";
			};
		};
		displayName="Mk14 Mod 0";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO";
		model="\RH_mgswp\RH_mk14.p3d";
		picture="\RH_mgswp\inv\mk14.paa";
		ace_weight=5.100000;
		dexterity="3.75/(5.1) + 0.5 + 0.1*(0)";
	};
	class RH_MK14AIM: RH_MK14
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_MK14";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14SDAIM";
			};
		};
		displayName="Mk14 Mod 0 CCO";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Vertical grip";
		model="\RH_mgswp\RH_mk14aim.p3d";
		picture="\RH_mgswp\inv\mk14aim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		ace_weight="5.1+ (0.25)*1.2+ 0.1";
		dexterity="3.75/(5.1+ (0.25)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	};
	class RH_MK14EOTECH: RH_MK14AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_MK14";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14SDHOLO";
			};
		};
		displayName="Mk14 Mod 0 Holo";
		model="\RH_mgswp\RH_mk14eotech.p3d";
		picture="\RH_mgswp\inv\mk14eotech.paa";
		ace_weight="5.1+ (0.3)*1.2+ 0.1";
		dexterity="3.75/(5.1+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	};
	class RH_MK14ACOG: RH_MK14AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_MK14";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14SDACOG";
			};
		};
		displayName="Mk14 Mod 0 ACOG";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>Vertical grip";
		model="\RH_mgswp\RH_mk14acog.p3d";
		picture="\RH_mgswp\inv\mk14acog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				memoryPointCamera="opticView";
				visionMode[]={};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="5.1+ (0.3)*1.2+ 0.1";
		dexterity="3.75/(5.1+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_MK14SD: RH_M14EBR_SD
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_MK14SDacog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_MK14SDaim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_MK14SDeot";
			};
			class UseAtt3 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14";
			};
		};
		displayName="Mk14 Mod 0 SD";
		descriptionShort="Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO";
		model="\RH_mgswp\RH_mk14sd.p3d";
		picture="\RH_mgswp\inv\mk14sd.paa";
	};
	class RH_MK14SDAIM: RH_MK14SD
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_MK14SD";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14AIM";
			};
		};
		displayName="Mk14 Mod 0 SD CCO";
		descriptionShort="Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Vertical grip";
		model="\RH_mgswp\RH_mk14sdaim.p3d";
		picture="\RH_mgswp\inv\mk14sdaim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		ace_weight="5.1+ (0.25)*1.2+ 0.1+ 0.6";
		dexterity="3.75/(5.1+ (0.25)*1.2+ 0.1+ 0.6) + 0.5 + 0.1*(1)";
	};
	class RH_MK14SDEOTECH: RH_MK14SDAIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_MK14SD";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14HOLO";
			};
		};
		displayName="Mk14 Mod 0 SD Holo";
		model="\RH_mgswp\RH_mk14sdeotech.p3d";
		picture="\RH_mgswp\inv\mk14sdeotech.paa";
		ace_weight="5.1+ (0.3)*1.2+ 0.1+ 0.6";
		dexterity="3.75/(5.1+ (0.3)*1.2+ 0.1+ 0.6) + 0.5 + 0.1*(1)";
	};
	class RH_MK14SDACOG: RH_MK14SDAIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach ACOG";
				att = "Attachment_ACOG";
				out = "RH_MK14SD";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_MK14ACOG";
			};
		};
		displayName="Mk14 Mod 0 SD ACOG";
		descriptionShort="Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>Vertical grip";
		model="\RH_mgswp\RH_mk14sdacog.p3d";
		picture="\RH_mgswp\inv\mk14sdacog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				memoryPointCamera="opticView";
				visionMode[]={};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=189;
				distanceZoomMax=189;
				cameraDir="";
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="5.1+ (0.3)*1.2+ 0.1+ 0.6";
		dexterity="3.75/(5.1+ (0.3)*1.2+ 0.1+ 0.6) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class SCAR_Base: M16_base
	{
		magazines[] = {
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
	class SCAR_L_Base: SCAR_Base
	{
		magazines[] = {
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
	class SCAR_L_CQC: SCAR_L_Base
	{
		magazines[] = {
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
	class RH_SCARL: SCAR_L_CQC
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_Scarl_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Scarl_aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Scarl_eotech";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Scarl_sd_doc";
			};
		};
		displayName="SCAR-L CQC";
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>Vertical grip";
		model="\RH_mgswp\RH_Scarl.p3d";
		picture="\RH_mgswp\inv\scarl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\scar_Reload",
			0.031623,
			1,
			20
		};
		ace_weight="3+ 0.1";
		dexterity="3.75/(3+ 0.1) + 0.5 + 0.1*(1)";
		irDistance=0;
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=2;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarl",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.002500;
			reloadtime=0.096000;
			recoil="RH_SCAR_LRecoil";
			recoilProne="RH_SCAR_LRecoilProne";
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=150;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.030000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarl",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.002500;
			reloadtime=0.096000;
			recoil="RH_SCAR_LRecoil";
			recoilProne="RH_SCAR_LRecoilProne";
			aiRateOfFire=0.200000;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.020000;
		};
		class RH_EGLM: M203Muzzle
		{
			displayName="EGLM";
			sound[]=
			{
				"\RH_mgswp\sound\M203",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_mgswp\sound\M203_Reload",
				0.031623,
				1,
				20
			};
			recoil="RH_mgs_M203GLbase";
			minRange=40;
			minRangeProbab=0;
			midRange=100;
			midRangeProbab=0;
			maxRange=400;
			maxRangeProbab=0;
			showtoplayer=1;
			opticsZoomMin=0.333330;
			opticsZoomMax=1;
			opticsZoomInit="0.33333*2";
			discretefov[]={};
			discreteInitIndex=0;
		};
		class RH_EGLM_AI: RH_EGLM
		{
			minRangeProbab=0.500000;
			midRangeProbab=0.800000;
			maxRangeProbab=0.020000;
			cameraDir="";
			memoryPointCamera="";
			showtoplayer=0;
		};
	};
	class RH_SCARL_AIM: RH_SCARL
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Scarl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Scarl_sd_aim";
			};
		};
		displayName="SCAR-L CQC CCO";
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_scarL_aim.p3d";
		picture="\RH_mgswp\inv\scarl_aim.paa";
		handAnim[]={};
		irDistance=150;
		ace_weight="3+ 0.2+ (0.4)*1.2";
		dexterity="3.75/(3+ 0.2+ (0.4)*1.2) + 0.5 + 0.1*(0)";
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_SCARLB_AIM: RH_SCARL_AIM
	{
		delete ItemAction;
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_scarLb_aim.p3d";
		picture="\RH_mgswp\inv\scarlb_aim.paa";
	};
	class RH_SCARL_DOC: RH_SCARL_AIM
	{
		delete ItemAction;
		displayName="SCAR-L CQC Docter";
		model="\RH_mgswp\RH_scarL_doc.p3d";
		picture="\RH_mgswp\inv\scarl_doc.paa";
		ace_weight="3+ 0.2+ (0.025)*1.2";
		dexterity="3.75/(3+ 0.2+ (0.025)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_SCARL_EOTECH: RH_SCARL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_Scarl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Scarl_sd_eotech";
			};
		};
		displayName="SCAR-L CQC Holo";
		model="\RH_mgswp\RH_Scarl_eotech.p3d";
		picture="\RH_mgswp\inv\scarl_eotech.paa";
		ace_weight="3+ 0.2+ (0.3)*1.2";
		dexterity="3.75/(3+ 0.2+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_SCARL_ACOG: RH_SCARL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_Scarl";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_SupNATO";
				out = "RH_Scarl_sd_acog";
			};
		};
		displayName="SCAR-L CQC ACOG";
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>IR light";
		model="\RH_mgswp\RH_Scarl_acog.p3d";
		picture="\RH_mgswp\inv\scarl_acog.paa";
		ace_weight="3+ 0.2+ (0.3)*1.2";
		dexterity="3.75/(3+ 0.2+ (0.3)*1.2) + 0.5 + 0.1*(0)";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARL_MK4: RH_SCARL_AIM
	{
		delete ItemAction;
		displayName="SCAR-L CQC Mk4CQT";
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 3X<br/>IR light";
		model="\RH_mgswp\RH_Scarl_mk4.p3d";
		picture="\RH_mgswp\inv\scarl_mk4.paa";
		ace_weight="3+ 0.2+ (0.5)*1.2";
		dexterity="3.75/(3+ 0.2+ (0.5)*1.2) + 0.5 + 0.1*(0)";
		modelOptics="\RH_mgswp\NWD_mk4_cqt";
		class OpticsModes
		{
			class MK4
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsZoomMin="0.28778/3";
				opticsZoomMax="0.28778/3";
				opticsZoomInit="0.28778/3";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARL_GL: RH_SCARL
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_Scarl_gl_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Scarl_gl_aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_Scarl_gl_eotech";
			};
		};
		displayName="SCAR-L CQC EGLM";
		descriptionShort="CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO";
		model="\RH_mgswp\RH_Scarl_gl.p3d";
		picture="\RH_mgswp\inv\Scarl_gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_EGLM",
			"RH_EGLM_AI"
		};
		ace_weight="3+ 1.3";
		dexterity="3.75/(3+ 1.3) + 0.5 + 0.1*(0)";
	};
	class RH_SCARL_GL_AIM: RH_SCARL_GL
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_SCARL_GL";
			};
		};
		displayName="SCAR-L CQC EGLM CCO";
		descriptionShort="CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_Scarl_gl_aim.p3d";
		picture="\RH_mgswp\inv\Scarl_gl_aim.paa";
		irDistance=150;
		ace_weight="3+ 1.3+ 0.2+ (0.4)*1.2";
		dexterity="3.75/(3+ 1.3+ 0.2+ (0.4)*1.2) + 0.5 + 0.1*(0)";
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_SCARL_GL_EOTECH: RH_SCARL_GL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_SCARL_GL";
			};
		};
		displayName="SCAR-L CQC EGLM Holo";
		model="\RH_mgswp\RH_Scarl_gl_eotech.p3d";
		picture="\RH_mgswp\inv\Scarl_gl_eotech.paa";
		ace_weight="3+ 1.3+ 0.2+ (0.3)*1.2";
		dexterity="3.75/(3+ 1.3+ 0.2+ (0.3)*1.2) + 0.5 + 0.1*(0)";
	};
	class RH_SCARL_GL_ACOG: RH_SCARL_GL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_SCARL_GL";
			};
		};
		displayName="SCAR-L CQC EGLM ACOG";
		descriptionShort="CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>IR light";
		model="\RH_mgswp\RH_Scarl_gl_acog.p3d";
		picture="\RH_mgswp\inv\Scarl_gl_acog.paa";
		ace_weight="3+ 1.3+ 0.2+ (0.3)*1.2";
		dexterity="3.75/(3+ 1.3+ 0.2+ (0.3)*1.2) + 0.5 + 0.1*(0)";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARLB_GL_ACOG: RH_SCARL_GL_ACOG
	{
		delete ItemAction;
		descriptionShort="CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br>IR light<br>Black";
		model="\RH_mgswp\RH_Scarlb_gl_acog.p3d";
		picture="\RH_mgswp\inv\Scarlb_gl_acog.paa";
	};
	class RH_SCARL_SD_AIM: RH_SCARL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Scarl_sd_doc";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_CCO";
				out = "RH_SCARL_AIM";
			};
		};
		displayName="SCAR-L CQC SD CCO";
		descriptionShort="Suppressed CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_scarL_sd_aim.p3d";
		picture="\RH_mgswp\inv\scarl_sd_aim.paa";
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		ace_suppressed=1;
		ace_weight="3+ 0.2+ (0.4)*1.2+ 0.5";
		dexterity="3.75/(3+ 0.2+ (0.4)*1.2+ 0.5) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarl_sd",
				1.000000,
				1,
				110
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
				"\RH_mgswp\sound\scarl_sd",
				1.000000,
				1,
				110
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_SCARL_SD_DOC: RH_SCARL_SD_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_Scarl";
			};
		};
		displayName="SCAR-L CQC SD Docter";
		model="\RH_mgswp\RH_scarL_sd_doc.p3d";
		picture="\RH_mgswp\inv\scarl_sd_doc.paa";
		ace_weight="3+ 0.2+ (0.025)*1.2+ 0.5";
		dexterity="3.75/(3+ 0.2+ (0.025)*1.2+ 0.5) + 0.5 + 0.1*(0)";
	};
	class RH_SCARL_SD_EOTECH: RH_SCARL_SD_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_Scarl_sd_doc";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_CCO";
				out = "RH_SCARL_HOLO";
			};
		};
		displayName="SCAR-L CQC SD Holo";
		model="\RH_mgswp\RH_Scarl_sd_eotech.p3d";
		picture="\RH_mgswp\inv\scarl_sd_eotech.paa";
		ace_weight="3+ 0.2+ (0.3)*1.2+ 0.5";
		dexterity="3.75/(3+ 0.2+ (0.3)*1.2+ 0.5) + 0.5 + 0.1*(0)";
	};
	class RH_SCARLB_SD_EOTECH: RH_SCARL_SD_EOTECH
	{
		delete ItemAction;
		descriptionShort="Suppressed CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light<br>Black";
		model="\RH_mgswp\RH_Scarlb_sd_eotech.p3d";
		picture="\RH_mgswp\inv\scarlb_sd_eotech.paa";
	};
	class RH_SCARL_SD_ACOG: RH_SCARL_SD_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_Scarl_sd_doc";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_CCO";
				out = "RH_SCARL_ACOG";
			};
		};
		displayName="SCAR-L CQC SD ACOG";
		descriptionShort="Suppressed CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>IR light";
		model="\RH_mgswp\RH_Scarl_sd_acog.p3d";
		picture="\RH_mgswp\inv\scarl_sd_acog.paa";
		ace_weight="3+ 0.2+ (0.3)*1.2+ 0.5";
		dexterity="3.75/(3+ 0.2+ (0.3)*1.2+ 0.5) + 0.5 + 0.1*(0)";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARL_SD_GL_AIM: RH_SCARL_SD_AIM
	{
		delete ItemAction;
		displayName="SCAR-L CQC EGLM SD CCO";
		descriptionShort="Suppressed CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_Scarl_sd_gl_aim.p3d";
		picture="\RH_mgswp\inv\Scarl_sd_gl_aim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_EGLM",
			"RH_EGLM_AI"
		};
		ace_weight="3+ 1.3+ 0.2+ (0.4)*1.2+ 0.5";
		dexterity="3.75/(3+ 1.3+ 0.2+ (0.4)*1.2+ 0.5) + 0.5 + 0.1*(0)";
	};
	class RH_SCARLB_SD_GL_AIM: RH_SCARL_SD_GL_AIM
	{
		delete ItemAction;
		descriptionShort="Suppressed CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO<br/>IR light<br>Black";
		model="\RH_mgswp\RH_Scarlb_sd_gl_aim.p3d";
		picture="\RH_mgswp\inv\Scarlb_sd_gl_aim.paa";
	};
	class RH_SCARL_SD_GL_EOTECH: RH_SCARL_SD_GL_AIM
	{
		delete ItemAction;
		displayName="SCAR-L CQC EGLM SD Holo";
		model="\RH_mgswp\RH_Scarl_sd_gl_eotech.p3d";
		picture="\RH_mgswp\inv\Scarl_sd_gl_eotech.paa";
		ace_weight="3+ 1.3+ 0.2+ (0.3)*1.2+ 0.5";
		dexterity="3.75/(3+ 1.3+ 0.2+ (0.3)*1.2+ 0.5) + 0.5 + 0.1*(0)";
	};
	class RH_SCARL_SD_GL_ACOG: RH_SCARL_SD_GL_AIM
	{
		delete ItemAction;
		displayName="SCAR-L CQC EGLM SD ACOG";
		descriptionShort="Suppressed CQB rifle with EGLM<br/>Caliber: 5.56x45mm NATO<br/>Scope power: 4X<br/>IR light";
		model="\RH_mgswp\RH_Scarl_sd_gl_acog.p3d";
		picture="\RH_mgswp\inv\Scarl_sd_gl_acog.paa";
		ace_weight="3+ 1.3+ 0.2+ (0.3)*1.2+ 0.5";
		dexterity="3.75/(3+ 1.3+ 0.2+ (0.3)*1.2+ 0.5) + 0.5 + 0.1*(0)";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
	};
	class SCAR_H_Base: SCAR_Base
	{
		magazines[] =
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"20Rnd_762x51_B_SCAR",
			"20Rnd_762x51_B_SCARSD",
			"20Rnd_762x51_B_SCAR_hp",
			"20Rnd_762x51_B_SCAR_tracer",
			"20Rnd_762x51_B_SCAR_rubber",
			"20Rnd_762x51_B_SCAR_bt"
		};
	};
	class SCAR_H_CQC_CCO: SCAR_H_Base
	{
		magazines[] =
		{
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"20Rnd_762x51_B_SCAR",
			"20Rnd_762x51_B_SCARSD",
			"20Rnd_762x51_B_SCAR_hp",
			"20Rnd_762x51_B_SCAR_tracer",
			"20Rnd_762x51_B_SCAR_rubber",
			"20Rnd_762x51_B_SCAR_bt"
		};
	};
	class RH_SCARH: SCAR_H_CQC_CCO
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_scarh_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_scarh_aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_scarh_eotech";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_scarh_sd_doc";
			};
		};
		displayName="SCAR-H CQC";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO";
		model="\RH_mgswp\RH_Scarh.p3d";
		picture="\RH_mgswp\inv\scarh.paa";
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\scar_Reload",
			0.031623,
			1,
			20
		};
		handAnim[]={};
		irDistance=0;
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		ace_weight=3.500000;
		dexterity="3.75/(3.5) + 0.5 + 0.1*(0)";
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=2;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarh",
				1.778280,
				1,
				1700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.002250;
			reloadtime=0.096000;
			recoil="RH_SCAR_HRecoil";
			recoilProne="RH_SCAR_HRecoilProne";
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarh",
				1.778280,
				1,
				1700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.002250;
			reloadtime=0.096000;
			recoil="RH_SCAR_HRecoil";
			recoilProne="RH_SCAR_HRecoilProne";
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.020000;
		};
		class RH_EGLM: M203Muzzle
		{
			displayName="EGLM";
			sound[]=
			{
				"\RH_mgswp\sound\M203",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_mgswp\sound\M203_Reload",
				0.031623,
				1,
				20
			};
			recoil="RH_mgs_M203GLbase";
			minRange=40;
			minRangeProbab=0;
			midRange=100;
			midRangeProbab=0;
			maxRange=400;
			maxRangeProbab=0;
			showtoplayer=1;
			opticsZoomMin=0.333330;
			opticsZoomMax=1;
			opticsZoomInit="0.33333*2";
			discretefov[]={};
			discreteInitIndex=0;
		};
		class RH_EGLM_AI: RH_EGLM
		{
			minRangeProbab=0.500000;
			midRangeProbab=0.800000;
			maxRangeProbab=0.020000;
			cameraDir="";
			memoryPointCamera="";
			showtoplayer=0;
		};
	};
	class RH_SCARH_AIM: RH_SCARH
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_scarh_sd_aim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				script = "spawn player_removeAttchment;";
				att = "Attachment_CCO";
				out = "RH_SCARH";
			};
		};
		displayName="SCAR-H CQC CCO";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_Scarh_aim.p3d";
		picture="\RH_mgswp\inv\scarh_aim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		irDistance=150;
		ace_weight="3.5+ 0.2+ (0.4)*1.2+ 0.1";
		dexterity="3.75/(3.5+ 0.2+ (0.4)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_SCARH_EOTECH: RH_SCARH_AIM
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_scarh_sd_eotech";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "RH_SCARH";
			};
		};
		displayName="SCAR-H CQC Holo";
		model="\RH_mgswp\RH_Scarh_eotech.p3d";
		picture="\RH_mgswp\inv\scarh_eotech.paa";
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 0.1";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	};
	class RH_SCARHB_EOTECH: RH_SCARH_EOTECH
	{
		delete ItemAction;
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>IR light, vertical grip<br/>Black";
		model="\RH_mgswp\RH_Scarhb_eotech.p3d";
		picture="\RH_mgswp\inv\scarhb_eotech.paa";
	};
	class RH_SCARH_ACOG: RH_SCARH_AIM
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup308";
				out = "RH_scarh_sd_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Sup308";
				out = "RH_SCARH";
			};
		};
		displayName="SCAR-H CQC ACOG";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_Scarh_acog.p3d";
		picture="\RH_mgswp\inv\scarh_acog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 0.1";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARH_MK4: RH_SCARH_AIM
	{
		delete ItemAction;
		displayName="SCAR-H CQC Mk4CQT";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 3X<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_Scarh_mk4.p3d";
		picture="\RH_mgswp\inv\scarh_mk4.paa";
		modelOptics="\RH_mgswp\NWD_mk4_cqt";
		class OpticsModes
		{
			class MK4
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsZoomMin="0.28778/3";
				opticsZoomMax="0.28778/3";
				opticsZoomInit="0.28778/3";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.5+ 0.2+ (0.5)*1.2+ 0.1";
		dexterity="3.75/(3.5+ 0.2+ (0.5)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARH_SPECTERDR: RH_SCARH_AIM
	{
		delete ItemAction;
		displayName="SCAR-H CQC SpecterDR";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 1-4X<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_scarH_spectre.p3d";
		picture="\RH_mgswp\inv\scarh_spectre.paa";
		modelOptics="\Ca\weapons_E\SCAR\SpecterDR_556_optic_4x.p3d";
		class OpticsModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsZoomMin=0.062300;
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={0.287780,0.062300};
				discreteInitIndex=1;
			};
			class CQB: Scope
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.5+ 0.2+ (0.6)*1.2+ 0.1";
		dexterity="3.75/(3.5+ 0.2+ (0.6)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARH_GL: RH_SCARH
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_scarh_gl_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_scarh_gl_aim";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_scarh_gl_eotech";
			};
		};
		displayName="SCAR-H CQC EGLM";
		descriptionShort="Assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO";
		model="\RH_mgswp\RH_Scarh_gl.p3d";
		picture="\RH_mgswp\inv\Scarh_gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_EGLM",
			"RH_EGLM_AI"
		};
		ace_weight="3.5+ 1.3";
		dexterity="3.75/(3.5+ 1.3) + 0.5 + 0.1*(0)";
	};
	class RH_SCARH_GL_AIM: RH_SCARH_GL
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_SCARH_GL";
			};
		};
		displayName="SCAR-H CQC EGLM CCO";
		descriptionShort="Assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO<br/>IR light";
		model="\RH_mgswp\RH_Scarh_gl_aim.p3d";
		picture="\RH_mgswp\inv\Scarh_gl_aim.paa";
		irDistance=150;
		ace_weight="3.5+ 0.2+ (0.4)*1.2+ 1.3";
		dexterity="3.75/(3.5+ 0.2+ (0.4)*1.2+ 1.3) + 0.5 + 0.1*(0)";
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_SCARH_GL_EOTECH: RH_SCARH_GL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_SCARH_GL";
			};
		};
		displayName="SCAR-H CQC EGLM Holo";
		model="\RH_mgswp\RH_Scarh_gl_eotech.p3d";
		picture="\RH_mgswp\inv\Scarh_gl_eotech.paa";
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 1.3";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 1.3) + 0.5 + 0.1*(0)";
	};
	class RH_SCARH_GL_ACOG: RH_SCARH_GL_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_SCARH_GL";
			};
		};
		displayName="SCAR-H CQC EGLM ACOG";
		descriptionShort="Assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>IR light";
		model="\RH_mgswp\RH_Scarh_gl_acog.p3d";
		picture="\RH_mgswp\inv\Scarh_gl_acog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 1.3";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 1.3) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARHB_GL_ACOG: RH_SCARH_GL_ACOG
	{
		delete ItemAction;
		descriptionShort="Assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_Scarhb_gl_acog.p3d";
		picture="\RH_mgswp\inv\Scarhb_gl_acog.paa";
	};
	class RH_SCARH_GL_SPECTERDR: RH_SCARH_GL_AIM
	{
		delete ItemAction;
		displayName="SCAR-H CQC EGLM SpecterDR";
		descriptionShort="Assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 1-4X<br/>IR light";
		model="\RH_mgswp\RH_scarH_gl_spectre.p3d";
		picture="\RH_mgswp\inv\scarh_gl_spectre.paa";
		modelOptics="\Ca\weapons_E\SCAR\SpecterDR_556_optic_4x.p3d";
		class OpticsModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsZoomMin=0.062300;
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={0.287780,0.062300};
				discreteInitIndex=1;
			};
			class CQB: Scope
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.5+ 0.2+ (0.6)*1.2+ 1.3";
		dexterity="3.75/(3.5+ 0.2+ (0.6)*1.2+ 1.3) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARH_SD_AIM: RH_SCARH_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_SCARH_SD";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_SCARH_AIM";
			};
		};
		displayName="SCAR-H CQC SD CCO";
		descriptionShort="Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_scarh_sd_aim.p3d";
		picture="\RH_mgswp\inv\scarh_sd_aim.paa";
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		ace_suppressed=1;
		ace_weight="3.5+ 0.2+ (0.4)*1.2+ 0.1+ 0.7";
		dexterity="3.75/(3.5+ 0.2+ (0.4)*1.2+ 0.1+ 0.7) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarh_sd",
				1.000000,
				1,
				200
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
				"\RH_mgswp\sound\scarh_sd",
				1.000000,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_SCARHB_SD_AIM: RH_SCARH_SD_AIM
	{
		delete ItemAction;
		descriptionShort="Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO<br/>IR light, vertical grip<br/>Black";
		model="\RH_mgswp\RH_scarhb_sd_aim.p3d";
		picture="\RH_mgswp\inv\scarhb_sd_aim.paa";
	};
	class RH_SCARH_SD_EOTECH: RH_SCARH_SD_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_SCARH_AIM";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_SCARH_EOTECH";
			};
		};
		displayName="SCAR-H CQC SD Holo";
		model="\RH_mgswp\RH_scarh_sd_eotech.p3d";
		picture="\RH_mgswp\inv\scarh_sd_eotech.paa";
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 0.1+ 0.7";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 0.1+ 0.7) + 0.5 + 0.1*(1)";
	};
	class RH_SCARH_SD_ACOG: RH_SCARH_SD_AIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_SCARH_AIM";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup308";
				out = "RH_SCARH_ACOG";
			};
		};
		displayName="SCAR-H CQC SD ACOG";
		descriptionShort="Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_scarh_sd_acog.p3d";
		picture="\RH_mgswp\inv\scarh_sd_acog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 0.1+ 0.7";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 0.1+ 0.7) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class RH_SCARH_SD_GL_AIM: RH_SCARH_SD_AIM
	{
		delete ItemAction;
		displayName="SCAR-H CQC EGLM SD CCO";
		descriptionShort="Suppressed assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO<br/>IR light";
		model="\RH_mgswp\RH_scarh_sd_gl_aim.p3d";
		picture="\RH_mgswp\inv\scarh_sd_gl_aim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_scargl.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_EGLM",
			"RH_EGLM_AI"
		};
		ace_weight="3.5+ 0.2+ (0.4)*1.2+ 1.3+ 0.7";
		dexterity="3.75/(3.5+ 0.2+ (0.4)*1.2+ 1.3+ 0.7) + 0.5 + 0.1*(0)";
	};
	class RH_SCARH_SD_GL_EOTECH: RH_SCARH_SD_GL_AIM
	{
		delete ItemAction;
		displayName="SCAR-H CQC EGLM SD Holo";
		model="\RH_mgswp\RH_scarh_sd_gl_eotech.p3d";
		picture="\RH_mgswp\inv\scarh_sd_gl_eotech.paa";
		ace_weight="3.5+ 0.2+ (0.3)*1.2+ 1.3+ 0.7";
		dexterity="3.75/(3.5+ 0.2+ (0.3)*1.2+ 1.3+ 0.7) + 0.5 + 0.1*(0)";
	};
	class RH_SCARHB_SD_GL_EOTECH: RH_SCARH_SD_GL_EOTECH
	{
		delete ItemAction;
		descriptionShort="Suppressed assault rifle with EGLM<br/>Caliber: 7.62x51mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_scarhb_sd_gl_eotech.p3d";
		picture="\RH_mgswp\inv\scarhb_sd_gl_eotech.paa";
	};
	class AK_47_M: AK_BASE
	{
		magazines[] = 
		{
			"762x39_x1",
			"762x39_SD_x1",
			"762x39_HP_x1",
			"762x39_TRACER_x1",
			"762x39_RUBBER_x1",
			"762x39_BT_x1",
			"30Rnd_762x39_AK47",
			"30Rnd_762x39_AK47_SD",
			"30Rnd_762x39_AK47_hp",
			"30Rnd_762x39_AK47_tracer",
			"30Rnd_762x39_AK47_rubber",
			"30Rnd_762x39_AK47_bt",
			"vil_40Rnd_762x39_AK47",
			"vil_40Rnd_762x39_AK47_SD",
			"vil_40Rnd_762x39_AK47_hp",
			"vil_40Rnd_762x39_AK47_tracer",
			"vil_40Rnd_762x39_AK47_rubber",
			"vil_40Rnd_762x39_AK47_bt",
			"RH_75Rnd_762x39_mag",
			"RH_75Rnd_762x39_mag_SD",
			"RH_75Rnd_762x39_mag_hp",
			"RH_75Rnd_762x39_mag_tracer",
			"RH_75Rnd_762x39_mag_rubber",
			"RH_75Rnd_762x39_mag_bt"
		};
	};
	class RH_SCARAK: AK_47_M
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_SCARAKAIM";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_SCARAKEOTECH";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_SCARAKACOG";
			};
		};
		displayName="SCAR-AK";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x39mm<br/>Vertical grip";
		model="\RH_mgswp\RH_scarAk.p3d";
		picture="\RH_mgswp\inv\scarAk.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\anim\RH_M4cs.rtm"
		};
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\scar_Reload",
			0.031623,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		ace_weight="3.6+ 0.1";
		dexterity="3.75/(3.6+ 0.1) + 0.5 + 0.1*(1)";
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=2;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarAk",
				1.778280,
				1,
				1300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.001750;
			reloadTime=0.100000;
			recoil="RH_SCAR_HRecoil";
			recoilProne="RH_SCAR_HRecoilProne";
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mgswp\sound\scarAk",
				1.778280,
				1,
				1300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			dispersion=0.001750;
			reloadTime=0.100000;
			recoil="RH_SCAR_HRecoil";
			recoilProne="RH_SCAR_HRecoilProne";
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.020000;
		};
	};
	class RH_SCARAKAIM: RH_SCARAK
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_SCARAK";
			};
		};
		displayName="SCAR-AK CCO";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x39mm<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_scarAkaim.p3d";
		picture="\RH_mgswp\inv\scarAkaim.paa";
		irDistance=150;
		ace_weight="3.6+ 0.2+ (0.4)*1.2+ 0.1";
		dexterity="3.75/(3.6+ 0.2+ (0.4)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_SCARAKBAIM: RH_SCARAKAIM
	{
		delete ItemAction;
		descriptionShort="Assault rifle<br/>Caliber: 7.62x39mm<br/>IR light, vertical grip<br/>Black";
		model="\RH_mgswp\RH_scarAkBaim.p3d";
		picture="\RH_mgswp\inv\scarAkbaim.paa";
	};
	class RH_SCARAKEOTECH: RH_SCARAKAIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_SCARAK";
			};
		};
		displayName="SCAR-AK Holo";
		model="\RH_mgswp\RH_scarAkeotech.p3d";
		picture="\RH_mgswp\inv\scarAkeotech.paa";
		ace_weight="3.6+ 0.2+ (0.3)*1.2+ 0.1";
		dexterity="3.75/(3.6+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	};
	class RH_SCARAKACOG: RH_SCARAKAIM
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_SCARAK";
			};
		};
		displayName="SCAR-AK ACOG";
		descriptionShort="Assault rifle<br/>Caliber: 7.62x39mm<br/>Scope power: 4X<br/>IR light, vertical grip";
		model="\RH_mgswp\RH_scarAkacog.p3d";
		picture="\RH_mgswp\inv\scarAkacog.paa";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
		ace_weight="3.6+ 0.2+ (0.3)*1.2+ 0.1";
		dexterity="3.75/(3.6+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
		class Single: Single
		{
			aiRateOfFire=3;
			aiRateOfFireDistance=700;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=300;
			midRangeProbab=0.600000;
			maxRange=700;
			maxRangeProbab=0.030000;
		};
	};
	class M8_base: Rifle
	{
		class Single;
		class Burst;
		class FullAuto;
		class XM320Muzzle;
	};
	class RH_XM8: M8_base
	{
		scope=2;
		displayName="XM8 Carbine";
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_xm8.p3d";
		picture="\RH_mgswp\inv\xm8.paa";
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\xm8_reload",
			0.031623,
			1,
			20
		};
		irDistance=150;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\AK.rtm"
		};
		opticsZoomMin=0.333330;
		opticsZoomMax=1;
		opticsZoomInit="0.33333*2";
		discretefov[]={};
		discreteInitIndex=0;
		modelOptics="-";
		visionMode[]={};
		opticsPPEffects[]={};
		opticsFlare=0;
		opticsDisablePeripherialVision=0;
		ace_weight=3.400000;
		dexterity="3.75/(3.4) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			begin1[]=
			{
				"\RH_mgswp\sound\xm8",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="RH_xm8_Rifle_Recoil";
			recoilProne="RH_xm8_Rifle_RecoilProne";
			dispersion=0.002000;
			aiRateOfFire=1;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=400;
			maxRangeProbab=0.030000;
		};
		class Burst: Burst
		{
			begin1[]=
			{
				"\RH_mgswp\sound\xm8",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="RH_xm8_Rifle_Recoil_B";
			recoilProne="RH_xm8_Rifle_RecoilProne";
			dispersion=0.002000;
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=50;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.020000;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_mgswp\sound\xm8",
				1.778280,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="RH_xm8_Rifle_Recoil_B";
			recoilProne="RH_xm8_Rifle_RecoilProne";
			dispersion=0.002000;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=100;
			maxRangeProbab=0.020000;
		};
		class RH_XM320MUZZLE: XM320Muzzle
		{
			displayName="XM320";
			sound[]=
			{
				"\RH_mgswp\sound\M203",
				0.100000,
				1,
				400
			};
			reloadMagazineSound[]=
			{
				"\RH_mgswp\sound\M203_Reload",
				0.031623,
				1,
				20
			};
			recoil="RH_mgs_M203GLbase";
			minRange=40;
			minRangeProbab=0;
			midRange=100;
			midRangeProbab=0;
			maxRange=400;
			maxRangeProbab=0;
			showtoplayer=1;
			opticsZoomMin=0.333330;
			opticsZoomMax=1;
			opticsZoomInit="0.33333*2";
			discretefov[]={};
			discreteInitIndex=0;
		};
		class RH_XM320MUZZLE_AI: RH_XM320MUZZLE
		{
			minRangeProbab=0.500000;
			midRangeProbab=0.800000;
			maxRangeProbab=0.020000;
			cameraDir="";
			memoryPointCamera="";
			showtoplayer=0;
		};
	};
	class RH_XM8D: RH_XM8
	{
		descriptionShort="Carbine<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_xm8d.p3d";
		picture="\RH_mgswp\inv\xm8d.paa";
	};
	class RH_XM8GL: RH_XM8
	{
		displayName="XM8 XM320";
		descriptionShort="Carbine with XM320 launcher<br/>Caliber: 5.56x45mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_xm8gl.p3d";
		picture="\RH_mgswp\inv\xm8gl.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CA\weapons2\Data\Anim\XM8GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_XM320MUZZLE",
			"RH_XM320MUZZLE_AI"
		};
		ace_weight="3.4+ 1.5";
		dexterity="3.75/(3.4+ 1.5) + 0.5 + 0.1*(0)";
	};
	class RH_XM8DGL: RH_XM8GL
	{
		descriptionShort="Carbine with XM320 launcher<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_xm8dgl.p3d";
		picture="\RH_mgswp\inv\xm8dgl.paa";
	};
	class RH_XM8C: RH_XM8
	{
		displayName="XM8 Compact";
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_xm8c.p3d";
		picture="\RH_mgswp\inv\xm8c.paa";
		ace_weight=3.200000;
		dexterity="3.75/(3.2) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			dispersion=0.002500;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=150;
			midRangeProbab=0.500000;
			maxRange=300;
			maxRangeProbab=0.030000;
		};
		class Burst: Burst
		{
			dispersion=0.002500;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=50;
			midRangeProbab=0.700000;
			maxRange=100;
			maxRangeProbab=0.020000;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.002500;
			aiRateOfFire=0.200000;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.800000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.020000;
		};
	};
	class RH_XM8DC: RH_XM8C
	{
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_xm8dc.p3d";
		picture="\RH_mgswp\inv\xm8dc.paa";
	};
	class RH_XM8SH: RH_XM8
	{
		displayName="XM8 DM";
		descriptionShort="Sharpshooter rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_xm8sh.p3d";
		picture="\RH_mgswp\inv\xm8sh.paa";
		ace_weight=4.600000;
		dexterity="3.75/(4.6) + 0.5 + 0.1*(0)";
		class Single: Single
		{
			dispersion=0.001600;
		};
		class Burst: Burst
		{
			dispersion=0.001600;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.001600;
		};
	};
	class RH_XM8DSH: RH_XM8SH
	{
		descriptionShort="Sharpshooter rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_xm8dsh.p3d";
		picture="\RH_mgswp\inv\xm8dsh.paa";
	};
	class RH_XM8SAW: RH_XM8SH
	{
		displayName="XM8 AR";
		descriptionShort="Automatic rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light<br/>Black";
		model="\RH_mgswp\RH_xm8saw.p3d";
		picture="\RH_mgswp\inv\xm8saw.paa";
		class Single: Single
		{
			dispersion=0.002000;
		};
		class Burst: Burst
		{
			dispersion=0.002000;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.002000;
		};
	};
	class RH_XM8DSAW: RH_XM8SAW
	{
		descriptionShort="Automatic rifle<br/>Caliber: 5.56x45mm NATO<br/>IR light";
		model="\RH_mgswp\RH_xm8dsaw.p3d";
		picture="\RH_mgswp\inv\xm8dsaw.paa";
	};
	class M60A4_EP1: Rifle
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;

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
	class RH_M60E4: M60A4_EP1
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_M60E4_ACOG";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_M60E4_EOTECH";
			};
		};
		displayName="M60E4";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>Front grip, bipod";
		model="\RH_mgswp\RH_m60e4.p3d";
		picture="\RH_mgswp\inv\m60e4.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_m60e4.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_mgswp\sound\m60e4_reload",
			0.056234,
			1,
			25
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		ace_weight=9.400000;
		dexterity="3.75/(9.4) + 0.5 + 0.1*(1)";
		ace_bipod=1;
		irDistance=0;
		class manual: manual
		{
			Begin1[]=
			{
				"\RH_mgswp\sound\m60e4",
				3.162280,
				1,
				1700
			};
			Begin2[]=
			{
				"\RH_mgswp\sound\m60e4-3",
				3.162280,
				1,
				1700
			};
			soundBegin[]=
			{
				"begin1",
				0.330000,
				"begin2",
				0.330000
			};
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.800000;
			midRange="10+ random 10";
			midRangeProbab=0.700000;
			maxRange="50+ random 50";
			maxRangeProbab=0.050000;
		};
		class close: close
		{
			burst="8+round random 4";
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.800000;
			midRange="100+ random 50";
			midRangeProbab=0.700000;
			maxRange="200+ random 50";
			maxRangeProbab=0.050000;
		};
		class short: short
		{
			burst="6+round random 4";
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=100;
			minRangeProbab=0.800000;
			midRange="200+ random 50";
			midRangeProbab=0.700000;
			maxRange="400+ random 50";
			maxRangeProbab=0.050000;
		};
		class medium: medium
		{
			burst="4+round random 4";
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.800000;
			midRange="400+ random 50";
			midRangeProbab=0.700000;
			maxRange="600+ random 50";
			maxRangeProbab=0.050000;
		};
		class far: far
		{
			burst="2+round random 4";
			aiRateOfFire=3;
			aiRateOfFireDistance=800;
			minRange=400;
			minRangeProbab=0.800000;
			midRange="600+ random 50";
			midRangeProbab=0.700000;
			maxRange="800+ random 50";
			maxRangeProbab=0.050000;
		};
	};
	class RH_M60E4_EOTECH: RH_M60E4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_M60E4";
			};
		};
		displayName="M60E4 Holo";
		model="\RH_mgswp\RH_m60e4eotech.p3d";
		picture="\RH_mgswp\inv\m60e4eotech.paa";
		ace_weight="9.4+ (0.3)*1.2";
		dexterity="3.75/(9.4+ (0.3)*1.2) + 0.5 + 0.1*(1)";
		weaponInfoType="RscWeaponEmpty";
	};
	class RH_M60E4_ACOG: RH_M60E4_EOTECH
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_M60E4";
			};
		};
		displayName="M60E4 ACOG";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>Front grip, bipod";
		model="\RH_mgswp\RH_m60e4acog.p3d";
		picture="\RH_mgswp\inv\m60e4acog.paa";
		ace_weight="9.4+ (0.3)*1.2";
		dexterity="3.75/(9.4+ (0.3)*1.2) + 0.5 + 0.1*(1)";
		modelOptics="\RH_mgswp\NWD_acog_ta31RMR";
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
				opticsZoomMin="0.28778/4";
				opticsZoomMax="0.28778/4";
				opticsZoomInit="0.28778/4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: ACOG
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
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
	};
	class RH_M60E4_ELCAN: RH_M60E4_ACOG
	{
		delete ItemAction;
		displayName="M60E4 M145";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 3.4X<br/>Front grip, bipod";
		model="\RH_mgswp\RH_m60e4elcan.p3d";
		picture="\RH_mgswp\inv\m60e4elcan.paa";
		ace_weight="9.4+ (0.7)*1.2";
		dexterity="3.75/(9.4+ (0.7)*1.2) + 0.5 + 0.1*(1)";
		modelOptics="\Ca\weapons_E\M249\M145.p3d";
		class OpticsModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				opticsZoomMin="0.28778/3.4";
				opticsZoomMax="0.28778/3.4";
				opticsZoomInit="0.28778/3.4";
				discretefov[]={};
				discreteInitIndex=0;
			};
			class CQB: Scope
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsZoomMin=0.333330;
				opticsZoomMax=1;
				opticsZoomInit="0.33333*2";
				discretefov[]={};
				discreteInitIndex=0;
			};
		};
	};
	class RH_MK43: RH_M60E4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "RH_MK43_ACOG";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_MK43_EOTECH";
			};
		};
		displayName="Mk43 Mod 1";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>Vertical grip, bipod";
		model="\RH_mgswp\RH_mk43.p3d";
		picture="\RH_mgswp\inv\mk43.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_mk43.rtm"
		};
	};
	class RH_MK43_EOTECH: RH_M60E4_EOTECH
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_MK43";
			};
		};
		displayName="Mk43 Mod 1 Holo";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>IR light, vertical grip, bipod";
		model="\RH_mgswp\RH_mk43eotech.p3d";
		picture="\RH_mgswp\inv\mk43eotech.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_mk43.rtm"
		};
		irDistance=150;
		ace_weight="9.4+ (0.3)*1.2+ 0.2";
		dexterity="3.75/(9.4+ (0.3)*1.2+ 0.2) + 0.5 + 0.1*(1)";
	};
	class RH_MK43_ACOG: RH_M60E4_ACOG
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "RH_MK43";
			};
		};
		displayName="Mk43 Mod 1 ACOG";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>IR light, vertical grip, bipod";
		model="\RH_mgswp\RH_mk43acog.p3d";
		picture="\RH_mgswp\inv\mk43acog.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_mk43.rtm"
		};
		irDistance=150;
		ace_weight="9.4+ (0.3)*1.2+ 0.2";
		dexterity="3.75/(9.4+ (0.3)*1.2+ 0.2) + 0.5 + 0.1*(1)";
	};
	class RH_MK43_ELCAN: RH_M60E4_ELCAN
	{
		delete ItemAction;
		displayName="Mk43 Mod 1 M145";
		descriptionShort="Medium machine gun<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 3.4X<br/>IR light, vertical grip, bipod";
		model="\RH_mgswp\RH_mk43elcan.p3d";
		picture="\RH_mgswp\inv\mk43elcan.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_mgswp\Anim\RH_mk43.rtm"
		};
		irDistance=150;
		ace_weight="9.4+ (0.7)*1.2+ 0.2";
		dexterity="3.75/(9.4+ (0.7)*1.2+ 0.2) + 0.5 + 0.1*(1)";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class RHmgswpammobox: ReammoBox
	{
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="RH MGS weapons box";
		class TransportMagazines
		{
			class _xx_RH_30Rnd_556x45_AK
			{
				magazine="RH_30Rnd_556x45_AK";
				count=100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine="30Rnd_556x45_StanagSD";
				count=100;
			};
			class _xx_20rnd_762x51_B_SCAR
			{
				magazine="20rnd_762x51_B_SCAR";
				count=100;
			};
			class _xx_30Rnd_762x39_AK47
			{
				magazine="30Rnd_762x39_AK47";
				count=100;
			};
			class _xx_20Rnd_762x51_DMR
			{
				magazine="20Rnd_762x51_DMR";
				count=100;
			};
			class _xx_30Rnd_556x45_G36
			{
				magazine="30Rnd_556x45_G36";
				count=100;
			};
			class _xx_100Rnd_556x45_BetaCMag
			{
				magazine="100Rnd_556x45_BetaCMag";
				count=50;
			};
			class _xx_1rnd_HE_M203
			{
				magazine="1rnd_HE_M203";
				count=30;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine="1Rnd_HE_GP25";
				count=30;
			};
			class _xx_RH_5Rnd_B_Beneli_Pellets
			{
				magazine="RH_5Rnd_B_Beneli_Pellets";
				count=50;
			};
			class _xx_RH_5Rnd_B_Beneli_74Slug
			{
				magazine="RH_5Rnd_B_Beneli_74Slug";
				count=50;
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
			class _xx_RH_AK102
			{
				weapon="RH_AK102";
				count=6;
			};
			class _xx_RH_AK102GL
			{
				weapon="RH_AK102GL";
				count=6;
			};
			class _xx_RH_M4C
			{
				weapon="RH_M4C";
				count=6;
			};
			class _xx_RH_M4CS
			{
				weapon="RH_M4CS";
				count=6;
			};
			class _xx_RH_M4CSAIM
			{
				weapon="RH_M4CSAIM";
				count=6;
			};
			class _xx_RH_M4CSEOTECH
			{
				weapon="RH_M4CSEOTECH";
				count=6;
			};
			class _xx_RH_M4CSACOG
			{
				weapon="RH_M4CSACOG";
				count=6;
			};
			class _xx_RH_M4CT
			{
				weapon="RH_M4CT";
				count=6;
			};
			class _xx_RH_M4CAIM
			{
				weapon="RH_M4CAIM";
				count=6;
			};
			class _xx_RH_M4CEOTECH
			{
				weapon="RH_M4CEOTECH";
				count=6;
			};
			class _xx_RH_M4CACOG
			{
				weapon="RH_M4CACOG";
				count=6;
			};
			class _xx_RH_M4CTSD
			{
				weapon="RH_M4CTSD";
				count=6;
			};
			class _xx_RH_M4CTSDAIM
			{
				weapon="RH_M4CTSDAIM";
				count=6;
			};
			class _xx_RH_M4CTSDACOG
			{
				weapon="RH_M4CTSDACOG";
				count=6;
			};
			class _xx_RH_M4CTSDEOTECH
			{
				weapon="RH_M4CTSDEOTECH";
				count=6;
			};
			class _xx_RH_M4CGL
			{
				weapon="RH_M4CGL";
				count=6;
			};
			class _xx_RH_M4CGLAIM
			{
				weapon="RH_M4CGLAIM";
				count=6;
			};
			class _xx_RH_M4CGLEOTECH
			{
				weapon="RH_M4CGLEOTECH";
				count=6;
			};
			class _xx_RH_M4CGLACOG
			{
				weapon="RH_M4CGLACOG";
				count=6;
			};
			class _xx_RH_M4CTSDGL
			{
				weapon="RH_M4CTSDGL";
				count=6;
			};
			class _xx_RH_M4CTSDGLAIM
			{
				weapon="RH_M4CTSDGLAIM";
				count=6;
			};
			class _xx_RH_M4CTSDGLACOG
			{
				weapon="RH_M4CTSDGLACOG";
				count=6;
			};
			class _xx_RH_M4CTSDGLEOTECH
			{
				weapon="RH_M4CTSDGLEOTECH";
				count=6;
			};
			class _xx_RH_M4CMK
			{
				weapon="RH_M4CMK";
				count=6;
			};
			class _xx_RH_M4CMKAIM
			{
				weapon="RH_M4CMKAIM";
				count=6;
			};
			class _xx_RH_M4CMKEOTECH
			{
				weapon="RH_M4CMKEOTECH";
				count=6;
			};
			class _xx_RH_M4CMKACOG
			{
				weapon="RH_M4CMKACOG";
				count=6;
			};
			class _xx_RH_M14EBR
			{
				weapon="RH_M14EBR";
				count=6;
			};
			class _xx_RH_M14EBRSP
			{
				weapon="RH_M14EBRSP";
				count=6;
			};
			class _xx_RH_M14EBRGC
			{
				weapon="RH_M14EBRGC";
				count=6;
			};
			class _xx_RH_M14EBR_SD
			{
				weapon="RH_M14EBR_SD";
				count=6;
			};
			class _xx_RH_M14EBRSP_SD
			{
				weapon="RH_M14EBRSP_SD";
				count=6;
			};
			class _xx_RH_M14EBRGC_SD
			{
				weapon="RH_M14EBRGC_SD";
				count=6;
			};
			class _xx_RH_MK21A5
			{
				weapon="RH_MK21A5";
				count=6;
			};
			class _xx_RH_MK21A5SD
			{
				weapon="RH_MK21A5SD";
				count=6;
			};
			class _xx_RH_MK14
			{
				weapon="RH_MK14";
				count=6;
			};
			class _xx_RH_MK14AIM
			{
				weapon="RH_MK14AIM";
				count=6;
			};
			class _xx_RH_MK14ACOG
			{
				weapon="RH_MK14ACOG";
				count=6;
			};
			class _xx_RH_MK14EOTECH
			{
				weapon="RH_MK14EOTECH";
				count=6;
			};
			class _xx_RH_MK14SD
			{
				weapon="RH_MK14SD";
				count=6;
			};
			class _xx_RH_MK14SDAIM
			{
				weapon="RH_MK14SDAIM";
				count=6;
			};
			class _xx_RH_MK14SDACOG
			{
				weapon="RH_MK14SDACOG";
				count=6;
			};
			class _xx_RH_MK14SDEOTECH
			{
				weapon="RH_MK14SDEOTECH";
				count=6;
			};
			class _xx_RH_SCARL
			{
				weapon="RH_SCARL";
				count=6;
			};
			class _xx_RH_SCARL_AIM
			{
				weapon="RH_SCARL_AIM";
				count=6;
			};
			class _xx_RH_SCARLB_AIM
			{
				weapon="RH_SCARLB_AIM";
				count=6;
			};
			class _xx_RH_SCARL_DOC
			{
				weapon="RH_SCARL_DOC";
				count=6;
			};
			class _xx_RH_SCARL_EOTECH
			{
				weapon="RH_SCARL_EOTECH";
				count=6;
			};
			class _xx_RH_SCARL_ACOG
			{
				weapon="RH_SCARL_ACOG";
				count=6;
			};
			class _xx_RH_SCARL_MK4
			{
				weapon="RH_SCARL_MK4";
				count=6;
			};
			class _xx_RH_SCARL_GL
			{
				weapon="RH_SCARL_GL";
				count=6;
			};
			class _xx_RH_SCARL_GL_AIM
			{
				weapon="RH_SCARL_GL_AIM";
				count=6;
			};
			class _xx_RH_SCARL_GL_EOTECH
			{
				weapon="RH_SCARL_GL_EOTECH";
				count=6;
			};
			class _xx_RH_SCARL_GL_ACOG
			{
				weapon="RH_SCARL_GL_ACOG";
				count=6;
			};
			class _xx_RH_SCARLB_GL_ACOG
			{
				weapon="RH_SCARLB_GL_ACOG";
				count=6;
			};
			class _xx_RH_SCARL_SD_AIM
			{
				weapon="RH_SCARL_SD_AIM";
				count=6;
			};
			class _xx_RH_SCARL_SD_DOC
			{
				weapon="RH_SCARL_SD_DOC";
				count=6;
			};
			class _xx_RH_SCARL_SD_EOTECH
			{
				weapon="RH_SCARL_SD_EOTECH";
				count=6;
			};
			class _xx_RH_SCARLB_SD_EOTECH
			{
				weapon="RH_SCARLB_SD_EOTECH";
				count=6;
			};
			class _xx_RH_SCARL_SD_ACOG
			{
				weapon="RH_SCARL_SD_ACOG";
				count=6;
			};
			class _xx_RH_SCARL_SD_GL_AIM
			{
				weapon="RH_SCARL_SD_GL_AIM";
				count=6;
			};
			class _xx_RH_SCARLB_SD_GL_AIM
			{
				weapon="RH_SCARLB_SD_GL_AIM";
				count=6;
			};
			class _xx_RH_SCARL_SD_GL_EOTECH
			{
				weapon="RH_SCARL_SD_GL_EOTECH";
				count=6;
			};
			class _xx_RH_SCARL_SD_GL_ACOG
			{
				weapon="RH_SCARL_SD_GL_ACOG";
				count=6;
			};
			class _xx_RH_SCARH
			{
				weapon="RH_SCARH";
				count=6;
			};
			class _xx_RH_SCARH_AIM
			{
				weapon="RH_SCARH_AIM";
				count=6;
			};
			class _xx_RH_SCARH_EOTECH
			{
				weapon="RH_SCARH_EOTECH";
				count=6;
			};
			class _xx_RH_SCARHB_EOTECH
			{
				weapon="RH_SCARHB_EOTECH";
				count=6;
			};
			class _xx_RH_SCARH_ACOG
			{
				weapon="RH_SCARH_ACOG";
				count=6;
			};
			class _xx_RH_SCARH_MK4
			{
				weapon="RH_SCARH_MK4";
				count=6;
			};
			class _xx_RH_SCARH_SPECTERDR
			{
				weapon="RH_SCARH_SPECTERDR";
				count=6;
			};
			class _xx_RH_SCARH_GL
			{
				weapon="RH_SCARH_GL";
				count=6;
			};
			class _xx_RH_SCARH_GL_AIM
			{
				weapon="RH_SCARH_GL_AIM";
				count=6;
			};
			class _xx_RH_SCARH_GL_EOTECH
			{
				weapon="RH_SCARH_GL_EOTECH";
				count=6;
			};
			class _xx_RH_SCARH_GL_ACOG
			{
				weapon="RH_SCARH_GL_ACOG";
				count=6;
			};
			class _xx_RH_SCARHB_GL_ACOG
			{
				weapon="RH_SCARHB_GL_ACOG";
				count=6;
			};
			class _xx_RH_SCARH_GL_SPECTERDR
			{
				weapon="RH_SCARH_GL_SPECTERDR";
				count=6;
			};
			class _xx_RH_SCARH_SD_AIM
			{
				weapon="RH_SCARH_SD_AIM";
				count=6;
			};
			class _xx_RH_SCARHB_SD_AIM
			{
				weapon="RH_SCARHB_SD_AIM";
				count=6;
			};
			class _xx_RH_SCARH_SD_EOTECH
			{
				weapon="RH_SCARH_SD_EOTECH";
				count=6;
			};
			class _xx_RH_SCARH_SD_ACOG
			{
				weapon="RH_SCARH_SD_ACOG";
				count=6;
			};
			class _xx_RH_SCARH_SD_GL_AIM
			{
				weapon="RH_SCARH_SD_GL_AIM";
				count=6;
			};
			class _xx_RH_SCARH_SD_GL_EOTECH
			{
				weapon="RH_SCARH_SD_GL_EOTECH";
				count=6;
			};
			class _xx_RH_SCARHB_SD_GL_EOTECH
			{
				weapon="RH_SCARHB_SD_GL_EOTECH";
				count=6;
			};
			class _xx_RH_SCARAK
			{
				weapon="RH_SCARAK";
				count=6;
			};
			class _xx_RH_SCARAKAIM
			{
				weapon="RH_SCARAKAIM";
				count=6;
			};
			class _xx_RH_SCARAKBAIM
			{
				weapon="RH_SCARAKBAIM";
				count=6;
			};
			class _xx_RH_SCARAKEOTECH
			{
				weapon="RH_SCARAKEOTECH";
				count=6;
			};
			class _xx_RH_SCARAKACOG
			{
				weapon="RH_SCARAKACOG";
				count=6;
			};
			class _xx_RH_XM8
			{
				weapon="RH_XM8";
				count=6;
			};
			class _xx_RH_XM8GL
			{
				weapon="RH_XM8GL";
				count=6;
			};
			class _xx_RH_XM8C
			{
				weapon="RH_XM8C";
				count=6;
			};
			class _xx_RH_XM8SH
			{
				weapon="RH_XM8SH";
				count=6;
			};
			class _xx_RH_XM8SAW
			{
				weapon="RH_XM8SAW";
				count=6;
			};
			class _xx_RH_XM8D
			{
				weapon="RH_XM8D";
				count=6;
			};
			class _xx_RH_XM8DGL
			{
				weapon="RH_XM8DGL";
				count=6;
			};
			class _xx_RH_XM8DC
			{
				weapon="RH_XM8DC";
				count=6;
			};
			class _xx_RH_XM8DSH
			{
				weapon="RH_XM8DSH";
				count=6;
			};
			class _xx_RH_XM8DSAW
			{
				weapon="RH_XM8DSAW";
				count=6;
			};
			class _xx_RH_M4CT_F
			{
				weapon="RH_M4CT_F";
				count=6;
			};
			class _xx_RH_M4CTSD_F
			{
				weapon="RH_M4CTSD_F";
				count=6;
			};
			class _xx_RH_M4CTSDAIM_F
			{
				weapon="RH_M4CTSDAIM_F";
				count=6;
			};
			class _xx_RH_M4CTSDEOTECH_F
			{
				weapon="RH_M4CTSDEOTECH_F";
				count=6;
			};
			class _xx_RH_M4CTSDACOG_F
			{
				weapon="RH_M4CTSDACOG_F";
				count=6;
			};
			class _xx_RH_M4CTSDGL_F
			{
				weapon="RH_M4CTSDGL_F";
				count=6;
			};
			class _xx_RH_M4CTSDGLAIM_F
			{
				weapon="RH_M4CTSDGLAIM_F";
				count=6;
			};
			class _xx_RH_M4CTSDGLEOTECH_F
			{
				weapon="RH_M4CTSDGLEOTECH_F";
				count=6;
			};
			class _xx_RH_M4CTSDGLACOG_F
			{
				weapon="RH_M4CTSDGLACOG_F";
				count=6;
			};
			class _xx_RH_M60E4
			{
				weapon="RH_M60E4";
				count=6;
			};
			class _xx_RH_M60E4_EOTECH
			{
				weapon="RH_M60E4_EOTECH";
				count=6;
			};
			class _xx_RH_M60E4_ACOG
			{
				weapon="RH_M60E4_ACOG";
				count=6;
			};
			class _xx_RH_M60E4_ELCAN
			{
				weapon="RH_M60E4_ELCAN";
				count=6;
			};
			class _xx_RH_MK43
			{
				weapon="RH_MK43";
				count=6;
			};
			class _xx_RH_MK43_EOTECH
			{
				weapon="RH_MK43_EOTECH";
				count=6;
			};
			class _xx_RH_MK43_ACOG
			{
				weapon="RH_MK43_ACOG";
				count=6;
			};
			class _xx_RH_MK43_ELCAN
			{
				weapon="RH_MK43_ELCAN";
				count=6;
			};
		};
	};
};
