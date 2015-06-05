class CfgPatches
{
	class KPFS_RPG2
	{
		units[]=
		{
			"KPFS_RPG2"
		};
		weapons[]={};
		requiredVersion=1.040000;
		requiredAddons[]=
		{
			"CAWeapons_E",
			"CAWeapons"
		};
	};
};
class CfgWeapons
{
	class RPG7V;
	class KPFS_RPG2: RPG7V
	{
		model="\kpfs_weapons2\RPG\rpg2.p3d";
		displayName="$STR_KPFS_RPG2";
		magazines[]=
		{
			"KPFS_PG2"
		};
		htMin=1;
		htMax=420;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		aiRateOfFire=10.000000;
		aiRateOfFireDistance=125;
		minRange=10;
		midRange=75;
		maxRange=150;
	};
};
class CfgMagazines
{
	class PG7V;
	class KPFS_PG2: PG7V
	{
		displayName="$STR_KPFS_PG2";
		modelSpecial="\kpfs_weapons2\RPG\rpg2_loaded.p3d";
		initSpeed=85;
	};
};
