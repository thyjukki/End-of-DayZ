/*
	DayZ Fishing
	Usage: spawn player_goFishing;
	Made for DayZ Mod please ask permission to use/edit/distrubute email vbawol@veteranbastards.com.
*/
private ["_linecastmax","_linecastmin","_num","_position","_ispond","_objectsPond","_isPondNearBy","_isOk","_counter","_vehicle","_inVehicle","_rnd","_itemOut","_text","_item","_itemtodrop","_result"];

_vehicle = _this select 3;

_vehicle removeAction (_this select 2);
s_player_fishing = -1;
s_player_fishing_veh = -1;

if(dayz_fishingInprogress) exitWith { cutText [localize "str_fishing_inprogress", "PLAIN DOWN"];};
dayz_fishingInprogress = true;

//line distance
_linecastmax = 67;
_linecastmin = 37;

_num = (round(random _linecastmax)) max _linecastmin;

// find position 5m in front of player
_position = player modeltoworld [0,5,0];

_ispond = false;

/*
_objectsPond = 	nearestObjects [_position, [], 25];
{
	_isPondNearBy = ["pond",str(_x),false] call fnc_inString;
	if (_isPondNearBy) then {
		_ispond = true;
	};
	//diag_log (str(_x));
} forEach _objectsPond;
*/

//diag_log (str(_ispond));

if (!(surfaceIsWater _position) and !(_ispond)) exitWith {
	dayz_fishingInprogress = false;
	cutText [localize "str_fishing_watercheck" , "PLAIN DOWN"];
};

_isOk = true;
_counter = 0;

// swing fishingpole
player playActionNow "GestureSwing";

// Alert zeds
[player,3,true,(getPosATL player)] call player_alertZombies;

r_interrupt = false;

while {_isOk} do {
	if(dayz_isSwimming) exitWith {cutText [localize "str_player_26", "PLAIN DOWN"];_isOk = false;};
	if !((currentWeapon player) in Dayz_fishingItems) exitwith {cutText [localize "str_fishing_canceled", "PLAIN DOWN"];_isOk = false;};

	if (r_interrupt) then {
		_isOk = false;
		cutText [localize "str_fishing_canceled", "PLAIN DOWN"];
	} else {
		//make sure the player isnt swimming

		// wait for animation
		sleep 2;

		// check if player is in boat
		_vehicle = vehicle player;
		if ((_vehicle != player) and (_vehicle isKindOf "Ship")) then {
			_inVehicle = true;
			_rnd = 75;
		} else {
			_inVehicle = false;
			_rnd = 100;
		};
		//Check for rain fish are more active during the rain.
		if (rain > 0) then {_rnd = _rnd / 2;};

		// 1% chance to catch anything
		if((random _rnd) <= 5) then {
			// Just the one fish for now
			_itemOut = [];
			_itemOut = switch (true) do {
				case ((_num > 30) and (_num <= 45)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout"]; };
				case ((_num > 45) and (_num <= 60)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawSeaBass","FishRawSeaBass"]; };
				case ((_num > 60)) : { ["FishRawTrout","FishRawTrout","FishRawTrout","FishRawTrout","FishRawSeaBass","FishRawSeaBass","FishRawTuna"]; }; 				
				default { ["FishRawTrout"]; };
			};
			_itemOut = _itemOut call BIS_fnc_selectRandom;
			_text = getText (configFile >> "CfgMagazines" >> _itemOut >> "displayName");
			if(_inVehicle) then { 
				_item = _vehicle;
				_itemtodrop = _itemOut;
				_item addMagazineCargoGlobal [_itemtodrop,1];
				//Let the player know what he caught
				cutText [format[localize "str_fishing_success",_text], "PLAIN DOWN"];
			} else {
				call gear_ui_init;
				//Remove melee magazines (BIS_fnc_invAdd fix) 
				{player removeMagazines _x} forEach MeleeMagazines;
				_result = [player,_itemOut] call BIS_fnc_invAdd;
				if (_result) then {
					//Let the player know what he caught
					cutText [format[localize "str_fishing_success",_text], "PLAIN DOWN"];
				} else {
					cutText [format[localize "str_fishing_noroom",_text], "PLAIN DOWN"];
				};
				//adding melee mags back if needed
				call dayz_meleeMagazineCheck;
			};
			
			//"Working",0,[cal,thirst,hunger]
			["Working",0,[3,2,8]] call dayz_NutritionSystem;
			_isOk = false;
		} else {

			switch (true) do {
				case (_counter == 0) : { cutText [format[localize "str_fishing_cast",_num], "PLAIN DOWN"]; }; 
				case (_counter == 4) : { cutText [localize "str_fishing_pull", "PLAIN DOWN"]; player playActionNow "GesturePoint"; }; 
				case (_counter == 8) : { cutText [localize "str_fishing_pull", "PLAIN DOWN"]; player playActionNow "GesturePoint"; };
				default { cutText [localize "str_fishing_nibble", "PLAIN DOWN"]; };
			}; 
			_counter = _counter + 1;

			if(_counter == 12) then {
				_isOk = false;
				sleep 1;
				cutText [localize "str_fishing_failed", "PLAIN DOWN"];
			};
		};
	};
};
dayz_fishingInprogress = false;