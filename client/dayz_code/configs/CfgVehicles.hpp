class CfgVehicles {
	class ALL;
	class AllVehicles : ALL
	{
		class NewTurret;
	};
	class Air : AllVehicles
	{
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};
	class Helicopter : Air
	{
		class HitPoints;
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
				class ViewOptics;
            };
        };
	};
	class Land: AllVehicles
	{
		//class NewTurret;
	};

	
// allow backpack on all units	
	class Man: Land
	{
		canCarryBackPack = 1;
	};

	class LandVehicle : Land
	{
		class HitPoints;
		//class Turrets
        //{
        //    class MainTurret: NewTurret
        //    {
        //        class Turrets;
		//		class ViewOptics;
        //    };
        //};
	};
	class Car : LandVehicle {
		class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
				class ViewOptics;
            };
        };
	};


	//External Class
	class SkodaBase;
	class ATV_Base_EP1;
	class Motorcycle;
	class RubberBoat;
	class UAZ_Unarmed_Base;
	class HMMWV_Base;
	class AH6_Base_EP1;
	class An2_Base_EP1;
	class TT650_Base;
	class V3S_Base;
	class SUV_Base_EP1;
	class Ship;
	//class Bag_Base_EP1;
	//class Bag_Base_BAF;
	class House {
		class DestructionEffects;
	};
	class SpawnableWreck : House {};
	class Strategic;
	class NonStrategic;
	class Land_Fire;
	class Animal;
	class Pastor;
	class BuiltItems;
	class Building;

	#include "CfgVehicles\RepairParts.hpp" //names for all reapir parts. Needs moving to hitpoints
	//ZEDS
	#include "CfgVehicles\Zeds\Zeds.hpp" //old type zeds
	#include "CfgVehicles\Zeds\ZedsSlow.hpp" //old type zeds
	#include "CfgVehicles\Zeds\ViralZeds.hpp" //Viral type zeds
	#include "CfgVehicles\Zeds\WildZeds.hpp" //Viral type zeds
	#include "CfgVehicles\Zeds\SwarmZeds.hpp" //Swarm
	//Survivor Skins
	#include "CfgVehicles\Skins.hpp"
	//Bags
	#include "CfgVehicles\Bags.hpp"
	//DZAnimal and DZ_Fin
	#include "CfgVehicles\Animal.hpp"

	//Includes all DayZ Vehilces
	//Car's
	#include "CfgVehicles\Car\HMMWV.hpp"
	#include "CfgVehicles\Car\CAR_HATCHBACK.hpp"
	#include "CfgVehicles\Car\UAZ_CDF.hpp"
	#include "CfgVehicles\Car\CAR_SEDAN.hpp"
	#include "CfgVehicles\Car\V3S_Civ.hpp"
	#include "CfgVehicles\Car\SUV_DZ.hpp"
	#include "CfgVehicles\Car\Pickup_PK_INS.hpp"
	#include "CfgVehicles\Car\Offroad_DSHKM_INS.hpp"
	//Helicopter's
	#include "CfgVehicles\Helicopter\MI17.hpp"
	#include "CfgVehicles\Helicopter\UH1H.hpp"
	#include "CfgVehicles\Helicopter\UH1H2.hpp"
	#include "CfgVehicles\Helicopter\AH6X.hpp"
	#include "CfgVehicles\Helicopter\MH6J_DZ.hpp"
	//Wreck's
	#include "CfgVehicles\Helicopter\MI8Wreck.hpp"
	#include "CfgVehicles\Helicopter\UH1Wreck.hpp"
	#include "CfgVehicles\Helicopter\UH60Wreck.hpp"
	//Plane's
	#include "CfgVehicles\Plane\AN2_DZ.hpp"
	//Bikes
	#include "CfgVehicles\Bikes\ATV_US_EP1.hpp"
	#include "CfgVehicles\Bikes\ATV_CZ_EP1.hpp"
	#include "CfgVehicles\Bikes\TT650_Ins.hpp"
	#include "CfgVehicles\Bikes\TT650_Civ.hpp"
	#include "CfgVehicles\Bikes\M1030.hpp"
	//Boat
	#include "CfgVehicles\Boat\PBX.hpp"
	#include "CfgVehicles\Boat\Fishing_Boat.hpp"

	//Includes all Building Stuff
	// This parent class is made to make referring to these objects easier later with allMissionObjects
	#include "CfgVehicles\Buildings\HouseDZ.hpp"
	//Fire
	#include "CfgVehicles\Buildings\Land_Fire.hpp"
	//Buildings
	#include "CfgVehicles\Buildings\Land_A_Crane_02b.hpp"
	#include "CfgVehicles\Buildings\Land_A_FuelStation_Feed.hpp"
	#include "CfgVehicles\Buildings\Land_A_TVTower_Mid.hpp"
	#include "CfgVehicles\Buildings\Land_A_TVTower_Top.hpp"
	#include "CfgVehicles\Buildings\Land_Farm_WTower.hpp"
	#include "CfgVehicles\Buildings\Land_HouseB_Tenement.hpp"
	#include "CfgVehicles\Buildings\Land_Ind_MalyKomin.hpp"
	#include "CfgVehicles\Buildings\Land_komin.hpp"
	#include "CfgVehicles\Buildings\Land_fuel_tank_kerosene.hpp"
	#include "CfgVehicles\Buildings\Land_majak.hpp"
	#include "CfgVehicles\Buildings\Land_Mil_ControlTower.hpp"
	#include "CfgVehicles\Buildings\Land_NAV_Lighthouse.hpp"
	#include "CfgVehicles\Buildings\Land_NavigLight.hpp"
	#include "CfgVehicles\Buildings\Land_Rail_Semafor.hpp"
	#include "CfgVehicles\Buildings\Land_Rail_Zavora.hpp"
	#include "CfgVehicles\Buildings\Land_runway_edgelight.hpp"
	#include "CfgVehicles\Buildings\Land_Stoplight.hpp"
	#include "CfgVehicles\Buildings\Land_telek1.hpp"
	#include "CfgVehicles\Buildings\Land_VASICore.hpp"
	#include "CfgVehicles\Buildings\Land_Vysilac_FM.hpp"

	//camo
	#include "CfgVehicles\CamoNetting.hpp"


	//WeaponHolder
	#include "CfgVehicles\WeaponHolder.hpp"

	//itemBox's
	//#include "CfgVehicles\CardboardBox.hpp"

	//Tents,storage
	//#include "CfgVehicles\Storage.hpp"
	
	// Traps 
	#include "CfgVehicles\Traps.hpp"

	//Antihack
	#include "CfgVehicles\antihack_logic.hpp"
	#include "CfgVehicles\antihack_plants.hpp"
	
	//Blood Trail
	#include "CfgVehicles\Buildings\Blood_Trail_DZ.hpp"
	
	//Camps
	#include "CfgVehicles\InfectedCamps\IC_Fireplace1.hpp"

	class WeaponHolder;
	class Plant_Base: WeaponHolder {
		scope = 2;
		icon = "";
		mapSize = 0;
		transportMaxWeapons = 0;
		accuracy = 1000;
		class DestructionEffects{};
		favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
		displayName = "$STR_ITEM_NAME_comfrey";
		class eventHandlers {
			init="(_this select 0)setVariable['permaLoot',true];";
		};
		supplyRadius = 1;
	};
	#include "CfgVehicles\gathered_plants.hpp"
	
	class Wire_cat1 : BuiltItems {
		displayName = $STR_BUILT_WIRE1;
	};
	
	class Wire_cat2 : Wire_cat1 {
		displayName = $STR_BUILT_WIRE2;
	};
	
	class Hedgehog_DZ : BuiltItems {
		displayName = $STR_BUILT_HEDGEHOG;
	};
	
	class Sandbag1_DZ : BuiltItems {
		displayName = $STR_BUILT_SANDBAG;
	}; 

	class CampEast;
	class CampEast_EP1_nz: CampEast {
		expansion = 1;
		model = "\ca\Misc_E\Stan_east_ep1.p3d";
		scope = 2;
	};

	class Grave;
	class Grave_nz: Grave {};

	class UralWreck;
	class UralWreck_nz: UralWreck {};

	class LADAWreck;
	class LADAWreck_nz: LADAWreck {};

	class SKODAWreck;
	class SKODAWreck_nz: SKODAWreck {};

	class MASH;
	class MASH_nz: MASH {};

	class Land_tent_east;
	class Land_tent_east_nz: Land_tent_east {};

	class Land_Misc_Scaffolding;
	class Land_Misc_Scaffolding_nz: Land_Misc_Scaffolding {};

	class Misc_TyreHeap;
	class Misc_TyreHeap_nz: Misc_TyreHeap {};

	class Land_Shed_wooden;
	class Land_Shed_wooden_nz: Land_Shed_wooden {};

	class Land_Misc_Garb_Heap_EP1;
	class Land_Misc_Garb_Heap_EP1_nz: Land_Misc_Garb_Heap_EP1 {};

	class Land_Toilet;
	class Land_Toilet_nz: Land_Toilet {};
};
class CfgNonAIVehicles {
	#include "CfgVehicles\StreetLamps.hpp"
};
