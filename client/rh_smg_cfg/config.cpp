class CfgPatches
{
	class RH_smg
	{
		units[]=
		{
			"RHsmgbox"
		};
		weapons[]=
		{
			"RH_HK53",
			"RH_HK53aim",
			"RH_HK53eot",
			"RH_HK53RFX",
			"RH_mp5a4",
			"RH_mp5a4aim",
			"RH_mp5a4eot",
			"RH_mp5a4rfx",
			"RH_mp5a5",
			"RH_mp5a5aim",
			"RH_mp5a5eot",
			"RH_mp5a5rfx",
			"RH_mp5a5ris",
			"RH_mp5a5risaim",
			"RH_mp5a5riseot",
			"RH_mp5a5risRFX",
			"RH_mp5a5eod",
			"RH_mp5a5eodaim",
			"RH_mp5a5eodeot",
			"RH_mp5a5eodRFX",
			"RH_mp5sd6",
			"RH_mp5sd6aim",
			"RH_mp5sd6eot",
			"RH_mp5sd6RFX",
			"RH_mp5sd6g",
			"RH_mp5kpdw",
			"RH_mp5kpdwaim",
			"RH_mp5kpdweot",
			"RH_mp5kpdwRFX",
			"RH_p90",
			"RH_p90i",
			"RH_p90aim",
			"RH_P90eot",
			"RH_P90sd",
			"RH_P90isd",
			"RH_p90sdaim",
			"RH_p90sdeot",
			"RH_ump",
			"RH_umpaim",
			"RH_umpeot",
			"RH_umpRFX",
			"RH_umpsd",
			"RH_umpsdaim",
			"RH_umpsdeot",
			"RH_umpsdRFX",
			"RH_kriss",
			"RH_krissaim",
			"RH_krisseot",
			"RH_krissRFX",
			"RH_krisssd",
			"RH_krisssdaim",
			"RH_krisssdeot",
			"RH_krisssdRFX",
			"RH_uzi",
			"RH_uzim",
			"RH_uzig",
			"RH_uzisd",
			"RH_mac10",
			"RH_tmp",
			"RH_tmpaim",
			"RH_tmpeot",
			"RH_tmpsd",
			"RH_tmpsdaim",
			"RH_tmpsdeot",
			"RH_pp2000",
			"RH_pp2000aim",
			"RH_pp2000eot",
			"RH_mp7",
			"RH_mp7aim",
			"RH_mp7eot",
			"RH_mp7sd",
			"RH_mp7sdaim",
			"RH_mp7sdeot"
		};
		requiredVersion=1.04;
		requiredAddons[]=
		{
			"CAweapons"
		};
	};
};
class cfgRecoils
{
	RH_subMachineGunBase[]={0,0.0049999999,0.0049999999,0.0049999999,0.0070000002,0.0060000001,0.090000004,0.0020000001,-0.0015,0.1,0,0};
	RH_SMG_M203GLBase[]={0,0.029999999,0.050000001,0.13,0.0099999998,-0.001,0.25999999,0,0};
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
	class M203Muzzle: GrenadeLauncher
	{
	};
	class RocketPods;
	class MissileLauncher;
	class MGun;
	class Rifle;
	class M4A1;
	class MP5SD: Rifle 
	{
		magazines[] = {
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"30Rnd_9x19_MP5",
			"30Rnd_9x19_MP5SD",
			"30Rnd_9x19_MP5_hp",
			"30Rnd_9x19_MP5_tracer",
			"30Rnd_9x19_MP5_rubber",
			"30Rnd_9x19_MP5_bt"
		};
	}
	class MP5A5: MP5SD 
	{
		magazines[] = {
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"30Rnd_9x19_MP5",
			"30Rnd_9x19_MP5SD",
			"30Rnd_9x19_MP5_hp",
			"30Rnd_9x19_MP5_tracer",
			"30Rnd_9x19_MP5_rubber",
			"30Rnd_9x19_MP5_bt"
		};
	}
	class RH_HK53: M4A1
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_HK53aim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_HK53eot";
			};
		};
		scope=2;
		model="\RH_smg\RH_HK53.p3d";
		displayName="HK 53";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		picture="\RH_smg\inv\hk53.paa";
		descriptionShort="<br />Ammo: 5.56x45 mm";
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\HK53_reload.wss",
			0.056233998,
			1,
			25
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton"
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
				"\RH_smg\sound\HK53.wss",
				1.7782789,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.090000004;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.0024999999;
			minRange=2;
			minRangeProbab=0.1;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_smg\sound\HK53.wss",
				1.7782789,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.090000004;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0.0040000002;
			minRange=2;
			minRangeProbab=0.1;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.050000001;
		};
		class Library
		{
			libTextDesc="The HK 53 is an assault carbine variant of the HK33 rifle, based on the proven delayed roller lock bolt system introduced with the MG30 machine gun scaled down to 5.56 mm NATO. The gun is useful because it combines the power of an assault rifle, including the ability to penetrate body armor, with the handling characteristics of a submachine gun.";
		};
	};
	class RH_HK53aim: RH_HK53
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_HK53";
			};
		};
		displayName="HK 53 CCO";
		model="\RH_smg\RH_HK53aim.p3d";
		picture="\RH_smg\inv\HK53aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_HK53eot: RH_HK53
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_HK53";
			};
		};
		displayName="HK 53 Holo";
		model="\RH_smg\RH_HK53eot.p3d";
		picture="\RH_smg\inv\HK53eot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_HK53RFX: RH_HK53
	{
		delete ItemActions;
		displayName="HK 53 RFX";
		model="\RH_smg\RH_HK53RFX.p3d";
		picture="\RH_smg\inv\HK53RFX.paa";
	};
	class RH_mp5a4: MP5A5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a4aim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5a4eot";
			};
		};
		scope=2;
		model="\RH_smg\RH_mp5a4.p3d";
		picture="\RH_smg\inv\mp5a4.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName="HK MP5A4";
		magazines[] = {
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"30Rnd_9x19_MP5",
			"30Rnd_9x19_MP5SD",
			"30Rnd_9x19_MP5_hp",
			"30Rnd_9x19_MP5_tracer",
			"30Rnd_9x19_MP5_rubber",
			"30Rnd_9x19_MP5_bt"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		drySound[]=
		{
			"Ca\sounds\Weapons\rifles\dry",
			0.0031620001,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\MP5_Reload.wss",
			0.056233998,
			1,
			25
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.012;
		distanceZoomMin=107;
		distanceZoomMax=107;
		value=10;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_smg\sound\mp5.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadtime=0.071000002;
			recoil="RH_subMachineGunBase";
			recoilProne="RH_subMachineGunBase";
			dispersion=0.0040000002;
			minRange=2;
			minRangeProbab=0.1;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\RH_smg\sound\mp5.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			soundBurst=0;
			reloadtime=0.071000002;
			ffCount=1;
			recoil="RH_subMachineGunBase";
			recoilProne="RH_subMachineGunBase";
			dispersion=0.0040000002;
			minRange=2;
			minRangeProbab=0.1;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_smg\sound\mp5.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			reloadtime=0.071000002;
			ffCount=1;
			recoil="RH_subMachineGunBase";
			recoilProne="RH_subMachineGunBase";
			aiRateOfFire=0.001;
			dispersion=0.0040000002;
			minRange=2;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab=0.050000001;
		};
	};
	class RH_mp5a4aim: RH_mp5a4
	{
		
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a4";
			};
		};
		displayname="HK MP5A4 CCO";
		model="\RH_smg\RH_mp5a4aim.p3d";
		picture="\RH_smg\inv\mp5a4aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a4eot: RH_mp5a4
	{
		
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5a4";
			};
		};
		displayname="HK MP5A4 Holo";
		model="\RH_smg\RH_mp5a4eot.p3d";
		picture="\RH_smg\inv\mp5a4eot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a4RFX: RH_mp5a4
	{
		displayname="HK MP5A4 RFX";
		model="\RH_smg\RH_mp5a4RFX.p3d";
		picture="\RH_smg\inv\mp5a4RFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5: RH_mp5a4
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a5aim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5a5eot";
			};
			class UseAtt2 : UseAtt{
				text = "Attach EOD";
				att = "Attachment_Sup";
				out = "RH_mp5a5eod";
			};
		};
		displayName="HK MP5A5";
		model="\RH_smg\RH_mp5a5.p3d";
		picture="\RH_smg\inv\mp5a5.paa";
	};
	class RH_mp5a5aim: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a5";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach EOD";
				att = "Attachment_CCO";
				out = "RH_mp5a5eodaim";
			};
		};
		displayName="HK MP5A5 CCO";
		model="\RH_smg\RH_mp5a5aim.p3d";
		picture="\RH_smg\inv\mp5a5aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5eot: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5a5";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach EOD";
				att = "Attachment_CCO";
				out = "RH_mp5a5eodeot";
			};
		};
		displayName="HK MP5A5 Holo";
		model="\RH_smg\RH_mp5a5eot.p3d";
		picture="\RH_smg\inv\mp5a5eot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5RFX: RH_mp5a5
	{
		delete ItemActions;
		displayname="HK MP5A5 RFX";
		model="\RH_smg\RH_mp5a5RFX.p3d";
		picture="\RH_smg\inv\mp5a5RFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5ris: RH_mp5a5
	{
		delete ItemActions;
		displayName="HK MP5A5 RIS";
		model="\RH_smg\RH_mp5a5ris.p3d";
		picture="\RH_smg\inv\mp5a5ris.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_mp5a5ris.rtm"
		};
	};
	class RH_mp5a5risaim: RH_mp5a5ris
	{
		delete ItemActions;
		displayname="HK MP5A5 RIS CCO";
		model="\RH_smg\RH_mp5a5risaim.p3d";
		picture="\RH_smg\inv\mp5a5risaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5riseot: RH_mp5a5ris
	{
		delete ItemActions;
		displayname="HK MP5A5 RIS Holo";
		model="\RH_smg\RH_mp5a5riseot.p3d";
		picture="\RH_smg\inv\mp5a5riseot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5risRFX: RH_mp5a5ris
	{
		delete ItemActions;
		displayname="HK MP5A5 RIS RFX";
		model="\RH_smg\RH_mp5a5risRFX.p3d";
		picture="\RH_smg\inv\mp5a5risRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5eod: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a5eodaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5a5eodeot";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach EOD";
				att = "Attachment_Sup";
				out = "RH_mp5a5";
			};
		};
		displayName="HK MP5A5 M203";
		model="\RH_smg\RH_mp5a5eod.p3d";
		picture="\RH_smg\inv\mp5a5eod.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\Ca\weapons\data\Anim\M16GL.rtm"
		};
		muzzles[]=
		{
			"this",
			"RH_M203Muzzle"
		};
		dexterity=1.59;
		class RH_M203Muzzle: M203Muzzle
		{
			displayName="$STR_DN_M203";
			sound[]=
			{
				"\RH_smg\sound\M203.wss",
				0.56234097,
				1
			};
			reloadMagazineSound[]=
			{
				"\RH_smg\sound\M203_Reload.wss",
				0.056233998,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.1;
			recoil="RH_SMG_M203GLBase";
			optics=1;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			opticsZoomMin=0.22;
			opticsZoomMax=0.94999999;
			opticsZoomInit=0.41999999;
		};
	};
	class RH_mp5a5eodaim: RH_mp5a5eod
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach EOD";
				att = "Attachment_Sup";
				out = "RH_mp5a5aim";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a5eod";
			};
		};
		displayname="HK MP5A5 EOD CCO";
		model="\RH_smg\RH_mp5a5eodaim.p3d";
		picture="\RH_smg\inv\mp5a5eodaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5eodeot: RH_mp5a5eod
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach EOD";
				att = "Attachment_Sup";
				out = "RH_mp5a5eot";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5a5eod";
			};
		};
		displayname="HK MP5A5 EOD Holo";
		model="\RH_smg\RH_mp5a5eodeot.p3d";
		picture="\RH_smg\inv\mp5a5eodeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5a5eodRFX: RH_mp5a5eod
	{
		delete ItemActions;
		displayname="HK MP5A5 EOD RFX";
		model="\RH_smg\RH_mp5a5eodRFX.p3d";
		picture="\RH_smg\inv\mp5a5eodRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5sd6: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5sd6aim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5sd6eot";
			};
		};
		displayName="HK MP5SD6";
		model="\RH_smg\RH_mp5sd6.p3d";
		picture="\RH_smg\inv\mp5sd6.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\mp5sd.wss",
				1.7782789,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class Burst: Burst
		{
			begin1[]=
			{
				"\RH_smg\sound\mp5sd.wss",
				1.7782789,
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
				"\RH_smg\sound\mp5sd.wss",
				1.7782789,
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
	class RH_mp5sd6aim: RH_mp5sd6
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5sd6";
			};
		};
		displayName="HK MP5SD6 CCO";
		model="\RH_smg\RH_mp5sd6aim.p3d";
		picture="\RH_smg\inv\mp5sd6aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5sd6eot: RH_mp5sd6
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5sd6";
			};
		};
		displayName="HK MP5SD6 Holo";
		model="\RH_smg\RH_mp5sd6eot.p3d";
		picture="\RH_smg\inv\mp5sd6eot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5sd6RFX: RH_mp5sd6
	{
		delete ItemActions;
		displayName="HK MP5SD6 RFX";
		model="\RH_smg\RH_mp5sd6RFX.p3d";
		picture="\RH_smg\inv\mp5sd6rfx.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5sd6g: RH_mp5sd6
	{
		delete ItemActions;
		displayName="HK MP5SD6 Gold";
		model="\RH_smg\RH_mp5sd6g.p3d";
		picture="\RH_smg\inv\mp5sd6g.paa";
	};
	class RH_mp5k: RH_mp5a5
	{
		delete ItemActions;
		displayName="HK MP5K";
		model="\RH_smg\RH_mp5k.p3d";
		picture="\RH_smg\inv\mp5k.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_mp5a5kpdw.rtm"
		};
	};
	class RH_mp5kpdw: RH_mp5k
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5kpdwaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5kpdweot";
			};
		};
		displayName="HK Mp5k PDW";
		model="\RH_smg\RH_mp5kpdw.p3d";
		picture="\RH_smg\inv\mp5kpdw.paa";
	};
	class RH_mp5kpdwaim: RH_mp5k
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_mp5kpdw";
			};
		};
		displayName="HK Mp5k PDW CCO";
		model="\RH_smg\RH_mp5kpdwaim.p3d";
		picture="\RH_smg\inv\mp5kpdwaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5kpdweot: RH_mp5k
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_mp5kpdw";
			};
		};
		displayName="HK Mp5k PDW Holo";
		model="\RH_smg\RH_mp5kpdweot.p3d";
		picture="\RH_smg\inv\mp5kpdweot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_mp5kpdwRFX: RH_mp5k
	{
		delete ItemActions;
		displayName="HK Mp5k PDW RFX";
		model="\RH_smg\RH_mp5kpdwRFX.p3d";
		picture="\RH_smg\inv\mp5kpdwRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_kriss: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_krissaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_krisseot";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_krisssd";
			};
		};
		descriptionShort="<br />Ammo: .45 ACP";
		displayName="TDI Kriss";
		model="\RH_smg\RH_kriss.p3d";
		picture="\RH_smg\inv\kriss.paa";
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"RH_45ACP_30RND_Mag",
			"RH_45ACP_30RND_Mag_hp",
			"RH_45ACP_30RND_Mag_tracer",
			"RH_45ACP_30RND_Mag_rubber",
			"RH_45ACP_30RND_Mag_bt",
			"RH_45ACP_13RND_Mag",
			"RH_45ACP_13RND_Mag_hp",
			"RH_45ACP_13RND_Mag_tracer",
			"RH_45ACP_13RND_Mag_rubber",
			"RH_45ACP_13RND_Mag_bt"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_Kris1.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\Sound\kriss_reload.wss",
			0.056233998,
			1,
			25
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
				"\RH_smg\sound\kriss.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundBurst=1;
			soundContinuous=0;
			displayName="$STR_DN_MODE_SEMIAUTO";
			multiplier=1;
			burst=1;
			dispersion=0.0060000001;
			reloadTime=0.063157998;
			recoil="subMachineGunBase";
			recoilProne="subMachineGunBase";
			ffCount=1;
			ffMagnitude=0.5;
			ffFrequency=11;
			autofire=0;
			flash="gunfire";
			flashSize=0.1;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=150;
			minRange=2;
			minRangeProbab=0.1;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: FullAuto
		{
			begin1[]=
			{
				"\RH_smg\sound\kriss.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundBurst=1;
			soundContinuous=0;
			displayName="$STR_DN_MODE_FULLAUTO";
			multiplier=1;
			burst=1;
			dispersion=0.0070000002;
			reloadTime=0.063157998;
			recoil="subMachineGunBase";
			recoilProne="subMachineGunBase";
			ffCount=1;
			ffMagnitude=0.5;
			ffFrequency=11;
			autofire=2;
			flash="gunfire";
			flashSize=0.1;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.001;
			aiRateOfFireDistance=100;
			minRange=2;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab=0.050000001;
		};
	};
	class RH_krissaim: RH_kriss
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_kriss";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_krisssdeot";
			};
		};
		displayname="TDI Kriss CCO";
		model="\RH_smg\RH_krissaim.p3d";
		picture="\RH_smg\inv\krissaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_krisseot: RH_kriss
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_kriss";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_krisssdaim";
			};
		};
		displayname="TDI Kriss Holo";
		model="\RH_smg\RH_krisseot.p3d";
		picture="\RH_smg\inv\krisseot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_krissRFX: RH_kriss
	{
		delete ItemActions;
		displayname="TDI Kriss RFX";
		model="\RH_smg\RH_krissRFX.p3d";
		picture="\RH_smg\inv\krissRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_krisssd: RH_kriss
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_krisssdaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_krisssdeot";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_kriss";
			};
		};
		displayName="TDI Kriss SD";
		model="\RH_smg\RH_krisssd.p3d";
		picture="\RH_smg\inv\krisssd.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_Kris.rtm"
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\umpsd.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\umpsd.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_krisssdaim: RH_krisssd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_krisssd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_krissaim";
			};
		};
		displayname="TDI Kriss SD CCO";
		model="\RH_smg\RH_krisssdaim.p3d";
		picture="\RH_smg\inv\krisssdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_krisssdeot: RH_krisssd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_HOLO";
				out = "RH_krisssd";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_krisseot";
			};
		};
		displayname="TDI Kriss SD Holo";
		model="\RH_smg\RH_krisssdeot.p3d";
		picture="\RH_smg\inv\krisssdeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_krisssdRFX: RH_krisssd
	{
		delete ItemActions;
		displayname="TDI Kriss SD RFX";
		model="\RH_smg\RH_krisssdRFX.p3d";
		picture="\RH_smg\inv\krisssdRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_uzi: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_uzisd";
			};
		};
		displayName="UZI";
		model="\RH_smg\RH_uzi.p3d";
		picture="\RH_smg\inv\uzi.paa";
		descriptionShort="<br />Ammo: 9x19 mm";
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_32Rnd_9x19_Muzi",
			"RH_32Rnd_9x19_MuziSD",
			"RH_32Rnd_9x19_Muzi_hp",
			"RH_32Rnd_9x19_Muzi_tracer",
			"RH_32Rnd_9x19_Muzi_rubber",
			"RH_32Rnd_9x19_Muzi_bt",
			"RH_9mm_32RND_Mag",
			"RH_9mm_32RND_MagSD",
			"RH_9mm_32RND_Mag_hp",
			"RH_9mm_32RND_Mag_tracer",
			"RH_9mm_32RND_Mag_rubber",
			"RH_9mm_32RND_Mag_bt"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_uzi.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\uzi_Reload.wss",
			0.056233998,
			1,
			25
		};
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\uzi.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class Burst: Burst
		{
			begin1[]=
			{
				"\RH_smg\sound\uzi.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\uzi.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_uzim: RH_uzi
	{
		displayName="UZI Mini";
		model="\RH_smg\RH_uzim.p3d";
		picture="\RH_smg\inv\uzim.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_uzi.rtm"
		};
	};
	class RH_uzig: RH_uzi
	{
		delete ItemActions;
		displayName="UZI Gold";
		model="\RH_smg\RH_uzig.p3d";
		picture="\RH_smg\inv\uzig.paa";
	};
	class RH_uzisd: RH_uzi
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_uzi";
			};
		};
		displayName="Uzi SD";
		model="\RH_smg\RH_uzisd.p3d";
		picture="\RH_smg\inv\uzisd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\uzi_sd.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class Burst: Burst
		{
			begin1[]=
			{
				"\RH_smg\sound\uzi_sd.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\uzi_sd.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_mac10: RH_mp5a5
	{
		delete ItemActions;
		descriptionShort="<br />Ammo: 9x19 mm";
		scope=2;
		modelOptics="-";
		optics=1;
		dexterity=1.75;
		displayName="Ingram Mac10";
		model="\RH_smg\RH_mac10.p3d";
		picture="\RH_smg\inv\mac10.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_mac10.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\Sound\Mac10_reload.wss",
			0.056233998,
			1,
			25
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_32Rnd_9x19_Muzi",
			"RH_32Rnd_9x19_MuziSD",
			"RH_32Rnd_9x19_Muzi_hp",
			"RH_32Rnd_9x19_Muzi_tracer",
			"RH_32Rnd_9x19_Muzi_rubber",
			"RH_32Rnd_9x19_Muzi_bt",
			"RH_9mm_32RND_Mag",
			"RH_9mm_32RND_MagSD",
			"RH_9mm_32RND_Mag_hp",
			"RH_9mm_32RND_Mag_tracer",
			"RH_9mm_32RND_Mag_rubber",
			"RH_9mm_32RND_Mag_bt"
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
				"\RH_smg\sound\mac10.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundBurst=1;
			soundContinuous=0;
			displayName="$STR_DN_MODE_SEMIAUTO";
			multiplier=1;
			burst=1;
			dispersion=0.0060000001;
			reloadTime=0.063157998;
			recoil="subMachineGunBase";
			recoilProne="subMachineGunBase";
			ffCount=1;
			ffMagnitude=0.5;
			ffFrequency=11;
			autofire=0;
			flash="gunfire";
			flashSize=0.1;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=150;
			minRange=2;
			minRangeProbab=0.1;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_smg\sound\mac10.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundBurst=1;
			soundContinuous=0;
			displayName="$STR_DN_MODE_FULLAUTO";
			multiplier=1;
			burst=1;
			dispersion=0.0070000002;
			reloadTime=0.063157998;
			recoil="subMachineGunBase";
			recoilProne="subMachineGunBase";
			ffCount=1;
			ffMagnitude=0.5;
			ffFrequency=11;
			autofire=2;
			flash="gunfire";
			flashSize=0.1;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.001;
			aiRateOfFireDistance=100;
			minRange=2;
			minRangeProbab=0.2;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=40;
			maxRangeProbab=0.050000001;
		};
	};
	class RH_tmp: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_tmpaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_tmpeot";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_tmpsd";
			};
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		displayName="Steyr TMP";
		model="\RH_smg\RH_tmp.p3d";
		picture="\RH_smg\inv\tmp.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_tmp.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\tmp_Reload.wss",
			0.056233998,
			1,
			25
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
				"\RH_smg\sound\tmp.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\tmp.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_tmpaim: RH_tmp
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_tmp";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_tmpsdaim";
			};
		};
		displayName="TMP CCO";
		model="\RH_smg\RH_tmpaim.p3d";
		picture="\RH_smg\inv\tmpaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_tmpeot: RH_tmp
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_tmp";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_tmpsdeot";
			};
		};
		displayName="TMP Holo";
		model="\RH_smg\RH_tmpeot.p3d";
		picture="\RH_smg\inv\tmpeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_tmpsd: RH_tmp
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_tmpsdaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_tmpsdeot";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_tmp";
			};
		};
		displayName="TMP SD";
		model="\RH_smg\RH_tmpsd.p3d";
		picture="\RH_smg\inv\tmpsd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\tmpsd.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\tmpsd.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_tmpsdaim: RH_tmpsd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_tmpsd";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_tmpaim";
			};
		};
		displayName="TMP SD CCO";
		model="\RH_smg\RH_tmpsdaim.p3d";
		picture="\RH_smg\inv\tmpsdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_tmpsdeot: RH_tmpsd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_tmpsd";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_tmpeot";
			};
		};
		displayName="TMP SD Holo";
		model="\RH_smg\RH_tmpsdeot.p3d";
		picture="\RH_smg\inv\tmpsdeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_pp2000: RH_mp5a5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_pp2000aim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_pp2000eot";
			};
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		displayName="PP-2000";
		model="\RH_smg\RH_pp2000.p3d";
		picture="\RH_smg\inv\pp2000.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_p90.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\tmp_Reload.wss",
			0.056233998,
			1,
			25
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
				"\RH_smg\sound\tmp.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\tmp.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_pp2000aim: RH_pp2000
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_pp2000";
			};
		};
		displayName="PP-2000 CCO";
		model="\RH_smg\RH_pp2000aim.p3d";
		picture="\RH_smg\inv\pp2000aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_pp2000eot: RH_pp2000
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_pp2000";
			};
		};
		displayName="PP-2000 Holo";
		model="\RH_smg\RH_pp2000eot.p3d";
		picture="\RH_smg\inv\pp2000eot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_UMP: MP5A5
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_umpaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_umpeot";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_umpsd";
			};
		};
		descriptionShort="<br />Ammo: .45 ACP";
		scope=2;
		displayName="HK UMP45";
		model="\RH_smg\RH_UMP.p3d";
		picture="\RH_smg\inv\ump.paa";
		optics=1;
		modelOptics="-";
		dexterity=1.8;
		maxLeadSpeed=23;
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\ump_Reload.wss",
			0.056233998,
			1,
			25
		};
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"RH_45ACP_25RND_UMP_Mag",
			"RH_45ACP_25RND_UMP_Mag_hp",
			"RH_45ACP_25RND_UMP_Mag_tracer",
			"RH_45ACP_25RND_UMP_Mag_rubber",
			"RH_45ACP_25RND_UMP_Mag_bt"
		};
		count=25;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			multiplier=1;
			burst=1;
			soundContinuous=0;
			begin1[]=
			{
				"\RH_smg\sound\ump.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			ffCount=1;
			dispersion=0.00019999999;
			reloadTime=0.1;
			autofire=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			UseAction=0;
			useActionTitle="";
			recoil="subMachineGunBase";
			recoilProne="M249RecoilProne";
		};
		class FullAuto: Mode_FullAuto
		{
			multiplier=1;
			burst=1;
			soundContinuous=0;
			begin1[]=
			{
				"\RH_smg\sound\ump.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			ffCount=1;
			dispersion=0.00039999999;
			reloadTime=0.1;
			autofire=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			UseAction=0;
			useActionTitle="";
			recoil="subMachineGunBase";
			recoilProne="M249RecoilProne";
		};
	};
	class RH_umpaim: RH_UMP
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_ump";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_umpsdaim";
			};
		};
		displayName="HK UMP45 CCO";
		model="\RH_smg\RH_umpaim.p3d";
		picture="\RH_smg\inv\umpaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_umpeot: RH_UMP
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_ump";
			};
			class UseAtt1 : UseAtt{
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_umpsdeot";
			};
		};
		displayName="HK UMP45 Holo";
		model="\RH_smg\RH_umpeot.p3d";
		picture="\RH_smg\inv\umpeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_umpRFX: RH_UMP
	{
		delete ItemActions;
		displayName="HK UMP45 RFX";
		model="\RH_smg\RH_umpRFX.p3d";
		picture="\RH_smg\inv\umpRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_umpsd: RH_UMP
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_umpsdaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_umpsdeot";
			};
			class UseAtt2 : UseAtt{
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_ump";
			};
		};
		displayName="HK UMP45 SD";
		model="\RH_smg\RH_umpsd.p3d";
		picture="\RH_smg\inv\umpsd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\umpsd.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\umpsd.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_umpsdaim: RH_umpsd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_umpsd";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_umpaim";
			};
		};
		displayName="HK UMP45 SD CCO";
		model="\RH_smg\RH_umpsdaim.p3d";
		picture="\RH_smg\inv\umpsdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_umpsdeot: RH_umpsd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "RH_umpsd";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_umpeot";
			};
		};
		displayName="HK UMP45 SD Holo";
		model="\RH_smg\RH_umpsdeot.p3d";
		picture="\RH_smg\inv\umpsdeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_umpsdRFX: RH_umpsd
	{
		delete ItemActions;
		displayName="HK UMP45 SD RFX";
		model="\RH_smg\RH_umpsdRFX.p3d";
		picture="\RH_smg\inv\umpsdRFX.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_P90: MP5A5
	{
		delete ItemActions;
		scope=2;
		displayName="FN P90";
		model="\RH_smg\RH_p90.p3d";
		picture="\RH_smg\inv\p90.paa";
		optics=1;
		modelOptics="-";
		dexterity=1.8;
		maxLeadSpeed=23;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_smg\Anim\NORRN_RH_p90.rtm"
		};
		reloadMagazineSound[]=
		{
			"\RH_smg\sound\p90_Reload.wss",
			0.056233998,
			1,
			25
		};
		descriptionShort="<br />Ammo: 5.7x28 mm";
		magazines[]=
		{
			"57x28_x1",
			"57x28_HP_x1",
			"57x28_SD_x1",
			"57x28_TRACER_x1",
			"57x28_RUBBER_x1",
			"57x28_BT_x1",
			"RH_57x28mm_50RND_Mag",
			"RH_57x28mm_50RND_SD_Mag",
			"RH_57x28mm_50RND_Mag_hp",
			"RH_57x28mm_50RND_Mag_tracer",
			"RH_57x28mm_50RND_Mag_rubber",
			"RH_57x28mm_50RND_Mag_bt"
		};
		count=25;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			ammo="RH_57x28mm_Round";
			multiplier=1;
			burst=1;
			soundContinuous=0;
			begin1[]=
			{
				"\RH_smg\sound\p90s.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			ffCount=1;
			dispersion=0.0044999998;
			reloadTime=0.1;
			autofire=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			UseAction=0;
			useActionTitle="";
			recoil="subMachineGunBase";
			recoilProne="RH_subMachineGunBase";
		};
		class FullAuto: Mode_FullAuto
		{
			ammo="RH_57x28mm_Round";
			multiplier=1;
			burst=1;
			soundContinuous=0;
			begin1[]=
			{
				"\RH_smg\sound\p90f.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			ffCount=1;
			dispersion=0.0049999999;
			reloadTime=0.1;
			autofire=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			UseAction=0;
			useActionTitle="";
			recoil="subMachineGunBase";
			recoilProne="RH_subMachineGunBase";
		};
	};
	class RH_P90i: RH_P90
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_P90aim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_P90eot";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_p90isd";
			};
		};
		displayName="FN P90";
		model="\RH_smg\RH_p90i.p3d";
		picture="\RH_smg\inv\p90i.paa";
	};
	class RH_P90aim: RH_P90
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_Holo";
				out = "RH_P90i";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_p90sdaim";
			};
		};
		displayname="FN P90 CCO";
		model="\RH_smg\RH_p90aim.p3d";
		picture="\RH_smg\inv\p90aim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_P90eot: RH_P90
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_CCO";
				out = "RH_P90i";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_p90sdeot";
			};
		};
		displayname="FN P90 Holo";
		model="\RH_smg\RH_p90eot.p3d";
		picture="\RH_smg\inv\p90eot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_P90sd: RH_P90
	{
		delete ItemActions;
		displayname="FN P90 SD";
		model="\RH_smg\RH_p90sd.p3d";
		picture="\RH_smg\inv\p90sd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		class Single: Single
		{
			begin1[]=
			{
				"\RH_smg\sound\p90sds.wss",
				1.7782789,
				1,
				900
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
				"\RH_smg\sound\p90sdf.wss",
				1.7782789,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
	};
	class RH_p90isd: RH_P90sd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_p90sdaim";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "RH_p90sdeot";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Sup";
				out = "RH_p90i";
			};
		};
		displayName="FN P90 SD";
		model="\RH_smg\RH_p90isd.p3d";
		picture="\RH_smg\inv\p90isd.paa";
	};
	class RH_p90sdaim: RH_P90sd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_p90sd";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_p90iaim";
			};
		};
		displayName="FN P90 SD CCO";
		model="\RH_smg\RH_p90sdaim.p3d";
		picture="\RH_smg\inv\p90sdaim.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
	class RH_p90sdeot: RH_P90sd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "RH_p90sd";
			};
			class UseAtt2 : UseAtt{
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_p90ieot";
			};
		};
		displayName="FN P90 SD Holo";
		model="\RH_smg\RH_p90sdeot.p3d";
		picture="\RH_smg\inv\p90sdeot.paa";
		opticsDisablePeripherialVision=1;
		distanceZoomMin=100;
		distanceZoomMax=100;
	};
};
class cfgVehicles
{
	class ReammoBox;
	class RHsmgbox: ReammoBox
	{
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="RH SMG weapons box";
		class TransportMagazines
		{
			class _xx_RH_45ACP_30RND_Mag
			{
				magazine="RH_45ACP_30RND_Mag";
				count=200;
			};
			class _xx_RH_45ACP_13RND_Mag
			{
				magazine="RH_45ACP_13RND_Mag";
				count=200;
			};
			class _xx_RH_45ACP_25RND_Mag
			{
				magazine="RH_45ACP_25RND_Mag";
				count=200;
			};
			class _xx_RH_9mm_32RND_Mag
			{
				magazine="RH_9mm_32RND_Mag";
				count=200;
			};
			class _xx_RH_9mm_32RND_MagSD
			{
				magazine="RH_9mm_32RND_MagSD";
				count=200;
			};
			class _xx_RH_57x28mm_50RND_Mag
			{
				magazine="RH_57x28mm_50RND_Mag";
				count=200;
			};
			class _xx_RH_57x28mm_50RND_SD_Mag
			{
				magazine="RH_57x28mm_50RND_SD_Mag";
				count=200;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=200;
			};
			class _xx_30Rnd_9x19_MP5
			{
				magazine="30Rnd_9x19_MP5";
				count=200;
			};
			class _xx_30Rnd_9x19_MP5SD
			{
				magazine="30Rnd_9x19_MP5SD";
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
			class _xx_RH_HK53
			{
				weapon="RH_HK53";
				count=6;
			};
			class _xx_RH_HK53aim
			{
				weapon="RH_HK53aim";
				count=6;
			};
			class _xx_RH_HK53eot
			{
				weapon="RH_HK53eot";
				count=6;
			};
			class _xx_RH_HK53RFX
			{
				weapon="RH_HK53RFX";
				count=6;
			};
			class _xx_RH_mp5a4
			{
				weapon="RH_mp5a4";
				count=6;
			};
			class _xx_RH_mp5a4aim
			{
				weapon="RH_mp5a4aim";
				count=6;
			};
			class _xx_RH_mp5a4eot
			{
				weapon="RH_mp5a4eot";
				count=6;
			};
			class _xx_RH_mp5a4RFX
			{
				weapon="RH_mp5a4RFX";
				count=6;
			};
			class _xx_RH_mp5a5
			{
				weapon="RH_mp5a5";
				count=6;
			};
			class _xx_RH_mp5a5aim
			{
				weapon="RH_mp5a5aim";
				count=6;
			};
			class _xx_RH_mp5a5eot
			{
				weapon="RH_mp5a5eot";
				count=6;
			};
			class _xx_RH_mp5a5RFX
			{
				weapon="RH_mp5a5RFX";
				count=6;
			};
			class _xx_RH_mp5a5ris
			{
				weapon="RH_mp5a5ris";
				count=6;
			};
			class _xx_RH_mp5a5risaim
			{
				weapon="RH_mp5a5risaim";
				count=6;
			};
			class _xx_RH_mp5a5riseot
			{
				weapon="RH_mp5a5riseot";
				count=6;
			};
			class _xx_RH_mp5a5risRFX
			{
				weapon="RH_mp5a5risRFX";
				count=6;
			};
			class _xx_RH_mp5a5eod
			{
				weapon="RH_mp5a5eod";
				count=6;
			};
			class _xx_RH_mp5a5eodaim
			{
				weapon="RH_mp5a5eodaim";
				count=6;
			};
			class _xx_RH_mp5a5eodeot
			{
				weapon="RH_mp5a5eodeot";
				count=6;
			};
			class _xx_RH_mp5a5eodRFX
			{
				weapon="RH_mp5a5eodRFX";
				count=6;
			};
			class _xx_RH_mp5sd6
			{
				weapon="RH_mp5sd6";
				count=6;
			};
			class _xx_RH_mp5sd6aim
			{
				weapon="RH_mp5sd6aim";
				count=6;
			};
			class _xx_RH_mp5sd6eot
			{
				weapon="RH_mp5sd6eot";
				count=6;
			};
			class _xx_RH_mp5sd6RFX
			{
				weapon="RH_mp5sd6RFX";
				count=6;
			};
			class _xx_RH_mp5sd6g
			{
				weapon="RH_mp5sd6g";
				count=6;
			};
			class _xx_RH_mp5k
			{
				weapon="RH_mp5k";
				count=6;
			};
			class _xx_RH_mp5kpdw
			{
				weapon="RH_mp5kpdw";
				count=6;
			};
			class _xx_RH_mp5kpdwaim
			{
				weapon="RH_mp5kpdwaim";
				count=6;
			};
			class _xx_RH_mp5kpdweot
			{
				weapon="RH_mp5kpdweot";
				count=6;
			};
			class _xx_RH_mp5kpdwRFX
			{
				weapon="RH_mp5kpdwRFX";
				count=6;
			};
			class _xx_RH_p90
			{
				weapon="RH_p90";
				count=6;
			};
			class _xx_RH_p90i
			{
				weapon="RH_p90i";
				count=6;
			};
			class _xx_RH_p90aim
			{
				weapon="RH_p90aim";
				count=6;
			};
			class _xx_RH_p90eot
			{
				weapon="RH_p90eot";
				count=6;
			};
			class _xx_RH_p90sd
			{
				weapon="RH_p90sd";
				count=6;
			};
			class _xx_RH_p90isd
			{
				weapon="RH_p90isd";
				count=6;
			};
			class _xx_RH_p90sdaim
			{
				weapon="RH_p90sdaim";
				count=6;
			};
			class _xx_RH_p90sdeot
			{
				weapon="RH_p90sdeot";
				count=6;
			};
			class _xx_RH_ump
			{
				weapon="RH_ump";
				count=6;
			};
			class _xx_RH_umpaim
			{
				weapon="RH_umpaim";
				count=6;
			};
			class _xx_RH_umpeot
			{
				weapon="RH_umpeot";
				count=6;
			};
			class _xx_RH_umpRFX
			{
				weapon="RH_umpRFX";
				count=6;
			};
			class _xx_RH_umpsd
			{
				weapon="RH_umpsd";
				count=6;
			};
			class _xx_RH_umpsdaim
			{
				weapon="RH_umpsdaim";
				count=6;
			};
			class _xx_RH_umpsdeot
			{
				weapon="RH_umpsdeot";
				count=6;
			};
			class _xx_RH_umpsdRFX
			{
				weapon="RH_umpsdRFX";
				count=6;
			};
			class _xx_RH_kriss
			{
				weapon="RH_kriss";
				count=6;
			};
			class _xx_RH_krissaim
			{
				weapon="RH_krissaim";
				count=6;
			};
			class _xx_RH_krisseot
			{
				weapon="RH_krisseot";
				count=6;
			};
			class _xx_RH_krissRFX
			{
				weapon="RH_krissRFX";
				count=6;
			};
			class _xx_RH_krisssd
			{
				weapon="RH_krisssd";
				count=6;
			};
			class _xx_RH_krisssdaim
			{
				weapon="RH_krisssdaim";
				count=6;
			};
			class _xx_RH_krissssdeot
			{
				weapon="RH_krisssdeot";
				count=6;
			};
			class _xx_RH_krisssdRFX
			{
				weapon="RH_krisssdRFX";
				count=6;
			};
			class _xx_RH_uzi
			{
				weapon="RH_uzi";
				count=6;
			};
			class _xx_RH_uzim
			{
				weapon="RH_uzim";
				count=6;
			};
			class _xx_RH_uzig
			{
				weapon="RH_uzig";
				count=6;
			};
			class _xx_RH_uzisd
			{
				weapon="RH_uzisd";
				count=6;
			};
			class _xx_RH_mac10
			{
				weapon="RH_mac10";
				count=6;
			};
			class _xx_RH_tmp
			{
				weapon="RH_tmp";
				count=6;
			};
			class _xx_RH_tmpaim
			{
				weapon="RH_tmpaim";
				count=6;
			};
			class _xx_RH_tmpeot
			{
				weapon="RH_tmpeot";
				count=6;
			};
			class _xx_RH_tmpsd
			{
				weapon="RH_tmpsd";
				count=6;
			};
			class _xx_RH_tmpsdaim
			{
				weapon="RH_tmpsdaim";
				count=6;
			};
			class _xx_RH_tmpsdeot
			{
				weapon="RH_tmpsdeot";
				count=6;
			};
			class _xx_RH_pp2000
			{
				weapon="RH_pp2000";
				count=6;
			};
			class _xx_RH_pp2000aim
			{
				weapon="RH_pp2000aim";
				count=6;
			};
			class _xx_RH_pp2000eot
			{
				weapon="RH_pp2000eot";
				count=6;
			};
		};
	};
};
