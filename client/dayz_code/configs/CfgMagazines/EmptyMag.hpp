
class emptiedMagazine: CA_Magazine {
	scope=0;
	count=1;
	isEmptyMag = 1;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
	};
};
class RH_7Rnd_32cal_ppk_Empty : emptiedMagazine {
	scope=2;
	type=16;
	displayName="PPK mag (Empty)";
	descriptionshort = "Caliber: 32 ACP<br/>Rounds: 7<br/>Used in: ppk";
	picture="\RH_de\inv\m_ppk.paa";
	model="\RH_de\mags\mag_ppk.p3d";

	class ammoType
	{
		class RH_32ACP {
			ammoMag = "RH_7Rnd_32cal_ppk";
		};
		class RH_32ACP_HP {
			ammoMag = "RH_7Rnd_32cal_ppk_hp";
		};
		class RH_32ACP_TRACER {
			ammoMag = "RH_7Rnd_32cal_ppk_tracer";
		};
		class RH_32ACP_RUBBER {
			ammoMag = "RH_7Rnd_32cal_ppk_rubber";
		};
		class RH_32ACP_BT {
			ammoMag = "RH_7Rnd_32cal_ppk_bt";
		};
	};
};

class 10x_303_Empty : emptiedMagazine { //FIXME
	descriptionshort = "Caliber: .303<br/>Rounds: 10<br/>Used in: Lee Enfield Mk III";
	displayname = "Lee Enfield Mag (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
	scope = 2;

	class ammoType
	{
		class B_303_Ball {
			ammoMag = "10x_303";
		};
	};
};

class RH_6Rnd_357_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName=".357 Magnum (Empty)";
	descriptionshort = "Caliber: .357<br/>Rounds: 6<br/>Used in: python";
	picture="\RH_de\inv\m_44m.paa";
	type=16;

	class ammoType
	{
		class RH_357mag_ball {
			ammoMag = "RH_6Rnd_357_Mag";
		};
	};
};

class KPFS_10Rnd_762x39_SKS_Empty: emptiedMagazine
{
	scope=2;
	picture="\Ca\weapons\Data\Equip\m_M24_CA.paa";
	displayName="SKS Magazine (Empty)";

	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "KPFS_10Rnd_762x39_SKS";
		};
	};
};

class KPFS_5Rnd_762x54_Mosin_Empty: emptiedMagazine
{
	scope=2;
	picture="\kpfs_weapons2\Data\icons\m_sks_ca.paa";
	displayName="Mosin magazine (Empty)";

	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_5Rnd_762x54_Mosin";
		};
	};
};

class KPFS_15Rnd_cal30_Carbine_Empty: emptiedMagazine
{
	scope=2;
	displayName="Carbine magazine (Empty)";
	picture="\kpfs_weapons2\data\icons\m_carbine_ca.paa";
	descriptionShort="$STR_KPFSS_15RND_CAL30";
	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_15Rnd_cal30_Carbine";
		};
	};
};

class KPFS_8Rnd_cal30_60_Gar_Empty: emptiedMagazine
{
	scope=2;
	displayName="Garand clip (Empty)";
	picture="\kpfs_weapons2\data\icons\m_garand_ca.paa";
	descriptionShort="$STR_KPFSS_8RND_CAL30_60";
	class ammoType
	{
		class KPFS_B_762x63_Ball {
			ammoMag = "KPFS_8Rnd_cal30_60_Gar";
		};
	};
};

class 5x_22_LR_17_HMR_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7x64 mm <BR/>Rounds: 5 <BR/>Used in: CZ 550";
	displayname = "CZ 550 Magazine (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "5x_22_LR_17_HMR";
		};
	};
};

class 8Rnd_9x18_Makarov_Empty: emptiedMagazine {
	ammo = "B_9x18_Ball";
	descriptionshort = "Caliber: 9x18 mm Makarov <br/>Rounds: 8 <br/>Used in: Makarov";
	displayname = "Makarov Mag. (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
	scope = 2;
	type = 16;
	class ammoType
	{
		class B_9x18_Ball {
			ammoMag = "8Rnd_9x18_Makarov";
		};
		class B_9x18_SD {
			ammoMag = "8Rnd_9x18_MakarovSD";
		};
	};
};

class RH_8Rnd_762_tt33_Empty: emptiedMagazine
{
	scope=2;
	displayName="TT33 mag (Empty)";
	picture="\RH_de\inv\m_tt33.paa";
	model="\RH_de\mags\mag_tt33.p3d";
	type=16;
	class ammoType
	{
		class RH_762x25 {
			ammoMag = "RH_8Rnd_762_tt33";
		};
	};
};

class 20Rnd_556x45_Stanag_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Stanag compatible";
	displayname = "20Rnd. STANAG (Empty)";
	picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "20Rnd_556x45_Stanag";
		};
	};
};

class 30Rnd_556x45_Stanag_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Stanag compatible";
	displayname = "30Rnd. STANAG (Empty)";
	picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_Stanag";
		};
		class B_556x45_SD {
			ammoMag = "30Rnd_556x45_StanagSD";
		};
	};
};

class 100Rnd_556x45_BetaCMag_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100 <br/>Stanag compatible";
	displayname = "MG36 Mag. (Empty)";
	picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
	scope = 2;
	type = "2 * 256";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "100Rnd_556x45_BetaCMag";
		};
	};
};

class R3F_25Rnd_556x45_FAMAS_Empty: emptiedMagazine
{
	scope=2;
	displayName="FAMAS Mag. 25 rounds (Empty)";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_F1.paa";
	model="\r3f_armes\chargeur_F1.p3d";
	descriptionShort="$STR_R3F_25Rnd_556x45_FAMAS_DESC";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "R3F_25Rnd_556x45_FAMAS";
		};
		class B_556x45_SD {
			ammoMag = "R3F_25Rnd_556x45_SD_FAMAS";
		};
	};
	class Library
	{
		libTextDesc="$STR_R3F_25Rnd_556x45_FAMAS_LIB";
	};
};

class R3F_30Rnd_556x45_FAMAS_Empty: emptiedMagazine
{
	scope=2;
	displayName="FAMAS Mag. 30 rounds (Empty)";
	picture="\r3f_armes\Data\Icons\R3F_Munitions_F1.paa";
	model="\r3f_armes\chargeur_F1.p3d";
	descriptionShort="$STR_R3F_30Rnd_556x45_FAMAS_DESC";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "R3F_30Rnd_556x45_FAMAS_FAMAS";
		};
		class B_556x45_SD {
			ammoMag = "R3F_30Rnd_556x45_FAMAS_SD_FAMAS";
		};
	};
	class Library
	{
		libTextDesc="$STR_R3F_30Rnd_556x45_FAMAS_LIB";
	};
};

class 30Rnd_556x45_Aug_Empty: emptiedMagazine
{
	scope=2;
	displayName="Aug 30Rnd Mag. (Empty)";
	picture="\MIDF_Weapons\aug_a3\pictures\aug_a3_mag.paa";
	model="\MIDF_Weapons\aug_a3\aug_a3_mag.p3d";
	descriptionShort=" 30Rnds 5,56x45 Stanag AUG Magazine for the AUG Series";

	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "30Rnd_556x45_Aug";
		};
	};
};

class RH_7Rnd_50_AE_Empty: emptiedMagazine
{
	scope=2;
	displayName=".50 AE (Empty)";
	picture="\RH_de\inv\m_de.paa";
	model="\RH_de\mags\mag_de.p3d";
	type=16;
	class ammoType
	{
		class RH_50_AE_Ball {
			ammoMag = "RH_7Rnd_50_AE";
		};
	};
};

class 15Rnd_9x19_M9_Empty: emptiedMagazine
{
	scope=2;
	descriptionshort = "Caliber: 9x19 mm Parabellum <br/>Rounds: 15 <br/>Used in: M9";
	displayname = "M9 Mag. (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
	type=16;
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "15Rnd_9x19_M9";
		};
		class RH_B_9x19_SD {
			ammoMag = "15Rnd_9x19_M9SD";
		};
	};
};

class 200Rnd_556x45_M249_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
	displayname = "200Rnd. M249 Belt (Empty)";
	picture = "\CA\weapons\data\equip\m_m249_ca.paa";
	type = "2*		256";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "200Rnd_556x45_M249";
		};
	};
};

class 200Rnd_556x45_L110A1_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200 <br/>Used in: L110A1";
	displayname = "200Rnd. STANAG (Empty)";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "200Rnd_556x45_L110A1";
		};
	};
};

class 100Rnd_556x45_M249_Empty: emptiedMagazine {
	scope=2;
	descriptionshort = "Caliber: 5.56x45mm NATO<br/>Rounds: 100<br/>Used in: M249";
	displayname = "M249 Mag. (Empty)";
	picture = "\CA\weapons_E\Data\icons\m_m245_CA.paa";
	class ammoType
	{
		class B_556x45_Ball {
			ammoMag = "100Rnd_556x45_M249";
		};
	};
};

class 100Rnd_762x51_M240_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
	displayname = "100Rnd. M240 (Empty)";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	scope = 2;
	type = "2*		256";
	class ammoType
	{
		class B_762x51_Ball {
			ammoMag = "100Rnd_762x51_M240";
		};
	};
};

class 30Rnd_9x19_MP5_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 9x19 mm Parabellum <br/>Rounds: 30 <br/>Used in: MP5";
	displayname = "MP5 Mag. (Empty)";
	picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
	scope = 2;
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "30Rnd_9x19_MP5";
		};
		class RH_B_9x19_SD {
			ammoMag = "30Rnd_9x19_MP5SD";
		};
	};
};

class RH_45ACP_13RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Kriss 13Rnd Magazine (Empty)";
	model="\RH_smg\mags\mag_kriss.p3d";
	picture="\RH_smg\inv\m_kriss.paa";
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_45ACP_13RND_Mag";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_45ACP_13RND_Mag_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_45ACP_13RND_Mag_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_45ACP_13RND_Mag_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_45ACP_13RND_Mag_bt";
		};
	};
};

class RH_45ACP_30RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Kriss 30Rnd Magazine (Empty)";
	model="\RH_smg\mags\mag_kriss30.p3d";
	picture="\RH_smg\inv\m_kriss30.paa";
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_45ACP_30RND_Mag";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_45ACP_30RND_Mag_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_45ACP_30RND_Mag_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_45ACP_30RND_Mag_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_45ACP_30RND_Mag_bt";
		};
	};
};

class RH_20Rnd_32cal_vz61_Empty: emptiedMagazine
{
	scope=2;
	displayName="Vz61 mag (Empty)";
	picture="\RH_de\inv\m_vz61.paa";
	model="\RH_de\mags\mag_vz61.p3d";
	class ammoType
	{
		class RH_32ACP {
			ammoMag = "RH_20Rnd_32cal_vz61";
		};
		class RH_32ACP_HP {
			ammoMag = "RH_20Rnd_32cal_vz61_hp";
		};
		class RH_32ACP_TRACER {
			ammoMag = "RH_20Rnd_32cal_vz61_tracer";
		};
		class RH_32ACP_RUBBER {
			ammoMag = "RH_20Rnd_32cal_vz61_rubber";
		};
		class RH_32ACP_BT {
			ammoMag = "RH_20Rnd_32cal_vz61_bt";
		};
	};
};

class RH_57x28mm_50RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="FN P90 Magazine (Empty)";
	model="\RH_smg\mags\mag_p90.p3d";
	picture="\RH_smg\inv\m_p90.paa";
	class ammoType
	{
		class RH_smg_57x28mm_Round {
			ammoMag = "RH_57x28mm_50RND_Mag";
		};
		class RH_smg_45ACP_SD_Round {
			ammoMag = "RH_smg_57x28mm_SD_Round";
		};
	};
};

class 40Rnd_46x30_mp7_Empty: emptiedMagazine
{
	scope=2;
	displayName="40Rnd. MP7 Mag (Empty)";
	picture="\C1987_Mp7\equip\gui_mp7_40_mag.paa";
	model="\C1987_Mp7\mp7_40_mag.p3d";
	descriptionShort="40Rnd. 4,6x30mm";
	class ammoType
	{
		class C1987_B_46x30_Ball {
			ammoMag = "40Rnd_46x30_mp7";
		};
		class C1987_B_46x30_sd_Ball {
			ammoMag = "40Rnd_46x30_sd_mp7";
		};
	};
};

class 20Rnd_46x30_mp7_Empty: emptiedMagazine
{
	scope=2;
	displayName="20Rnd. MP7 Mag (Empty)";
	picture="\C1987_Mp7\equip\gui_mp7_20_mag.paa";
	model="\C1987_Mp7\mp7_20_mag.p3d";
	descriptionShort="20Rnd. 4,6x30mm";
	class ammoType
	{
		class C1987_B_46x30_Ball {
			ammoMag = "20Rnd_46x30_mp7";
		};
		class C1987_B_46x30_sd_Ball {
			ammoMag = "20Rnd_46x30_sd_mp7";
		};
	};
};

class KPFS_30Rnd_792x33_STG44_Empty: emptiedMagazine
{
	scope=2;
	displayName="AR 44 Magazine (Empty)";
	picture="\kpfs_weapons2\data\icons\m_mp44_ca.paa";
	class ammoType
	{
		class KPFS_B_792x33_Ball {
			ammoMag = "KPFS_30Rnd_792x33_STG44";
		};
	};
};

class 20Rnd_762x51_DMR_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x51 mm NATO <br/>Rounds: 20 <br/>Used in: DMR";
	displayname = "DMR mag (Empty)";
	picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "20Rnd_762x51_DMR";
		};
		class RH_B_762x51_SD_mk14 {
			ammoMag = "RH_20Rnd_762x51_SD_mk14";
		};
	};
};

class 20Rnd_762x51_B_SCAR_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x51mm NATO<br/>Rounds: 20<br/>Used in: Mk. 17";
	displayname = "Mk17 Mag. (Empty)";
	picture = "\ca\weapons_e\data\icons\m_mk17_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "20Rnd_762x51_B_SCAR";
		};
		class B_762x51_SB_SCAR {
			ammoMag = "20Rnd_762x51_SB_SCAR";
		};
	};
};

class 10Rnd_762x54_SVD_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x54mmR <br/>Rounds: 10 <br/>Used in: SVD Dragunov";
	displayname = "SVD Dragunov Mag. (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_762x54_noTracer {
			ammoMag = "10Rnd_762x54_SVD";
		};
	};
};

class 64Rnd_9x19_SD_Bizon_Empty: emptiedMagazine {
	descriptionshort = "Caliber:9x18mm <br/>Rounds: 64 <br/>Used in: Bizon PP-19";
	displayname = "Bizon Mag. (Empty)";
	picture = "\CA\weapons\data\equip\m_bizon_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_9x18_Ball {
			ammoMag = "64Rnd_9x19_Bizon";
		};
		class B_9x18_SD {
			ammoMag = "64Rnd_9x19_SD_Bizon";
		};
	};
};

class RH_45Rnd_545x39_mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="RPK74 45rnd mag (Empty)";
	picture="\RH_aks\inv\m_rpk74.paa";
	model="\RH_aks\mags\mag_rpk74.p3d";
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "RH_45Rnd_545x39_mag";
		};
	};
};

class 100Rnd_762x54_PK_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 7.62x54mm <br/>Rounds: 100 <br/>Used in: PK";
	displayname = "PKM Mag. (Empty)";
	scope = 2;
	type = "2 * 		256";
	class ammoType
	{
		class B_762x54_Ball {
			ammoMag = "100Rnd_762x54_PK";
		};
	};
};

class 30Rnd_762x39_AK47_Empty: emptiedMagazine {
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 30 <br/>AK47 based weapons";
	displayname = "AKM Mag. (Empty)";
	picture = "\CA\weapons\AK\data\equip\M_AK47_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "30Rnd_762x39_AK47";
		};
		class B_762x39_Ball_SD {
			ammoMag = "30Rnd_762x39_AK47_sd";
		};
		class B_762x39_Ball_HP {
			ammoMag = "30Rnd_762x39_AK47_hp";
		};
		class B_762x39_Ball_TRACER {
			ammoMag = "30Rnd_762x39_AK47_tracer";
		};
		class B_762x39_Ball_RUBBER {
			ammoMag = "30Rnd_762x39_AK47_rubber";
		};
		class B_762x39_Ball_BT {
			ammoMag = "30Rnd_762x39_AK47_bt";
		};
	};
};

class RH_75Rnd_762x39_mag_Empty: emptiedMagazine {
	displayName="RPK47 drum mag (Empty)";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
	picture="\RH_aks\inv\m_rpk.paa";
	model="\RH_aks\mags\mag_rpk.p3d";
	type="2*256";
	scope = 2;
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "RH_75Rnd_762x39_mag";
		};
		class B_762x39_Ball_SD {
			ammoMag = "RH_75Rnd_762x39_mag_sd";
		};
		class B_762x39_Ball_HP {
			ammoMag = "RH_75Rnd_762x39_mag_hp";
		};
		class B_762x39_Ball_TRACER {
			ammoMag = "RH_75Rnd_762x39_mag_tracer";
		};
		class B_762x39_Ball_RUBBER {
			ammoMag = "RH_75Rnd_762x39_mag_rubber";
		};
		class B_762x39_Ball_BT {
			ammoMag = "RH_75Rnd_762x39_mag_bt";
		};
	};
};

class 30Rnd_545x39_AK_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 5.45x39mm <br/>Rounds: 30 <br/>Used in: AK-74, AK-74 Kobra, AKS-74U, AK-107 and RPK-74";
	displayname = "30Rnd. AK (Empty)";
	picture = "\CA\weapons\ak\data\equip\m_ak74_ca.paa";
	scope = 2;
	class ammoType
	{
		class B_545x39_Ball {
			ammoMag = "30Rnd_545x39_AK";
		};
		class B_545x39_SD {
			ammoMag = "30Rnd_545x39_AKSD";
		};
	};
};

class 20Rnd_762x51_g3_Empty: emptiedMagazine
{
	scope=2;
	displayName="G3-Mag (Empty)";
	model="\C1987_g3\mag.p3d";
	picture="\C1987_g3\equip\mag.paa";
	descriptionShort="20Rnd. 7.62x51mm. for the G3 Series.";
	class ammoType
	{
		class B_762x51_noTracer {
			ammoMag = "20Rnd_762x51_g3";
		};
	};
};

class RH_8Rnd_9x19_Mk_Empty: emptiedMagazine
{
	scope=2;
	displayName="Mk22 mag (Empty)";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_8Rnd_9x19_Mk";
		};
		class RH_B_9x19_SD {
			ammoMag = "RH_8Rnd_9x19_Mksd";
		};
	};
};

class 5Rnd_127x108_KSVK_Empty: emptiedMagazine {
	descriptionshort = "Caliber: 12.7x108mm <br/>Rounds: 5 <br/>Used in: KSVK";
	displayname = "5RND. KSVK (Empty)";
	picture = "\CA\weapons\data\Equip\M_ksvk_CA.paa";
	scope = 2;
	class ammoType
	{
		class B_127x108_Ball {
			ammoMag = "5Rnd_127x108_KSVK";
		};
	};
};

class vil_10Rnd_9x39_SP6_VSS_Empty : emptiedMagazine {
	scope = public;
	picture = "\CA\weapons\data\equip\M_VSSx10_CA.paa";
	displayName = "10Rnd. SP6 (Empty)";
	descriptionShort = $STR_TGW_VIL_MS_SP6VSS;
	class ammoType
	{
		class vil_B_9x39_SP6 {
			ammoMag = "vil_10Rnd_9x39_SP6_VSS";
		};
	};
};

class vil_20Rnd_9x39_SP6_VAL_Empty : emptiedMagazine {
	scope = public;
	picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
	displayName = "20Rnd. SP6 (Empty)";
	descriptionShort = $STR_TGW_VIL_MS_SP6VAL;
	class ammoType
	{
		class vil_B_9x39_SP6 {
			ammoMag = "vil_20Rnd_9x39_SP6_VAL";
		};
	};
};


class RH_20Rnd_9x39_val_mag_Empty: emptiedMagazine
{
	scope=2;
	displayName="Val mag (Empty)";
	picture="\CA\weapons\data\equip\M_VSSx20_CA.paa";
	descriptionShort="$STR_TGW_VIL_MS_SP6VAL";
	class ammoType
	{
		class RH_B_9x39_SD {
			ammoMag = "RH_20Rnd_9x39_val_mag";
		};
	};
};


class vil_10Rnd_762x54_SV_Empty : emptiedMagazine {
	scope = public;
	displayName = "SV-98 Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	descriptionShort = $STR_TGW_VIL_MS_SV98;
	class ammoType
	{
		class B_762x54_noTracer {
			ammoMag = "vil_10Rnd_762x54_SV";
		};
	};
};

class KPFS_250Rnd_MG42_Empty: emptiedMagazine
{
	scope=2;
	displayName="MG-1 Ammobox (Empty)";
	picture="\kpfs_weapons2\data\icons\m_mg1_ca.paa";
	type="2* 256";
	class ammoType
	{
		class KPFS_B_792x57_Ball {
			ammoMag = "KPFS_250Rnd_MG42";
		};
	};
};

class vil_40Rnd_762x39_AK47_Empty : emptiedMagazine {
	scope = public;
	picture = "\vilas_aks\ico\m_vil_rpk_ca.paa";
	displayName = "RPK Mag (Empty)";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 40 <br/>Used in: AK47 based weapons";
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "vil_40Rnd_762x39_AK47";
		};
		class B_762x39_Ball_SD {
			ammoMag = "vil_40Rnd_762x39_AK47_sd";
		};
		class B_762x39_Ball_HP {
			ammoMag = "vil_40Rnd_762x39_AK47_hp";
		};
		class B_762x39_Ball_TRACER {
			ammoMag = "vil_40Rnd_762x39_AK47_tracer";
		};
		class B_762x39_Ball_RUBBER {
			ammoMag = "vil_40Rnd_762x39_AK47_rubber";
		};
		class B_762x39_Ball_BT {
			ammoMag = "vil_40Rnd_762x39_AK47_bt";
		};
	};
};

class vil_75Rnd_762x39_AK47_Empty : emptiedMagazine {
	scope=2;
	type = 2*		256;
	picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
	displayName = "$STR_TGW_VIL_M_75Rnd_762x39_RPK";
	descriptionShort = "$STR_VIL_M_75Rnd_762x39_AK47_SHORT";
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "vil_75Rnd_762x39_AK47";
		};
	};
};

class vil_10Rnd_SVDK_Empty : emptiedMagazine {
	scope = public;
	displayName = "SVDK Mag (Empty)";
	picture = "\CA\weapons\data\equip\m_svd_ca.paa";
	descriptionShort = $STR_VIL_MS_SVDK;
	class ammoType
	{
		class Vil_B_93x64_Ball {
			ammoMag = "vil_10Rnd_SVDK";
		};
	};
};

class 50Rnd_127x107_DSHKM_Empty: emptiedMagazine {
	type = 2*		256;
	displayname = "DShKM Mag (Empty)";
	scope = 2;
	class ammoType
	{
		class B_127x107_Ball {
			ammoMag = "vil_10Rnd_SVDK";
		};
	};
};

class RH_13Rnd_9x19_bhp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Browning HP mag (Empty)";
	model="\RH_de\mags\mag_mk22.p3d";
	type=16;
	picture="\RH_de\inv\m_mk22.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_13Rnd_9x19_bhp";
		};
	};
};

class RH_20Rnd_9x19_M93_Empty: emptiedMagazine
{
	scope=2;
	displayName="M93R mag (Empty)";
	model="\RH_de\mags\mag_m93r.p3d";
	type=16;
	picture="\RH_de\inv\m_m93.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_20Rnd_9x19_M93";
		};
	};
};

class RH_15Rnd_9x19_usp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Usp mag (9 mm) (Empty)";
	model="\RH_de\mags\mag_usp.p3d";
	type=16;
	picture="\RH_de\inv\m_usp.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_15Rnd_9x19_usp";
		};
		class RH_B_9x19_SD {
			ammoMag = "RH_15Rnd_9x19_uspsd";
		};
	};
};

class RH_12Rnd_45cal_usp_Empty: emptiedMagazine
{
	scope=2;
	displayName="Usp mag (.45) (Empty)";
	picture="\RH_de\inv\m_usp.paa";
	model="\RH_de\mags\mag_uspm.p3d";
	type=16;
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_12Rnd_45cal_usp";
		};
	};
};

class RH_8Rnd_45cal_m1911_Empty: emptiedMagazine
{
	scope=2;
	displayName="M1911 mag (Empty)";
	picture="\RH_de\inv\m_colt.paa";
	model="\RH_de\mags\mag_kim.p3d";
	type=16;
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_8Rnd_45cal_m1911";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_8Rnd_45cal_m1911_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_8Rnd_45cal_m1911_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_8Rnd_45cal_m1911_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_8Rnd_45cal_m1911_bt";
		};
	};
};

class RH_45ACP_25RND_UMP_Mag_Empty: emptiedMagazine
{
	scope=2;
	model="\RH_smg\mags\mag_ump.p3d";
	picture="\RH_smg\inv\m_ump.paa";
	displayName="HK UMP45 Magazine (Empty)";
	class ammoType
	{
		class RH_45ACP {
			ammoMag = "RH_45ACP_25RND_UMP_Mag";
		};
		class RH_45ACP_HP {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_hp";
		};
		class RH_45ACP_TRACER {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_tracer";
		};
		class RH_45ACP_RUBBER {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_rubber";
		};
		class RH_45ACP_BT {
			ammoMag = "RH_45ACP_25RND_UMP_Mag_bt";
		};
	};
};

class RH_17Rnd_9x19_g17_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 17 mag (empty)";
	model="\RH_de\mags\mag_g17.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_17Rnd_9x19_g17";
		};
		class RH_B_9x19_SD {
			ammoMag = "RH_17Rnd_9x19_g17SD";
		};
	};
};

class RH_33Rnd_9x19_g18_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 18 33Rnd mag (Empty)";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_33Rnd_9x19_g18";
		};
		class RH_B_9x19_SD {//SD VERSION HERE
			ammoMag = "RH_33Rnd_9x19_g18SD";
		};
	};
};

class RH_19Rnd_9x19_g18_Empty: emptiedMagazine
{
	scope=2;
	displayName="Glock 18 mag (Empty)";
	model="\RH_de\mags\mag_g18.p3d";
	type=16;
	picture="\RH_de\inv\m_g18.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_19Rnd_9x19_g18";
		};
		class RH_B_9x19_SD {//SD VERSION HERE
			ammoMag = "RH_19Rnd_9x19_g18SD";
		};
	};
};

class RH_6Rnd_44_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName=".44 Magnum (Empty)";
	picture="\RH_de\inv\m_44m.paa";
	type=16;
	class ammoType
	{
		class RH_44mag_ball {
			ammoMag = "RH_6Rnd_44_Mag";
		};
	};
};

class KPFS_100Rnd_762x39_RPD_Empty: emptiedMagazine
{
	scope=2;
	type="2*256";
	picture="\kpfs_weapons2\data\icons\m_rpd_ca.paa";
	displayName="RPD ammobox (Empty)";
	class ammoType
	{
		class B_762x39_Ball {
			ammoMag = "KPFS_100Rnd_762x39_RPD";
		};
	};
};

class RH_9mm_32RND_Mag_Empty: emptiedMagazine
{
	scope=2;
	scopeWeapon=0;
	scopeMagazine=2;
	displayName="Uzi Magazine (Empty)";
	model="\RH_smg\mags\mag_uzi.p3d";
	picture="\RH_smg\inv\m_uzi.paa";
	class ammoType
	{
		class RH_B_9x19_Ball {
			ammoMag = "RH_9mm_32RND_Mag";
		};
		class RH_B_9x19_SD {//SD VERSION HERE
			ammoMag = "RH_9mm_32RND_SD_Mag";
		};
	};
};