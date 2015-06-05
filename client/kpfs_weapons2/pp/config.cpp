class CfgPatches
{
	class KPFS_WALTHER_PP
	{
		units[]={};
		weapons[]=
		{
			"KPFS_Walther_PP"
		};
		requiredVersion=1.000000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E",
			"KPFS_SAUER_38H"
		};
	};
};
class cfgWeapons
{
	class Makarov;
	class KPFS_Walther_PP: Makarov
	{
		scope=2;
		model="kpfs_weapons2\pp\pp.p3d";
		picture="\kpfs_weapons2\data\icons\w_pp_ca.paa";
		displayName="$STR_KPFS_PP";
		magazines[]=
		{
			"kpfs_8Rnd_765x17"
		};
		begin1[]=
		{
			"kpfs_weapons2\sound\luger_01.wav",
			0.794328,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_PP";
		};
		class Armory
		{
			author="$STR_AUTHOR_KPFS";
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={50};
		discreteDistanceInitIndex=0;
	};
};
