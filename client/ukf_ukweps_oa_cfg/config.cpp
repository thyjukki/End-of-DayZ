class CfgPatches
{
	class ukf_ukweps
	{
		Units[]=
		{
			"ukf_AmmoBox_1"
		};
		weapons[]=
		{
			"ukf_L85A2",
			"ukf_L85A2_susat",
			"ukf_L85A2_acog",
			"ukf_L85A2_acog_CQB",
			"ukf_L85A2_cws",
			"ukf_L85A2_cws_CQB",
			"ukf_L85A2_lwti",
			"ukf_L85A2_sd",
			"ukf_L85A2_sd_CQB",
			"ukf_L85A2_RIS",
			"ukf_L85A2AG36",
			"ukf_L85A2AG36_fgrip",
			"ukf_L85A2AG36_susat",
			"ukf_L85A2AG36_susat_fgrip",
			"ukf_L85A2AG36_acog",
			"ukf_L85A2AG36_acog_CQB",
			"ukf_L85A2AG36_acog_fgrip",
			"ukf_L85A2AG36_acog_fgrip_CQB",
			"ukf_L85A2AG36_cws",
			"ukf_L85A2AG36_cws_CQB",
			"ukf_L85A2AG36_cws_fgrip",
			"ukf_L85A2AG36_cws_fgrip_CQB",
			"ukf_L85A2AG36_lwti",
			"ukf_L85A2AG36_lwti_fgrip",
			"ukf_L85A2AG36_sd",
			"ukf_L85A2AG36_sd_CQB",
			"ukf_L85A2AG36_sd_fgrip",
			"ukf_L85A2AG36_sd_fgrip_CQB",
			"ukf_L85A2K_susat",
			"ukf_gpmg",
			"ukf_gpmg_fgrip",
			"ukf_gpmg_MaxiKite",
			"ukf_gpmg_MaxiKite_fgrip",
			"ukf_gpmg_vipir2plus",
			"ukf_gpmg_vipir2plus_fgrip",
			"ukf_L86A2LSW",
			"ukf_L86A2LSW_fgrip",
			"ukf_L86A2LSW_susat",
			"ukf_L86A2LSW_susat_fgrip",
			"ukf_L86A2LSW_MaxiKite",
			"ukf_L86A2LSW_MaxiKite_fgrip",
			"ukf_lmg",
			"ukf_lmg_fgrip",
			"ukf_lmg_SUSAT",
			"ukf_lmg_SUSAT_fgrip",
			"ukf_lmg_ACOG",
			"ukf_lmg_ACOG_fgrip",
			"ukf_lmg_CWS",
			"ukf_lmg_CWS_fgrip",
			"ukf_lmg_vipir2plus",
			"ukf_lmg_vipir2plus_fgrip",
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"CaWeapons",
			"CAWeapons_E",
			"CAWeapons_BAF"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ukf_ukweps_oa_cfg
		{
			list[]=
			{
				"ukf_ukweps"
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class GrenadeLauncher;
	class BAF_L17_40mm: GrenadeLauncher
	{
		modelOptics="\ukf_ukweps_oa\optics\ukf_optic_ag36";
		optics=1;
		opticsZoomMin=0.475000;
		opticsZoomMax=0.475000;
		opticsZoomInit=0.475000;
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		cameraDir="";
		memoryPointCamera="eye";
	};
	class Rifle;
	class L85A2_base_BAF: Rifle
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
		class Single: Mode_SemiAuto
		{
			reloadtime=0.085000;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadtime=0.085000;
		};
		class ukf_AG36: BAF_L17_40mm
		{
			modelOptics="\ukf_ukweps_oa\optics\ukf_optic_ag36";
			optics=1;
			opticsZoomMin=0.475000;
			opticsZoomMax=0.475000;
			opticsZoomInit=0.475000;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			cameraDir="";
			memoryPointCamera="eye";
		};
		uipicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		ace_mod_mv=1;
		ace_mv[]=
		{
			"B_556x45_Ball",
			940,
			"ACE_B_556x45_T",
			940,
			"ACE_B_556x45_SB",
			860,
			"ACE_B_556x45_S",
			940,
			"ACE_B_556x45_SB_S",
			860
		};
	};
	class ukf_L85A2_susat: L85A2_base_BAF
	{
		scope=2;
		value=0;
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		displayName="L85A2 w/SUSAT";
		model="\ukf_ukweps_oa\sa80\ukf_SA80";
		picture="\ukf_ukweps_oa\icons\l85a2";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85.rtm"
		};
		irDistance=0;
		modelOptics="\ukf_ukweps_oa\optics\ukf_susat3";
		class OpticsModes
		{
			class SUSAT
			{
				cameradir="";
				discretedistance[]={300,400,500,600,700,800};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"Normal"
				};
			};
			class ironsights: SUSAT
			{
				discretedistance[]={};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponZeroing";
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=800;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=650;
			maxRangeProbab=0.100000;
		};
		class Library
		{
			libTextDesc="The L85 Individual Weapon is standard combat weapon of the British Armed Forces. <br/>Originally designed and manufactured by Royal Small Arms Factory in Enfield, the SA80 underwent a major mid-life update in 2002 by Heckler and Koch, which resulted in the SA80A2 series. The L85A2 has shown to be significantly more reliable than its predecessor, even under the harsh operational conditions in Afghanistan and Iraq. <br/>The rifle is normally fitted with a SUSAT 4X optical scope or CWS Image Intensification night sight, however as these sights are reaching the end of their operational lives a number of more modern combat optics are being introduced in light of operational experience.";
		};
		class Armory
		{
			author="P:UKF";
			disabled=0;
		};
		ace_weight=4.200000;
		dexterity=1.500000;
	};
	class ukf_L85A2: L85A2_base_BAF
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "ukf_L85A2_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Attach UGL";
				att = "Attachment_M203";
				out = "ukf_L85A2AG36";
			};
		};
		scope=2;
		value=0;
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		displayName="L85A2";
		model="\ukf_ukweps_oa\sa80\ukf_SA80_irns";
		picture="\ukf_ukweps_oa\icons\irn80icon";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85.rtm"
		};
		irDistance=0;
		modeloptics="-";
		weaponInfoType="RscWeaponEmpty";
		class Library
		{
			libTextDesc="The L85 Individual Weapon is standard combat weapon of the British Armed Forces. <br/>Originally designed and manufactured by Royal Small Arms Factory in Enfield, the SA80 underwent a major mid-life update in 2002 by Heckler and Koch, which resulted in the SA80A2 series. The L85A2 has shown to be significantly more reliable than its predecessor, even under the harsh operational conditions in Afghanistan and Iraq. <br/>Ironsights are commonly fitted for support units of the British Army when based in the UK in lieu of a SUSAT scope. However they also have an application in jungle warfare and operations in other confined spaces, such as ship boardings.";
		};
		class Armory
		{
			author="P:UKF";
			disabled=0;
		};
		ace_weight=3.800000;
		dexterity=1.600000;
	};
	class ukf_L85A2_RIS: ukf_L85A2_susat
	{
		displayName="L85A2 w/SUSAT + RIS";
		model="\ukf_ukweps_oa\sa80_ris\ukf_SA80_RIS";
		picture="\ukf_ukweps_oa\icons\l85a2ris";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85_RIS.rtm"
		};
		irDistance=0;
		ACE_bipod=1;
		class Library
		{
			libTextDesc="The L85 Individual Weapon is standard combat weapon of the British Armed Forces. <br/>Originally designed and manufactured by Royal Small Arms Factory in Enfield, the SA80 underwent a major mid-life update in 2002 by Heckler and Koch, which resulted in the SA80A2 series. The L85A2 has shown to be significantly more reliable than its predecessor, even under the harsh operational conditions in Afghanistan and Iraq. <br/>Operational exprience in these two theaters lead to a Picatinny railed hand-guard being fitted from 2007 onwards to many L85A2s. The rail system allows items such as lasers and lights to be fitted to provide illumination when searching compounds, and down-grips to improve the handleing of the rifle when wearing heavy body armour.";
		};
		ace_weight=4.400000;
		dexterity=1.550000;
	};
	class ukf_L85A2_lwti: ukf_L85A2_RIS
	{
		displayName="L85A2 w/LWTI";
		model="\ukf_ukweps_oa\VIPIR\ukf_SA80_VIPIR";
		picture="\ukf_ukweps_oa\icons\l85a2lwti";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85_RIS.rtm"
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irDistance=200;
		fireLightIntensity=0.002000;
		modelOptics="\ukf_ukweps_oa\optics\VIPIR_IW_o";
		class OpticsModes
		{
			class LWTI
			{
				cameradir="";
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.111111;
				opticszoommax=0.111111;
				opticszoommin=0.055556;
				usemodeloptics=1;
				visionmode[]=
				{
					"Ti"
				};
				thermalMode[]={0,1};
				discretefov[]={0.111111,0.055556};
				discreteInitIndex=0;
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_sys_reticles_enable=0;
		ace_weight=5.200000;
		dexterity=1.400000;
	};
	class ukf_L85A2_acog: ukf_L85A2_RIS
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "ukf_L85A2";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach UGL";
				att = "Attachment_M203";
				out = "ukf_L85A2AG36_acog";
			};
		};
		displayName="L85A2 w/ACOG";
		model="\ukf_ukweps_oa\sa80_acog\ukf_SA80_acog";
		picture="\ukf_ukweps_oa\icons\l85a2acog";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85_RIS2.rtm"
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irDistance=200;
		fireLightIntensity=0.002000;
		modelOptics="\ukf_ukweps_oa\optics\asr_acog_ta31doc";
		class OpticsModes
		{
			class ACOG
			{
				cameradir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=189;
				distancezoommin=189;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"Normal"
				};
				weaponinfotype="RscWeaponEmpty";
			};
			class Kolimator: ACOG
			{
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		class Library
		{
			libTextDesc="The L85 Individual Weapon is standard combat weapon of the British Armed Forces. <br/>Originally designed and manufactured by Royal Small Arms Factory in Enfield, the SA80 underwent a major mid-life update in 2002 by Heckler and Koch, which resulted in the SA80A2 series. The L85A2 has shown to be significantly more reliable than its predecessor, even under the harsh operational conditions in Afghanistan and Iraq. <br/>Operational experience in these two theaters lead to a Picatinny railed hand-guard being fitted from 2007 onwards to many L85A2s. The rail system allows items such as lasers and lights to be fitted to provide illumination when searching compounds, and down-grips to improve the handleing of the rifle when wearing heavy body armour. <br/>The ACOG TA31-DOCW weapon sight has been procured as an interim replacement for SUSAT in Afghanistan; offering lighter weight, a clearer sight picture and backup CQB optics for compound clearences.";
		};
		ace_weight=4.700000;
		dexterity=1.500000;
		ace_gunlight_classes[]=
		{
			"ukf_L85A2_acog",
			"ukf_L85A2_acog_CQB"
		};
	};
	class ukf_L85A2_acog_CQB: ukf_L85A2_acog
	{
		delete ItemActions;
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
		irDistance=0;
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_L85A2_cws: ukf_L85A2_RIS
	{
		displayName="L85A2 w/CWS";
		model="\ukf_ukweps_oa\CWS\ukf_SA80_CWS";
		picture="\ukf_ukweps_oa\icons\l85a2cws";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85_RIS2.rtm"
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irDistance=200;
		fireLightIntensity=0.002000;
		modelOptics="\ukf_ukweps_oa\optics\ukf_CWS";
		class OpticsModes
		{
			class CWS
			{
				cameradir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=189;
				distancezoommin=189;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"NVG"
				};
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_sys_reticles_enable=0;
		class Library
		{
			libTextDesc="The L85 Individual Weapon is standard combat weapon of the British Armed Forces. <br/>Originally designed and manufactured by Royal Small Arms Factory in Enfield, the SA80 underwent a major mid-life update in 2002 by Heckler and Koch, which resulted in the SA80A2 series. The L85A2 has shown to be significantly more reliable than its predecessor, even under the harsh operational conditions in Afghanistan and Iraq. <br/>Operational exprience in these two theaters lead to a Picatinny railed hand-guard being fitted from 2007 onwards to many L85A2s. The rail system allows items such as lasers and lights to be fitted to provide illumination when searching compounds, and down-grips to improve the handleing of the rifle when wearing heavy body armour. <br/>The Qioptiq KITE Image Intensifier scope provides night vision capability and has been in use since the early 1990s, known as the Common Weapon Sight or CWS.";
		};
		ace_weight=5.400000;
		dexterity=1.400000;
		ace_gunlight_classes[]=
		{
			"ukf_L85A2_cws",
			"ukf_L85A2_cws_CQB"
		};
	};
	class ukf_L85A2_cws_CQB: ukf_L85A2_cws
	{
		delete ItemActions;
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
		irDistance=0;
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class SCAR_L_CQC;
	class SCAR_L_CQC_CCO_SD: SCAR_L_CQC
	{
		class SCAR_L_SD_Single;
		class SCAR_L_SD_FullAuto;
	};
	class ukf_L85A2_sd: SCAR_L_CQC_CCO_SD
	{
		value=0;
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		ace_sys_weapons_side[]=
		{
			"BIS_BAF"
		};
		displayName="L85A2 w/ACOG (SD)";
		model="\ukf_ukweps_oa\sa80_sd\ukf_SA80_sd";
		picture="\ukf_ukweps_oa\icons\l85a2sd";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85_RIS2.rtm"
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irDistance=200;
		ACE_bipod=1;
		modelOptics="\ukf_ukweps_oa\optics\asr_acog_ta31doc";
		class OpticsModes
		{
			class ACOG
			{
				cameradir="";
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"Normal"
				};
				weaponinfotype="RscWeaponEmpty";
			};
			class Kolimator: ACOG
			{
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: SCAR_L_SD_Single
		{
			dispersion=0.001750;
			reloadtime=0.080000;
			aiRateOfFire=2;
			aiRateOfFireDistance=800;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=650;
			maxRangeProbab=0.100000;
		};
		class FullAuto: SCAR_L_SD_FullAuto
		{
			dispersion=0.001750;
			reloadtime=0.080000;
		};
		class ukf_AG36: BAF_L17_40mm
		{
			modelOptics="\ukf_ukweps_oa\optics\ukf_optic_ag36";
			optics=1;
			opticsZoomMin=0.475000;
			opticsZoomMax=0.475000;
			opticsZoomInit=0.475000;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			cameraDir="";
			memoryPointCamera="eye";
		};
		ace_mod_mv=1;
		ace_mv[]=
		{
			"B_556x45_Ball",
			940,
			"ACE_B_556x45_T",
			940,
			"ACE_B_556x45_SB",
			860,
			"ACE_B_556x45_S",
			940,
			"ACE_B_556x45_SB_S",
			860
		};
		class Library
		{
			libTextDesc="The L85 Individual Weapon is standard combat weapon of the British Armed Forces. <br/>Originally designed and manufactured by Royal Small Arms Factory in Enfield, the SA80 underwent a major mid-life update in 2002 by Heckler and Koch, which resulted in the SA80A2 series. The L85A2 has shown to be significantly more reliable than its predecessor, even under the harsh operational conditions in Afghanistan and Iraq. <br/>A new flash-eliminator was developed for the SA80 by B.E Meyers and Surefire to reduce the rifle's muzzle blast and allow a FA556-212 supressor to be fitted. These changes were made in light of the operational experience of Special Forces Support Group in Iraq who operate the SA80 in conjuntion with more specialised weaponry.";
		};
		class Armory
		{
			author="P:UKF";
			disabled=0;
		};
		ace_weight=5.300000;
		dexterity=1.400000;
		ace_gunlight_classes[]=
		{
			"ukf_L85A2_sd",
			"ukf_L85A2_sd_CQB"
		};
	};
	class ukf_L85A2_sd_CQB: ukf_L85A2_sd
	{
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
		irDistance=0;
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_L85A2K_susat: ukf_L85A2_susat
	{
		displayName="L22A2 w/SUSAT";
		model="\ukf_ukweps_oa\sa80_k\ukf_SA80k";
		picture="\ukf_ukweps_oa\icons\stubicon";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L22.rtm"
		};
		class Single: Single
		{
			dispersion=0.001820;
			aiRateOfFire=1;
			aiRateOfFireDistance=550;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=500;
			maxRangeProbab=0.100000;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.001820;
		};
		ace_mv[]=
		{
			"B_556x45_Ball",
			810,
			"ACE_B_556x45_T",
			810,
			"ACE_B_556x45_SB",
			750,
			"ACE_B_556x45_S",
			810,
			"ACE_B_556x45_SB_S",
			750
		};
		class Library
		{
			libTextDesc="The L22 Carbine was developed to provide armoured vehicle crews with a compact Personal Defence Weapon (PDW) that could easilly be stored inside cramped turret spaces but it has gone on to be used by aircrews, Fleet Protection Group Royal Marines and many other individuals operating from confined spaces. <br/>A shortened version of the SA80 has been envisioned since the weapon was first introduced, but the L22 wasn't adopted untill the mid-2000s, whereby HK manufactured them from surplus L86 LSWs.";
		};
		ace_weight=3.900000;
		dexterity=1.650000;
	};
	class ukf_L85A2AG36_susat: ukf_L85A2_susat
	{
		delete ItemActions;
		displayName="L85A2/UGL w/SUSAT";
		model="\ukf_ukweps_oa\ag36\ukf_SA80AG36";
		picture="\ukf_ukweps_oa\icons\l85a2ag36";
		muzzles[]=
		{
			"this",
			"ukf_AG36"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123.rtm"
		};
		class Library
		{
			libTextDesc="During Heckler and Koch's upgrade of the SA80 to A2 standard in 2002, the MoD took the opportunity to adopt a version of HK's AG36, 40mm Underslung Grenade Launcher (UGL) for the L85A2 to replace the muzzle-launched, Rifle Grenade General Service that had been used previously. <br/>The UGL is marked as 'HK AG SA80 L123A2' in British service.";
		};
		ace_weight=5.700000;
		dexterity=1.250000;
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_susat",
			"ukf_L85A2AG36_susat_fgrip"
		};
	};
	class ukf_L85A2AG36_susat_fgrip: ukf_L85A2AG36_susat
	{
		model="\ukf_ukweps_oa\ag36\ukf_SA80AG36_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_L85A2AG36_acog: ukf_L85A2_acog
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach UGL";
				att = "Attachment_M203";
				out = "ukf_L85A2_acog";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "ukf_L85A2AG36";
			};
		};
		displayName="L85A2/UGL w/ACOG";
		model="\ukf_ukweps_oa\sa80_acog\ukf_SA80_acog_UGL";
		picture="\ukf_ukweps_oa\icons\l85a2ag36acog";
		muzzles[]=
		{
			"this",
			"ukf_AG36"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123.rtm"
		};
		ACE_bipod=0;
		class ukf_AG36: ukf_AG36
		{
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			irDistance=200;
		};
		class Library
		{
			libTextDesc="During Heckler and Koch's upgrade of the SA80 to A2 standard in 2002, the MoD took the opportunity to adopt a version of HK's AG36, 40mm Underslung Grenade Launcher (UGL) for the L85A2 to replace the muzzle-launched, Rifle Grenade General Service that had been used previously. <br/>The UGL is marked as 'HK AG SA80 L123A2' in British service.";
		};
		ace_weight=5.800000;
		dexterity=1.200000;
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_acog",
			"ukf_L85A2AG36_acog_CQB"
		};
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_acog",
			"ukf_L85A2AG36_acog_fgrip"
		};
	};
	class ukf_L85A2AG36_acog_fgrip: ukf_L85A2AG36_acog
	{
		model="\ukf_ukweps_oa\sa80_acog\ukf_SA80_acog_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_acog_fgrip",
			"ukf_L85A2AG36_acog_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_acog_CQB: ukf_L85A2AG36_acog
	{
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
		class ukf_AG36: ukf_AG36
		{
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
		irDistance=0;
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_acog_CQB",
			"ukf_L85A2AG36_acog_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_acog_fgrip_CQB: ukf_L85A2AG36_acog_CQB
	{
		model="\ukf_ukweps_oa\sa80_acog\ukf_SA80_acog_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_acog_fgrip",
			"ukf_L85A2AG36_acog_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_cws: ukf_L85A2_cws
	{
		displayName="L85A2/UGL w/CWS";
		model="\ukf_ukweps_oa\CWS\ukf_SA80_CWS_UGL";
		picture="\ukf_ukweps_oa\icons\l85a2ag36cws";
		muzzles[]=
		{
			"this",
			"ukf_AG36"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123.rtm"
		};
		ACE_bipod=0;
		class ukf_AG36: ukf_AG36
		{
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			irDistance=200;
		};
		ace_weight=6.700000;
		dexterity=1.150000;
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_cws",
			"ukf_L85A2AG36_cws_CQB"
		};
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_cws",
			"ukf_L85A2AG36_cws_fgrip"
		};
	};
	class ukf_L85A2AG36_cws_fgrip: ukf_L85A2AG36_cws
	{
		model="\ukf_ukweps_oa\CWS\ukf_SA80_CWS_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_cws_fgrip",
			"ukf_L85A2AG36_cws_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_cws_CQB: ukf_L85A2AG36_cws
	{
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
		class ukf_AG36: ukf_AG36
		{
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
		irDistance=0;
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_cws_CQB",
			"ukf_L85A2AG36_cws_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_cws_fgrip_CQB: ukf_L85A2AG36_cws_CQB
	{
		model="\ukf_ukweps_oa\CWS\ukf_SA80_CWS_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_cws_fgrip",
			"ukf_L85A2AG36_cws_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_lwti: ukf_L85A2_lwti
	{
		displayName="L85A2/UGL w/LWTI";
		model="\ukf_ukweps_oa\VIPIR\ukf_SA80_VIPIR_UGL";
		picture="\ukf_ukweps_oa\icons\l85a2ag36lwti";
		muzzles[]=
		{
			"this",
			"ukf_AG36"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123.rtm"
		};
		ACE_bipod=0;
		class ukf_AG36: ukf_AG36
		{
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			irDistance=200;
		};
		ace_weight=6.500000;
		dexterity=1.150000;
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_lwti",
			"ukf_L85A2AG36_lwti_fgrip"
		};
	};
	class ukf_L85A2AG36_lwti_fgrip: ukf_L85A2AG36_lwti
	{
		model="\ukf_ukweps_oa\VIPIR\ukf_SA80_VIPIR_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_L85A2AG36_sd: ukf_L85A2_sd
	{
		displayName="L85A2/UGL w/ACOG (SD)";
		model="\ukf_ukweps_oa\sa80_sd\ukf_SA80_sd_UGL";
		picture="\ukf_ukweps_oa\icons\l85a2ag36sd";
		muzzles[]=
		{
			"this",
			"ukf_AG36"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123.rtm"
		};
		ACE_bipod=0;
		class ukf_AG36: ukf_AG36
		{
			irLaserPos="laser pos";
			irLaserEnd="laser dir";
			irDistance=200;
		};
		ace_weight=6.600000;
		dexterity=1.150000;
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_sd",
			"ukf_L85A2AG36_sd_CQB"
		};
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_sd",
			"ukf_L85A2AG36_sd_fgrip"
		};
	};
	class ukf_L85A2AG36_sd_fgrip: ukf_L85A2AG36_sd
	{
		model="\ukf_ukweps_oa\sa80_sd\ukf_SA80_sd_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_sd_fgrip",
			"ukf_L85A2AG36_sd_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_sd_CQB: ukf_L85A2AG36_sd
	{
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
		class ukf_AG36: ukf_AG36
		{
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
		irDistance=0;
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36_sd_CQB",
			"ukf_L85A2AG36_sd_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36_sd_fgrip_CQB: ukf_L85A2AG36_sd_CQB
	{
		model="\ukf_ukweps_oa\sa80_sd\ukf_SA80_sd_UGL_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		ace_gunlight_classes[]=
		{
			"ukf_L85A2AG36_sd_fgrip",
			"ukf_L85A2AG36_sd_fgrip_CQB"
		};
	};
	class ukf_L85A2AG36: ukf_L85A2
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach UGL";
				att = "Attachment_M203";
				out = "ukf_L85A2";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "ukf_L85A2AG36_acog";
			};
		};
		displayName="L85A2/UGL";
		model="\ukf_ukweps_oa\ag36\ukf_SA80AG36_irns";
		picture="\ukf_ukweps_oa\icons\irnagicon";
		muzzles[]=
		{
			"this",
			"ukf_AG36"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123.rtm"
		};
		ace_weight=5.300000;
		dexterity=1.300000;
		ukf_grip_classes[]=
		{
			"ukf_L85A2AG36",
			"ukf_L85A2AG36_fgrip"
		};
	};
	class ukf_L85A2AG36_fgrip: ukf_L85A2AG36
	{
		model="\ukf_ukweps_oa\ag36\ukf_SA80AG36_irns_fgrip";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class BAF_L86A2_ACOG: Rifle
	{
		class Single;
		class OpticsModes
		{
			class Kolimator;
		};
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
	class ukf_L86A2LSW: BAF_L86A2_ACOG
	{
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		displayname="L86A2 LSW";
		model="\ukf_ukweps_oa\lsw\ukf_lsw_irns";
		picture="\ukf_ukweps_oa\icons\irnlswicon";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L85.rtm"
		};
		irDistance=0;
		modelOptics="-";
		class OpticsModes: OpticsModes
		{
			class ironsights: Kolimator
			{
			};
		};
		ace_sys_reticles_enable=0;
		class Single: Single
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=550;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.500000;
			maxRange=500;
			maxRangeProbab=0.100000;
		};
		class Library
		{
			libTextDesc="The L86 Light Support Weapon was designed to provide a fire team with automatic fire-support out to 600m without the cumbersome 7.62mm GPMG. It includes an extended barrel with support, bipod, modified butt to include a shoulder rest and a second pistol grip. However, due to its meager 30-round magazine capacity many units felt it was useless at sustaining any meaningfull supression that would allow the section to advance in combat. <br/>Due to its increased size and weight over the L85 IW, and percieved lack of any real benefits many units prefer not to use it, and often give it to the junior member of the section if they have to carry it. <br/>Due to its unpopular nature it has gained nicknames such as 'Crow Cannon' and 'Long Silly Weapon', and has ultimately been replaced by the FN Minimi Para (L110 LMG) in its intended role. <br/>There are currently attempts to rebrand the L86 as a Designated Marksman's Rifle owing to its increased range over the L85.";
		};
		class Armory
		{
			author="P:UKF";
			disabled=0;
		};
		ace_weight=5.400000;
		dexterity=1.300000;
		ukf_grip_classes[]=
		{
			"ukf_L86A2LSW",
			"ukf_L86A2LSW_fgrip"
		};
	};
	class ukf_L86A2LSW_fgrip: ukf_L86A2LSW
	{
		model="\ukf_ukweps_oa\lsw\ukf_lsw_irns_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_L86A2LSW_susat: ukf_L86A2LSW
	{
		displayname="L86A2 LSW w/SUSAT";
		model="\ukf_ukweps_oa\lsw\ukf_lsw";
		picture="\ukf_ukweps_oa\icons\l86a2";
		modelOptics="\ukf_ukweps_oa\optics\ukf_susat3";
		class OpticsModes
		{
			class SUSAT
			{
				cameradir="";
				discretedistance[]={300,400,500,600,700,800};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"Normal"
				};
			};
			class ironsights: SUSAT
			{
				discretedistance[]={};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponZeroing";
		class Single: Single
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=800;
			minRange=0;
			minRangeProbab=0.700000;
			midRange=200;
			midRangeProbab=0.600000;
			maxRange=650;
			maxRangeProbab=0.100000;
		};
		ace_weight=5.800000;
		dexterity=1.200000;
		ukf_grip_classes[]=
		{
			"ukf_L86A2LSW_susat",
			"ukf_L86A2LSW_susat_fgrip"
		};
	};
	class ukf_L86A2LSW_susat_fgrip: ukf_L86A2LSW_susat
	{
		model="\ukf_ukweps_oa\lsw\ukf_lsw_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_L86A2LSW_MaxiKite: ukf_L86A2LSW_susat
	{
		displayname="L86A2 LSW w/MaxiKite";
		model="\ukf_ukweps_oa\CWS\ukf_lsw_MaxiKite";
		picture="\ukf_ukweps_oa\icons\mklswicon";
		modelOptics="\ukf_ukweps_oa\optics\ukf_CWS";
		class OpticsModes
		{
			class MaxiKite
			{
				cameradir="";
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.050000;
				opticszoommax=0.050000;
				opticszoommin=0.050000;
				usemodeloptics=1;
				visionmode[]=
				{
					"NVG"
				};
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_sys_reticles_enable=0;
		class Library
		{
			libTextDesc="The L86 Light Support Weapon was designed to provide a fire team with automatic fire-support out to 600m without the cumbersome 7.62mm GPMG. It includes an extended barrel with support, bipod, modified butt to include a shoulder rest and a second pistol grip. <br/>There are currently attempts to rebrand the L86 as a Designated Marksman's Rifle owing to its increased range over the L85. <br/>The Qioptiq MaxiKITE Image Intensifier scope provides night vision capability. The sight was originally introduced to provide a 6x night vision scope for the L96 sniper rifle and machine guns.";
		};
		ace_weight=6.900000;
		dexterity=1.100000;
		ukf_grip_classes[]=
		{
			"ukf_L86A2LSW_MaxiKite",
			"ukf_L86A2LSW_MaxiKite_fgrip"
		};
	};
	class ukf_L86A2LSW_MaxiKite_fgrip: ukf_L86A2LSW_MaxiKite
	{
		model="\ukf_ukweps_oa\CWS\ukf_lsw_MaxiKite_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class BAF_L110A1_Aim : Rifle
	{
		magazines[] = {
			"200Rnd_556x45_L110A1",
			"200Rnd_556x45_L110A1SD",
			"200Rnd_556x45_L110A1_hp",
			"200Rnd_556x45_L110A1_tracer",
			"200Rnd_556x45_L110A1_rubber",
			"200Rnd_556x45_L110A1_bt",
			"100Rnd_556x45_M249",
			"100Rnd_556x45_M249SD",
			"100Rnd_556x45_M249_hp",
			"100Rnd_556x45_M249_tracer",
			"100Rnd_556x45_M249_rubber",
			"100Rnd_556x45_M249_bt",
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
	class ukf_lmg: BAF_L110A1_Aim
	{
		magazines[] = {
			"200Rnd_556x45_L110A1",
			"200Rnd_556x45_L110A1SD",
			"200Rnd_556x45_L110A1_hp",
			"200Rnd_556x45_L110A1_tracer",
			"200Rnd_556x45_L110A1_rubber",
			"200Rnd_556x45_L110A1_bt",
			"100Rnd_556x45_M249",
			"100Rnd_556x45_M249SD",
			"100Rnd_556x45_M249_hp",
			"100Rnd_556x45_M249_tracer",
			"100Rnd_556x45_M249_rubber",
			"100Rnd_556x45_M249_bt",
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
		displayname="L110A2 LMG";
		model="\ukf_ukweps_oa\lmg\ukf_l110";
		picture="\ukf_ukweps_oa\icons\lmg";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L110_erc.rtm"
		};
		irDistance=0;
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=2;
		class Library
		{
			libTextDesc="The L110 Light Machine-Gun is a version of the popular 5.56mm belt-fed, FN Minimi Para. <br/>The weapon was first used in the UK by Special Forces during the 1990s, but was adopted across the HM Armed Forces at the start of the wars in Afghanistan and Iraq as a means of providing infantry sections with a greater volume of fire than could be provided with the L86 LSW. <br/>The L110A2 variant saw the introduction of a bespoke sight rail for fitting SUSAT and other optics in use with British forces.";
		};
		class Armory
		{
			author="P:UKF";
			disabled=0;
		};
		ace_weight=7.200000;
		dexterity=0.700000;
		ukf_grip_classes[]=
		{
			"ukf_lmg",
			"ukf_lmg_fgrip"
		};
	};
	class ukf_lmg_fgrip: ukf_lmg
	{
		model="\ukf_ukweps_oa\lmg\ukf_l110_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_lmg_SUSAT: ukf_lmg
	{
		displayname="L110A2 LMG w/SUSAT";
		model="\ukf_ukweps_oa\lmg\ukf_l110_SUSAT";
		picture="\ukf_ukweps_oa\icons\lmgSUSAT";
		modelOptics="\ukf_ukweps_oa\optics\ukf_susat3";
		class OpticsModes
		{
			class SUSAT
			{
				cameradir="";
				discretedistance[]={300,400,500,600,700,800};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"Normal"
				};
			};
			class ironsights: SUSAT
			{
				discretedistance[]={};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		ace_weight=7.600000;
		dexterity=0.700000;
		ukf_grip_classes[]=
		{
			"ukf_lmg_SUSAT",
			"ukf_lmg_SUSAT_fgrip"
		};
	};
	class ukf_lmg_SUSAT_fgrip: ukf_lmg_SUSAT
	{
		model="\ukf_ukweps_oa\lmg\ukf_l110_SUSAT_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_lmg_ACOG: ukf_lmg
	{
		displayname="L110A2 LMG w/ACOG";
		model="\ukf_ukweps_oa\lmg\ukf_l110_ACOG";
		picture="\ukf_ukweps_oa\icons\lmgACOG";
		modelOptics="\ukf_ukweps_oa\optics\asr_acog_ta31ecos";
		class OpticsModes
		{
			class ACOG
			{
				cameradir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=189;
				distancezoommin=189;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"Normal"
				};
				weaponinfotype="RscWeaponEmpty";
			};
			class Kolimator: ACOG
			{
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_weight=7.700000;
		dexterity=0.700000;
		ukf_grip_classes[]=
		{
			"ukf_lmg_ACOG",
			"ukf_lmg_ACOG_fgrip"
		};
	};
	class ukf_lmg_ACOG_fgrip: ukf_lmg_ACOG
	{
		model="\ukf_ukweps_oa\lmg\ukf_l110_ACOG_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_lmg_CWS: ukf_lmg
	{
		displayname="L110A2 LMG w/CWS";
		model="\ukf_ukweps_oa\lmg\ukf_l110_CWS";
		picture="\ukf_ukweps_oa\icons\lmgCWS";
		modelOptics="\ukf_ukweps_oa\optics\ukf_CWS";
		class OpticsModes
		{
			class CWS
			{
				cameradir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=189;
				distancezoommin=189;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.071945;
				opticszoommax=0.071945;
				opticszoommin=0.071945;
				usemodeloptics=1;
				visionmode[]=
				{
					"NVG"
				};
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_weight=8.400000;
		dexterity=0.650000;
		ukf_grip_classes[]=
		{
			"ukf_lmg_CWS",
			"ukf_lmg_CWS_fgrip"
		};
	};
	class ukf_lmg_CWS_fgrip: ukf_lmg_CWS
	{
		model="\ukf_ukweps_oa\lmg\ukf_l110_CWS_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_lmg_vipir2plus: ukf_lmg
	{
		displayname="L110A2 LMG w/VIPIR-2+";
		model="\ukf_ukweps_oa\lmg\ukf_l110_VIPIR";
		picture="\ukf_ukweps_oa\icons\lmgVIPIR";
		modelOptics="\ukf_ukweps_oa\optics\VIPIR_IW_o";
		class OpticsModes
		{
			class VIPIR
			{
				cameradir="";
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.083333;
				opticszoommax=0.083333;
				opticszoommin=0.041667;
				usemodeloptics=1;
				visionmode[]=
				{
					"Ti"
				};
				thermalMode[]={0,1};
				discretefov[]={0.083333,0.041667};
				discreteInitIndex=0;
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_weight=8.500000;
		dexterity=0.650000;
		ukf_grip_classes[]=
		{
			"ukf_lmg_vipir2plus",
			"ukf_lmg_vipir2plus_fgrip"
		};
	};
	class ukf_lmg_vipir2plus_fgrip: ukf_lmg_vipir2plus
	{
		model="\ukf_ukweps_oa\lmg\ukf_l110_VIPIR_bp";
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class BAF_L7A2_GPMG;
	class ukf_gpmg: BAF_L7A2_GPMG
	{
		model="\ukf_ukweps_oa\gpmg\ukf_gpmg";
		picture="\ukf_ukweps_oa\icons\gpmg";
		irDistance=0;
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=2;
		class Library
		{
			libTextDesc="The L7A2 General Purpose Machine-Gun is a license built version of the FN MAG-58, currently made by Manroy Engineering. <br/>The GPMG has been in service with British forces since the early 1960s and has seen widespread use in the light-role, resting on its bipod and in the medium-role, mounted on a tripod for sustained fire or on a vehicle's pintle mount on the ground, in the air and at sea. <br/>The GPMG is affectionatly nicknamed 'Jimpy' or 'The General' as is well regarded for its robustness and cababilities in providing a beaten-zone. <br/>The major drawback of the weapon is its weight, whereby the MoD has seen fit to try to replace it with 5.56mm weapons like the LSW and LMG. However, the firepower of the weapon continues to make it necessary in the light-role and efforts are underway by Heckler and Koch to develop a light-weight, titanium-bodied version of the venerable GPMG.";
		};
		ukf_grip_classes[]=
		{
			"ukf_gpmg",
			"ukf_gpmg_fgrip"
		};
	};
	class ukf_gpmg_fgrip: ukf_gpmg
	{
		model="\ukf_ukweps_oa\gpmg\ukf_gpmg_bp";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L7_bp.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_gpmg_MaxiKite: ukf_gpmg
	{
		displayName="L7A2 GPMG w/MaxiKite";
		model="\ukf_ukweps_oa\gpmg\ukf_gpmg_maxikite";
		picture="\ukf_ukweps_oa\icons\mkgpmg";
		fireLightIntensity=0.002000;
		modelOptics="\ukf_ukweps_oa\optics\ukf_CWS";
		class OpticsModes
		{
			class MaxiKite
			{
				cameradir="";
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.050000;
				opticszoommax=0.050000;
				opticszoommin=0.050000;
				usemodeloptics=1;
				visionmode[]=
				{
					"NVG"
				};
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_weight=13.100000;
		dexterity=0.500000;
		ukf_grip_classes[]=
		{
			"ukf_gpmg_MaxiKite",
			"ukf_gpmg_MaxiKite_fgrip"
		};
	};
	class ukf_gpmg_MaxiKite_fgrip: ukf_gpmg_MaxiKite
	{
		model="\ukf_ukweps_oa\gpmg\ukf_gpmg_maxikite_bp";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L7_bp.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
	class ukf_gpmg_vipir2plus: ukf_gpmg
	{
		displayName="L7A2 GPMG w/VIPIR-2+";
		model="\ukf_ukweps_oa\gpmg\ukf_gpmg_vipir";
		picture="\ukf_ukweps_oa\icons\vipirgpmg";
		fireLightIntensity=0.002000;
		modelOptics="\ukf_ukweps_oa\optics\VIPIR_IW_o";
		class OpticsModes
		{
			class VIPIR
			{
				cameradir="";
				discretedistance[]={300};
				discretedistanceinitindex=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="opticView";
				opticsdisableperipherialvision=1;
				opticsflare=1;
				opticsid=1;
				opticsppeffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticszoominit=0.083333;
				opticszoommax=0.083333;
				opticszoommin=0.041667;
				usemodeloptics=1;
				visionmode[]=
				{
					"Ti"
				};
				thermalMode[]={0,1};
				discretefov[]={0.083333,0.041667};
				discreteInitIndex=0;
			};
			class Ironsights
			{
				cameraDir="";
				discretedistance[]={100};
				discretedistanceinitindex=0;
				distancezoommax=100;
				distancezoommin=100;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsid=2;
				opticsppeffects[]={};
				opticszoominit=0.500000;
				opticszoommax=1.100000;
				opticszoommin=0.250000;
				usemodeloptics=0;
				visionmode[]={};
				weaponinfotype="RscWeaponEmpty";
			};
		};
		weaponInfoType="RscWeaponEmpty";
		ace_weight=12.900000;
		dexterity=0.500000;
		ukf_grip_classes[]=
		{
			"ukf_gpmg_vipir2plus",
			"ukf_gpmg_vipir2plus_fgrip"
		};
	};
	class ukf_gpmg_vipir2plus_fgrip: ukf_gpmg_vipir2plus
	{
		model="\ukf_ukweps_oa\gpmg\ukf_gpmg_vipir_bp";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\ukf_ukweps_oa\anims\ukf_L7_bp.rtm"
		};
		class Armory
		{
			author="P:UKF";
			disabled=1;
		};
	};
};

class CfgVehicles
{
	class USBasicWeapons_EP1;
	class ukf_AmmoBox_1: USBasicWeapons_EP1
	{
		displayName="UKF Ammo + Weapon Box";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine="30Rnd_556x45_StanagSD";
				count=100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=100;
			};
			class _xx_200Rnd_556x45_m249
			{
				magazine="200Rnd_556x45_m249";
				count=50;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=50;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=50;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=50;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=5;
			};
			class _xx_M136
			{
				magazine="M136";
				count=100;
			};
			class _xx_PipeBomb
			{
				magazine="PipeBomb";
				count=20;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=20;
			};
			class _xx_FlareGreen_M203
			{
				magazine="FlareGreen_M203";
				count=20;
			};
			class _xx_FlareYellow_M203
			{
				magazine="FlareYellow_M203";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_ukf_L85A2
			{
				weapon="ukf_L85A2";
				count=12;
			};
			class _xx_ukf_L85A2_susat
			{
				weapon="ukf_L85A2_susat";
				count=12;
			};
			class _xx_ukf_L85A2_acog
			{
				weapon="ukf_L85A2_acog";
				count=12;
			};
			class _xx_ukf_L85A2_sd
			{
				weapon="ukf_L85A2_sd";
				count=8;
			};
			class _xx_ukf_L85A2_RIS
			{
				weapon="ukf_L85A2_RIS";
				count=12;
			};
			class _xx_ukf_L85A2_cws
			{
				weapon="ukf_L85A2_cws";
				count=8;
			};
			class _xx_ukf_L85A2_lwti
			{
				weapon="ukf_L85A2_lwti";
				count=3;
			};
			class _xx_ukf_L85A2AG36
			{
				weapon="ukf_L85A2AG36";
				count=6;
			};
			class _xx_ukf_L85A2AG36_susat
			{
				weapon="ukf_L85A2AG36_susat";
				count=6;
			};
			class _xx_ukf_L85A2AG36_acog
			{
				weapon="ukf_L85A2AG36_acog";
				count=6;
			};
			class _xx_ukf_L85A2AG36_cws
			{
				weapon="ukf_L85A2AG36_cws";
				count=4;
			};
			class _xx_ukf_L85A2AG36_lwti
			{
				weapon="ukf_L85A2AG36_lwti";
				count=2;
			};
			class _xx_ukf_L85A2AG36_sd
			{
				weapon="ukf_L85A2AG36_sd";
				count=4;
			};
			class _xx_ukf_L86A2LSW
			{
				weapon="ukf_L86A2LSW";
				count=4;
			};
			class _xx_ukf_L86A2LSW_susat
			{
				weapon="ukf_L86A2LSW_susat";
				count=4;
			};
			class _xx_ukf_L86A2LSW_MaxiKite
			{
				weapon="ukf_L86A2LSW_MaxiKite";
				count=2;
			};
			class _xx_ukf_gpmg
			{
				weapon="ukf_gpmg";
				count=4;
			};
			class _xx_ukf_gpmg_MaxiKite
			{
				weapon="ukf_gpmg_MaxiKite";
				count=2;
			};
			class _xx_ukf_gpmg_vipir2plus
			{
				weapon="ukf_gpmg_vipir2plus";
				count=1;
			};
			class _xx_Binocular
			{
				weapon="Binocular";
				count=20;
			};
			class _xx_NVGoggles
			{
				weapon="NVGoggles";
				count=20;
			};
			class _xx_Laserdesignator
			{
				weapon="Laserdesignator";
				count=5;
			};
			class _xx_ukf_L85A2K_susat
			{
				weapon="ukf_L85A2K_susat";
				count=8;
			};
			class _xx_ukf_lmg
			{
				weapon="ukf_lmg";
				count=6;
			};
			class _xx_ukf_lmg_SUSAT
			{
				weapon="ukf_lmg_SUSAT";
				count=6;
			};
			class _xx_ukf_lmg_ACOG
			{
				weapon="ukf_lmg_ACOG";
				count=6;
			};
			class _xx_ukf_lmg_CWS
			{
				weapon="ukf_lmg_CWS";
				count=3;
			};
			class _xx_ukf_lmg_vipir2plus
			{
				weapon="ukf_lmg_vipir2plus";
				count=1;
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class UKF_UKWEPS
	{
		clientInit="call compile preprocessfile '\ukf_ukweps_oa_cfg\XEH_postClientInit.sqf'";
	};
};
