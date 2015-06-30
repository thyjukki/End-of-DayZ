

#define LOAD_AMMO 	class ItemActions {\
		class loadMag {\
			text = "Load";\
			script = "spawn player_loadAmmo;";\
		};\
		class unLoadMag {\
			text = "Un Load";\
			script = "spawn player_unloadAmmo;";\
		};\
	};\
	loadAble=1;


#include "EmptyMag.hpp"
#include "9x18.hpp"
#include "9x19.hpp"
#include "545x39.hpp"
#include "9x39.hpp"
#include "22lr.hpp"
#include "30cal.hpp"
#include "32ACP.hpp"
#include "44m.hpp"
#include "45ACP.hpp"
#include "46x30.hpp"
#include "50AE.hpp"
#include "57x28.hpp"
#include "127x99.hpp"
#include "357.hpp"
#include "338.hpp"
#include "556x45.hpp"
#include "635x15.hpp"
#include "762x25.hpp"
#include "762x39.hpp"
#include "762x51.hpp"
#include "762x54r.hpp"
#include "792x33.hpp"

#undef LOAD_AMMO