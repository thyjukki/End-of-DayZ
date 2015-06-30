private [
"_item",
"_isOK",
"_selectedSlot",
"_config",
"_selected_ammo",
"_ammo",
"_ammo2",
"_total_ammo",
"_ammo_count",
"_ammo2_count",
"_toBoGiven",
"_base10",
"_base1"
];
disableSerialization;
call gear_ui_init;


_isOK = false;

_item = _this select 0;
_selectedSlot = _this select 1;
if (!(_item in magazines player)) exitWith {systemChat "Item not found"};

_config = configFile >> "CfgMagazines" >> _item;
if (r_ammo_selected_mode == 1) then
{
	_selected_ammo = r_ammo_selected;

	if (r_ammo_selected_slot == _selectedSlot) exitWith {systemChat "Select diferent item.";};
	
	if (!(_selected_ammo in magazines player)) exitWith {
		systemChat "Original item not in inventory anymore.";
	};

	r_ammo_selected_slot = 0;
	r_ammo_selected = "";
	r_ammo_selected_mode = 0;

	_ammo = getText (configFile >> "CfgMagazines" >> _item >> "ammo");
	_ammo2 = getText (configFile >> "CfgMagazines" >> _selected_ammo >> "ammo");
	if (_ammo2 != _ammo) exitWith {
		systemChat "Not same type of ammo";
	};
	
	_toBoGiven = getText (configFile >> "CfgMagazines" >> _item >> "baseName");
	_ammo_count = getNumber (configFile >> "CfgMagazines" >> _item >> "bulletCount");
	_ammo2_count = getNumber (configFile >> "CfgMagazines" >> _selected_ammo >> "bulletCount");
	_total_ammo = _ammo_count + _ammo2_count;
	
	[player,_item,1] call BIS_fnc_invRemove;
	[player,_selected_ammo,1] call BIS_fnc_invRemove;
	
	if (_total_ammo > 0 && _total_ammo <= 10) then {
		_toBoGiven = _toBoGiven + str(_total_ammo);
		
		player addMagazine _toBoGiven;
		
	} else {
	
		while {_total_ammo >= 100} do {
			_total_ammo = _total_ammo - 100;
			player addMagazine (_toBoGiven + "100");
		};
	
		if (_total_ammo > 50) then {
			_total_ammo = _total_ammo - 50;
			player addMagazine (_toBoGiven + "50");
		};
		
		if (_total_ammo > 10 && _total_ammo <= 50) then {
			_base10 = floor (_total_ammo / 10);
			
			if (_base10 > 0) then {
				_giving = _toBoGiven + str(_base10 * 10);
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

			_base1 = _total_ammo - _base10*10;
			
			if (_base1 > 0) then {
				_giving = _toBoGiven + str(_base1);
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
	};

	systemChat format ["%1 combined with %2",  getText (configFile >> "CfgMagazines" >> _item >> "displayName") , getText (configFile >> "CfgMagazines" >> r_ammo_selected >> "displayName")];

} else {
	r_ammo_selected_slot = _selectedSlot;
	r_ammo_selected = _item;
	r_ammo_selected_mode = 1;
	systemChat format ["%1 selected, select what to stack with", getText (configFile >> "CfgMagazines" >> _item >> "displayName") ];
};

sleep 1;