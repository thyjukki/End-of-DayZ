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

		
	//Bullets
	class baseBullet : CA_Magazine {
		scope = private;
		count=1;
		bulletCount = 1;
	};

	#include "bullets\45acp.hpp"
	#include "bullets\32acp.hpp"
	#include "bullets\762x39.hpp"

	
	//attachemtns
	#include "Attachments\AttAcog.hpp"
	#include "Attachments\AttAimpoint.hpp"
	#include "Attachments\AttHolo.hpp"
	#include "Attachments\AttLauncher.hpp"
	#include "Attachments\AttScope.hpp"
	#include "Attachments\AttSilencer.hpp"
	
	//Crafting materials
	#include "Crafting\Crafting.hpp"
};