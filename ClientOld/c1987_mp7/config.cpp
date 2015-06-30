class CfgPatches
{
	class C1987_Mp7
	{
		Units[]=
		{
			"C1987_Mp7_Box"
		};
		weapons[]=
		{
			"C1987_MP7",
			"C1987_MP7_sd",
			"C1987_MP7_su",
			"C1987_MP7_su_sd",
			"C1987_MP7_zp",
			"C1987_MP7_zp_sd",
			"C1987_MP7_eot",
			"C1987_MP7_eot_sd",
			"C1987_MP7_aim",
			"C1987_Mp7_aim_sd",
			"C1987_MP7_acog",
			"C1987_MP7_acog_sd",
			"C1987_MP7_t",
			"C1987_MP7_sd_t",
			"C1987_MP7_su_t",
			"C1987_MP7_su_sd_t",
			"C1987_MP7_zp_t",
			"C1987_MP7_zp_sd_t",
			"C1987_MP7_eot_t",
			"C1987_MP7_eot_sd_t",
			"C1987_MP7_aim_sd",
			"C1987_Mp7_aim_sd_t",
			"C1987_MP7_acog_t",
			"C1987_MP7_acog_sd_t"
		};
		requiredVersion=1.000000;
		requiredAddons[]={};
	};
};
class cfgRecoils
{
	C1987_subMachineGunBase[]={0,0.005000,0.005000,0.005000,0.007000,0.006000,0.090000,0.002000,-0.001500,0.100000,0,0};
};
class CfgAmmo
{
	class Default;
	class BulletBase;
	class C1987_B_46x30_Ball: BulletBase
	{
		cartridge="FxCartridge_Mp7";
		cost=5;
		typicalSpeed=700;
		airFriction=-0.001425;
		hit=6;
	};
	class C1987_B_46x30_sd_Ball: BulletBase
	{
		cartridge="FxCartridge_Mp7";
		visibleFire=0.065000;
		audibleFire=0.065000;
		cost=5;
		typicalSpeed=650;
		airFriction=-0.001200;
		hit=5;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class MP5A5;
	class C1987_MP7_base: MP5A5
	{
		scope=2;
		displayName="MP7";
		model="\C1987_Mp7\mp7.p3d";
		picture="\C1987_Mp7\equip\gui_mp7.paa";
		optics=0;
		value=1000;
		dexterity=1.750000;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_Mp7\anim\mp7.rtm"
		};
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_s1.wss",
				2,
				1,
				750
			};
			begin2[]=
			{
				"\C1987_Mp7\sound\mp7_s2.wss",
				2,
				1,
				750
			};
			begin3[]=
			{
				"\C1987_Mp7\sound\mp7_s3.wss",
				2,
				1,
				750
			};
			begin4[]=
			{
				"\C1987_Mp7\sound\mp7_s4.wss",
				2,
				1,
				750
			};
			soundBegin[]=
			{
				"begin1",
				0.250000,
				"begin2",
				0.250000,
				"begin3",
				0.250000,
				"begin4",
				0.250000
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.004000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_s1.wss",
				2,
				1,
				750
			};
			begin2[]=
			{
				"\C1987_Mp7\sound\mp7_s2.wss",
				2,
				1,
				750
			};
			begin3[]=
			{
				"\C1987_Mp7\sound\mp7_s3.wss",
				2,
				1,
				750
			};
			begin4[]=
			{
				"\C1987_Mp7\sound\mp7_s4.wss",
				2,
				1,
				750
			};
			soundBegin[]=
			{
				"begin1",
				0.250000,
				"begin2",
				0.250000,
				"begin3",
				0.250000,
				"begin4",
				0.250000
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		reloadMagazineSound[]=
		{
			"\C1987_Mp7\sound\mp7_reload.wss",
			1,
			1,
			20
		};
		drySound[]=
		{
			"\C1987_Mp7\sound\mp7_dry.wss",
			1,
			1,
			20
		};
		magazines[]=
		{
			"46x30_x1",
			"46x30_SD_x1",
			"46x30_HP_x1",
			"46x30_TRACER_x1",
			"46x30_RUBBER_x1",
			"46x30_BT_x1",
			"40Rnd_46x30_mp7",
			"40Rnd_46x30_sd_mp7",
			"40Rnd_46x30_mp7_hp",
			"40Rnd_46x30_mp7_tracer",
			"40Rnd_46x30_mp7_rubber",
			"40Rnd_46x30_mp7_bt",
			"20Rnd_46x30_mp7",
			"20Rnd_46x30_sd_mp7",
			"20Rnd_46x30_mp7_hp",
			"20Rnd_46x30_mp7_tracer",
			"20Rnd_46x30_mp7_rubber",
			"20Rnd_46x30_mp7_bt"
		};
		descriptionShort="HK MP7A1";
		class Library
		{
			libTextDesc="The MP7 is a German Submachine Gun Manufactured by Heckler and Koch (HK) and Chambered for the HK 4.6×30mm Cartridge. It was Designed with the new Cartridge to Meet NATO Requirements Published in 1989, as these Requirements call for a Personal Defense Weapon (PDW) Class Firearm, with a greater ability to defeat body armor than current Weapons limited to conventional Pistol Cartridges. The MP7 went into Production in 2001. It is a direct Rival to the FN P90, also Developed in Response to NATO's Requirement. The Weapon has been revised since its Introduction and the current Production Version is the MP7A1.";
		};
	};
	class C1987_MP7: C1987_MP7_base
	{
		displayName="MP7";
		model="\C1987_Mp7\mp7.p3d";
		picture="\C1987_Mp7\equip\gui_mp7.paa";
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_sd: C1987_MP7_base
	{
		displayName="MP7 SD";
		model="\C1987_Mp7\mp7_sd.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_sd.paa";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_su: C1987_MP7_base
	{
		displayName="MP7 SU";
		model="\C1987_Mp7\mp7_su.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_su.paa";
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_su_sd: C1987_MP7_base
	{
		displayName="MP7 SU SD";
		model="\C1987_Mp7\mp7_su_sd.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_su_sd.paa";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_zp: C1987_MP7_base
	{
		displayName="MP7 Z-Point";
		model="\C1987_Mp7\mp7_zp.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_zp.paa";
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_zp_sd: C1987_MP7_base
	{
		displayName="MP7 Z-Point SD";
		model="\C1987_Mp7\mp7_zp_sd.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_zp_sd.paa";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_eot: C1987_MP7_base
	{
		displayName="MP7 EoTech";
		model="\C1987_Mp7\mp7_eot.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_eot.paa";
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_eot_sd: C1987_MP7_base
	{
		displayName="MP7 EoTech SD";
		model="\C1987_Mp7\mp7_eot_sd.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_aim: C1987_MP7_base
	{
		displayName="MP7 AimPoint";
		model="\C1987_Mp7\mp7_aim.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_aim.paa";
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_aim_sd: C1987_MP7_base
	{
		displayName="MP7 AimPoint SD";
		model="\C1987_Mp7\mp7_aim_sd.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_acog: C1987_MP7_base
	{
		displayName="MP7 Acog";
		model="\C1987_Mp7\mp7_acog.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_acog.paa";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
				opticsZoomMin=0.062300;
				opticsZoomInit=0.002300;
				opticsZoomMax=0.062300;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
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
				memoryPointCamera="eye2";
				visionMode[]={};
			};
		};
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_acog_sd: C1987_MP7_base
	{
		displayName="MP7 Acog SD";
		model="\C1987_Mp7\mp7_acog_sd.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_acog_sd.paa";
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
				opticsZoomMin=0.062300;
				opticsZoomInit=0.002300;
				opticsZoomMax=0.062300;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
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
				memoryPointCamera="eye2";
				visionMode[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "C1987_MP7_aim_t";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "C1987_MP7_eot_t";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "C1987_MP7_acog_t";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_sd_t";
			};
		};
		displayName="MP7 Tac.";
		model="\C1987_Mp7\mp7_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7.paa";
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
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_sd_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "C1987_MP7_aim_t";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "C1987_MP7_eot_t";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "C1987_MP7_acog_t";
			};
			class UseAtt3 : UseAtt{
				text = "Detach Silencer";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Sup";
				out = "C1987_MP7_t";
			};
		};
		displayName="MP7 Tac. SD";
		model="\C1987_Mp7\mp7_sd_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_sd.paa";
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
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_su_t: C1987_MP7_base
	{
		displayName="MP7 SU Tac.";
		model="\C1987_Mp7\mp7_su_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_su.paa";
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
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_su_sd_t: C1987_MP7_base
	{
		displayName="MP7 SU Tac. SD";
		model="\C1987_Mp7\mp7_su_sd_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_su_sd.paa";
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
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_zp_t: C1987_MP7_base
	{
		displayName="MP7 ZP Tac.";
		model="\C1987_Mp7\mp7_zp_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_zp.paa";
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
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_zp_sd_t: C1987_MP7_base
	{
		displayName="MP7 ZP Tac. SD";
		model="\C1987_Mp7\mp7_zp_sd_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_zp_sd.paa";
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
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_eot_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "C1987_MP7_t";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_eot_sd_t";
			};
		};
		displayName="MP7 EoTech Tac.";
		model="\C1987_Mp7\mp7_eot_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_eot.paa";
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
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_eot_sd_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "C1987_MP7_sd_t";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_eot_t";
			};
		};
		displayName="MP7 EoTech Tac. SD";
		model="\C1987_Mp7\mp7_eot_sd_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_eot_sd.paa";
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
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_aim_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "C1987_MP7_t";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_aim_sd_t";
			};
		};
		displayName="MP7 AimPoint Tac.";
		model="\C1987_Mp7\mp7_aim_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_aim.paa";
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
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_aim_sd_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "C1987_MP7_sd_t";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_aim_t";
			};
		};
		displayName="MP7 AimPoint Tac. SD";
		model="\C1987_Mp7\mp7_aim_sd_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_aim_sd.paa";
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
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_acog_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "C1987_MP7_t";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_acog_sd_t";
			};
		};
		displayName="MP7 Acog Tac.";
		model="\C1987_Mp7\mp7_acog_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_acog.paa";
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
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
				opticsZoomMin=0.062300;
				opticsZoomInit=0.002300;
				opticsZoomMax=0.062300;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
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
				memoryPointCamera="eye2";
				visionMode[]={};
			};
		};
		descriptionShort="HK MP7A1";
	};
	class C1987_MP7_acog_sd_t: C1987_MP7_base
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "C1987_MP7_sd_t";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "C1987_MP7_acog_t";
			};
		};
		displayName="MP7 Acog Tac. SD";
		model="\C1987_Mp7\mp7_acog_sd_t.p3d";
		picture="\C1987_Mp7\equip\gui_mp7_acog_sd.paa";
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
		class OpticsModes
		{
			class ACOG
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
				opticsZoomMin=0.062300;
				opticsZoomInit=0.002300;
				opticsZoomMax=0.062300;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
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
				memoryPointCamera="eye2";
				visionMode[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			dispersion=0.002000;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=40;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\C1987_Mp7\sound\mp7_sd.wss",
				1,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			ffCount=1;
			recoil="C1987_subMachineGunBase";
			recoilProne="C1987_subMachineGunBase";
			aiRateOfFire=0.001000;
			dispersion=0.003500;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.050000;
		};
		fireLightDuration=0.000000;
		fireLightIntensity=0.000000;
		descriptionShort="HK MP7A1";
	};
};
class cfgVehicles
{
	class ThingEffect;
	class ReammoBox;
	class FxCartridge_Mp7: ThingEffect
	{
		model="\C1987_Mp7\cartridge\46_30.p3d";
		displayName="4.6x30mm Cartridge";
		submerged=0;
		submergeSpeed=0;
		timeToLive=5;
		disappearAtContact=1;
		airRotation=1.000000;
	};
	class C1987_Mp7_Box: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="C1987 MP7 Weapon-Box";
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class 40Rnd_46x30_mp7
			{
				magazine="40Rnd_46x30_mp7";
				count=200;
			};
			class 40Rnd_46x30_sd_mp7
			{
				magazine="40Rnd_46x30_sd_mp7";
				count=200;
			};
			class 20Rnd_46x30_mp7
			{
				magazine="20Rnd_46x30_mp7";
				count=200;
			};
			class 20Rnd_46x30_sd_mp7
			{
				magazine="20Rnd_46x30_sd_mp7";
				count=200;
			};
		};
		class TransportWeapons
		{
			class C1987_MP7
			{
				weapon="C1987_MP7";
				count=24;
			};
			class C1987_MP7_sd
			{
				weapon="C1987_MP7_sd";
				count=24;
			};
			class C1987_MP7_su
			{
				weapon="C1987_MP7_su";
				count=24;
			};
			class C1987_MP7_su_sd
			{
				weapon="C1987_MP7_su_sd";
				count=24;
			};
			class C1987_MP7_zp
			{
				weapon="C1987_MP7_zp";
				count=24;
			};
			class C1987_MP7_zp_sd
			{
				weapon="C1987_MP7_zp_sd";
				count=24;
			};
			class C1987_MP7_eot
			{
				weapon="C1987_MP7_eot";
				count=24;
			};
			class C1987_MP7_eot_sd
			{
				weapon="C1987_MP7_eot_sd";
				count=24;
			};
			class C1987_MP7_aim
			{
				weapon="C1987_MP7_aim";
				count=24;
			};
			class C1987_MP7_aim_sd
			{
				weapon="C1987_MP7_aim_sd";
				count=24;
			};
			class C1987_MP7_acog
			{
				weapon="C1987_MP7_acog";
				count=24;
			};
			class C1987_MP7_acog_sd
			{
				weapon="C1987_MP7_acog_sd";
				count=24;
			};
			class C1987_MP7_t
			{
				weapon="C1987_MP7_t";
				count=24;
			};
			class C1987_MP7_sd_t
			{
				weapon="C1987_MP7_sd_t";
				count=24;
			};
			class C1987_MP7_su_t
			{
				weapon="C1987_MP7_su_t";
				count=24;
			};
			class C1987_MP7_su_sd_t
			{
				weapon="C1987_MP7_su_sd_t";
				count=24;
			};
			class C1987_MP7_zp_t
			{
				weapon="C1987_MP7_zp_t";
				count=24;
			};
			class C1987_MP7_zp_sd_t
			{
				weapon="C1987_MP7_zp_sd_t";
				count=24;
			};
			class C1987_MP7_eot_t
			{
				weapon="C1987_MP7_eot_t";
				count=24;
			};
			class C1987_MP7_eot_sd_t
			{
				weapon="C1987_MP7_eot_sd_t";
				count=24;
			};
			class C1987_MP7_aim_t
			{
				weapon="C1987_MP7_aim_t";
				count=24;
			};
			class C1987_MP7_aim_sd_t
			{
				weapon="C1987_MP7_aim_sd_t";
				count=24;
			};
			class C1987_MP7_acog_t
			{
				weapon="C1987_MP7_acog_t";
				count=24;
			};
			class C1987_MP7_acog_sd_t
			{
				weapon="C1987_MP7_acog_sd_t";
				count=24;
			};
		};
	};
};
