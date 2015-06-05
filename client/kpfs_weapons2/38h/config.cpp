class CfgPatches
{
	class KPFS_SAUER_38H
	{
		units[]={};
		weapons[]=
		{
			"KPFS_Sauer_38h"
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
	class B_765x17_Ball: B_9x18_Ball
	{
		hit=6;
		cartridge="FxCartridge_9mm";
		cost=5;
		typicalSpeed=310;
		airFriction=-0.002629;
		caliber=0.320000;
	};
};
class CfgMagazines
{
	class 15Rnd_9x19_M9;
	class kpfs_8Rnd_765x17: 15Rnd_9x19_M9
	{
		displayName="$STR_KPFS_38H_MAG";
		picture="\kpfs_weapons2\data\icons\m_38h_ca.paa";
		type=16;
		ammo="B_765x17_Ball";
		count=8;
		initSpeed=300;
		descriptionShort="$STR_KPFSS_38H_MAG";
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\luger_reload.wav",
			0.050000,
			1
		};
		class Library
		{
			libTextDesc="The 7.65 mm pistol cartridge (7.65 x 17 mm , .32 ACP) was developed by Browning.";
		};
	};
};
class cfgWeapons
{
	class Makarov;
	class KPFS_Sauer_38h: Makarov
	{
		scope=2;
		model="kpfs_weapons2\38h\38h.p3d";
		picture="\kpfs_weapons2\data\icons\w_38h_ca.paa";
		displayName="$STR_KPFS_38H";
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
		reloadMagazineSound[]=
		{
			"\kpfs_weapons2\sound\luger_reload.wav",
			0.050000,
			1
		};
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_38H";
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
