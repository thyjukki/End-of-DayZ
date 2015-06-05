class CfgPatches
{
	class KPFS_WALTHER_M9
	{
		units[]={};
		weapons[]=
		{
			"KPFS_Walther_M9"
		};
		requiredVersion=1.000000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};
class CfgAmmo
{
	class B_9x18_Ball;
	class B_635x15_Ball: B_9x18_Ball
	{
		hit=5;
		cartridge="FxCartridge_9mm";
		cost=5;
		typicalSpeed=210;
		airFriction=-0.001629;
		caliber=0.260000;
	};
};
class CfgMagazines
{
	class 15Rnd_9x19_M9;
	class kpfs_6Rnd_635x15: 15Rnd_9x19_M9
	{
		displayName="$STR_KPFS_WM9_MAG";
		picture="\kpfs_weapons2\data\icons\m_w9_ca.paa";
		type=16;
		ammo="B_635x15_Ball";
		count=6;
		initSpeed=300;
		descriptionShort="$STR_KPFSS_WM9_MAG";
		class Library
		{
			libTextDesc="The 6.35x15.5 was made for Walther pocket guns.";
		};
	};
};
class cfgWeapons
{
	class Makarov;
	class KPFS_Walther_M9: Makarov
	{
		scope=2;
		model="kpfs_weapons2\w9\walther9.p3d";
		picture="\kpfs_weapons2\data\icons\w_w9_ca.paa";
		displayName="$STR_KPFS_WALTHER_M9";
		magazines[]=
		{
			"kpfs_6Rnd_635x15"
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
			libTextDesc="$STR_KPFS_LIB_WALTHER_M9";
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
