class CfgPatches
{
	class dayz_buildings
	{
		units[]=
		{
			""
		};
		weapons[]={};
		requiredVersion=0.1;
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
	class ItemWorkBench: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Work Bench (Packed)";
		model="z\addons\dayz_buildings\models\workbench_flat.p3d";
		picture="\z\addons\dayz_buildings\equip\item_workbench.paa";
		descriptionShort="A Folded Workbench, required for House Building and Some Crafting";
		vehicle="WorkBench";
		sfx="tentunpack";
		class ItemActions
		{
			class Build
			{
				text="place WorkBench";
				script="; ['ItemWorkBench','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]={};
				consume[]=
				{
					"ItemWorkBench"
				};
				create="WorkBench";
			};
		};
	};
	class ItemLog: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Wooden Log";
		picture="\z\addons\dayz_buildings\equip\item_log.paa";
		model="z\addons\dayz_buildings\models\logs.p3d";
		descriptionShort="Rough Wooden Log";
		class ItemActions
		{
			class Crafting
			{
				text="Wooden Plank";
				script="spawn player_craftItem;";
				neednearby[]={};
				requiretools[]=
				{
					"ItemHatchet"
				};
				output[]=
				{
					
					{
						"ItemPlank",
						"CfgMagazines",
						2
					}
				};
				input[]=
				{
					
					{
						"ItemLog",
						"CfgMagazines",
						1
					}
				};
			};
		};
	};
	class ItemPlank: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Sawn Planks";
		picture="\z\addons\dayz_buildings\equip\item_plank.paa";
		model="z\addons\dayz_buildings\models\planks.p3d";
		descriptionShort="Saw Planks";
		class ItemActions
		{
			class Crafting
			{
				text="Wood Piles";
				script="spawn player_craftItem;";
				neednearby[]={};
				requiretools[]=
				{
					"ItemHatchet"
				};
				output[]=
				{
					
					{
						"PartWoodPile",
						"CfgMagazines",
						2
					}
				};
				input[]=
				{
					
					{
						"ItemPlank",
						"CfgMagazines",
						1
					}
				};
			};
		};
	};
	class ItemMetalSheet: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Corrugated Sheet";
		picture="\z\addons\dayz_buildings\equip\item_sheetmetal.paa";
		model="z\addons\dayz_buildings\models\sheet_metal.p3d";
		descriptionShort="Metal Sheeting";
	};
	class ItemStone: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Rough Stone";
		picture="\z\addons\dayz_buildings\equip\rocks.paa";
		model="z\addons\dayz_buildings\models\rocks.p3d";
		descriptionShort="Rough Stone";
	};
	class ItemConcreteBlock: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Concrete Block";
		picture="\z\addons\dayz_buildings\equip\concreteblock.paa";
		model="z\addons\dayz_buildings\models\concreteblock.p3d";
		descriptionShort="Concrete Block";
	};
	class ItemRSJ: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Steel Beam";
		picture="\z\addons\dayz_buildings\equip\item_rsj.paa";
		model="z\addons\dayz_buildings\models\rsj.p3d";
		descriptionShort="Steel RSJ Support Beam";
	};
	class ItemNails: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Box of Nails";
		picture="\z\addons\dayz_buildings\equip\item_nails.paa";
		model="z\addons\dayz_buildings\models\nails.p3d";
		descriptionShort="Box of Nails";
	};
	class ItemPadlock: CA_Magazine
	{
		scope=2;
		count=1;
		type=256;
		displayName="Padlock";
		picture="\z\addons\dayz_buildings\equip\padlock.paa";
		model="z\addons\dayz_buildings\models\padlock.p3d";
		descriptionShort="Padlock - Used for securing Workshop's & Houses.";
	};
	class ItemBuildingBlueprint: CA_Magazine
	{
		scope=1;
		count=1;
		type=256;
		displayName="Blueprint";
		picture="\z\addons\dayz_buildings\equip\buildingplan1.paa";
		model="z\addons\dayz_buildings\models\buildingplan1.p3d";
		descriptionShort="";
	};
	class ItemCottage: ItemBuildingBlueprint
	{
		displayName="Cottage";
		descriptionShort="Building Plans for a Basic Shanty House.";
		scope=2;
		class ItemActions
		{
			class Build
			{
				text="Cottage Base";
				script="; ['ItemCottage','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]=
				{
                    "ItemLog",
                    "ItemLog",
                    "ItemLog",
                    "ItemNails",
                    "ItemPlank",
                    "ItemPlank",
                    "ItemNails",
					"ItemEtool"
				};
				consume[]=
				{
                    "ItemLog",
                    "ItemLog",
                    "ItemLog",
                    "ItemNails",
                    "ItemPlank",
                    "ItemPlank",
                    "ItemNails",
					"ItemCottage"
				};
				create="SurvivorWorkshop";
			};
		};
	};
	class ItemShantyHouse: ItemBuildingBlueprint
	{
		displayName="ShantyHouse";
		descriptionShort="Building Plans for a Basic Shanty House.";
		scope=2;
		class ItemActions
		{
			class Build
			{
				text="ShantyHouseBase";
				script="; ['ItemShantyHouse','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]=
				{
					"ItemEtool"
				};
				consume[]=
				{
					"ItemShantyHouse"
				};
				create="ShantyHouse";
			};
		};
	};
};
class CfgVehicleClasses
{
	class dayz_buildings
	{
		displayName="DayZ Buildings";
	};
};
class CfgVehicles
{
	class WeaponHolderBase;
	class WeaponHolder_ItemWorkBench: WeaponHolderBase
	{
		scope=2;
		displayName="Workbench";
		model="z\addons\dayz_buildings\models\workbench_flat.p3d";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemWorkBench'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemMetalSheet: WeaponHolderBase
	{
		scope=2;
		displayName="Metal Sheet";
		model="z\addons\dayz_buildings\models\sheet_metal.p3d";
		destrType="DestructNo";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemMetalSheet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemConcreteBlock: WeaponHolderBase
	{
		scope=2;
		displayName="Concrete Blocks";
		model="z\addons\dayz_buildings\models\concreteblock_wep.p3d";
		destrType="DestructNo";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemConcreteBlock'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemRSJ: WeaponHolderBase
	{
		scope=2;
		displayName="Steel Beam";
		model="z\addons\dayz_buildings\models\rsj_wep.p3d";
		destrType="DestructNo";
		class eventHandlers
		{
			init="[(_this select 0),'cfgMagazines','ItemRSJ'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class House;
	class DZ_buildables: House
	{
		scope=2;
		displayname="Buildables";
	};
	class SurvivorWorkshop_Base: DZ_buildables
	{
		scope=2;
		model="z\addons\dayz_buildings\models\cabin1_stage1.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayname="Cottage Foundation";
		mapSize=0.69999999;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class SurvivorWorkshopBase_ghost: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage1_ghost.p3d";
		displayname="Cottage Framework (Ghost)";
	};
	class SurvivorWorkshop: SurvivorWorkshop_Base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\cabin1_stage1.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayname="Cottage Foundation";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]=
            {
                "ItemLog",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemNails"
            };
			create="SurvivorWorkshopStage2";
		};
	};
	class SurvivorWorkshopStage2: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage2.p3d";
		displayname="Cottage Framework";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]=
            {
                "ItemBlueprint2",
                "ItemLog",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemNails"
            };
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
		displayname="Cottage Walls";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]=
            {
                "ItemLog",
                "ItemLog",
                "ItemLog",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemNails",
                "ItemBlueprint3"
            };
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
			requiredParts[]=
            {
                "ItemLog",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemBlueprint3"
            };
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
			requiredParts[]=
            {
                "ItemLog",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemBlueprint3"
            };
			create="SurvivorWorkshopCStage4";
		};
	};
	class SurvivorWorkshopAStage4: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage4.p3d";
		displayname="Cottage Roof";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]=
            {
                "ItemBlueprint4",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank"
            };
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
			requiredParts[]=
            {
                "ItemBlueprint4",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank"
            };
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
			requiredParts[]=
            {
                "ItemBlueprint4",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank"
            
            };
			create="SurvivorWorkshopCStage5";
		};
	};
	class SurvivorWorkshopAStage5: SurvivorWorkshop_Base
	{
		model="z\addons\dayz_buildings\models\cabin1_stage5.p3d";
		displayname="Cottage Complete";
        class Upgrade
        {
            requiredTools[]=
            {
                "ItemEtool"
            };
            requiredParts[]=
            {
                "ItemBlueprint5",
                "ItemLog",
                "ItemLog",
                "ItemLog",
                "ItemNails",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemPlank",
                "ItemNails"
            };
        };
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
				displayName="Open door";
				onlyforplayer="true";
				position="door_button";
				radius=2;
				condition="this animationPhase ""door"" < 0.5";
				statement="this animate [""door"", 1]";
			};
			class close_the_door: open_the_door
			{
				displayName="Close door";
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
	class ShantyHouse_Base: DZ_buildables
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
		displayname="Shanty House Base";
		scope=1;
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.69999999;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class ShantyHouse: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseBase.p3d";
		displayname="Shanty House Base";
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
		displayname="Shanty House (Ghost)";
	};
	class ShantyHouseStage2: ShantyHouse_Base
	{
		model="z\addons\dayz_buildings\models\shantyhouse\ShantyHouseStage2.p3d";
		displayname="Shanty House Stage 2";
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
		displayname="Shanty House Stage 3";
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
		displayname="Shanty House Stage 4";
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
		displayname="Shanty House Stage 5";
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
		displayname="Shanty House Stage 6";
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
		displayname="Shanty House Stage 7";
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
				displayName="Open door";
				onlyforplayer=1;
				position="door_axis";
				radius=2;
				condition="this animationPhase ""door"" < 0.5";
				statement="this animate [""door"", 1]";
			};
			class CloseDoor
			{
				displayName="Close door";
				radius=2;
				position="door_axis";
				condition="this animationPhase ""door"" >= 0.5";
				statement="this animate [""door"", 0]";
				onlyforplayer=1;
			};
		};
	};
	class Metal_Ladder: House
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_ladder.p3d";
		displayname="Metal Ladder";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.69999999;
		accuracy=0.2;
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
	class Land_A_tent;
	class WorkBench: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="Workbench";
		model="z\addons\dayz_buildings\models\workbench.p3d";
		transportMaxMagazines=3000;
		transportMaxWeapons=0;
		transportMaxBackpacks=0;
	};
	class WorkBench_Internal: WorkBench
	{
		displayName="Workshop Workbench";
		destrType="DestructNo";
	};
	class WorkBench_Hidden: Land_A_tent
	{
		vehicleClass="Survival";
		transportMaxMagazines=0;
		transportMaxWeapons=0;
		transportMaxBackpacks=0;
		displayName="Hidden Workbench";
		destrType="DestructNo";
	};
	class ItemStorage: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="Storage Box";
		model="z\addons\dayz_buildings\models\item_storage.p3d";
		transportMaxMagazines=30;
		transportMaxWeapons=0;
		transportMaxBackpacks=2;
		destrType="DestructNo";
	};
	class WeaponStorage: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="Weapon Box";
		model="z\addons\dayz_buildings\models\weapon_storage.p3d";
		transportMaxMagazines=12;
		transportMaxWeapons=5;
		transportMaxBackpacks=0;
		destrType="DestructNo";
	};
	class WeaponStorage_shanty: Land_A_tent
	{
		vehicleClass="Survival";
		displayName="Storage Box";
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
		displayName="Makeshift Stove";
		model="z\addons\dayz_buildings\models\stove.p3d";
		destrType="DestructNo";
	};
	class CardboardBox;
	class WoodenFenceBox1: CardboardBox
	{
		scope=2;
		displayName="Contains Wooden Fence";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=1;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=1;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=7;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=1;
			};
		};
	};
	class WoodenFenceBox2: CardboardBox
	{
		scope=2;
		displayName="Contains WoodenFence";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=2;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=1;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=10;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=1;
			};
		};
	};
	class WoodenFenceBox3: CardboardBox
	{
		scope=2;
		displayName="Contains WoodenFence";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=3;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=1;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=13;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=1;
			};
		};
	};
	class WoodenFenceBox4: CardboardBox
	{
		scope=2;
		displayName="Contains WoodenFence";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=4;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=4;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=13;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=2;
			};
		};
	};
	class WoodenFenceBox5: CardboardBox
	{
		scope=2;
		displayName="Contains WoodenFence Level 5";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=5;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=4;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=16;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=3;
			};
		};
	};
	class WoodenFenceBox6: CardboardBox
	{
		scope=2;
		displayName="Contains WoodenFence Level 5";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=6;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=4;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=19;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=4;
			};
		};
	};
	class WoodenFenceBox7: CardboardBox
	{
		scope=2;
		displayName="Contains WoodenFence Level 5";
		model="\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemNails
			{
				magazine="ItemNails";
				count=7;
			};
			class _xx_ItemLog
			{
				magazine="ItemLog";
				count=4;
			};
			class _xx_ItemPlank
			{
				magazine="ItemPlank";
				count=22;
			};
			class _xx_ItemStone
			{
				magazine="ItemStone";
				count=5;
			};
		};
	};
	class WoodenFence_base: DZ_buildables
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayname="Wooden Fence";
		maintenancename="Wooden Fence";
		mapSize=0.2;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class WoodenFence_1_ghost: WoodenFence_base
	{
		model="z\addons\dayz_buildings\models\fence1_ghost.p3d";
		displayname="Wooden Fence Ghost";
	};
	class WoodenFence_1_foundation: WoodenFence_base
	{
		model="z\addons\dayz_buildings\models\fence1_ground.p3d";
		displayname="Wooden Fence Frame";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]=
			{
				"ItemLog"
			};
			create="WoodenFence_1_frame";
		};
	};
	class WoodenFence_1_frame: WoodenFence_base
	{
		model="z\addons\dayz_buildings\models\fence1_frame.p3d";
		displayname="Wooden Fence 1st Panel";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemPlank",
				"ItemNails"
			};
			create="WoodenFence_quaterpanel";
		};
	};
	class WoodenFence_quaterpanel: WoodenFence_base
	{
		model="z\addons\dayz_buildings\models\fence1_stage1.p3d";
		displayname="Wooden Fence 2nd Panel";
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
	};
	class WoodenFence_halfpanel: WoodenFence_base
	{
		model="z\addons\dayz_buildings\models\fence1_stage2.p3d";
		displayname="Wooden Fence 3rd Panel";
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
	};
	class WoodenFence_thirdpanel: WoodenFence_base
	{
		model="z\addons\dayz_buildings\models\fence1_stage3.p3d";
		displayname="Wooden Fence 4th Panel";
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
	};
	class WoodenFence_1: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence1.p3d";
		displayname="Wooden Fence Level 1";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
                "ItemWallBlueprint1",
				"ItemNails",
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
			requiredParts[]={};
			create="WoodenFenceBox1";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
			active="true";
		};
	};
	class WoodenFence_2: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence2.p3d";
		displayname="Wooden Fence Level 2";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
                "ItemWallBlueprint2",
				"ItemNails",
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
			requiredParts[]={};
			create="WoodenFenceBox2";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
			active="true";
		};
	};
	class WoodenFence_3: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence3.p3d";
		displayname="Wooden Fence Level 3";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemNails",
				"ItemLog",
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
			requiredParts[]={};
			create="WoodenFenceBox3";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
			active="true";
		};
	};
	class WoodenFence_4: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence4.p3d";
		displayname="Wooden Fence Level 4";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemNails",
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
			requiredParts[]={};
			create="WoodenFenceBox4";
			active="true";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
		};
	};
	class WoodenFence_5: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence5.p3d";
		displayname="Wooden Fence Level 5";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemNails",
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
			requiredParts[]={};
			create="WoodenFenceBox5";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
			active="true";
		};
	};
	class WoodenFence_6: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence6.p3d";
		displayname="Wooden Fence Level 6";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]=
			{
				"ItemNails",
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
			requiredParts[]={};
			create="WoodenFenceBox6";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
			active="true";
		};
	};
	class WoodenFence_7: WoodenFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\fence7.p3d";
		displayname="Wooden Fence Level 7";
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
			requiredParts[]={};
			create="WoodenFenceBox7";
		};
		class Maintenance
		{
			requiredTools[]=
			{
				"ItemToolbox"
			};
			requiredParts[]={};
			active="true";
		};
	};
	class MetalFence_base: DZ_buildables
	{
		scope=1;
		model="z\addons\dayz_buildings\models\metal_fence1.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayname="Metal Fence Level 1";
		mapSize=0.2;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class MetalFence_1: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1.p3d";
		displayname="Metal Fence Level 1";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="MetalFence_2";
		};
	};
	class MetalFence_1_ghost: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence1_ghost.p3d";
		displayname="Metal Fence (Ghost)";
	};
	class MetalFence_2: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence2.p3d";
		displayname="Metal Fence Level 2";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="MetalFence_3";
		};
	};
	class MetalFence_3: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence3.p3d";
		displayname="Metal Fence Level 3";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="MetalFence_4";
		};
	};
	class MetalFence_4: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence4.p3d";
		displayname="Metal Fence Level 4";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="MetalFence_5";
		};
	};
	class MetalFence_5: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence5.p3d";
		displayname="Metal Fence Level 5";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="MetalFence_6";
		};
	};
	class MetalFence_6: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence6.p3d";
		displayname="Metal Fence Level 6";
		class Upgrade
		{
			requiredTools[]=
			{
				"ItemEtool"
			};
			requiredParts[]={};
			create="MetalFence_7";
		};
	};
	class MetalFence_7: MetalFence_base
	{
		scope=2;
		model="z\addons\dayz_buildings\models\metal_fence7.p3d";
		displayname="Metal Fence Level 7";
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
		displayname="Wooden Stair Platform";
		mapSize=0.2;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		placement="vertical";
	};
	class Stairs1_ghost: Stairs1
	{
		model="z\addons\dayz_buildings\models\stairs_ghost.p3d";
		displayname="Wooden Stair (Ghost)";
	};
	class Land_Gate_IndVar2_5;
	class WoodenGate_1: Land_Gate_IndVar2_5
	{
		scope=2;
		displayName="Wooden Gate Level 1";
		model="z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.2;
		accuracy=0.2;
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
	class WoodenGate_1_ghost: WoodenGate_1
	{
		displayName="Wooden Gate Level 1 (Ghost)";
		model="z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
	};
	class WoodenGate_2: WoodenGate_1
	{
		displayName="Wooden Gate Level 2";
		model="z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	};
	class WoodenGate_3: WoodenGate_1
	{
		displayName="Wooden Gate Level 3";
		model="z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	};
	class WoodenGate_4: House
	{
		scope=2;
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.2;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		displayName="Wooden Gate Level 4";
		model="z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
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
	class MetalGate_1: Land_Gate_IndVar2_5
	{
		scope=2;
		displayName="Metal Gate Level 1";
		model="z\addons\dayz_buildings\models\gates\gate1_metal_dzam.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.2;
		accuracy=0.2;
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
	class MetalGate_1_ghost: MetalGate_1
	{
		displayName="Metal Gate (Ghost)";
		model="z\addons\dayz_buildings\models\gates\gate1_metal_dzam_ghost.p3d";
	};
	class MetalGate_2: MetalGate_1
	{
		displayName="Metal Gate Level 2";
		model="z\addons\dayz_buildings\models\gates\gate2_metal_dzam.p3d";
	};
	class MetalGate_3: MetalGate_1
	{
		displayName="Metal Gate Level 3";
		model="z\addons\dayz_buildings\models\gates\gate3_metal_dzam.p3d";
	};
	class MetalGate_4: House
	{
		scope=2;
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		mapSize=0.2;
		accuracy=0.2;
		vehicleClass="dayz_buildings";
		destrType="DestructNo";
		displayName="Metal Gate Level 4";
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
		displayName="DIY Manual (Wood)";
		descriptionShort="For wooden fences";
		class ItemActions
		{
			class Build
			{
				text="WoodenFence";
				script="; ['ItemDIY_wood','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]=
				{
					"ItemEtool"
				};
				consume[]={};
				ghost="WoodenFence_1_ghost";
				create="WoodenFence_1_foundation";
			};
		};
	};
	class ItemDIY_metal: ItemDIY_wood
	{
		picture="\z\addons\dayz_buildings\equip\icon_diy_metal.paa";
		model="z\addons\dayz_buildings\models\diymanual_metal.p3d";
		icon="Ca\misc\data\icons\i_danger_CA.paa";
		displayName="DIY Manual (Metal)";
		descriptionShort="For Metal fences";
		class ItemActions
		{
			class Build
			{
				text="MetalFence_1";
				script="; ['ItemDIY_metal','Build'] spawn player_build; r_action_count = r_action_count + 1;";
				require[]=
				{
					"ItemEtool"
				};
				consume[]={};
				create="MetalFence_1";
			};
		};
	};
};
