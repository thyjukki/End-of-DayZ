class CfgPatches
{
	class KPFS_Ammo_WW2
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.560000;
		requiredAddons[]=
		{
			"CAWeapons",
			"CAWeapons_E"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgAmmo
{
	class GrenadeHand;
	class KPFS_GrenadeHand: GrenadeHand
	{
		deflecting=30;
		cost=50;
		whistleDistance=5.500000;
	};
	class KPFS_HGR24: KPFS_GrenadeHand
	{
		model="\kpfs_weapons2\ammo\shg24.p3d";
		hit=10;
		indirectHit=20;
		IndirecthitRange=10;
		visibleFire=2;
		audibleFire=0.250000;
		visibleFireTime=5;
		fuseDistance=0;
		whistleDist=15;
		explosionTime=8;
		cost=10;
	};
	class KPFS_HGR39: KPFS_GrenadeHand
	{
		model="\kpfs_weapons2\ammo\m39.p3d";
		hit=10;
		indirectHit=30;
		IndirecthitRange=10;
		visibleFire=2;
		audibleFire=0.250000;
		visibleFireTime=5;
		fuseDistance=0;
		whistleDist=15;
		explosionTime=4;
		cost=10;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class KPFS_HandGrenade: CA_Magazine
	{
		type="1 *256";
		count=1;
		initSpeed=18;
		maxLeadSpeed=7;
		sound[]=
		{
			"\kpfs_weapons2\sound\grenade_throw.wav",
			0.000316,
			1
		};
	};
	class KPFS_HandGrenade_24: KPFS_HandGrenade
	{
		scope=2;
		displayName="$STR_KPFS_HandGrenade_24";
		picture="\kpfs_weapons2\data\icons\m_shg24_ca.paa";
		model="\kpfs_weapons2\ammo\shg24.p3d";
		ammo="KPFS_HGR24";
		initSpeed=17;
		sound[]=
		{
			"\kpfs_weapons2\sound\german_grenade_throw.wav",
			0.000316,
			1
		};
	};
	class KPFS_HandGrenade_39: KPFS_HandGrenade
	{
		scope=2;
		displayName="$STR_KPFS_HandGrenade_39";
		picture="\kpfs_weapons2\data\icons\m_m39_ca.paa";
		model="\kpfs_weapons2\ammo\m39.p3d";
		ammo="KPFS_HGR39";
		initSpeed=20;
	};
};
class ThrowMuzzle;
class MineMuzzle;
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]=
		{
			"HandGrenade_Stone",
			"HandGrenadeMuzzle",
			"KPFS_HandGrenadeMuzzle"
		};
		class HandGrenadeMuzzle;
		class KPFS_HandGrenadeMuzzle: HandGrenadeMuzzle
		{
			magazines[]=
			{
				"KPFS_HandGrenade_24",
				"KPFS_HandGrenade_39"
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class KPFS_GrenadeBox_WW2: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_KPFS_GRENADEBOX_WW2";
		model="\ca\weapons\AmmoBoxes\USBasicAmmo.p3d";
		class TransportMagazines
		{
			class _xx_KPFS_HandGrenade_24
			{
				magazine="KPFS_HandGrenade_24";
				count=100;
			};
			class _xx_KPFS_HandGrenade_39
			{
				magazine="KPFS_HandGrenade_39";
				count=100;
			};
		};
	};
};
