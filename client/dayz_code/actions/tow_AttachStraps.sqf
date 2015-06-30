private ["_vehicle","_started","_finished","_animState","_isMedic","_abort","_configVeh","_nameText","_findNearestVehicles","_findNearestVehicle","_IsNearVehicle","_towTruck","_towTruckSize","_allowedSize"];

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_96") , "PLAIN DOWN"] };
DZE_ActionInProgress = true;

player removeAction s_player_towing;
s_player_towing = 1;

// Tow Truck
_towTruck = _this select 3;
_towTruckSize = (sizeOf typeOf _towTruck);

_allowedSize = _towTruckSize-(_towTruckSize/3);

// Get all nearby vehicles within 10m
_findNearestVehicles = nearestObjects [_towTruck, ["Car","Motorcycle"], 10];
_findNearestVehicle = [];
{
	if (alive _x && _towTruck != _x) then {
		if([_x,_towTruck] call fnc_isInsideBuilding2) then {
			_findNearestVehicle set [(count _findNearestVehicle),_x];
		};
	};
} count _findNearestVehicles;
		
_IsNearVehicle = count (_findNearestVehicle);

if(_IsNearVehicle >= 1) then {

	// select the nearest one
	_vehicle = _findNearestVehicle select 0;

	// Static vehicle fuel information
	_configVeh = 	configFile >> "cfgVehicles" >> TypeOf(_vehicle);
	_nameText = 	getText(_configVeh >> "displayName");

	// alert zombies
	[player,20,true,(getPosATL player)] spawn player_alertZombies;

	_finished = false;

	[1,1] call dayz_HungerThirst;
	// force animation 
	player playActionNow "Medic";

	r_interrupt = false;
	_animState = animationState player;
	r_doLoop = true;
	_started = false;

	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started && !_isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		if (r_interrupt) then {
			r_doLoop = false;
		};
		sleep 0.1;
	};
	r_doLoop = false;

	if(!_finished) then {
		r_interrupt = false;
			
		if (vehicle player == player) then {
			[objNull, player, rSwitchMove,""] call RE;
			player playActionNow "stop";
		};
		_abort = true;
	};

	if (_finished) then {
		
		if((sizeOf typeOf _vehicle) <= _allowedSize) then {
			if([_vehicle,_towTruck] call fnc_isInsideBuilding2 && ((vectorUp _vehicle) select 2) > 0.5) then {
				if(typeOf _towTruck == "TOW_DZE" ) then {
					_vehicle attachTo [_towTruck,[1.3,-2,2.3]];
					_towTruck setVariable ["DZEinTow", true, true];
					_towTruck setVariable ["DZEvehicleInTow", _vehicle, true];
					cutText [format[(localize "str_epoch_player_175"),_nameText], "PLAIN DOWN"];
				};	
			} else {
				cutText [format[(localize "str_epoch_player_176"),_nameText], "PLAIN DOWN"];
			};

		} else {
			cutText [format[(localize "str_epoch_player_177"),_nameText], "PLAIN DOWN"];
		};

	};



} else {
	cutText [(localize "str_epoch_player_27"), "PLAIN DOWN"];
};
DZE_ActionInProgress = false;
s_player_towing = -1;