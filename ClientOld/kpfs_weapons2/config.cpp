class CfgPatches
{
	class KPFS_Weapons_WW2
	{
		units[]=
		{
			"KPFS_P52"
		};
		weapons[]={};
		requiredVersion=1.000000;
		requiredAddons[]=
		{
			"CAWeapons"
		};
	};
};
class CfgRecoils
{
	p22x[]=
	{
		0.040000,
		"0.006*( (5/7))",
		"0.05*.5*( (5/7))",
		0.010000,
		"0.009*( (5/7))",
		0,
		0.045000,
		0,
		"-0.025*.5*( (5/7))"
	};
	p226[]=
	{
		0.040000,
		"0.006*( (5/7))",
		"0.05*.5*( (5/7))",
		0.010000,
		"0.009*( (5/7))",
		0,
		0.045000,
		0,
		"-0.025*.5*( (5/7))"
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class Colt1911;
	class KPFS_P52: Colt1911
	{
		scope=2;
		displayName="$STR_KPFS_P52";
		class Library
		{
			libTextDesc="$STR_KPFS_LIB_P52";
		};
	};
	class AK_47_M;
	class KPFS_MPi_K: AK_47_M
	{
		scope=2;
		displayname="$STR_KPFS_MPI_K";
		class Single: Mode_SemiAuto
		{
			begin1[]=
			{
				"kpfs_weapons2\sound\ak47.wav",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.100000;
			recoil="recoil_single_primary_5outof10";
			recoilProne="recoil_single_primary_prone_5outof10";
			dispersion=0.001800;
			minRange=2;
			minRangeProbab=0.300000;
			midRange=200;
			midRangeProbab=0.700000;
			maxRange=400;
			maxRangeProbab=0.050000;
		};
		class Burst: Mode_Burst
		{
			begin1[]=
			{
				"kpfs_weapons2\sound\ak47.wav",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundBurst=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil="recoil_auto_primary_4outof10";
			recoilProne="recoil_auto_primary_prone_4outof10";
			dispersion=0.001800;
			minRange=1;
			minRangeProbab=0.300000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
			showToPlayer=0;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]=
			{
				"kpfs_weapons2\sound\ak47.wav",
				1.778279,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.100000;
			ffCount=30;
			recoil="recoil_auto_primary_5outof10";
			recoilProne="recoil_auto_primary_prone_5outof10";
			dispersion=0.001800;
			minRange=0;
			minRangeProbab=0.100000;
			midRange=100;
			midRangeProbab=0.700000;
			maxRange=200;
			maxRangeProbab=0.050000;
		};
	};
};
class cfgVehicles
{
	class ReammoBox;
	class KPFS_WeaponBox_WW2: ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_KPFS_WEAPONBOX_WW2";
		model="\kpfs_weapons2\ammo\ammocrates.p3d";
		class TransportMagazines
		{
			class _xx_KPFS_8Rnd_9x19_P38
			{
				magazine="KPFS_8Rnd_9x19_P38";
				count=10;
			};
			class _xx_kpfs_8Rnd_765x17
			{
				magazine="kpfs_8Rnd_765x17";
				count=10;
			};
			class _xx_kpfs_6Rnd_635x15
			{
				magazine="kpfs_6Rnd_635x15";
				count=10;
			};
			class _xx_KPFS_30Rnd_792x33_STG44
			{
				magazine="KPFS_30Rnd_792x33_STG44";
				count=100;
			};
			class _xx_KPFS_KPFS_250Rnd_MG42
			{
				magazine="KPFS_250Rnd_MG42";
				count=50;
			};
			class _xx_KPFS_PZF60_Heat
			{
				magazine="KPFS_PZF60_Heat";
				count=20;
			};
			class _xx_KPFS_HandGrenade_24
			{
				magazine="KPFS_HandGrenade_24";
				count=50;
			};
			class _xx_KPFS_HandGrenade_39
			{
				magazine="KPFS_HandGrenade_39";
				count=50;
			};
		};
		class TransportWeapons
		{
			class _xx_KPFS_Walther_M9
			{
				weapon="KPFS_Walther_M9";
				count=1;
			};
			class _xx_KPFS_Sauer_38h
			{
				weapon="KPFS_Sauer_38h";
				count=1;
			};
			class _xx_KPFS_Mauser_Hsc
			{
				weapon="KPFS_Mauser_Hsc";
				count=1;
			};
			class _xx_KPFS_Walther_PP
			{
				weapon="KPFS_Walther_PP";
				count=1;
			};
			class _xx_KPFS_P38
			{
				weapon="KPFS_P38";
				count=1;
			};
			class _xx_KPFS_P38k
			{
				weapon="KPFS_P38k";
				count=1;
			};
			class _xx_KPFS_MG42
			{
				weapon="KPFS_MG42";
				count=1;
			};
			class _xx_KPFS_MP44
			{
				weapon="KPFS_MP44";
				count=1;
			};
			class _xx_KPFS_PZF60
			{
				weapon="KPFS_PZF60";
				count=1;
			};
		};
	};
	class USBasicWeaponsBox;
	class KPFS_WeaponBox_AOZ: USBasicWeaponsBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_KPFS_WEAPONBOX_AOZ";
		class TransportMagazines
		{
			class _xx_KPFS_M28A2_HEAT
			{
				magazine="KPFS_M28A2_HEAT";
				count=10;
			};
			class _xx_7Rnd_45ACP_1911
			{
				magazine="7Rnd_45ACP_1911";
				count=10;
			};
			class _xx_KPFS_15Rnd_cal30_Carbine
			{
				magazine="KPFS_15Rnd_cal30_Carbine";
				count=50;
			};
			class _xx_KPFS_8Rnd_cal30_60_Gar
			{
				magazine="KPFS_8Rnd_cal30_60_Gar";
				count=200;
			};
			class _xx_KPFS_30Rnd_45ACP_Thompson
			{
				magazine="KPFS_30Rnd_45ACP_Thompson";
				count=100;
			};
			class _xx_KPFS_20Rnd_cal30_60_bar
			{
				magazine="KPFS_20Rnd_cal30_60_bar";
				count=100;
			};
		};
		class TransportWeapons
		{
			class _xx_KPFS_P52
			{
				weapon="KPFS_P52";
				count=1;
			};
			class _xx_KPFS_M1_Carbine
			{
				weapon="KPFS_M1_Carbine";
				count=1;
			};
			class _xx_KPFS_M1_Garand
			{
				weapon="KPFS_M1_Garand";
				count=1;
			};
			class _xx_KPFS_M1_Garand_M84
			{
				weapon="KPFS_M1_Garand_M84";
				count=1;
			};
			class _xx_KPFS_BAR
			{
				weapon="KPFS_BAR";
				count=1;
			};
			class _xx_KPFS_M1_Thompson
			{
				weapon="KPFS_M1_Thompson";
				count=1;
			};
			class _xx_KPFS_M20A1B1_BW
			{
				weapon="KPFS_M20A1B1_BW";
				count=1;
			};
		};
	};
	class RUBasicWeaponsBox;
	class KPFS_WeaponBox_SOZ: RUBasicWeaponsBox
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_KPFS_WEAPONBOX_SOZ";
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine="30Rnd_762x39_AK47";
				count=100;
			};
			class _xx_KPFS_100Rnd_762x39_RPD
			{
				magazine="KPFS_100Rnd_762x39_RPD";
				count=50;
			};
			class _xx_KPFS_10Rnd_762x39_SKS
			{
				magazine="KPFS_10Rnd_762x39_SKS";
				count=200;
			};
			class _xx_KPFS_PG2
			{
				magazine="KPFS_PG2";
				count=20;
			};
			class _xx_KPFS_8Rnd_762x25_TT33
			{
				magazine="KPFS_8Rnd_762x25_TT33";
				count=10;
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine="8Rnd_9x18_Makarov";
				count=10;
			};
			class _xx_KPFS_71Rnd_762x25_PPSh
			{
				magazine="KPFS_71Rnd_762x25_PPSh";
				count=50;
			};
			class _xx_KPFS_5Rnd_762x54_Mosin
			{
				magazine="KPFS_5Rnd_762x54_Mosin";
				count=200;
			};
		};
		class TransportWeapons
		{
			class _xx_KPFS_TT33
			{
				weapon="KPFS_TT33";
				count=1;
			};
			class _xx_Makarov
			{
				weapon="Makarov";
				count=1;
			};
			class _xx_KPFS_Mosin_Nagant
			{
				weapon="KPFS_Mosin_Nagant";
				count=1;
			};
			class _xx_KPFS_Mosin_Nagant_PU
			{
				weapon="KPFS_Mosin_Nagant_PU";
				count=1;
			};
			class _xx_KPFS_KarS
			{
				weapon="KPFS_KarS";
				count=1;
			};
			class _xx_KPFS_PPSH
			{
				weapon="KPFS_PPSh";
				count=1;
			};
			class _xx_KPFS_MPi_K
			{
				weapon="KPFS_MPi_K";
				count=1;
			};
			class _xx_KPFS_RPG2
			{
				weapon="KPFS_RPG2";
				count=1;
			};
		};
	};
};
