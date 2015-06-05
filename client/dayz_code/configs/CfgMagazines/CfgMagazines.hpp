class CfgMagazines
{
	class CA_Magazine;	// External class reference
	//class FoodDrink; //External class reference
	//class FoodEdible; //External class reference
	class TrashTinCan; //External class reference
	class HandGrenade; //External class reference
	
	
	
	//Weapon magazines
	#include "Magazines\Magazines.hpp"
	
	//Trash
	#include "TrashTinCan.hpp"
	#include "TrashLoot.hpp"
	

	#include "CfgMagazines\CombineMag.hpp"
	#include "CfgMagazines\Magazines\pistol_mags.hpp"
	#include "CfgMagazines\Magazines\smg_mags.hpp"
	#include "CfgMagazines\Magazines\rifle_mags.hpp"
	#include "CfgMagazines\EmptyMag.hpp"
	//Chemlight and Roadflare
	#include "HandGrenade.hpp"
	
	//Clothing
	#include "Clothing\Clothing.hpp"
	
	//Medical
	#include "Medical\Medical.hpp"
	
	//Miscellaneous
	#include "Items\Items.hpp"
	
	//Attachments
	#include "Attachments\Attachments.hpp"


	#include "CfgMagazines\bullets\45acp.hpp"
	#include "CfgMagazines\bullets\32acp.hpp"
	#include "CfgMagazines\bullets\762x39.hpp"

	
	//attachemtns
	#include "CfgMagazines\Attachments\AttAcog.hpp"
	#include "CfgMagazines\Attachments\AttAimpoint.hpp"
	#include "CfgMagazines\Attachments\AttHolo.hpp"
	#include "CfgMagazines\Attachments\AttLauncher.hpp"
	#include "CfgMagazines\Attachments\AttScope.hpp"
	#include "CfgMagazines\Attachments\AttSilencer.hpp"
	
	//Crafting materials
	#include "Crafting\Crafting.hpp"
};