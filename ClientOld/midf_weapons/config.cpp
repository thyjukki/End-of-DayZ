class CfgPatches//TODO(Jukki) Wierd bug with ammo
{
	class MIDF_Weapons
	{
		Units[]={};
		weapons[]=
		{
			"MIDF_Aug_a3",
			"MIDF_Aug_a3_black",
			"MIDF_Aug_a3_blue",
			"MIDF_Aug_a3_acog",
			"MIDF_Aug_a3_acog_black",
			"MIDF_Aug_a3_acog_blue",
			"MIDF_Aug_a3_eotech",
			"MIDF_Aug_a3_eotech_black",
			"MIDF_Aug_a3_eotech_blue",
			"MIDF_Aug_A3_GL",
			"MIDF_Aug_A3_GL_black",
			"MIDF_Aug_A3_GL_blue",
			"MIDF_Aug_a3_acog_gl",
			"MIDF_Aug_a3_acog_gl_black",
			"MIDF_Aug_a3_acog_gl_blue",
			"MIDF_Aug_a3_eotech_gl",
			"MIDF_Aug_a3_eotech_gl_black",
			"MIDF_Aug_a3_eotech_gl_blue"
		};
		requiredVersion=1.050000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CA_Anims_Char"
		};
		version="1.1";
		fileName="MIDF_Weapons.pbo";
		author="";
		mail="";
	};
};
class CfgRecoils
{
	assaultRifleBase[]={0,0,0,0.060000,0.010000,0.010000,0.100000,0,-0.020000,0.100000,-0.010000,0.010000,0.050000,0,0};
	M4Recoil[]={0,0,0,0.060000,0.010000,0.010000,0.100000,0,-0.018000,0.100000,-0.010000,0.010000,0.050000,0,0};
	recoil_single_primary_3outof10[]=
	{
		0.040000,
		"0.006*(  (3/7))",
		"0.05*.5*(  (3/7))",
		0.010000,
		"0.009*(  (3/7))",
		0,
		0.045000,
		0,
		"-0.025*.5*(  (3/7))"
	};
	recoil_single_primary_prone_2outof10[]=
	{
		0.035000,
		"0.004*(  (2/7))",
		"0.035*.5*(  (2/7))",
		0.010000,
		"0.006*(  (2/7))",
		0,
		0.045000,
		0,
		"-0.025*.25*(  (2/7))",
		0.010000,
		0,
		"-0.025*.25*(  (2/7))"
	};
	recoil_auto_primary_2outof10[]=
	{
		0,
		"0.006*(  (2/7))",
		"0.035*.5*(  (2/7))",
		0.040000,
		"0.009*(  (2/7))",
		"0.015*(  (2/7))",
		0.025000,
		0,
		"0.0125*(  (2/7))"
	};
	recoil_auto_primary_prone_2outof10[]=
	{
		0,
		"0.004*(  (2/7))",
		"0.035*.25*(  (2/7))",
		0.035000,
		"0.006*(  (2/7))",
		"0.035*(  (2/7))",
		0.010000,
		"0.006*(  (2/7))",
		0,
		0.012000,
		0,
		"-0.0125*(  (2/7))",
		0.010000,
		0,
		"-0.0025*(  (2/7))"
	};
	recoil_auto_primary_prone_3outof10[]=
	{
		0,
		"0.004*(  (3/7))",
		"0.035*.25*(  (3/7))",
		0.035000,
		"0.006*(  (3/7))",
		"0.035*(  (3/7))",
		0.010000,
		"0.006*(  (3/7))",
		0,
		0.012000,
		0,
		"-0.0125*(  (3/7))",
		0.010000,
		0,
		"-0.0025*(  (3/7))"
	};
	recoil_auto_primary_3outof10[]=
	{
		0,
		"0.006*(  (3/7))",
		"0.035*.5*(  (3/7))",
		0.040000,
		"0.009*(  (3/7))",
		"0.015*(  (3/7))",
		0.025000,
		0,
		"0.0125*(  (3/7))"
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class CfgWeapons
{
	class Default;
	class RifleCore;
	class Rifle;
	class Grenadelauncher;
	class GrenadeCore;
	class Launcher;
	class LauncherCore;
	class CannonCore;
	class MIDF_Aug_a3_base: Rifle
	{
		magazines[]=
		{
		"556x45_x1",
		"556x45_SD_x1",
		"556x45_HP_x1",
		"556x45_TRACER_x1",
		"556x45_RUBBER_x1",
		"556x45_BT_x1",
			"30Rnd_556x45_Aug",
			"30Rnd_556x45_Aug",
			"30Rnd_556x45_Aug",
			"30Rnd_556x45_Aug",
			"30Rnd_556x45_Aug",
			"30Rnd_556x45_Aug",
			"30Rnd_556x45_AugSD",
			"30Rnd_556x45_Aug_hp",
			"30Rnd_556x45_Aug_tracer",
			"30Rnd_556x45_Aug_rubber",
			"30Rnd_556x45_Aug_bt"
		};
		scope=0;
		displayName="";
		model="\MIDF_Weapons\Aug_a3\Aug_a3.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_green.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		cursoraim="Foresight";
		value=2;
		optics=0;
		dexterity=1.800000;
		opticsDisablePeripherialVision=0;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		reloadMagazineSound[]=
		{
			"\MIDF_Weapons\sound\auga3_reload.wss",
			1.778280,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\MIDF_Weapons\Sound\auga3.wss",
				1.778280,
				1,
				1000
			};
			begin2[]=
			{
				"\MIDF_Weapons\Sound\auga3.wss",
				1.778280,
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
			reloadTime=0.075000;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\MIDF_Weapons\Sound\auga3.wss",
				1.778280,
				1,
				1000
			};
			begin2[]=
			{
				"\MIDF_Weapons\Sound\auga3.wss",
				1.778280,
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
			soundBurst=0;
			recoil="recoil_auto_primary_2outof10";
			recoilProne="recoil_auto_primary_prone_2outof10";
			minRange=0;
			minRangeProbab=0.300000;
			midRange=90;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
			dispersion=0.001000;
			reloadTime=0.075000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\MIDF_Weapons\Sound\auga3.wss",
				1.778280,
				1,
				1000
			};
			begin2[]=
			{
				"\MIDF_Weapons\Sound\auga3.wss",
				1.778280,
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
			reloadTime=0.090000;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
		};
	};
	class MIDF_Aug_A3: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_gl";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_acog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_eotech";
			};
		};
		scope=2;
		displayName="AUG A3 (Green)";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		modelOptics="\MIDF_Weapons\optic\leupold_cqt.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		opticsZoomInit=0.500000;
		opticsZoomMin=0.127870;
		opticsZoomMax=0.383612;
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Green) equipt with a Leupold CQ T 1-3x scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_Black: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_gl_blue";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_acog_blue";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_eotech_blue";
			};
		};
		scope=2;
		displayName="AUG A3 (Black)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_black.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_black.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		modelOptics="\MIDF_Weapons\optic\leupold_cqt.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		opticsZoomInit=0.500000;
		opticsZoomMin=0.127870;
		opticsZoomMax=0.383612;
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Black) equipt with a Leupold CQ T 1-3x scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_Blue: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_gl_black";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_acog_black";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_eotech_black";
			};
		};
		scope=2;
		displayName="AUG A3 (Blue)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_blue.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_blue.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		modelOptics="\MIDF_Weapons\optic\leupold_cqt.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		opticsZoomInit=0.500000;
		opticsZoomMin=0.127870;
		opticsZoomMax=0.383612;
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Blue) equipt with a Leupold CQ T 1-3x scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_acog: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_acog_gl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3";
			};
		};
		scope=2;
		displayName="AUG A3 ACOG (Green)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_acog.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_green.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		modelOptics="\MIDF_Weapons\optic\acog_cqt.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.062300;
		opticsZoomMax=0.062300;
		distanceZoomMin=100;
		distanceZoomMax=100;
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		dexterity=1.510000;
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Green) equipt with a ACOG 3.5x Scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_acog_black: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_acog_gl_black";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_black";
			};
		};
		scope=2;
		displayName="AUG A3 ACOG (Black)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_acog_black.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_black.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		modelOptics="\MIDF_Weapons\optic\acog_cqt.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		pticsZoomMin=0.062300;
		opticsZoomMax=0.062300;
		distanceZoomMin=100;
		distanceZoomMax=100;
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		dexterity=1.510000;
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Black) equipt with a ACOG 3.5x Scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_acog_blue: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_acog_gl_blue";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Acog";
				script = "spawn player_removeAttchment;";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_blue";
			};
		};
		scope=2;
		displayName="AUG A3 ACOG (Blue)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_acog_blue.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_blue.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		modelOptics="\MIDF_Weapons\optic\acog_cqt.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		pticsZoomMin=0.062300;
		opticsZoomMax=0.062300;
		distanceZoomMin=100;
		distanceZoomMax=100;
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		dexterity=1.510000;
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Blue) equipt with a ACOG 3.5x Scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_eotech: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_eotech_gl";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3";
			};
		};
		scope=2;
		displayName="AUG A3 EOTECH (Green)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_eotech.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_green.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Green) equipt with a EoTech Scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_eotech_black: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_eotech_gl_black";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_black";
			};
		};
		scope=2;
		displayName="AUG A3 EOTECH (Black)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_eotech_black.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_black.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Black) equipt with a EoTech Scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_eotech_blue: MIDF_Aug_a3_base
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Attach M203";
				script = "spawn player_useAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_eotech_gl_blue";
			};
			class UseAtt1 : UseAtt{
				text = "Detach Holo";
				script = "spawn player_removeAttchment;";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_black";
			};
		};
		scope=2;
		displayName="AUG A3 EOTECH (Blue)";
		model="\MIDF_Weapons\Aug_a3\Aug_a3_eotech_blue.p3d";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_blue.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_fgrip.rtm"
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\G36_dry_v1",
			0.010000,
			1
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		descriptionShort="STEYR AUG A3 (Blue) equipt with a EoTech Scope";
		class Library
		{
			libTextDesc="The STEYR AUG A3 modular weapon system is the latest result of the continued development of the world renowned STEYR AUG rifle series. The STEYR AUG A3 design is also based on modular system components, which can be configured from one variant to another quickly and easily, without tools, and at unit level, in order to meet a wide range of future weapon requirements. If a rail system with multiple Mil.Std. 1913 rails for weapon sights, scopes, night vision goggles, grenade launchers, lasers, shooting lights, etc.. Changes on the piston also make use of the NATO standard STANAG 4179 magazine possible.";
		};
	};
	class MIDF_Aug_A3_GL: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				script = "spawn player_useAttchment;";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_eotech_gl";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_acog_gl";
			};
		};
		displayName="AUG A3 GL (Green)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_green.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_gl.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Green) equipt with a Leupold CQ T 1-3x scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_GL_black: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_black";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				script = "spawn player_useAttchment;";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_eotech_gl_black";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_acog_gl_black";
			};
		};
		displayName="AUG A3 GL (Black)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_black.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_gl_black.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Black) equipt with a Leupold CQ T 1-3x scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_GL_blue: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_blue";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Holo";
				script = "spawn player_useAttchment;";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_eotech_gl_blue";
			};
			class UseAtt2 : UseAtt1{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_acog_gl_blue";
			};
		};
		displayName="AUG A3 GL (Blue)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_gl_blue.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_gl_blue.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Blue) equipt with a Leupold CQ T 1-3x scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_ACOG_GL: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_acog";
			};
			class UseAtt2 : UseAtt{
				text = "Detacg Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_gl";
			};
		};
		displayName="AUG A3 ACOG GL (Green)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_green.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_acog_gl.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Green) equipt with a ACOG 3.5x Scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_ACOG_GL_BLACK: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_acog_black";
			};
			class UseAtt2 : UseAtt{
				text = "Detacg Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_gl_black";
			};
		};
		displayName="AUG A3 ACOG GL (Black)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_black.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_acog_gl_black.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Black) equipt with a ACOG 3.5x Scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_ACOG_GL_BLUE: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_acog_blue";
			};
			class UseAtt2 : UseAtt{
				text = "Detacg Acog";
				att = "Attachment_ACOG";
				out = "MIDF_Aug_A3_gl_blue";
			};
		};
		displayName="AUG A3 ACOG GL (Blue)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_acog_gl_blue.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_acog_gl_blue.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Blue) equipt with a ACOG 3.5x Scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_EOTECH_GL: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_eotech";
			};
			class UseAtt2 : UseAtt{
				text = "Detacg Holo";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_gl";
			};
		};
		displayName="AUG A3 EOTECH GL (Green)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_green.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Green) equipt with a EoTech Scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_EOTECH_GL_BLACK: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_eotech_black";
			};
			class UseAtt2 : UseAtt{
				text = "Detacg Holo";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_gl_black";
			};
		};
		displayName="AUG A3 EOTECH GL (Black)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_black.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl_black.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Black) equipt with a EoTech Scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
	class MIDF_Aug_A3_EOTECH_GL_BLUE: MIDF_Aug_A3
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				text = "Detacg M203";
				script = "spawn player_removeAttchment;";
				att = "Attachment_M203";
				out = "MIDF_Aug_A3_eotech_blue";
			};
			class UseAtt2 : UseAtt{
				text = "Detacg Holo";
				att = "Attachment_Holo";
				out = "MIDF_Aug_A3_gl_blue";
			};
		};
		displayName="AUG A3 EOTECH GL (Blue)";
		picture="\MIDF_Weapons\Aug_a3\pictures\aug_a3_eotech_gl_blue.paa";
		model="\MIDF_Weapons\Aug_a3\aug_a3_eotech_gl_blue.p3d";
		muzzles[]=
		{
			"this",
			"GLmuzzle"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MIDF_Weapons\data\anim\A3_GL.rtm"
		};
		dexterity=1.680000;
		descriptionShort="STEYR AUG A3 (Green) equipt with a EoTech Scope and a 40mm Granade launcher";

		class GLmuzzle: Grenadelauncher
		{
			displayName="Grenade Launcher";
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
				"\MIDF_Weapons\sound\M203.wss",
				0.562341,
				1
			};
			reloadMagazineSound[]=
			{
				"\MIDF_Weapons\sound\M203_Reload.wss",
				0.056234,
				1,
				20
			};
			magazineReloadTime=0;
			reloadTime=0.100000;
			modelOptics="-";
			cameraDir="GL look";
			memoryPointCamera="GL eye";
			minRange=60;
			minRangeProbab=0.100000;
			opticsZoomMin=0.450000;
			opticsZoomMax=0.450000;
			opticsZoomInit=0.450000;
		};
	};
};
class CfgVehicleClasses
{
	class MIDF_Weapons
	{
		displayName="MIDF Weapons";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class MIDFAmmoBox: ReammoBox
	{
		vehicleClass="MIDF_Weapons";
		scope=2;
		accuracy=1000;
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		displayName="MIDF Rifle AmmoBox";
		class TransportMagazines
		{
			class _xx_30Rnd_566x45_AUG
			{
				magazine="30Rnd_556x45_Aug";
				count=400;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine="1Rnd_HE_M203";
				count=100;
			};
			class _xx_FlareWhite_M203
			{
				magazine="FlareWhite_M203";
				count=50;
			};
			class _xx_FlareGreen_M203
			{
				magazine="FlareGreen_M203";
				count=50;
			};
			class _xx_FlareRed_M203
			{
				magazine="FlareRed_M203";
				count=50;
			};
			class _xx_FlareYellow_M203
			{
				magazine="FlareYellow_M203";
				count=50;
			};
			class _xx_HandGrenade_West
			{
				magazine="HandGrenade_West";
				count=100;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=50;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=50;
			};
			class _xx_1Rnd_SmokeRed_M203
			{
				magazine="1Rnd_SmokeRed_M203";
				count=50;
			};
			class _xx_1Rnd_SmokeGreen_M203
			{
				magazine="1Rnd_SmokeGreen_M203";
				count=50;
			};
			class _xx_1Rnd_SmokeYellow_M203
			{
				magazine="1Rnd_SmokeYellow_M203";
				count=50;
			};
			class _xx_1Rnd_Smoke_M203
			{
				magazine="1Rnd_Smoke_M203";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_AUGA3
			{
				weapon="MIDF_Aug_a3";
				count=12;
			};
			class _xx_AUGA3_black
			{
				weapon="MIDF_Aug_a3_black";
				count=12;
			};
			class _xx_AUGA3_blue
			{
				weapon="MIDF_Aug_a3_blue";
				count=12;
			};
			class _xx_AUGA3_acog
			{
				weapon="MIDF_Aug_a3_acog";
				count=12;
			};
			class _xx_AUGA3_acog_black
			{
				weapon="MIDF_Aug_a3_acog_black";
				count=12;
			};
			class _xx_AUGA3_acog_blue
			{
				weapon="MIDF_Aug_a3_acog_blue";
				count=12;
			};
			class _xx_AUGA3_eotech
			{
				weapon="MIDF_Aug_a3_eotech";
				count=12;
			};
			class _xx_AUGA3_eotech_black
			{
				weapon="MIDF_Aug_a3_eotech_black";
				count=12;
			};
			class _xx_AUGA3_eotech_blue
			{
				weapon="MIDF_Aug_a3_eotech_blue";
				count=12;
			};
			class _xx_AUGA3_gl
			{
				weapon="MIDF_Aug_a3_gl";
				count=12;
			};
			class _xx_AUGA3_gl_black
			{
				weapon="MIDF_Aug_a3_gl_black";
				count=12;
			};
			class _xx_AUGA3_gl_blue
			{
				weapon="MIDF_Aug_a3_gl_blue";
				count=12;
			};
			class _xx_AUGA3_acog_gl
			{
				weapon="MIDF_Aug_a3_acog_gl";
				count=12;
			};
			class _xx_AUGA3_acog_gl_black
			{
				weapon="MIDF_Aug_a3_acog_gl_black";
				count=12;
			};
			class _xx_AUGA3_acog_gl_blue
			{
				weapon="MIDF_Aug_a3_acog_gl_blue";
				count=12;
			};
			class _xx_AUGA3_eotech_gl
			{
				weapon="MIDF_Aug_a3_eotech_gl";
				count=12;
			};
			class _xx_AUGA3_eotech_gl_black
			{
				weapon="MIDF_Aug_a3_eotech_gl_black";
				count=12;
			};
			class _xx_AUGA3_eotech_gl_blue
			{
				weapon="MIDF_Aug_a3_eotech_gl_blue";
				count=12;
			};
		};
	};
};
