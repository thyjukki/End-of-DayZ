class CfgPatches
{
	class KPFS_RPZB54
	{
		units[]={};
		weapons[]=
		{
			"KPFS_RPzB54"
		};
		requiredVersion=1.620000;
		requiredAddons[]={};
	};
};
class cfgAmmo
{
	class RocketBase;
	class KPFS_R_88mm_4322_RPzB: RocketBase
	{
		hit=335;
		indirectHit=15;
		indirectHitRange=10;
		model="kpfs_weapons2\rkb54\grenade_4322.p3d";
		cost=200;
		initTime=0.010000;
		thrust=0.100000;
		thrustTime=2.000000;
		maxSpeed=390;
		sideAirFriction=0.500000;
		timeToLive=12;
		fuseDistance=0;
		visibleFire=24;
		audibleFire=16;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissile="missile2";
		whistleDist=2;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KPFS_1Rnd_88mm_4322: CA_Magazine
	{
		scope=2;
		displayName="$STR_KPFS_PANZERSCHRECK_GRENADE";
		initSpeed=100;
		ammo="KPFS_R_88mm_4322_RPzB";
		count=1;
		type="3 * 256";
		picture="\kpfs_weapons2\data\icons\m_panzerschreck_ca.paa";
		descriptionShort="";
		modelSpecial="kpfs_weapons2\rkb54\panzerschreck.p3d";
	};
};
class Mode_SemiAuto
{
	displayName="$STR_DN_MODE_SEMIAUTO";
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName="$STR_DN_MODE_FULLAUTO";
};
class cfgWeapons
{
	class Launcher;
	class KPFS_RPzB54: Launcher
	{
		scope=2;
		displayName="$STR_KPFS_PANZERSCHRECK";
		model="kpfs_weapons2\rkb54\panzerschreck_e.p3d";
		modelOptics="-";
		magazines[]=
		{
			"KPFS_1Rnd_88mm_4322"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"kpfs_weapons2\rkb54\panzerschreck.rtm"
		};
		sound[]=
		{
			"\kpfs_weapons2\sound\Bazooka_01.wav",
			10.000000,
			1,
			1200
		};
		drySound[]=
		{
			"\Ca\sounds\Weapons\rockets\dry",
			0.000100,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\Ca\sounds\Weapons\rockets\flare_reload",
			0.000316,
			1,
			20
		};
		soundFly[]=
		{
			"\Ca\sounds\Weapons\rockets\rocket_fly1",
			100.000000,
			1.500000,
			700
		};
		picture="\kpfs_weapons2\data\icons\w_panzerschreck_ca.paa";
		UiPicture="\ca\weapons\data\ico\i_at_ca.paa";
		recoil="launcherBase";
		minRange=10;
		midRange=150;
		maxRange=200;
		aiRateOfFire=10.000000;
		aiRateOfFireDistance=150;
		class Library
		{
			libTextDesc="$STR_LIB_M136";
		};
		descriptionShort="$STR_DSS_M136";
	};
};
