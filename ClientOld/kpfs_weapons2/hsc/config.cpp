class CfgPatches
{
	class KPFS_HSC
	{
		units[]={};
		weapons[]=
		{
			"KPFS_Mauser_Hsc"
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
	class KPFS_Mauser_Hsc: Makarov
	{
		scope=2;
		model="kpfs_weapons2\hsc\hsc.p3d";
		picture="\kpfs_weapons2\data\icons\w_hsc_ca.paa";
		displayName="$STR_KPFS_HSC";
		magazines[]=
		{
			"kpfs_8Rnd_765x17"
		};
		begin1[]=
		{
			"kpfs_weapons2\sound\hsc",
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
			libTextDesc="$STR_KPFS_LIB_HSC";
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
