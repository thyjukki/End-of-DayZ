private ["_item","_config","_consume","_create","_item_ammo","_consume_magsize","_create_magsize","_consume_type","_slotstart","_slotend","_dialog","_qty_total_ammo","_qty_consume_ammo","_qty_create_ammo","_qty_consume_mags","_qty_create_mags","_qty_free_slots","_control","_mag","_qtynew_create_ammo","_qtynew_consume_ammo","_qtynew_create_mags","_qtynew_consume_mags","_qtynew_consume_mags_full","_qtynew_create_mags_full","_qtynew_consume_ammo_rest","_qtynew_create_ammo_rest"];
disableSerialization;
call gear_ui_init;

_isOK = false;

_mag_out = "";
_item = _this select 0;
_selectedSlot = _this select 1;
_dialog = findDisplay 106;
_control = _dialog displayCtrl _selectedSlot;
//diag_log format [ "UNLOAD AMMO (%1/%2)", _selectedSlot, _control];
if (!(_item in magazines player)) exitWith {systemChat "Item not found"};

_config = configFile >> "CfgMagazines" >> _item;

_toBoGiven = getText (_config >> "baseBullet");
_mag_cur = gearSlotAmmoCount _control;
_selectedSlot setIDCAmmoCount 0;

if (_mag_cur <= 10) then {
	_giving = _toBoGiven + str(_mag_cur);

	player addMagazine _giving;
} else {
	while {_mag_cur >= 100} do {
		_mag_cur = _mag_cur - 100;
		_giving = _toBoGiven + str(100);
		_isOK = [player,_giving] call BIS_fnc_invAdd;
		if (!_isOK) then {
			_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
			_pile = if (count _nearByPile > 0) then {_nearByPile select 0};
			if (count _nearByPile == 0) then {
				_pos = player modeltoWorld [0,1,0];
				_pos set [2, 0];
				//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
				_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
				_pile setPosATL _pos;
			};
			_pile addMagazineCargoGlobal [_giving,1];
		};
	};

	if (_mag_cur > 50) then {
		_mag_cur = _mag_cur - 50;
		_giving = _toBoGiven + str(50);
		_isOK = [player,_giving] call BIS_fnc_invAdd;
		if (!_isOK) then {
			_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
			_pile = if (count _nearByPile > 0) then {_nearByPile select 0};
			if (count _nearByPile == 0) then {
				_pos = player modeltoWorld [0,1,0];
				_pos set [2, 0];
				//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
				_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
				_pile setPosATL _pos;
			};
			_pile addMagazineCargoGlobal [_giving,1];
		};
	};
	
	_base10 = floor (_mag_cur / 10)*10;

	if (_base10 > 0) then {
		_giving = _toBoGiven + str(_base10);
		//diag_log format ["_base10, %1 (%2), giving %3", _base10, _mag_cur,_giving];
		_isOK = [player,_giving] call BIS_fnc_invAdd;
		if (!_isOK) then {
			_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
			_pile = if (count _nearByPile > 0) then {_nearByPile select 0};
			if (count _nearByPile == 0) then {
				_pos = player modeltoWorld [0,1,0];
				_pos set [2, 0];
				//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
				_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
				_pile setPosATL _pos;
			};
			_pile addMagazineCargoGlobal [_giving,1];
		};
	};
	
	_base1 = _mag_cur - _base10;
	
	if (_base1 > 0) then {
		_giving = _toBoGiven + str(_base1);
		//diag_log format ["_base1, %1 (%2), giving %3", _base1, _mag_cur,_giving];
		_isOK = [player,_giving] call BIS_fnc_invAdd;
		if (!_isOK) then {
			_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
			_pile = if (count _nearByPile > 0) then {_nearByPile select 0};
			if (count _nearByPile == 0) then {
				_pos = player modeltoWorld [0,1,0];
				_pos set [2, 0];
				//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
				_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
				_pile setPosATL _pos;
			};
			_pile addMagazineCargoGlobal [_giving,1];
		};
	};
};

player addMagazine getText (_config >> "emptyMag");
cutText [format["Unloaded %1 %2 rounds from %3",getText (configFile >> "CfgMagazines" >> _toBoGiven >> "baseDesc"),getText (_config >> "displayName")], "PLAIN DOWN"];

sleep 1;