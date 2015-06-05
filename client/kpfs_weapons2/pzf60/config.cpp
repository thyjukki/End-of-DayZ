class CfgPatches
{
	class KPFS_Panzerfaust
	{
		units[]={};
		weapons[]=
		{
			"KPFS_Pzf60"
		};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};
class cfgRecoils
{
	KPFS_PzFaustrecoil[]=
	{
		0.050000,
		"0.003*5",
		0.005000,
		0.050000,
		"0.004*5",
		0.010000,
		0.050000,
		"0.003*5",
		0.011000,
		0.250000,
		0.000000,
		0.000000
	};
};
class CfgAmmo
{
	class RocketBase;
	class KPFS_Pzf60_HEAT: RocketBase
	{
		model="\KPFS_weapons2\pzf60\Rocket";
		hit=1200;
		cartridge="";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=20;
		cost=200;
		maxspeed=100.800003;
		timeToLive=10;
		sideAirFriction=0.200000;
		initTime=0;
		thrustTime=0;
		thrust=0;
		airFriction=-0.050000;
		deflecting=10;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KPFS_PZF60_HEAT: CA_Magazine
	{
		scope=2;
		displayName="$STR_KPFS_PZF60";
		ammo="KPFS_Pzf60_HEAT";
		type="6 * 256";
		count=1;
		modelSpecial="\KPFS_weapons2\pzf60\panzerfaust60";
		picture="\KPFS_weapons2\data\icons\m_pzf60_ca.paa";
		initSpeed=45;
		descriptionShort="HEAT";
	};
};
class CfgWeapons
{
	class Launcher;
	class KPFS_PZF60: Launcher
	{
		scope=2;
		displayName="$STR_KPFS_PZF60";
		model="\KPFS_weapons2\pzf60\panzerfaust60_e";
		modelSpecial="\KPFS_weapons2\pzf60\panzerfaust60";
		optics=1;
		modelOptics="";
		magazines[]=
		{
			"KPFS_PZF60_HEAT"
		};
		picture="\KPFS_weapons2\data\icons\w_pzf60_ca.paa";
		UiPicture="\CA\weapons\data\Ico\i_at_CA.paa";
		recoil="KPFS_PzFaustrecoil";
		soundContinuous=0;
		ffCount=1;
		aiRateOfFire=1;
		dispersion=0.007000;
		minRange=7;
		minRangeProbab=0.900000;
		midRange=30;
		midRangeProbab=0.900000;
		maxRange=35;
		maxRangeProbab=0.900000;
		autoReload=0;
		aiDispersionCoefY=2.000000;
		aiDispersionCoefX=2.000000;
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_PZF60";
		};
		descriptionShort="$STR_DSS_RPG18";
	};
};
