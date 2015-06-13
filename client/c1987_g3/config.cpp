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
	class C1987_G3
	{
		Units[]={};
		weapons[]=
		{
			"C1987_G3",
			"C1987_G3_grip",
			"C1987_G3_aimshot",
			"C1987_G3_eotech",
			"C1987_G3_acog",
			"C1987_G3SG1",
			"C1987_G3SG1_bipod",
			"C1987_G3SG1_bipod_fold"
		};
		requiredVersion=1.000000;
		requiredAddons[]={};
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class C1987_B_762x51_g3: BulletBase
	{
		hit=10;
		typicalSpeed=420;
		airFriction=-0.000700;
		cartridge="FxCartridge_762";
	};
};

class CfgWeapons
{
	class M16a4;
	class C1987_G3: M16a4
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Scope";
				att = "Attachment_SCOPED";
				out = "C1987_G3SG1";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "Attachment_ACOG";
				out = "C1987_G3_acog";
			};
			class UseAtt2 : UseAtt{
				text = "Attach Aimpoint";
				att = "Attachment_CCO";
				out = "C1987_G3_aimshot";
			};
			class UseAtt3 : UseAtt{
				text = "Attach Holo";
				att = "Attachment_HOLO";
				out = "C1987_G3_eotech";
			};
		};
		displayName="G3";
		model="\C1987_G3\g3.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3_grip: M16a4
	{
		displayName="G3 Frontgrip";
		model="\C1987_G3\g3_grip.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CA\weapons\Data\Anim\mk48.rtm"
		};
		picture="\C1987_G3\equip\g3_grip.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_prone_2outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_2outof10";
			recoilProne="recoil_auto_primary_prone_2outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3_aimshot: M16a4
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "Attachment_CCO";
				out = "C1987_G3";
			};
		};
		displayName="G3 Aimshot";
		model="\C1987_G3\g3_aimshot.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3_aim.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3_eotech: M16a4
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Holo";
				att = "Attachment_Holo";
				out = "C1987_G3";
			};
		};
		displayName="G3 EoTech";
		model="\C1987_G3\g3_eotech.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3_eotech.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3_acog: M16a4
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "Attachment_ACOG";
				out = "C1987_G3";
			};
		};
		displayName="G3 Acog";
		model="\C1987_G3\g3_acog.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3_acog.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modelOptics="\ca\weapons\optika_acog";
		opticsZoomMin=0.062500;
		opticsZoomMax=0.062500;
		distanceZoomMin=100;
		distanceZoomMax=100;
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3SG1: M16a4
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Scope";
				att = "Attachment_SCOPED";
				out = "C1987_G3";
			};
		};
		displayName="G3SG1";
		model="\C1987_G3\g3sg1.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3sg1.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modelOptics="\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.029624;
		opticsZoomMax=0.092220;
		opticsZoomInit=0.092220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3SG1_bipod: M16a4
	{
		displayName="G3SG1 Bipod";
		model="\C1987_G3\g3sg1_bipod.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3sg1_bipod.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modelOptics="\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.029624;
		opticsZoomMax=0.092220;
		opticsZoomInit=0.092220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
	class C1987_G3SG1_bipod_fold: M16a4
	{
		displayName="G3SG1 Bipod (Fold)";
		model="\C1987_G3\g3sg1_bipod_fold.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\C1987_G3\anim\g3.rtm"
		};
		picture="\C1987_G3\equip\g3sg1_bipod_f.paa";
		reloadMagazineSound[]=
		{
			"\C1987_G3\sound\G3_Reload.wss",
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
			"762x51_x1",
			"762x51_SD_x1",
			"762x51_HP_x1",
			"762x51_TRACER_x1",
			"762x51_RUBBER_x1",
			"762x51_BT_x1",
			"20Rnd_762x51_g3",
			"20Rnd_762x51_g3SD",
			"20Rnd_762x51_g3_hp",
			"20Rnd_762x51_g3_tracer",
			"20Rnd_762x51_g3_rubber",
			"20Rnd_762x51_g3_bt"
		};
		descriptionShort="The G3 is a 7.62mm Battle Rifle, developed in the 1950s by the German Manufacturer HK";
		modelOptics="\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.029624;
		opticsZoomMax=0.092220;
		opticsZoomInit=0.092220;
		distanceZoomMin=329;
		distanceZoomMax=329;
		optics=1;
		modes[]=
		{
			"Single",
			"Burst",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_single_primary_4outof10";
			recoilProne="recoil_single_primary_prone_4outof10";
			dispersion=0.001000;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=250;
			midRangeProbab=0.700000;
			maxRange=450;
			maxRangeProbab=0.050000;
			reloadTime=0.075000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			begin2[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
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
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
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
			sound[]=
			{
				"\C1987_G3\sound\G3.wss",
				1.778279,
				1,
				1000
			};
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001750;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=150;
			maxRangeProbab=0.050000;
			reloadTime=0.090000;
		};
	};
};
class cfgVehicles
{
	class ReammoBox;
	class C1987WeaponBox: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="C1987 G3 Weapons";
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class 20Rnd_762x51_g3
			{
				magazine="20Rnd_762x51_g3";
				count=250;
			};
		};
		class TransportWeapons
		{
			class C1987_G3
			{
				weapon="C1987_G3";
				count=12;
			};
			class C1987_G3_grip
			{
				weapon="C1987_G3_grip";
				count=12;
			};
			class C1987_G3_aimshot
			{
				weapon="C1987_G3_aimshot";
				count=12;
			};
			class C1987_G3_eotech
			{
				weapon="C1987_G3_eotech";
				count=12;
			};
			class C1987_G3_acog
			{
				weapon="C1987_G3_acog";
				count=12;
			};
			class C1987_G3sg1
			{
				weapon="C1987_G3sg1";
				count=12;
			};
			class C1987_G3sg1_bipod
			{
				weapon="C1987_G3sg1_bipod";
				count=12;
			};
			class C1987_G3sg1_bipod_fold
			{
				weapon="C1987_G3sg1_bipod_fold";
				count=12;
			};
		};
	};
};
