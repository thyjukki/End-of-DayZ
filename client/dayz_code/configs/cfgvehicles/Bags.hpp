class ReammoBox_EP1;	// External class reference
class Bag_Base_EP1 : ReammoBox_EP1 {
	scope = private;

	class TransportMagazines {};

	class TransportWeapons {};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	isbackpack = 1;
	reversed = true;
	vehicleClass = "Backpacks";

	class DestructionEffects {};

	class eventHandlers {
		init = "";
	};
};

class DZ_Patrol_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_PATROL;
	descriptionShort = $STR_BACKPACK_DESC_PATROL;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 8;
};

class DZ_Gun_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GUNPACK;
	descriptionShort = $STR_BACKPACK_DESC_GUNPACK;
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d";
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa";
	mapsize = 2;
	transportMaxWeapons = 1;
	transportMaxMagazines = 8;
};

class DZ_Gru_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_GRUPACK;
	descriptionShort = $STR_BACKPACK_DESC_GRUPACK;
	model = "\SG_GRU\SARMAT_GRU_PACK.p3d";
	Picture = "\SG_GRU\BACKPACK_GRU_CA.paa";
	mapsize = 2;
	transportMaxWeapons = 1;
	transportMaxMagazines = 14;
};

class DZ_Assault_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ACU;
	descriptionShort = $STR_BACKPACK_DESC_ACU;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapSize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 14;
};

class DZ_Czech_Vest_Puch: Bag_Base_EP1
{
	displayname = $STR_BACKPACK_NAME_VEST;
	descriptionShort = $STR_BACKPACK_DESC_VEST;
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	scope = 2;
	transportmaxmagazines = 12;
	transportmaxweapons = 0;
};

class DZ_ALICE_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ALICE;
	descriptionShort = $STR_BACKPACK_DESC_ALICE;
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 20;
};

class DZ_TK_Assault_Pack_EP1 : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_SURVACU;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU;
	mapSize = 2;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 18;
};

class DZ_British_ACU : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_BRITISH;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH;
	mapSize = 2;
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxWeapons = 1;
	transportMaxMagazines = 20;
};

class DZ_CivilBackpack_EP1: Bag_Base_EP1    
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_CZECH;
	descriptionShort = $STR_BACKPACK_DESC_CZECH;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 22;
};

		
class DZ_Backpack_OD : DZ_CivilBackpack_EP1 {
	scope = public;
	displayName = "Backpack (OD)";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\len_backpacks\backpack_odr.p3d";
};

class DZ_Backpack_DES : DZ_Backpack_OD {
	displayName = "Backpack (Des)";
	model = "\len_backpacks\backpack_des.p3d";
};

class DZ_Backpack_3DES : DZ_Backpack_OD {
	displayName = "Backpack (3 Color Desert)";
	model = "\len_backpacks\backpack_3ds.p3d";
};

class DZ_Backpack_WDL : DZ_Backpack_OD {
	displayName = "Backpack (M81 Woodland)";
	model = "\len_backpacks\backpack_wdl.p3d";
};

class DZ_Backpack_MAR : DZ_Backpack_OD {
	displayName = "Backpack (Marpat Woodland)";
	model = "\len_backpacks\backpack_mar.p3d";
};

class DZ_Backpack_DMAR : DZ_Backpack_OD {
	displayName = "Backpack (Marpat Desert)";
	model = "\len_backpacks\backpack_dmr.p3d";
};

class DZ_Backpack_UCP : DZ_Backpack_OD {
	displayName = "Backpack (UCP)";
	model = "\len_backpacks\backpack_ucp.p3d";
};

class DZ_Backpack_6DES : DZ_Backpack_OD {
	displayName = "Backpack (6 Color Desert)";
	model = "\len_backpacks\backpack_6ds.p3d";
};

class DZ_Backpack_TAK : DZ_Backpack_OD {
	displayName = "Backpack (Takistani DPM)";
	model = "\len_backpacks\backpack_tak.p3d";
};

class DZ_Backpack_NVG : DZ_Backpack_OD {
	displayName = "Backpack (NVG Camo)";
	model = "\len_backpacks\backpack_nvg.p3d";
};

class DZ_Backpack_BLK : DZ_Backpack_OD {
	displayName = "Backpack (Black)";
	model = "\len_backpacks\backpack_blk.p3d";
};

class DZ_Backpack_DPM : DZ_Backpack_OD {
	displayName = "Backpack (British DPM)";
	model = "\len_backpacks\backpack_dpm.p3d";
};

class DZ_Backpack_FIN : DZ_Backpack_OD {
	displayName = "Backpack (Finnish M05)";
	model = "\len_backpacks\backpack_fin.p3d";
};

class DZ_Backpack_MTC : DZ_Backpack_OD {
	displayName = "Backpack (Multicam)";
	model = "\len_backpacks\backpack_mtc.p3d";
};

class DZ_Backpack_NOR : DZ_Backpack_OD {
	displayName = "Backpack (Digital Pattern)";
	model = "\len_backpacks\backpack_nor.p3d";
};

class DZ_Backpack_WIN : DZ_Backpack_OD {
	displayName = "Backpack (Winter)";
	model = "\len_backpacks\backpack_win.p3d";	
};

class DZ_Backpack_ATC : DZ_Backpack_OD {
	displayName = "Backpack (ATACS)";
	model = "\len_backpacks\backpack_atc.p3d";	
};

class DZ_Backpack_MTL : DZ_Backpack_OD {
	displayName = "Backpack (Mitchell Pattern)";
	model = "\len_backpacks\backpack_mtl.p3d";
};

class DZ_Backpack_FTN : DZ_Backpack_OD {
	displayName = "Backpack (Fictional Flecktarn)";
	model = "\len_backpacks\backpack_ftn.p3d";
};

class DZ_Backpack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_COYOTE;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE;
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 26;
};

class DZ_Backpack_EP1_des: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_COYOTE_DES;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DES;
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	transportMaxWeapons = 1;
	transportMaxMagazines = 26;
};

class DZ_Backpack_EP1_wdl: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_COYOTE_WDL;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_WDL;
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	transportMaxWeapons = 1;
	transportMaxMagazines = 26;
};


class DZ_Apo_Pack1: Bag_Base_EP1
{
	scope = 2;
	displayName = "Backpack 1(Apo)";
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxWeapons = 0;
	transportMaxMagazines = 14;
	mapsize = 2;
};


class DZ_Apo_Pack2: DZ_Apo_Pack1
{
	scope = 2;
	displayName = "Backpack 2(Apo)";
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxMagazines = 16;
};


class DZ_Apo_Pack3: DZ_Apo_Pack1
{
	scope = 2;
	displayName = "Backpack 3(Apo)";
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxMagazines = 18;
};



class DZ_Apo_Pack4: DZ_Apo_Pack1
{
	scope = 2;
	displayName = "Backpack 3(Apo)";
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxMagazines = 12; 
};
