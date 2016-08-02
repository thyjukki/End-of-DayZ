class CfgMagazines
{
	//External references
	class CA_Magazine;
	class HandGrenade;
	
	
	
	//Weapon magazines
	#include "Magazines\Magazines.hpp"
	
	//Trash
	#include "Trash\Trash.hpp"
	
	//Vehicle parts
	#include "VehicleParts.hpp"
	
	//Chemlight and Roadflare
	#include "Throwable.hpp"
	
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
		tracersevery = 1;
	};

	#include "bullets\b_9x18.hpp"
	#include "bullets\b_9x19.hpp"
	#include "bullets\b_9x39.hpp"
	#include "bullets\b_22lr.hpp"
	#include "bullets\b_44.hpp"
	#include "bullets\b_357.hpp"
	#include "bullets\b_338.hpp"
	#include "bullets\b_30cal.hpp"
	#include "bullets\b_32acp.hpp"
	#include "bullets\b_45acp.hpp"
	#include "bullets\b_46x30.hpp"
	#include "bullets\b_50AE.hpp"
	#include "bullets\b_57x28.hpp"
	#include "bullets\b_545x39.hpp"
	#include "bullets\b_556x45.hpp"
	#include "bullets\b_762x25.hpp"
	#include "bullets\b_762x51.hpp"
	#include "bullets\b_762x39.hpp"
	#include "bullets\b_762x54.hpp"
	#include "bullets\b_792x33.hpp"
	
	//Crafting materials
	#include "Crafting\Crafting.hpp"
	
	//Consumables: food, drinks etc.
	#include "Consumables\Consumables.hpp"
};