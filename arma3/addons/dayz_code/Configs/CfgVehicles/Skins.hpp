
class Man;

class Survivor_DZ : C_man_1 {
	scope = 1;
	side = TWest;
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	/*weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = true;
	backpack = "";
	canCarryBackPack = 1;
	enableGPS = 1;*/
	
	class Eventhandlers
	{
		local = "_z = _this select 0; if (!isServer && {!isNull _z} && {!(side _z in [west,east,civilian])}) exitWith { PVDZ_sec_atp = ['wrong side', player]; publicVariableServer 'PVDZ_sec_atp'; deleteVehicle _z; };";
	};
};