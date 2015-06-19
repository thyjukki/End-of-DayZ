class CfgPatches
{
	class RH_de_cfg
	{
		units[]=
		{
			"RHpammobox"
		};
		weapons[]=
		{
			"RH_deagle",
			"RH_deagleg",
			"RH_deagles",
			"RH_deaglem",
			"RH_deaglemz",
			"RH_deaglemzb",
			"RH_browninghp",
			"RH_mk22",
			"RH_mk22sd",
			"RH_mk22v",
			"RH_mk22vsd",
			"RH_usp",
			"RH_uspsd",
			"RH_m1911",
			"RH_m1911sd",
			"RH_m1911old",
			"RH_uspm",
			"RH_m93r",
			"RH_m9",
			"RH_m9sd",
			"RH_m9c",
			"RH_m9sdc",
			"RH_vz61",
			"RH_muzi",
			"RH_g18",
			"RH_g17",
			"RH_tec9",
			"RH_tt33",
			"RH_mk2",
			"RH_p38",
			"RH_ppk",
			"RH_p226",
			"RH_p226s",
			"RH_anac",
			"RH_anacg",
			"RH_bull",
			"RH_python",
			"RH_g19",
			"RH_g19t"
		};
		requiredAddons[]=
		{
			"CAweapons"
		};
		requiredVersion=1.020000;
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class RH_de_cfg
		{
			list[]=
			{
				"RH_de_cfg"
			};
		};
	};
};
class cfgRecoils
{
	RH_45Base[]={0,0.008000,0.064000,0.005000,0.008000,0.064000,0.090000,0,-0.020000,0.130000,0,0};
	deagleBase[]={0,0.010000,0.150000,0.005000,0.010000,0.150000,0.100000,0,-0.003000,0.130000,0,0};
	RH_PistolBase_Auto[]={0,0.008000,0.035000,0.020000,0.008000,0.035000,0.080000,0,-0.002000,0.100000,0,0};
	RH_PistolBase[]={0,0.008000,0.050000,0.005000,0.008000,0.050000,0.090000,0,-0.010000,0.100000,0,0};
	RH_LowRecoil[]={0,0.002000,0.010000,0.005000,0.002000,0.010000,0.100000,0,-0.002000,0.100000,0,0};
	RH_762x25_PistolRecoil[]={0,0.007000,0.050000,0.005000,0.007000,0.050000,0.090000,0,-0.010000,0.100000,0,0};
	RH_9x19_PistolRecoil[]={0,0.007000,0.050000,0.005000,0.007000,0.050000,0.090000,0,-0.010000,0.100000,0,0};
	RH_45ACP_PistolRecoil[]={0,0.007000,0.060000,0.005000,0.007000,0.060000,0.090000,0,-0.010000,0.100000,0,0};
	RH_Glock_Auto_Recoil[]={0,0.007000,0.030000,0.005000,0.007000,0.030000,0.090000,0,-0.002400,0.100000,0,0};
	RH_Glock_Recoil[]={0,0.007000,0.050000,0.005000,0.007000,0.050000,0.090000,0,-0.010000,0.100000,0,0};
	RH_vz61Recoil[]={0,0.006000,0.020000,0.005000,0.006000,0.020000,0.090000,0,-0.007000,0.100000,0,0};
	RH_9x19_SMG_Recoil[]={0,0.004000,-0.001000,0.010000,0.004000,0.006000,0.020000,0.002000,0.006000,0.100000,0,0};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Default;
	class PistolCore;
	class Pistol;
	class RH_deagle: Pistol
	{
		descriptionShort="<br />Ammo: .50 AE";
		scope=2;
		model="\RH_de\RH_deagle.p3d";
		modelOptics="-";
		picture="\RH_de\inv\de.paa";
		minRange=2;
		minRangeProbab=0.100000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		dexterity=1.850000;
		displayName="Desert Eagle";
		begin1[]=
		{
			"\RH_de\sound\desert_eagle_shot.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\de_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"50_AE_x1",
			"50_AE_HP_x1",
			"50_AE_TRACER_x1",
			"50_AE_RUBBER_x1",
			"50_AE_HP_x1",
			"RH_7Rnd_50_AE",
			"RH_7Rnd_50_AE_hp",
			"RH_7Rnd_50_AE_tracer",
			"RH_7Rnd_50_AE_rubber",
			"RH_7Rnd_50_AE_bt"
		};
		dispersion=0.008500;
		ffCount=1;
		recoil="deagleBase";
		reloadTime=0.200000;
		aiRateOfFire=2.900000;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The Desert Eagle is a large caliber gas-operated semi-automatic pistol manufactured in Israel by IMI (Israel Military Industries) for Magnum Research, Inc.Magnum Research, based in the USA, developed and patented the original Desert Eagle design and this design was further refined by IMI. Manufacturing was moved to Saco Defense in the state of Maine from 1995 to 2000, but shifted back to Israel when Saco was acquired by General Dynamics.";
		};
	};
	class RH_Deagleg: RH_deagle
	{
		displayName="Desert Eagle Gold";
		model="\RH_de\RH_deagleg.p3d";
		picture="\RH_de\inv\deg.paa";
	};
	class RH_Deagles: RH_deagle
	{
		displayName="Desert Eagle Silver";
		model="\RH_de\RH_deagles.p3d";
		picture="\RH_de\inv\des.paa";
	};
	class RH_Deaglem: RH_deagle
	{
		displayName="Desert Eagle Modern";
		model="\RH_de\RH_deaglem.p3d";
		picture="\RH_de\inv\dem.paa";
	};
	class RH_Deaglemz: RH_deagle
	{
		displayName="Desert Eagle Modern Muzzle";
		model="\RH_de\RH_deaglemz.p3d";
		picture="\RH_de\inv\demz.paa";
	};
	class RH_Deaglemzb: RH_deagle
	{
		displayName="Desert Eagle Modern Big Muzzle";
		model="\RH_de\RH_deaglemzb.p3d";
		picture="\RH_de\inv\demzb.paa";
	};
	class RH_anac: Pistol
	{
		scope=2;
		displayName="Colt Anaconda";
		model="\RH_de\RH_anac.p3d";
		picture="\RH_de\inv\anac.paa";
		modelOptics="-";
		minRange=2;
		minRangeProbab=0.100000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		dexterity=1.850000;
		begin1[]=
		{
			"\RH_de\sound\anac.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\bullreload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"44_x1",
			"44_x2",
			"44_x3",
			"44_x4",
			"44_x5",
			"44_x6",
			"44_HP_x1",
			"44_HP_x2",
			"44_HP_x3",
			"44_HP_x4",
			"44_HP_x5",
			"44_HP_x6",
			"44_TRACER_x1",
			"44_TRACER_x2",
			"44_TRACER_x3",
			"44_TRACER_x4",
			"44_TRACER_x5",
			"44_TRACER_x6",
			"44_RUBBER_x1",
			"44_RUBBER_x2",
			"44_RUBBER_x3",
			"44_RUBBER_x4",
			"44_RUBBER_x5",
			"44_RUBBER_x6",
			"44_BT_x1",
			"44_BT_x2",
			"44_BT_x3",
			"44_BT_x4",
			"44_BT_x5",
			"44_BT_x6",
			"RH_6Rnd_44_Mag",
			"RH_6Rnd_44_Mag_hp",
			"RH_6Rnd_44_Mag_tracer",
			"RH_6Rnd_44_Mag_rubber",
			"RH_6Rnd_44_Mag_bt"
		};
		descriptionShort="<br />Ammo: .44 Magnum";
		dispersion=0.008500;
		ffCount=1;
		recoil="RH_45ACP_PistolRecoil";
		reloadTime=0.200000;
		aiRateOfFire=2.900000;
		aiRateOfFireDistance=50;
	};
	class RH_anacg: RH_anac
	{
		displayName="Colt Anaconda Gold";
		model="\RH_de\RH_anacg.p3d";
		picture="\RH_de\inv\anacg.paa";
	};
	class RH_bull: Pistol
	{
		scope=2;
		displayName="Taurus Raging Bull";
		model="\RH_de\RH_bull.p3d";
		picture="\RH_de\inv\bull.paa";
		modelOptics="-";
		minRange=2;
		minRangeProbab=0.100000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		dexterity=1.850000;
		begin1[]=
		{
			"\RH_de\sound\bull.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\bullreload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"44_x1",
			"44_x2",
			"44_x3",
			"44_x4",
			"44_x5",
			"44_x6",
			"44_HP_x1",
			"44_HP_x2",
			"44_HP_x3",
			"44_HP_x4",
			"44_HP_x5",
			"44_HP_x6",
			"44_TRACER_x1",
			"44_TRACER_x2",
			"44_TRACER_x3",
			"44_TRACER_x4",
			"44_TRACER_x5",
			"44_TRACER_x6",
			"44_RUBBER_x1",
			"44_RUBBER_x2",
			"44_RUBBER_x3",
			"44_RUBBER_x4",
			"44_RUBBER_x5",
			"44_RUBBER_x6",
			"44_BT_x1",
			"44_BT_x2",
			"44_BT_x3",
			"44_BT_x4",
			"44_BT_x5",
			"44_BT_x6",
			"RH_6Rnd_44_Mag",
			"RH_6Rnd_44_Mag_hp",
			"RH_6Rnd_44_Mag_tracer",
			"RH_6Rnd_44_Mag_rubber",
			"RH_6Rnd_44_Mag_bt"
		};
		descriptionShort="<br />Ammo: .44 magnum";
		dispersion=0.008500;
		ffCount=1;
		recoil="RH_45ACP_PistolRecoil";
		reloadTime=0.200000;
		aiRateOfFire=2.900000;
		aiRateOfFireDistance=50;
	};
	class RH_python: Pistol
	{
		scope=2;
		displayName="Colt Python";
		model="\RH_de\RH_python.p3d";
		picture="\RH_de\inv\python.paa";
		modelOptics="-";
		minRange=2;
		minRangeProbab=0.100000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		dexterity=1.850000;
		begin1[]=
		{
			"\RH_de\sound\python.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\bullreload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"357_x1",
			"357_x2",
			"357_x3",
			"357_x4",
			"357_x5",
			"357_x6",
			"357_HP_x1",
			"357_HP_x2",
			"357_HP_x3",
			"357_HP_x4",
			"357_HP_x5",
			"357_HP_x6",
			"357_TRACER_x1",
			"357_TRACER_x2",
			"357_TRACER_x3",
			"357_TRACER_x4",
			"357_TRACER_x5",
			"357_TRACER_x6",
			"357_RUBBER_x1",
			"357_RUBBER_x2",
			"357_RUBBER_x3",
			"357_RUBBER_x4",
			"357_RUBBER_x5",
			"357_RUBBER_x6",
			"357_BT_x1",
			"357_BT_x2",
			"357_BT_x3",
			"357_BT_x4",
			"357_BT_x5",
			"357_BT_x6",
			"RH_6Rnd_357_Mag",
			"RH_6Rnd_357_Mag_hp",
			"RH_6Rnd_357_Mag_tracer",
			"RH_6Rnd_357_Mag_rubber",
			"RH_6Rnd_357_Mag_bt"
		};
		descriptionShort="<br />Ammo: .357";
		dispersion=0.008500;
		ffCount=1;
		recoil="RH_45ACP_PistolRecoil";
		reloadTime=0.200000;
		aiRateOfFire=2.900000;
		aiRateOfFireDistance=50;
	};
	class RH_browninghp: Pistol
	{
		scope=2;
		model="\RH_de\RH_browninghp.p3d";
		modelOptics="-";
		picture="\RH_de\inv\browninghp.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="Browning HP";
		begin1[]=
		{
			"\RH_de\sound\browninghp.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\p226_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_13Rnd_9x19_bhp",
			"RH_13Rnd_9x19_bhp_sd",
			"RH_13Rnd_9x19_bhp_hp",
			"RH_13Rnd_9x19_bhp_tracer",
			"RH_13Rnd_9x19_bhp_rubber",
			"RH_13Rnd_9x19_bhp_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_9x19_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The Browning Hi-Power is a single-action, 9mm semi-automatic handgun. It is based on a design by American firearms inventor John Browning, and later improved by Dieudonné Saive at Fabrique Nationale (FN) of Herstal, Belgium. Browning died in 1926, several years before the design was finalized. The Hi-Power is one of the most widely used military pistols of all time,[3] having been used by the armed forces of over 50 countries.";
		};
	};
	class RH_p226: Pistol
	{
		scope=2;
		model="\RH_de\RH_p226.p3d";
		modelOptics="-";
		picture="\RH_de\inv\p226.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="Sig P226";
		begin1[]=
		{
			"\RH_de\sound\p226.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\p226_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_15Rnd_9x19_usp",
			"RH_15Rnd_9x19_uspsd",
			"RH_15Rnd_9x19_usp_hp",
			"RH_15Rnd_9x19_usp_tracer",
			"RH_15Rnd_9x19_usp_rubber",
			"RH_15Rnd_9x19_usp_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_9x19_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The SIG Sauer P226 is a full-sized, service-type pistol chambered for the 9x19mm Parabellum, .40 S&W, and .357 SIG. Its design is based on the SIG Sauer P220.The P226 was designed for entry into the XM9 Service Pistol Trials, which were held by the US Army in 1984 on behalf of the US armed forces to find a replacement for the M1911A1. Only the Beretta 92F and the SIG P226 satisfactorily completed the trials. According to a GAO report, Beretta was awarded the M9 contract for the 92F due to better durability during endurance testing and a lower total package price. The P226 cost less per pistol than the 92F, but SIG's package price with magazines and spare parts was higher than Beretta's. The Navy SEALs, however, chose to adopt the P226 later after a repetition of failures with some issued Beretta M9s.";
		};
	};
	class RH_p226s: RH_p226
	{
		displayName="Sig P226 Silver";
		model="\RH_de\RH_p226s.p3d";
		picture="\RH_de\inv\p226s.paa";
	};
	class RH_p38: Pistol
	{
		scope=2;
		model="\RH_de\RH_p38.p3d";
		modelOptics="-";
		picture="\RH_de\inv\p38.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=1;
		minRangeProbab=0.500000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="P38";
		begin1[]=
		{
			"\RH_de\sound\p38.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\p38_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_8Rnd_9x19_P38",
			"RH_8Rnd_9x19_p38SD",
			"RH_8Rnd_9x19_p38_hp",
			"RH_8Rnd_9x19_p38_tracer",
			"RH_8Rnd_9x19_p38_rubber",
			"RH_8Rnd_9x19_p38_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_pistolBase";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The P38 was the first locked-breech pistol to use a double-action trigger. The shooter could load a round into the chamber, use the de-cocking lever to safely lower the hammer without firing the round, and carry the weapon loaded with the hammer down. A pull of the trigger, with the hammer down, fired the first shot and the operation of the pistol ejected the fired round and reloaded a fresh round into the chamber, all features found in many modern day handguns.";
		};
	};
	class RH_ppk: Pistol
	{
		scope=2;
		model="\RH_de\RH_ppk.p3d";
		modelOptics="-";
		picture="\RH_de\inv\ppk.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		optics="true";
		displayName="PPK";
		begin1[]=
		{
			"\RH_de\sound\ppk.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\ppk_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"32ACP_x1",
			"32ACP_HP_x1",
			"32ACP_TRACER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_BT_x1",
			"RH_7Rnd_32cal_ppk",
			"RH_7Rnd_32cal_ppk_hp",
			"RH_7Rnd_32cal_ppk_tracer",
			"RH_7Rnd_32cal_ppk_rubber",
			"RH_7Rnd_32cal_ppk_bt"
		};
		descriptionShort="<br />Ammo: .32 ACP";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_vz61Recoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The PP and the PPK were among the world's first, successful double action semi-automatic pistols that were widely copied, but still made by Walther. The design inspired other pistols, among them the Soviet Makarov, the Hungarian FEG PA-63, and the Czech CZ50. Although it was an excellent semi-automatic pistol, it had competitors in its time. The Mauser HSC pistol and the Sauer 38H pistol (a.k.a. model H), were successful in their own rights. Sauer pistol production ended at war's end, but the refined SIG P230 and the P232, owe much to the Walther PPK.";
		};
	};
	class RH_mk22: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_mk22sd";
			};
		};
		scope=2;
		model="\RH_de\RH_mk22.p3d";
		modelOptics="-";
		picture="\RH_de\inv\mk22.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		optics="true";
		displayName="Mk22";
		begin1[]=
		{
			"\RH_de\sound\mk22.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\mk22_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_8Rnd_9x19_Mk",
			"RH_8Rnd_9x19_Mksd",
			"RH_8Rnd_9x19_Mk_hp",
			"RH_8Rnd_9x19_Mk_tracer",
			"RH_8Rnd_9x19_Mk_rubber",
			"RH_8Rnd_9x19_Mk_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_9x19_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The Smith and Wesson Model 39 was developed for the US Army service pistol trials of 1949.It went on the market in 1955 and was the first of Smith Wesson's first generation semi-automatic pistols.The Model 39 was manufactured with an anodized aluminum frame with a curved backstrap and a blued carbon steel slide that carries the manual safety. The grip is of three pieces made of two walnut wood panels joined by a metal backstrap. It has a magazine release located at the rear of the trigger guard, similar to the M1911A1 it was designed to replace.";
		};
	};
	class RH_mk22sd: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_mk22";
			};
		};
		scope=2;
		model="\RH_de\RH_mk22sd.p3d";
		modelOptics="-";
		picture="\RH_de\inv\mk22sd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		optics="true";
		displayName="Mk22 sd";
		begin1[]=
		{
			"\RH_de\sound\mk22sd.wss",
			0.316228,
			1,
			200
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\mk22_reload.wss",
			0.031623,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_8Rnd_9x19_Mk",
			"RH_8Rnd_9x19_Mksd",
			"RH_8Rnd_9x19_Mk_hp",
			"RH_8Rnd_9x19_Mk_tracer",
			"RH_8Rnd_9x19_Mk_rubber",
			"RH_8Rnd_9x19_Mk_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_9x19_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The Smith and Wesson Model 39 was developed for the US Army service pistol trials of 1949,It went on the market in 1955 and was the first of Smith Wesson's first generation semi-automatic pistols,The Model 39 was manufactured with an anodized aluminum frame with a curved backstrap and a blued carbon steel slide that carries the manual safety.The grip is of three pieces made of two walnut wood panels joined by a metal backstrap.It has a magazine release located at the rear of the trigger guard, similar to the M1911A1 it was designed to replace.";
		};
	};
	class RH_mk22v: RH_mk22
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_mk22vsd";
			};
		};
		displayName="MK22v";
		model="\RH_de\RH_mk22v.p3d";
		picture="\RH_de\inv\mk22v.paa";
	};
	class RH_mk22vsd: RH_mk22sd
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_mk22v";
			};
		};
		displayName="Mk22vsd";
		model="\RH_de\RH_mk22vsd.p3d";
		picture="\RH_de\inv\mk22vsd.paa";
	};
	class RH_usp: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_uspsd";
			};
		};
		scope=2;
		model="\RH_de\RH_usp.p3d";
		modelOptics="-";
		picture="\RH_de\inv\usp.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="USP";
		begin1[]=
		{
			"\RH_de\sound\usp.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\usp_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_15Rnd_9x19_usp",
			"RH_15Rnd_9x19_uspsd",
			"RH_15Rnd_9x19_usp_hp",
			"RH_15Rnd_9x19_usp_tracer",
			"RH_15Rnd_9x19_usp_rubber",
			"RH_15Rnd_9x19_usp_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.011000;
		ffCount=1;
		recoil="RH_9x19_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The Heckler Koch USP (Universale Selbstladepistole, or Universal Self-loading Pistol) is a semi-automatic pistol designed by the German arms manufacturer Heckler Koch.When Heckler Koch introduced the USP in 1993, it marked the first time HK chose to incorporate many traditional handgun design elements, such as elements of John Browning's M1911, in one pistol. Two principles guided its development — the first being the use of molded polymer material, and the second being the creation of a pistol paradigm.";
		};
		class FlashLight
		{
			color[]={0.900000,0.900000,0.700000,0.900000};
			ambient[]={0.100000,0.100000,0.100000,1};
			position="flash dir";
			direction="flash";
			angle=30;
			scale[]={1,1,0.500000};
			brightness=0.100000;
		};
	};
	class RH_uspsd: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_usp";
			};
		};
		scope=2;
		model="\RH_de\RH_uspsd.p3d";
		modelOptics="-";
		picture="\RH_de\inv\uspsd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		optics="true";
		displayName="USP sd";
		begin1[]=
		{
			"\RH_de\sound\uspsd.wss",
			0.316228,
			1,
			200
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\usp_reload.wss",
			0.031623,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_15Rnd_9x19_usp",
			"RH_15Rnd_9x19_uspsd",
			"RH_15Rnd_9x19_usp_hp",
			"RH_15Rnd_9x19_usp_tracer",
			"RH_15Rnd_9x19_usp_rubber",
			"RH_15Rnd_9x19_usp_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		dispersion=0.008100;
		ffCount=1;
		recoil="RH_9x19_PistolRecoil";
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The Heckler Koch USP (Universale Selbstladepistole, or Universal Self-loading Pistol) is a semi-automatic pistol designed by the German arms manufacturer Heckler Koch.When Heckler Koch introduced the USP in 1993, it marked the first time HK chose to incorporate many traditional handgun design elements, such as elements of John Browning's M1911, in one pistol. Two principles guided its development — the first being the use of molded polymer material, and the second being the creation of a pistol paradigm.";
		};
		class FlashLight
		{
			color[]={0.900000,0.900000,0.700000,0.900000};
			ambient[]={0.100000,0.100000,0.100000,1};
			position="flash dir";
			direction="flash";
			angle=30;
			scale[]={1,1,0.500000};
			brightness=0.100000;
		};
	};
	class RH_uspm: Pistol
	{
		scope=2;
		model="\RH_de\RH_uspm.p3d";
		modelOptics="-";
		picture="\RH_de\inv\uspm.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="USP Match";
		begin1[]=
		{
			"\RH_de\sound\uspm.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\usp_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"RH_12Rnd_45cal_usp",
			"RH_12Rnd_45cal_usp_hp",
			"RH_12Rnd_45cal_usp_tracer",
			"RH_12Rnd_45cal_usp_rubber",
			"RH_12Rnd_45cal_usp_bt"
		};
		descriptionShort="<br />Ammo: .45 ACP";
		dispersion=0.008000;
		ffCount=1;
		recoil="RH_45ACP_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The USP Match (9 mm Parabellum, .40 SW, .45 ACP) is specifically designed to appeal to target shooters. In addition to the features offered on the Expert, the Match distinguishes itself by its barrel weight, or compensator, which replaces the elongated slide found on the Expert. The compensator provides counterbalance to the weapon's recoil, greatly improving follow up target tracking. The USP Match was discontinued in 2001.";
		};
	};
	class RH_m1911: Pistol
	{
		initSpeed=260;
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_m1911sd";
			};
		};
		scope=2;
		model="\RH_de\RH_m1911.p3d";
		modelOptics="-";
		picture="\RH_de\inv\colt.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="Kimber M1911";
		begin1[]=
		{
			"\RH_de\sound\m1911.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\m1911_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"RH_8Rnd_45cal_m1911",
			"RH_8Rnd_45cal_m1911_hp",
			"RH_8Rnd_45cal_m1911_tracer",
			"RH_8Rnd_45cal_m1911_rubber",
			"RH_8Rnd_45cal_m1911_bt",
			"7Rnd_45ACP_1911",
			"7Rnd_45ACP_1911_hp",
			"7Rnd_45ACP_1911_tracer",
			"7Rnd_45ACP_1911_rubber",
			"7Rnd_45ACP_1911_bt"
		};
		descriptionShort="<br />Ammo: .45 ACP";
		dispersion=0.008500;
		ffCount=1;
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		recoil="RH_45ACP_PistolRecoil";
		class Library
		{
			libTextDesc="The M1911 is a single-action, semiautomatic handgun chambered for the .45 ACP cartridge. It was designed by John M. Browning, and was the standard-issue side arm for the United States armed forces from 1911 to 1985. It was widely used in World War I, World War II, the Korean War and the Vietnam War. Its formal designation as of 1940 was Automatic Pistol, Caliber .45, M1911 for the original Model of 1911 or Automatic Pistol, Caliber .45, M1911A1 for the M1911A1, adopted in 1924. The designation changed to Pistol, Caliber .45, Automatic, M1911A1 in the Vietnam era. In total, the United States procured around 2.7 million M1911 and M1911A1 pistols during its service life. This is modern version of M1911 by Kimber manufacturer";
		};
	};
	class RH_m1911sd: Pistol
	{
		class ItemActions {
			class UseAtt {
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_m1911";
			};
		};
		scope=2;
		model="\RH_de\RH_m1911sd.p3d";
		modelOptics="-";
		picture="\RH_de\inv\coltsd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="Kimber M1911 SD";
		begin1[]=
		{
			"\RH_de\sound\m1911sd.wss",
			0.316228,
			1,
			200
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\m1911_reload.wss",
			0.031623,
			1,
			20
		};
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"RH_8Rnd_45cal_m1911",
			"RH_8Rnd_45cal_m1911_hp",
			"RH_8Rnd_45cal_m1911_tracer",
			"RH_8Rnd_45cal_m1911_rubber",
			"RH_8Rnd_45cal_m1911_bt",
			"7Rnd_45ACP_1911",
			"7Rnd_45ACP_1911_hp",
			"7Rnd_45ACP_1911_tracer",
			"7Rnd_45ACP_1911_rubber",
			"7Rnd_45ACP_1911_bt"
		};
		descriptionShort="<br />Ammo: .45 ACP";
		dispersion=0.007500;
		ffCount=1;
		recoil="RH_45ACP_PistolRecoil";
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		class Library
		{
			libTextDesc="The M1911 is a single-action, semiautomatic handgun chambered for the .45 ACP cartridge. It was designed by John M. Browning, and was the standard-issue side arm for the United States armed forces from 1911 to 1985. It was widely used in World War I, World War II, the Korean War and the Vietnam War. Its formal designation as of 1940 was Automatic Pistol, Caliber .45, M1911 for the original Model of 1911 or Automatic Pistol, Caliber .45, M1911A1 for the M1911A1, adopted in 1924. The designation changed to Pistol, Caliber .45, Automatic, M1911A1 in the Vietnam era. In total, the United States procured around 2.7 million M1911 and M1911A1 pistols during its service life. This is modern version of M1911 by Kimber manufacturer";
		};
	};
	class RH_m1911old: Pistol
	{
		scope=2;
		model="\RH_de\RH_m1911old.p3d";
		modelOptics="-";
		picture="\RH_de\inv\coltold.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		optics="true";
		displayName="M1911 old";
		begin1[]=
		{
			"\RH_de\sound\m1911old.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\m1911_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"45ACP_x1",
			"45ACP_HP_x1",
			"45ACP_TRACER_x1",
			"45ACP_RUBBER_x1",
			"45ACP_BT_x1",
			"RH_8Rnd_45cal_m1911",
			"RH_8Rnd_45cal_m1911_hp",
			"RH_8Rnd_45cal_m1911_tracer",
			"RH_8Rnd_45cal_m1911_rubber",
			"RH_8Rnd_45cal_m1911_bt",
			"7Rnd_45ACP_1911",
			"7Rnd_45ACP_1911_hp",
			"7Rnd_45ACP_1911_tracer",
			"7Rnd_45ACP_1911_rubber",
			"7Rnd_45ACP_1911_bt"
		};
		descriptionShort="<br />Ammo: .45 ACP";
		dispersion=0.008500;
		ffCount=1;
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		recoil="RH_45ACP_PistolRecoil";
		class Library
		{
			libTextDesc="The M1911 is a single-action, semiautomatic handgun chambered for the .45 ACP cartridge. It was designed by John M. Browning, and was the standard-issue side arm for the United States armed forces from 1911 to 1985. It was widely used in World War I, World War II, the Korean War and the Vietnam War. Its formal designation as of 1940 was Automatic Pistol, Caliber .45, M1911 for the original Model of 1911 or Automatic Pistol, Caliber .45, M1911A1 for the M1911A1, adopted in 1924. The designation changed to Pistol, Caliber .45, Automatic, M1911A1 in the Vietnam era. In total, the United States procured around 2.7 million M1911 and M1911A1 pistols during its service life.";
		};
	};
	class RH_tt33: Pistol
	{
		scope=2;
		model="\RH_de\RH_tt33.p3d";
		modelOptics="-";
		picture="\RH_de\inv\tt33.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.500000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.200000;
		optics="true";
		displayName="TT33";
		begin1[]=
		{
			"\RH_de\sound\TT33.wss",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\tt33_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"762x25_x1",
			"762x25_HP_x1",
			"762x25_RUBBER_x1",
			"762x25_TRACER_x1",
			"762x25_BT_x1",
			"RH_8Rnd_762_tt33",
			"RH_8Rnd_762_tt33_hp",
			"RH_8Rnd_762_tt33_tracer",
			"RH_8Rnd_762_tt33_rubber",
			"RH_8Rnd_762_tt33_bt"
		};
		descriptionShort="<br />Ammo: 7.62x25 mm";
		dispersion=0.008500;
		ffCount=1;
		aiRateOfFire=1.500000;
		aiRateOfFireDistance=50;
		recoil="RH_762x25_PistolRecoil";
		class Library
		{
			libTextDesc="The TT33 is a semi-automatic pistol developed by Fedor Tokarev as a service pistol for the Soviet military to replace the Nagant M1895 revolvers in use since tsarist times.The TT-33 (Tokarev-Tula) was an improved design of the TT-30 which was the first major-employed automatic pistol in the Soviet forces, but few TT-30's were built before the update in 1933. The TT-33 was widely used by Soviet troops during World War II, but did not completely replace the Nagant until that war.The TT-33 is chambered for the 7.62 x 25 mm Tokarev cartridge, which was itself based on the similar 7.63 mm Mauser cartridge used in the Mauser C96 pistol. Able to withstand tremendous abuse, large numbers of the TT-33 were produced during WWII and well into the 1950s.";
		};
	};
	class RH_mk2: Pistol
	{
		scope=2;
		model="\RH_de\RH_mk2.p3d";
		modelOptics="-";
		picture="\RH_de\inv\mk2.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		minRange=2;
		minRangeProbab=0.200000;
		midRange=30;
		midRangeProbab=0.800000;
		maxRange=50;
		maxRangeProbab=0.040000;
		optics="true";
		displayName="Ruger Mk2";
		begin1[]=
		{
			"\RH_de\sound\Mk2.wss",
			0.316228,
			1,
			200
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\mk2_reload.wss",
			0.031623,
			1,
			20
		};
		magazines[]=
		{
			"22LR_x1",
			"22LR_HP_x1",
			"22LR_RUBBER_x1",
			"22LR_TRACER_x1",
			"22LR_BT_x1",
			"RH_10Rnd_22LR_mk2",
			"RH_10Rnd_22LR_mk2_hp",
			"RH_10Rnd_22LR_mk2_tracer",
			"RH_10Rnd_22LR_mk2_rubber",
			"RH_10Rnd_22LR_mk2_bt"
		};
		descriptionShort="<br />Ammo: .22 LR";
		dispersion=0.008500;
		ffCount=1;
		aiRateOfFire=2;
		aiRateOfFireDistance=50;
		recoil="RH_LowRecoil";
		class Library
		{
			libTextDesc="The Ruger rimfire semiautomatic pistols are some of the most popular handguns made, with over 3 million sold. They are manufactured by Sturm, Ruger Company.The most prevalent model is the MK II, pronounced Mark Two, made from 1982 to 2005. Previous models include the Standard, Ruger's first model, made from 1949 to 1982, and the MK I Target, made from 1951 to 1982. Variations include the Target models, which have heavier barrels and adjustable sights, and the 22/45 models, which have a polymer frame with a grip-angle that matches the Colt 1911 rather than the steel frame's Luger P08-like layout. The MK II was removed from production in 2004, when it was replaced by the MK III. All Ruger rimfire pistols are chambered in .22 Long Rifle only.";
		};
	};
	class RH_m93r: Pistol
	{
		scope=2;
		model="\RH_de\RH_m93r.p3d";
		modelOptics="-";
		optics=1;
		distanceZoomMin=56;
		distanceZoomMax=56;
		dexterity=1.750000;
		displayName="Beretta M93R";
		picture="\RH_de\inv\m93.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[]=
		{
			"\RH_de\sound\m93r_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_20Rnd_9x19_M93",
			"RH_20Rnd_9x19_M93SD",
			"RH_20Rnd_9x19_M93_hp",
			"RH_20Rnd_9x19_M93_tracer",
			"RH_20Rnd_9x19_M93_rubber",
			"RH_20Rnd_9x19_M93_bt",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9SD",
			"15Rnd_9x19_M9_hp",
			"15Rnd_9x19_M9_tracer",
			"15Rnd_9x19_M9_rubber",
			"15Rnd_9x19_M9_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single",
			"Burst"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\m93r.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.055000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.100000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"\RH_de\Sound\m93r.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			autofire=0;
			soundBurst=0;
			soundContinuous=0;
			burst=3;
			dispersion=0.011000;
			reloadTime=0.055000;
			recoil="RH_Glock_Auto_Recoil";
			recoilProne="RH_Glock_Auto_Recoil";
			ffCount=3;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.055000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.600000;
			midRange=10;
			midRangeProbab=0.700000;
			maxRange=20;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="Beretta Model 93R is a selective-fire machine pistol. The R stands for Raffica which means burst in Italian. It was designed in the 70s and meant for police and military use, offering extra firepower in a small package. It is perfect for concealed carry purposes such as VIP protection, or for close quarters fighting such as room-to-room searches.";
		};
	};
	class RH_m9: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_m9sd";
			};
		};
		scope=2;
		model="\RH_de\RH_m9.p3d";
		modelOptics="-";
		optics=1;
		distanceZoomMin=56;
		distanceZoomMax=56;
		dexterity=1.750000;
		displayName="Beretta M9";
		picture="\RH_de\inv\m9.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[]=
		{
			"\RH_de\sound\m93r_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_20Rnd_9x19_M93",
			"RH_20Rnd_9x19_M93SD",
			"RH_20Rnd_9x19_M93_hp",
			"RH_20Rnd_9x19_M93_tracer",
			"RH_20Rnd_9x19_M93_rubber",
			"RH_20Rnd_9x19_M93_bt",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9SD",
			"15Rnd_9x19_M9_hp",
			"15Rnd_9x19_M9_tracer",
			"15Rnd_9x19_M9_rubber",
			"15Rnd_9x19_M9_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\m93r.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.500000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The M9 handgun, formally Pistol, Semiautomatic, 9mm, M9, is a 9mm pistol of the U.S. military adopted in the 1980s. It is essentially a mil-spec Beretta 92F, later the 92FS.";
		};
	};
	class RH_m9sd: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_m9";
			};
		};
		scope=2;
		model="\RH_de\RH_m9sd.p3d";
		modelOptics="-";
		optics=1;
		fireLightDuration=0;
		fireLightIntensity=0;
		distanceZoomMin=56;
		distanceZoomMax=56;
		dexterity=1.750000;
		displayName="Beretta M9SD";
		picture="\RH_de\inv\m9sd.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[]=
		{
			"\RH_de\sound\m93r_reload.wss",
			0.031623,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_20Rnd_9x19_M93",
			"RH_20Rnd_9x19_M93SD",
			"RH_20Rnd_9x19_M93_hp",
			"RH_20Rnd_9x19_M93_tracer",
			"RH_20Rnd_9x19_M93_rubber",
			"RH_20Rnd_9x19_M93_bt",
			"15Rnd_9x19_M9",
			"15Rnd_9x19_M9SD",
			"15Rnd_9x19_M9_hp",
			"15Rnd_9x19_M9_tracer",
			"15Rnd_9x19_M9_rubber",
			"15Rnd_9x19_M9_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\m9sd.wss",
				0.316228,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.500000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The M9 handgun, formally Pistol, Semiautomatic, 9mm, M9, is a 9mm pistol of the U.S. military adopted in the 1980s. It is essentially a mil-spec Beretta 92F, later the 92FS.";
		};
	};
	class RH_m9c: RH_m9
	{
		displayName="Beretta M9 Camo";
		model="\RH_de\RH_m9c.p3d";
		picture="\RH_de\inv\m9c.paa";
	};
	class RH_m9csd: RH_m9sd
	{
		displayName="Beretta M9SD Camo";
		model="\RH_de\RH_m9csd.p3d";
		picture="\RH_de\inv\m9csd.paa";
	};
	class RH_g18: Pistol
	{
		scope=2;
		model="\RH_de\RH_g18.p3d";
		modelOptics="-";
		picture="\RH_de\inv\g18.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		displayName="Glock 18";
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\glock_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_19Rnd_9x19_g18",
			"RH_19Rnd_9x19_g18SD",
			"RH_19Rnd_9x19_g18_hp",
			"RH_19Rnd_9x19_g18_tracer",
			"RH_19Rnd_9x19_g18_rubber",
			"RH_19Rnd_9x19_g18_bt",
			"RH_33Rnd_9x19_g18",
			"RH_33Rnd_9x19_g18SD",
			"RH_33Rnd_9x19_g18_hp",
			"RH_33Rnd_9x19_g18_tracer",
			"RH_33Rnd_9x19_g18_rubber",
			"RH_33Rnd_9x19_g18_bt",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17sd",
			"17Rnd_9x19_glock17SD",
			"17Rnd_9x19_glock17_hp",
			"17Rnd_9x19_glock17_tracer",
			"17Rnd_9x19_glock17_rubber",
			"17Rnd_9x19_glock17_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\sound\glock.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=1.500000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.400000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_de\sound\glock.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			multiplier=1;
			burst=1;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_Glock_Auto_Recoil";
			recoilProne="RH_Glock_Auto_Recoil";
			ffCount=3;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=2;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.001000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.700000;
			midRange=10;
			midRangeProbab=0.700000;
			maxRange=20;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The Glock 18 is a handgun manufactured by Glock. It is much like a Glock 17 with a fire selector switch on its slide that enables it to fire in semi-automatic or fully automatic modes. Rotating the switch toward the bottom of the frame allows for fully automatic fire, while rotating it to the top switches the gun to semi-automatic. The Glock 18 appears identical to the Glock 17, with the addition of the fire selector. However, the internal dimensions of the main parts of the Glock 18 are slightly different from the Glock 17, and are not interchangeable. This was done by Glock so that the Glock 17 could not be considered a semi-automatic version of the Glock 18.";
		};
	};
	class RH_g17: Pistol
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Silencer";
				att = "Attachment_Sup";
				out = "RH_g17sd";
			};
		};
		scope=2;
		model="\RH_de\RH_g17.p3d";
		modelOptics="-";
		picture="\RH_de\inv\g17.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		displayName="Glock 17";
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\glock_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_19Rnd_9x19_g18",
			"RH_19Rnd_9x19_g18SD",
			"RH_19Rnd_9x19_g18_hp",
			"RH_19Rnd_9x19_g18_tracer",
			"RH_19Rnd_9x19_g18_rubber",
			"RH_19Rnd_9x19_g18_bt",
			"RH_33Rnd_9x19_g18",
			"RH_33Rnd_9x19_g18SD",
			"RH_33Rnd_9x19_g18_hp",
			"RH_33Rnd_9x19_g18_tracer",
			"RH_33Rnd_9x19_g18_rubber",
			"RH_33Rnd_9x19_g18_bt",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17sd",
			"17Rnd_9x19_glock17SD",
			"17Rnd_9x19_glock17_hp",
			"17Rnd_9x19_glock17_tracer",
			"17Rnd_9x19_glock17_rubber",
			"17Rnd_9x19_glock17_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\sound\glock.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.500000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The Glock 17 is a handgun manufactured by Glock. It is much like a Glock 17 with a fire selector switch on its slide that enables it to fire in semi-automatic or fully automatic modes. Rotating the switch toward the bottom of the frame allows for fully automatic fire, while rotating it to the top switches the gun to semi-automatic. The Glock 18 appears identical to the Glock 17, with the addition of the fire selector. However, the internal dimensions of the main parts of the Glock 18 are slightly different from the Glock 17, and are not interchangeable. This was done by Glock so that the Glock 17 could not be considered a semi-automatic version of the Glock 18; rather they are two separate pistols.";
		};
	};
	class RH_g17sd: RH_g17
	{
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Silencer";
				att = "Attachment_Sup";
				out = "RH_g17";
			};
		};
		scope=2;
		model="\RH_de\RH_g17sd.p3d";
		modelOptics="-";
		picture="\RH_de\inv\g17sd.paa";
		fireLightDuration=0;
		fireLightIntensity=0;
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		displayName="Glock 17 SD";
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\glock_reload.wss",
			0.100000,
			1,
			20
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\m9sd.wss",
				0.316228,
				1,
				200
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.500000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The Glock 17 is a handgun manufactured by Glock. It is much like a Glock 17 with a fire selector switch on its slide that enables it to fire in semi-automatic or fully automatic modes. Rotating the switch toward the bottom of the frame allows for fully automatic fire, while rotating it to the top switches the gun to semi-automatic. The Glock 18 appears identical to the Glock 17, with the addition of the fire selector. However, the internal dimensions of the main parts of the Glock 18 are slightly different from the Glock 17, and are not interchangeable. This was done by Glock so that the Glock 17 could not be considered a semi-automatic version of the Glock 18; rather they are two separate pistols.";
		};
	};
	class RH_g19: Pistol
	{
		scope=2;
		model="\RH_de\RH_g19.p3d";
		modelOptics="-";
		picture="\RH_de\inv\g19.paa";
		distanceZoomMin=56;
		distanceZoomMax=56;
		optics="true";
		displayName="Glock 19";
		drySound[]=
		{
			"\ca\Weapons\Data\Sound\T33_dry_v1",
			0.010000,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\RH_de\sound\glock_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=
		{
			"9x19_x1",
			"9x19_SD_x1",
			"9x19_HP_x1",
			"9x19_TRACER_x1",
			"9x19_RUBBER_x1",
			"9x19_BT_x1",
			"RH_19Rnd_9x19_g18",
			"RH_19Rnd_9x19_g18SD",
			"RH_19Rnd_9x19_g18_hp",
			"RH_19Rnd_9x19_g18_tracer",
			"RH_19Rnd_9x19_g18_rubber",
			"RH_19Rnd_9x19_g18_bt",
			"RH_33Rnd_9x19_g18",
			"RH_33Rnd_9x19_g18SD",
			"RH_33Rnd_9x19_g18_hp",
			"RH_33Rnd_9x19_g18_tracer",
			"RH_33Rnd_9x19_g18_rubber",
			"RH_33Rnd_9x19_g18_bt",
			"17Rnd_9x19_glock17",
			"17Rnd_9x19_glock17sd",
			"17Rnd_9x19_glock17SD",
			"17Rnd_9x19_glock17_hp",
			"17Rnd_9x19_glock17_tracer",
			"17Rnd_9x19_glock17_rubber",
			"17Rnd_9x19_glock17_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\sound\glock.wss",
				0.794328,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.050000;
			recoil="RH_9x19_PistolRecoil";
			recoilProne="RH_9x19_PistolRecoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.500000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The Glock 17 is a handgun manufactured by Glock. It is much like a Glock 17 with a fire selector switch on its slide that enables it to fire in semi-automatic or fully automatic modes. Rotating the switch toward the bottom of the frame allows for fully automatic fire, while rotating it to the top switches the gun to semi-automatic. The Glock 18 appears identical to the Glock 17, with the addition of the fire selector. However, the internal dimensions of the main parts of the Glock 18 are slightly different from the Glock 17, and are not interchangeable. This was done by Glock so that the Glock 17 could not be considered a semi-automatic version of the Glock 18; rather they are two separate pistols.";
		};
	};
	class RH_g19t: RH_g19
	{
		model="\RH_de\RH_g19t.p3d";
		picture="\RH_de\inv\g19t.paa";
		displayName="Glock 19 Tan";
	};
	class RH_vz61: Pistol
	{
		scope=2;
		model="\RH_de\RH_vz61.p3d";
		modelOptics="-";
		optics=1;
		distanceZoomMin=56;
		distanceZoomMax=56;
		dexterity=1.750000;
		displayName="Vz61 Skorpion";
		picture="\RH_de\inv\vz61.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[]=
		{
			"\RH_de\sound\vz61_reload.wss",
			0.100000,
			1,
			20
		};
		magazines[]=	
		{
			"32ACP_x1",
			"32ACP_HP_x1",
			"32ACP_TRACER_x1",
			"32ACP_RUBBER_x1",
			"32ACP_BT_x1",
			"RH_20Rnd_32cal_vz61",
			"RH_20Rnd_32cal_vz61_hp",
			"RH_20Rnd_32cal_vz61_tracer",
			"RH_20Rnd_32cal_vz61_rubber",
			"RH_20Rnd_32cal_vz61_bt"
		};
		descriptionShort="<br />Ammo: .32 ACP";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\vz61.wss",
				1.778279,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.015000;
			reloadTime=0.070000;
			recoil="RH_vz61Recoil";
			recoilProne="RH_vz61Recoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=0;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=1.500000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.400000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.400000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\vz61.wss",
				1.778279,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			burst=1;
			dispersion=0.015000;
			reloadTime=0.070000;
			recoil="RH_vz61Recoil";
			recoilProne="RH_vz61Recoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=2;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.100000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.700000;
			midRange=20;
			midRangeProbab=0.800000;
			maxRange=40;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The vz 61 (correctly Sa vz 61 short for samopal vzor 61 submachine gun model 1961), or Škorpion (scorpion), is a Czechoslovak submachine gun. It is designed to fire 7.65 x 17 mm ammunition, also known as .32 ACP. Variants in 9 x 17 mm (380 ACP), 9 x 18 mm Makarov, and 9 x 19 mm have also been reported.";
		};
	};
	class RH_tec9: Pistol
	{
		scope=2;
		model="\RH_de\RH_tec9.p3d";
		modelOptics="-";
		optics=1;
		distanceZoomMin=50;
		distanceZoomMax=50;
		dexterity=1.750000;
		displayName="Intratec TEC9";
		picture="\RH_de\inv\tec9.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[]=
		{
			"\RH_de\sound\tec9_reload.wss",
			0.056234,
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
			"RH_30Rnd_9x19_tec",
			"RH_30Rnd_9x19_tecSD",
			"RH_30Rnd_9x19_tec_hp",
			"RH_30Rnd_9x19_tec_tracer",
			"RH_30Rnd_9x19_tec_rubber",
			"RH_30Rnd_9x19_tec_bt"
		};
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\tec9.wss",
				1.778279,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.015000;
			reloadTime=0.070000;
			recoil="RH_9x19_SMG_Recoil";
			recoilProne="RH_9x19_SMG_Recoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=0;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.500000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.500000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\tec9.wss",
				1.778279,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			burst=1;
			dispersion=0.015000;
			reloadTime=0.070000;
			recoil="RH_pistolBase_Auto";
			recoilProne="RH_pistolBase_Auto";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=2;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.100000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.500000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="The Intratec TEC-9 is a blowback-operated, semi-automatic 9 mm Para caliber firearm, classified by the Bureau of Alcohol, Tobacco, and Firearms as a handgun. It is made of inexpensive molded polymer and stamped steel parts. Magazines holding 10-, 20-, 32-, 36- and 50-round capacities are available. There are three different models, all of which are commonly referred to as the TEC-9, although only one model was actually sold under that name.";
		};
	};
	class RH_muzi: Pistol
	{
		scope=2;
		model="\RH_de\RH_muzi.p3d";
		modelOptics="-";
		optics=1;
		distanceZoomMin=57;
		distanceZoomMax=57;
		dexterity=1.750000;
		displayName="Micro Uzi";
		picture="\RH_de\inv\muzi.paa";
		UiPicture="\CA\weapons\data\Ico\i_regular_CA.paa";
		reloadMagazineSound[]=
		{
			"\RH_de\sound\muzi_reload.wss",
			0.056234,
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
		descriptionShort="<br />Ammo: 9x19 mm";
		modes[]=
		{
			"Single",
			"Fullauto"
		};
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\muzi.wss",
				1.778279,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundContinuous=0;
			dispersion=0.011000;
			reloadTime=0.048000;
			recoil="RH_9x19_SMG_Recoil";
			recoilProne="RH_9x19_SMG_Recoil";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=0;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.200000;
			midRange=30;
			midRangeProbab=0.700000;
			maxRange=50;
			maxRangeProbab=0.200000;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"\RH_de\Sound\muzi.wss",
				1.778279,
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
			multiplier=1;
			burst=1;
			dispersion=0.011000;
			reloadTime=0.048000;
			recoil="RH_pistolBase_Auto";
			recoilProne="RH_pistolBase_Auto";
			ffCount=1;
			ffMagnitude=0.500000;
			ffFrequency=11;
			autofire=2;
			flash="gunfire";
			flashSize=0.100000;
			useAction=0;
			useActionTitle="";
			showToPlayer=1;
			aiRateOfFire=0.050000;
			aiRateOfFireDistance=50;
			minRange=2;
			minRangeProbab=0.700000;
			midRange=20;
			midRangeProbab=0.700000;
			maxRange=40;
			maxRangeProbab=0.200000;
		};
		class Library
		{
			libTextDesc="Micro Uzi, At only 250 mm (9.84 inches) in length, it is slightly larger than a standard pistol and is about as small as the original Uzi design could be made. It fires from a closed bolt position and has a side-folding stock similar to the one on the Mini Uzi. The forward handgrip is completely eliminated. First introduced in 1986, the Micro Uzi weighs 2.2 kilograms less than the Uzi when unloaded and fires at a rate of 1250 rpm, which can unload the 20 round magazine in 0.96 seconds.";
		};
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles;
	class ThingEffect;
	class Land;
	class Man;
	class CAManBase;
	class ReammoBox;
	class SoldierWB;
	class USBasicAmmunitionBox: ReammoBox
	{
	};
	class RHpistammobox: USBasicAmmunitionBox
	{
		displayName="RH Pistol Ammo Box";
		class TransportWeapons
		{
			class xxRH_deagle
			{
				weapon="RH_deagle";
				count=3;
			};
			class xxRH_Deagleg
			{
				weapon="RH_Deagleg";
				count=3;
			};
			class xxRH_Deagles
			{
				weapon="RH_Deagles";
				count=3;
			};
			class xxRH_deaglem
			{
				weapon="RH_deaglem";
				count=3;
			};
			class xxRH_Deaglemz
			{
				weapon="RH_Deaglemz";
				count=3;
			};
			class xxRH_Deaglemzb
			{
				weapon="RH_Deaglemzb";
				count=3;
			};
			class xxRH_browninghp
			{
				weapon="RH_browninghp";
				count=3;
			};
			class xxRH_anac
			{
				weapon="RH_anac";
				count=3;
			};
			class xxRH_anacg
			{
				weapon="RH_anacg";
				count=3;
			};
			class xxRH_bull
			{
				weapon="RH_bull";
				count=3;
			};
			class xxRH_python
			{
				weapon="RH_python";
				count=3;
			};
			class xxRH_mk22
			{
				weapon="RH_mk22";
				count=3;
			};
			class xxRH_mk22sd
			{
				weapon="RH_mk22sd";
				count=3;
			};
			class xxRH_mk22v
			{
				weapon="RH_mk22v";
				count=3;
			};
			class xxRH_mk22vsd
			{
				weapon="RH_mk22vsd";
				count=3;
			};
			class xxRH_usp
			{
				weapon="RH_usp";
				count=3;
			};
			class xxRH_uspsd
			{
				weapon="RH_uspsd";
				count=3;
			};
			class xxRH_uspm
			{
				weapon="RH_uspm";
				count=3;
			};
			class xxRH_m1911
			{
				weapon="RH_m1911";
				count=3;
			};
			class xxRH_m1911sd
			{
				weapon="RH_m1911sd";
				count=3;
			};
			class xxRH_m1911old
			{
				weapon="RH_m1911old";
				count=3;
			};
			class xxRH_m9
			{
				weapon="RH_m9";
				count=3;
			};
			class xxRH_m9sd
			{
				weapon="RH_m9sd";
				count=3;
			};
			class xxRH_m9c
			{
				weapon="RH_m9c";
				count=3;
			};
			class xxRH_m9csd
			{
				weapon="RH_m9csd";
				count=3;
			};
			class xxRH_m93r
			{
				weapon="RH_m93r";
				count=3;
			};
			class xxRH_g17
			{
				weapon="RH_g17";
				count=3;
			};
			class xxRH_g17sd
			{
				weapon="RH_g17sd";
				count=3;
			};
			class xxRH_g18
			{
				weapon="RH_g18";
				count=3;
			};
			class xxRH_g19
			{
				weapon="RH_g19";
				count=3;
			};
			class xxRH_g19t
			{
				weapon="RH_g19t";
				count=3;
			};
			class xxRH_tt33
			{
				weapon="RH_tt33";
				count=3;
			};
			class xxRH_mk2
			{
				weapon="RH_mk2";
				count=3;
			};
			class xxRH_p226
			{
				weapon="RH_p226";
				count=3;
			};
			class xxRH_p226s
			{
				weapon="RH_p226s";
				count=3;
			};
			class xxRH_p38
			{
				weapon="RH_p38";
				count=3;
			};
			class xxRH_ppk
			{
				weapon="RH_ppk";
				count=3;
			};
			class xxRH_vz61
			{
				weapon="RH_vz61";
				count=3;
			};
			class xxRH_tec9
			{
				weapon="RH_tec9";
				count=3;
			};
			class xxRH_muzi
			{
				weapon="RH_muzi";
				count=3;
			};
		};
		class TransportMagazines
		{
			class xxRH_7Rnd_50_AE
			{
				magazine="RH_7Rnd_50_AE";
				count=25;
			};
			class xxRH_6Rnd_44_Mag
			{
				magazine="RH_6Rnd_44_Mag";
				count=25;
			};
			class xxRH_6Rnd_357_Mag
			{
				magazine="RH_6Rnd_357_Mag";
				count=25;
			};
			class xxRH_8Rnd_9x19_Mk
			{
				magazine="RH_8Rnd_9x19_Mk";
				count=25;
			};
			class xxRH_8Rnd_9x19_Mksd
			{
				magazine="RH_8Rnd_9x19_Mksd";
				count=25;
			};
			class xxRH_8Rnd_762_tt33
			{
				magazine="RH_8Rnd_762_tt33";
				count=25;
			};
			class xxRH_10Rnd_22LR_mk2
			{
				magazine="RH_10Rnd_22LR_mk2";
				count=25;
			};
			class xxRH_7Rnd_32cal_ppk
			{
				magazine="RH_7Rnd_32cal_ppk";
				count=25;
			};
			class xxRH_8Rnd_9x19_P38
			{
				magazine="RH_8Rnd_9x19_P38";
				count=25;
			};
			class xxRH_13Rnd_9x19_BHP
			{
				magazine="RH_13Rnd_9x19_BHP";
				count=25;
			};
			class xx15Rnd_9x19_M9
			{
				magazine="15Rnd_9x19_M9";
				count=25;
			};
			class xx15Rnd_9x19_M9SD
			{
				magazine="15Rnd_9x19_M9SD";
				count=25;
			};
			class xx17Rnd_9x19_glock17
			{
				magazine="17Rnd_9x19_glock17";
				count=25;
			};
			class xx17Rnd_9x19_glock17SD
			{
				magazine="17Rnd_9x19_glock17SD";
				count=25;
			};
			class xxRH_19Rnd_9x19_g18
			{
				magazine="RH_19Rnd_9x19_g18";
				count=25;
			};
			class xxRH_33Rnd_9x19_g18
			{
				magazine="RH_33Rnd_9x19_g18";
				count=25;
			};
			class xxRH_20Rnd_9x19_M93
			{
				magazine="RH_20Rnd_9x19_M93";
				count=25;
			};
			class xxRH_20Rnd_32cal_vz61
			{
				magazine="RH_20Rnd_32cal_vz61";
				count=25;
			};
			class xxRH_12Rnd_45cal_usp
			{
				magazine="RH_12Rnd_45cal_usp";
				count=25;
			};
			class xxRH_8Rnd_45cal_m1911
			{
				magazine="RH_8Rnd_45cal_m1911";
				count=25;
			};
			class xxRH_8Rnd_45cal_m1911_hp
			{
				magazine="RH_8Rnd_45cal_m1911_hp";
				count=25;
			};
			class xxRH_15Rnd_9x19_usp
			{
				magazine="RH_15Rnd_9x19_usp";
				count=25;
			};
			class xxRH_15Rnd_9x19_uspsd
			{
				magazine="RH_15Rnd_9x19_uspsd";
				count=25;
			};
			class xxRH_30Rnd_9x19_tec
			{
				magazine="RH_30Rnd_9x19_tec";
				count=25;
			};
			class xxRH_32Rnd_9x19_Muzi
			{
				magazine="RH_32Rnd_9x19_Muzi";
				count=25;
			};
		};
	};
};
