class CfgPatches
{
	class dayz_buildings
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[]={};
	};
};
class CfgAddons
{
	class dayz_buildings
	{
		list[]=
		{
			"Days Buildings"
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
};
class CfgVehicleClasses
{
	class dayz_buildings
	{
		displayName="$STR_BLD_name_ItemShantyHouse";
	};
};
class CfgVehicles
{
	class WeaponHolderBase;
	class House;
	class DZ_buildables: House
	{
		scope=2;
		displayName="$STR_BLD_name_DZ_buildables";
		placement="vertical";
	};
	class Metal_Ladder: House
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_ladder.p3d";
		displayName="$STR_BLD_name_Metal_Ladder";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.700000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
		ladders[]=
		{
			
			{
				"ladderstart",
				"ladderend"
			}
		};
	};
	class Stairs1: House
	{
		scope=2;
		model="z\addons\dayz_buildings\models\stairs.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="$STR_BLD_name_Stairs1";
		mapSize=0.200000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class Stairs1_ghost: Stairs1
	{
		model="z\addons\dayz_buildings\models\stairs_ghost.p3d";
		displayName="$STR_BLD_name_Stairs1_ghost";
	};
	class Land_A_tent;
	class WorkBench: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="$STR_BLD_name_WorkBench";
		model="z\addons\dayz_buildings\models\workbench.p3d";
		transportMaxMagazines=3000;
		transportMaxWeapons=0;
		transportMaxBackpacks=0;
	};
	class WorkBench_Internal: WorkBench
	{
		displayName="$STR_BLD_name_WorkBench_Internal";
		destrType="DestructNo";
	};
	class WorkBench_Hidden: Land_A_tent
	{
		vehicleClass="Survival";
		transportMaxMagazines=0;
		transportMaxWeapons=0;
		transportMaxBackpacks=0;
		displayName="$STR_BLD_name_WorkBench_Hidden";
		destrType="DestructNo";
	};
	class ItemStorage: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="$STR_BLD_name_ItemStorage";
		model="z\addons\dayz_buildings\models\item_storage.p3d";
		transportMaxMagazines=30;
		transportMaxWeapons=0;
		transportMaxBackpacks=2;
		destrType="DestructNo";
	};
	class WeaponStorage: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="$STR_BLD_name_WeaponStorage";
		model="z\addons\dayz_buildings\models\weapon_storage.p3d";
		transportMaxMagazines=12;
		transportMaxWeapons=5;
		transportMaxBackpacks=0;
		destrType="DestructNo";
	};
	class WeaponStorage_shanty: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="$STR_BLD_name_WeaponStorage_shanty";
		model="z\addons\dayz_buildings\models\weapon_storage_shanty.p3d";
		transportMaxMagazines=15;
		transportMaxWeapons=3;
		transportMaxBackpacks=1;
		destrType="DestructNo";
	};
	class Land_Fire;
	class Stove: Land_Fire
	{
		scope=2;
		vehicleClass="Survival";
		displayName="$STR_BLD_name_Stove";
		model="z\addons\dayz_buildings\models\stove.p3d";
		destrType="DestructNo";
	};
	class ShantyHouse_Base: DZ_buildables
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
		displayName="$STR_BLD_name_ShantyHouse_Base";
		scope=1;
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.700000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class ShantyHouse: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
		displayName="$STR_BLD_name_ShantyHouse";
		scope=2;
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="ShantyHouseStage2";
		};
	};
	class ShantyHouse_ghost: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\ShantyHouseBase_ghost.p3d";
		displayName="$STR_BLD_name_ShantyHouse_ghost";
	};
	class ShantyHouseStage2: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage2.p3d";
		displayName="$STR_BLD_name_ShantyHouseStage2";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="ShantyHouseStage3";
		};
	};
	class ShantyHouseStage3: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage3.p3d";
		displayName="$STR_BLD_name_ShantyHouseStage3";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="ShantyHouseStage4";
		};
	};
	class ShantyHouseStage4: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage4.p3d";
		displayName="$STR_BLD_name_ShantyHouseStage4";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="ShantyHouseStage5";
		};
	};
	class ShantyHouseStage5: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage5.p3d";
		displayName="$STR_BLD_name_ShantyHouseStage5";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="ShantyHouseStage6";
		};
	};
	class ShantyHouseStage6: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage6.p3d";
		displayName="$STR_BLD_name_ShantyHouseStage6";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="ShantyHouseStage7";
		};
	};
	class ShantyHouseStage7: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage7.p3d";
		displayName="$STR_BLD_name_ShantyHouseStage7";
		ladders[]=
		{
			
			{
				"ladderstart",
				"ladderend"
			}
		};
		class AnimationSources
		{
			class door
			{
				animPeriod=2;
				source="user";
				initPhase=0;
			};
			class door2
			{
				animPeriod=2;
				source="user";
				initPhase=0;
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayName="$STR_BLD_name_ShantyHouseStage7";
				onlyforplayer=1;
				position="door_axis";
				radius=2;
				condition="this animationPhase ""door"" < 0.5";
				statement="this animate [""door"", 1]";
			};
			class CloseDoor
			{
				displayName="$STR_BLD_name_ShantyHouseStage7";
				radius=2;
				position="door_axis";
				condition="this animationPhase ""door"" >= 0.5";
				statement="this animate [""door"", 0]";
				onlyforplayer=1;
			};
		};
	};
	class SurvivorWorkshop_Base: DZ_buildables
	{
		scope=2;
		model="z\addons\dayz_buildings\models\cabin1_stage1.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="$STR_BLD_name_SurvivorWorkshop_Base";
		mapSize=0.700000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class SurvivorWorkshopBase_ghost: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage1_ghost.p3d";
		displayName="$STR_BLD_name_SurvivorWorkshopBase_ghost";
	};
	class SurvivorWorkshop: SurvivorWorkshop_Base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\cabin1_stage1.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="$STR_BLD_name_SurvivorWorkshop";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopStage2";
		};
	};
	class SurvivorWorkshopStage2: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage2.p3d";
		displayName="$STR_BLD_name_SurvivorWorkshopStage2";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			randomcreate[]=
			{
				"SurvivorWorkshopAStage3",
				"SurvivorWorkshopBStage3",
				"SurvivorWorkshopCStage3"
			};
			create="";
		};
	};
	class SurvivorWorkshopAStage3: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage3.p3d";
		displayName="$STR_BLD_name_SurvivorWorkshopAStage3";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopAStage4";
		};
	};
	class SurvivorWorkshopBStage3: SurvivorWorkshopAStage3
	{
		model="z\addons\dayz_buildings\models\cabin2_stage3.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopBStage4";
		};
	};
	class SurvivorWorkshopCStage3: SurvivorWorkshopAStage3
	{
		model="z\addons\dayz_buildings\models\cabin3_stage3.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopCStage4";
		};
	};
	class SurvivorWorkshopAStage4: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage4.p3d";
		displayName="$STR_BLD_name_SurvivorWorkshopAStage4";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopAStage5";
		};
	};
	class SurvivorWorkshopBStage4: SurvivorWorkshopAStage4
	{
		model="z\addons\dayz_buildings\models\cabin2_stage4.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopBStage5";
		};
	};
	class SurvivorWorkshopCStage4: SurvivorWorkshopAStage4
	{
		model="z\addons\dayz_buildings\models\cabin3_stage4.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="SurvivorWorkshopCStage5";
		};
	};
	class SurvivorWorkshopAStage5: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage5.p3d";
		displayName="$STR_BLD_name_SurvivorWorkshopAStage5";
		class AnimationSources
		{
			class door
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
		};
		class UserActions
		{
			class open_the_door
			{
				displayName="$STR_BLD_name_SurvivorWorkshopAStage5";
				onlyforplayer="true";
				position="door_button";
				radius=2;
				condition="this animationPhase ""door"" < 0.5";
				statement="this animate [""door"", 1]";
			};
			class close_the_door: open_the_door
			{
				displayName="$STR_BLD_name_close_the_door";
				condition="this animationPhase ""door"" >= 0.5";
				statement="this animate [""door"", 0]";
			};
		};
	};
	class SurvivorWorkshopBStage5: SurvivorWorkshopAStage5
	{
		model="z\addons\dayz_buildings\models\cabin2_stage5.p3d";
	};
	class SurvivorWorkshopCStage5: SurvivorWorkshopAStage5
	{
		model="z\addons\dayz_buildings\models\cabin3_stage5.p3d";
	};
	class CardboardBox;
	class WoodenFence_base: DZ_buildables
	{
		scope=1;
		canbevertical=1;
		destrType="DestructBuilding";
		armor=100;
		class Upgrade
		{
			requiredParts[]=
			{
				"ItemLog",
				"ItemStone",
				"ItemStone"
			};
			require[]=
			{
				"ItemEtool"
			};
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemPlank"
			};
		};
	};
	class WoodenFence_ghost: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence_ghost.p3d";
		displayName="$STR_BLD_name_WoodenFence_ghost";
	};
	class WoodenFence_1_foundation: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1_ground.p3d";
		displayName="$STR_BLD_name_WoodenFence_1_foundation";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool",
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemLog",
				"ItemStone"
			};
			create="WoodenFence_1_frame";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
		};
	};
	class WoodenFence_1_frame: WoodenFence_1_foundation
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1_frame.p3d";
		displayName="$STR_BLD_name_WoodenFence_1_frame";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemPlank",
				"equip_nails"
			};
			create="WoodenFence_quaterpanel";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_quaterpanel: WoodenFence_1_frame
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1_stage1.p3d";
		displayName="$STR_BLD_name_WoodenFence_quaterpanel";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_halfpanel";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_halfpanel: WoodenFence_quaterpanel
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1_stage2.p3d";
		displayName="$STR_BLD_name_WoodenFence_halfpanel";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_thirdpanel";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_thirdpanel: WoodenFence_halfpanel
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1_stage3.p3d";
		displayName="$STR_BLD_name_WoodenFence_thirdpanel";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_1";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_1: WoodenFence_thirdpanel
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1.p3d";
		displayName="$STR_BLD_name_WoodenFence_1";
		armor=100;
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_nails",
				"ItemPlank",
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_2";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_2: WoodenFence_1
	{
		scope=2;
		armor=200;
		model="z\addons\dayz_buildings\models\fence2.p3d";
		displayName="$STR_BLD_name_WoodenFence_2";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_nails",
				"ItemPlank",
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_3";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_3: WoodenFence_2
	{
		scope=2;
		armor=300;
		model="z\addons\dayz_buildings\models\fence3.p3d";
		displayName="$STR_BLD_name_WoodenFence_3";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_nails",
				"ItemLog",
				"ItemLog",
				"ItemLog"
			};
			create="WoodenFence_4";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_4: WoodenFence_3
	{
		scope=2;
		armor=400;
		model="z\addons\dayz_buildings\models\fence4.p3d";
		displayName="$STR_BLD_name_WoodenFence_4";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_nails",
				"ItemPlank",
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_5";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_5: WoodenFence_4
	{
		scope=2;
		armor=500;
		model="z\addons\dayz_buildings\models\fence5.p3d";
		displayName="$STR_BLD_name_WoodenFence_5";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_nails",
				"ItemPlank",
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_6";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_6: WoodenFence_5
	{
		scope=2;
		armor=1000;
		model="z\addons\dayz_buildings\models\fence6.p3d";
		displayName="$STR_BLD_name_WoodenFence_6";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_nails",
				"ItemPlank",
				"ItemPlank",
				"ItemPlank"
			};
			create="WoodenFence_7";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenFence_7: WoodenFence_6
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence7.p3d";
		displayName="$STR_BLD_name_WoodenFence_7";
		ladders[]=
		{
			
			{
				"ladderstart",
				"ladderend"
			}
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
		class Upgrade
		{
			delete create;
		};
	};
	class MetalFence_base: DZ_buildables
	{
		scope=1;
		canbevertical=1;
		class Upgrade
		{
			requiredParts[]=
			{
				"ItemRSJ",
				"ItemStone",
				"ItemStone"
			};
			require[]=
			{
				"ItemEtool"
			};
		};
	};
	class MetalFence_ghost: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence_ghost.p3d";
		displayName="$STR_BLD_name_MetalFence_ghost";
	};
	class MetalFence_1_foundation: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1_foundation.p3d";
		displayName="$STR_BLD_name_MetalFence_1_foundation";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]=
			{
				"ItemRSJ",
				"ItemLog",
				"ItemStone"
			};
			create="MetalFence_1_frame";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
		};
	};
	class MetalFence_1_frame: MetalFence_1_foundation
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1_stage1.p3d";
		displayName="$STR_BLD_name_MetalFence_1_frame";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox",
				"ItemEtool"
			};
			requiredParts[]=
			{
				"equip_metal_sheet_rusted",
				"ItemMetalSheet",
				"ItemScrews"
			};
			create="MetalFence_halfpanel";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
		};
	};
	class MetalFence_halfpanel: MetalFence_1_frame
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1_stage2.p3d";
		displayName="$STR_BLD_name_MetalFence_halfpanel";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_metal_sheet_rusted",
				"ItemMetalSheet",
				"ItemScrews"
			};
			create="MetalFence_thirdpanel";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_thirdpanel: MetalFence_halfpanel
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1_stage3.p3d";
		displayName="$STR_BLD_name_MetalFence_thirdpanel";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"equip_metal_sheet_rusted",
				"ItemMetalSheet",
				"ItemScrews"
			};
			create="MetalFence_1";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_1: MetalFence_thirdpanel
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1.p3d";
		displayName="$STR_BLD_name_MetalFence_1";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemScrews",
				"equip_metal_sheet_rusted",
				"ItemMetalSheet"
			};
			create="MetalFence_2";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_2: MetalFence_1
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence2.p3d";
		displayName="$STR_BLD_name_MetalFence_2";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemRSJ",
				"ItemRSJ"
			};
			create="MetalFence_3";
			produce[]=
			{
				"ItemLog",
				"ItemLog"
			};
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_3: MetalFence_2
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence3.p3d";
		displayName="$STR_BLD_name_MetalFence_3";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemScrews",
				"equip_metal_sheet_rusted",
				"equip_metal_sheet_rusted",
				"equip_metal_sheet_rusted",
				"equip_metal_sheet_rusted"
			};
			create="MetalFence_4";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_4: MetalFence_3
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence4.p3d";
		displayName="$STR_BLD_name_MetalFence_4";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemScrews",
				"ItemRSJ",
				"ItemRSJ"
			};
			create="MetalFence_5";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_5: MetalFence_4
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence5.p3d";
		displayName="$STR_BLD_name_MetalFence_5";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemScrews",
				"equip_metal_sheet",
				"equip_metal_sheet",
				"equip_2inch_metal_pipe",
				"equip_2inch_metal_pipe",
				"equip_2inch_metal_pipe"
			};
			create="MetalFence_6";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_6: MetalFence_5
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence6.p3d";
		displayName="$STR_BLD_name_MetalFence_6";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemScrews",
				"equip_2inch_metal_pipe",
				"equip_2inch_metal_pipe",
				"equip_1inch_metal_pipe",
				"equip_1inch_metal_pipe",
				"equip_1inch_metal_pipe"
			};
			create="MetalFence_7";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalFence_7: MetalFence_6
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence7.p3d";
		displayName="$STR_BLD_name_MetalFence_7";
		ladders[]=
		{
			
			{
				"ladderstart",
				"ladderend"
			}
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
		class Upgrade
		{
			delete create;
		};
	};
	class Land_Gate_IndVar2_5;
	class WoodenGate_Base: DZ_buildables
	{
		scope=1;
		armor=1000;
		canbevertical=1;
		displayName="$STR_BLD_name_WoodenGate_1";
		model="z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.200000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructBuilding";
		placement="vertical";
		class AnimationSources
		{
			class DoorR
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class WoodenGate_ghost: WoodenGate_Base
	{
		scope=2;
		displayName="$STR_BLD_name_WoodenGate_1_ghost";
		model="z\addons\dayz_buildings\models\gates\gate0_dzam_ghost.p3d";
	};
	class WoodenGate_foundation: WoodenGate_Base
	{
		scope=2;
		displayName="$STR_BLD_name_WoodenGate_Foundation";
		model="z\addons\dayz_buildings\models\fence1_ground.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool",
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemLog",
				"ItemStone"
			};
			create="WoodenGate_1";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenGate_1: WoodenGate_Base
	{
		scope=2;
		displayName="$STR_BLD_name_WoodenGate_1";
		model="z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
		class AnimationSources
		{
			class DoorR
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayNameDefault="$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName="$STR_DN_OUT_O_DOOR";
				position="DoorL";
				radius=3;
				onlyForPlayer=0;
				condition="this animationPhase ""DoorR"" < 0.5";
				statement="this animate [""DoorR"", 1];this animate [""DoorL"", 1]";
			};
			class CloseDoors: OpenDoors
			{
				displayNameDefault="$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName="$STR_DN_OUT_C_DOOR";
				condition="this animationPhase ""DoorR"" >= 0.5";
				statement="this animate [""DoorR"", 0];this animate [""DoorL"", 0]";
			};
		};
		actionBegin1="OpenDoors";
		actionEnd1="OpenDoors";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool",
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemLog",
				"ItemPadlock"
			};
			create="WoodenGate_2";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenGate_2: WoodenGate_Base
	{
		scope=2;
		displayName="$STR_BLD_name_WoodenGate_2";
		model="z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool",
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemLog",
				"ItemPlank",
				"equip_nails"
			};
			create="WoodenGate_3";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenGate_3: WoodenGate_Base
	{
		scope=2;
		displayName="$STR_BLD_name_WoodenGate_3";
		model="z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool",
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemLog",
				"ItemLog",
				"ItemPlank"
			};
			create="WoodenGate_4";
		};
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class WoodenGate_4: WoodenGate_Base
	{
		armor=1000;
		scope=2;
		displayName="$STR_BLD_name_WoodenGate_4";
		model="z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
		class Disassembly
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
		};
	};
	class MetalGate_Base: Land_Gate_IndVar2_5
	{
		scope=1;
		displayName="$STR_BLD_name_MetalGate_Base";
		model="z\addons\dayz_buildings\models\gates\gate1_metal_dzam.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.200000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
		class AnimationSources
		{
			class DoorR
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class MetalGate_ghost: MetalGate_Base
	{
		displayName="$STR_BLD_name_MetalGate_Base_ghost";
		model="z\addons\dayz_buildings\models\gates\gate1_metal_dzam_ghost.p3d";
	};
	class MetalGate_1: MetalGate_Base
	{
		displayName="$STR_BLD_name_MetalGate_2";
		model="z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	};
	class MetalGate_2: MetalGate_Base
	{
		displayName="$STR_BLD_name_MetalGate_2";
		model="z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	};
	class MetalGate_3: MetalGate_Base
	{
		displayName="$STR_BLD_name_MetalGate_3";
		model="z\addons\dayz_buildings\models\gates\gate3_metal_dzam.p3d";
	};
	class MetalGate_4: House
	{
		scope=2;
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.200000;
		accuracy=0.200000;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		displayName="$STR_BLD_name_MetalGate_4";
		model="z\addons\dayz_buildings\models\gates\gate4_metal_dzam.p3d";
		placement="vertical";
		class AnimationSources
		{
			class DoorR
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class DoorL
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class ItemDIY_wood: ItemCore
	{
		scope=2;
		picture="\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
		model="z\addons\dayz_buildings\models\diymanual_wood.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="$STR_BLD_name_ItemDIY_wood";
		descriptionShort="$STR_BLD_desc_ItemDIY_wood";
		class ItemActions
		{
			class Build
			{
				text="$STR_BLD_build_ItemDIY_wood";
				script="; ['ItemDIY_wood','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]=
				{
					"ItemEtool"
				};
				consume[]=
				{
					"ItemLog",
					"ItemStone",
					"ItemStone"
				};
				ghost="WoodenFence_ghost";
				create="WoodenFence_1_foundation";
			};
		};
	};
	class ItemDIY_Gate: ItemCore
	{
		scope=2;
		picture="\z\addons\dayz_buildings\equip\icon_diy_wood.paa";
		model="z\addons\dayz_buildings\models\diymanual_wood.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="$STR_BLD_name_ItemDIY_woodGate";
		descriptionShort="$STR_BLD_desc_ItemDIY_woodGate";
		class ItemActions
		{
			class Build
			{
				text="$STR_BLD_build_ItemDIY_woodGate";
				script="; ['ItemDIY_Gate','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]=
				{
					"ItemEtool"
				};
				consume[]=
				{
					"ItemLog"
				};
				ghost="WoodenGate_ghost";
				create="WoodenGate_foundation";
			};
		};
	};
	class ItemDIY_metal: ItemCore
	{
		scope=2;
		picture="\z\addons\dayz_buildings\equip\icon_diy_metal.paa";
		model="z\addons\dayz_buildings\models\diymanual_metal.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="$STR_BLD_name_ItemDIY_metal";
		descriptionShort="$STR_BLD_desc_ItemDIY_metal";
	};
};
