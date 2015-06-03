private ["_plant","_mags","_weps", "_item"];
_plant = _this;
if (_plant getVariable["Gathering",false]) exitWith {};

_mags = (getMagazineCargo _plant) select 0;
_weps = (getWeaponCargo _plant) select 0;

if ((count _mags != 1 OR count _weps != 0) OR {!("equip_comfreyleafs" in _mags)}) then {
	_plant setVariable["Gathering",true]; // avoid multiple call because the fn_selfActions is called in an infinite loop
	[_this] spawn { // in background to be called after fn_selfActions
		_plant = _this select 0;
		_mags = (getMagazineCargo _plant) select 0;
		_weps = (getWeaponCargo _plant) select 0;
		if (count _mags != 0 OR count _weps != 0) then { // if not empty
			// replace plant to a regular weaponholder
			_item = createVehicle ["WeaponHolder", (getPosATL _plant), [], 0, "CAN_COLLIDE"];
			_magcounts = (getMagazineCargo _plant) select 1;
			{
				_item addMagazineCargoGlobal [_x, _magcounts select _forEachIndex];
			} forEach _mags;
			_wepcounts = (getWeaponCargo _plant) select 1;
			{
				_item addWeaponCargoGlobal [_x, _wepcounts select _forEachIndex];
			} forEach _weps;
		};
		deleteVehicle _plant;

		//Make some noise
		_dis=2;
		_sfx = "tentpack";
		[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		[player,_dis,true,(getPosATL player)] call player_alertZombies;

		//PVDZ_objgather_Delete = [_plant,player];
		//publicVariableServer "PVDZ_objgather_Delete";
	};
};
		
/*
if (_r > 0) then {
	//Cutext on successful pickup
	_string = format[localize "str_success_gathered",getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName"), _r, _l];
	cutText [_string, "PLAIN DOWN"];
};

if (_r < 1) then {
	//reset anti dupe on failed attempt
	_plant setVariable["Gathering",nil];
	
	//Failed Msg due to invenotry being full.
	_text = getText (configFile >> "CfgMagazines" >> _type >> "displayName");
	cutText [format[localize "str_failed_noroom",_text], "PLAIN DOWN"];
};
*/