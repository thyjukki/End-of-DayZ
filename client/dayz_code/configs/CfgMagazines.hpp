class CfgMagazines {
	class CA_Magazine;	// External class reference
	//class FoodDrink; //External class reference
	//class FoodEdible; //External class reference
	class TrashTinCan; //External class reference
	class HandGrenade; //External class reference
	
	class Quiver : CA_Magazine {
		scope = public;
		ammo = "WoodenArrow";
		count = 12;
		type = 256 * 2;
		descriptionShort = $STR_ITEMQUIVER_CODE_DESC;
		displayName = $STR_ITEMQUIVER_CODE_NAME;
		initSpeed = 150;
		model = "\z\addons\dayz_communityassets\models\quiver";
		picture = "\z\addons\dayz_communityassets\pictures\equip_quiver_ca.paa";
		
		class ItemActions {
		/*
			class TakeArrow {
				text = $STR_ACTION_TAKEARROW;
				script = "spawn player_takearrow;";
			};
		*/	
			class FillQuiver {
				text = $STR_ACTION_FILLQUIVER;
				script = "spawn player_fillquiver;";
			};
			class CombineMag {
				text = "Combine Quivers";
				script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
			};
		};
	};
	
	class WoodenArrow : CA_Magazine {
		scope = public;
		displayName = $STR_ITEMWOODENARROW_CODE_NAME;
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\z\addons\dayz_communityassets\pictures\equip_warrow_ca.paa";
		ammo = "WoodenArrow";
		count = 1;
		initSpeed = 150;
		descriptionShort = $STR_ITEMWOODENARROW_CODE_DESC;
		
		class ItemActions {
			class CreateQuiver {
				text = $STR_ACTION_CREATEQUIVER;
				script = "spawn player_createquiver;";
			};
		};
	};
	
	//add here any magazines types you want to be re-combined like shown before
	
	#include "CfgMagazines\CombineMag.hpp"
	#include "CfgMagazines\Magazines\pistol_mags.hpp"
	#include "CfgMagazines\Magazines\smg_mags.hpp"
	#include "CfgMagazines\Magazines\rifle_mags.hpp"
	#include "CfgMagazines\EmptyMag.hpp"
	#include "CfgMagazines\MeleeSwing.hpp"
	#include "CfgMagazines\TrashTinCan.hpp"
	#include "CfgMagazines\TrashLoot.hpp"
	//Chemlight and Roadflare
	#include "CfgMagazines\HandGrenade.hpp"
	//Skins
	#include "CfgMagazines\Skin.hpp"
	//Fuelcan
	//#include "CfgMagazines\Fuelcan.hpp"
	//#include "CfgMagazines\Jerrycan.hpp"
	//medical
	#include "CfgMagazines\medical.hpp"
	#include "CfgMagazines\BloodBags.hpp"
	
	//Bullets
	class baseBullet : CA_Magazine {
		scope = private;
		count=1;
		bulletCount = 1;
	};

	#include "CfgMagazines\bullets\45acp.hpp"
	#include "CfgMagazines\bullets\32acp.hpp"
	#include "CfgMagazines\bullets\762x39.hpp"
	
	
	//crafting
	#include "CfgCrafting\Mats.hpp"
	
	//attachemtns
	#include "CfgMagazines\Attachments\AttAcog.hpp"
	#include "CfgMagazines\Attachments\AttAimpoint.hpp"
	#include "CfgMagazines\Attachments\AttHolo.hpp"
	#include "CfgMagazines\Attachments\AttLauncher.hpp"
	#include "CfgMagazines\Attachments\AttScope.hpp"
	#include "CfgMagazines\Attachments\AttSilencer.hpp"
	
};