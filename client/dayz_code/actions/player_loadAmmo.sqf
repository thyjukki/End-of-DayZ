private ["_item","_config","_consume","_create","_item_ammo","_consume_magsize","_create_magsize","_consume_type","_slotstart","_slotend","_dialog","_qty_total_ammo","_qty_consume_ammo","_qty_create_ammo","_qty_consume_mags","_qty_create_mags","_qty_free_slots","_control","_mag","_qtynew_create_ammo","_qtynew_consume_ammo","_qtynew_create_mags","_qtynew_consume_mags","_qtynew_consume_mags_full","_qtynew_create_mags_full","_qtynew_consume_ammo_rest","_qtynew_create_ammo_rest"];
disableSerialization;
call gear_ui_init;

_isOK = false;

_mag_out = "";
_item = _this select 0;
_selectedSlot =  _this select 1;
_dialog = findDisplay 106;
_Break = false;
_control = _dialog displayCtrl _selectedSlot;
if (!(_item in magazines player)) exitWith {systemChat "Item not found"};

_config = configFile >> "CfgMagazines" >> _item;

if (r_ammo_selected_mode == 2) then
{
	if (0 < getNumber (configFile >> "CfgMagazines" >> _item >> "bulletCount")) exitWith 
	{
		systemChat "Select magazine";
	};
	_selected_ammo = r_ammo_selected;
	_selected_mag = _item;
	
	_ammo_type = getText (configFile >> "CfgMagazines" >> _selected_ammo >> "ammo");
	_ammo_count = getNumber (configFile >> "CfgMagazines" >> _selected_ammo >> "bulletCount");
	//check that the ammunitions are compatible with magazine
	_mag_cur = 0;
	_mag_limit = 0;
	_mag_out = "";
	_isEmptyMag = getNumber (configFile >> "CfgMagazines" >> _selected_mag >> "isEmptyMag");
	if (1 == _isEmptyMag) then
	{ 
		
		if (!(isClass (configFile >> "CfgMagazines" >> _selected_mag >> "ammoType" >> _ammo_type))) exitWith
		{
			systemChat "Magazine not compatible with ammunition";
			_Break = true;
		};
		
		_mag_out = getText(configFile >> "CfgMagazines" >> _selected_mag >> "ammoType" >> _ammo_type >> "ammoMag");
		_mag_limit = getNumber (configFile >> "CfgMagazines" >> _mag_out >> "count");
		//diag_log format ["Testing, empty magazine %1 (%2), with ammo %3 (%4)", _selected_mag, _mag_limit, _ammo_type, _ammo_count];
		
	}
	else
	{

		if (_ammo_type != getText(configFile >> "CfgMagazines" >> _selected_mag >> "ammo")) exitWith
		{
			systemChat "Magazine not compatible with ammunition";
			_Break = true;
		};

		_mag_out = _selected_mag;
		_mag_limit = getNumber (configFile >> "CfgMagazines" >> _mag_out >> "count");
		_mag_cur = gearSlotAmmoCount _control;

		if (_mag_cur == _mag_limit) exitWith
		{
			systemChat "Magazine is full";
			_Break = true;
		};

		//diag_log format ["Testing, magazine %1 (%2/%3), with ammo %4 (%5)", _selected_mag, _mag_cur, _mag_limit, _ammo_type, _ammo_count];
	};
	if (_Break) exitWith{};

	_loaded_to_mag = _mag_cur + _ammo_count;
	if (_loaded_to_mag <= _mag_limit) then
	{

		if (1 == _isEmptyMag) then 
		{
			player removeMagazine _selected_mag;
			player addMagazine [_mag_out, _loaded_to_mag];
		}
		else
		{
			_selectedSlot setIDCAmmoCount _loaded_to_mag;
		};

		player removeMagazine _selected_ammo;

		systemChat format ["Loaded mag %1 with %2 rounds", getText (configFile >> "CfgMagazines" >> _mag_out >> "displayName"), _ammo_count];
	}
	else
	{

		if (1 == _isEmptyMag) then
		{
			player removeMagazine _selected_mag;
			player addMagazine [_mag_out, _mag_limit];
		}
		else
		{
			_selectedSlot setIDCAmmoCount _mag_limit;
		};

		player removeMagazine _selected_ammo;

		_extra_ammo = _loaded_to_mag - _mag_limit;
		
		_toBoGiven = getText (configFile >> "CfgMagazines" >> _selected_ammo >> "baseName");
		
		if (_extra_ammo <= 10) then
		{
			_giving = _toBoGiven + str(_extra_ammo);

			player addMagazine _giving;
		}
		else
		{
			while {_extra_ammo >= 100} do
			{
				_extra_ammo = _extra_ammo - 100;
				_giving = _toBoGiven + str(100);
				_isOK = [player,_giving] call BIS_fnc_invAdd;
				if (!_isOK) then
				{
					_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
					_pile = if (count _nearByPile > 0) then {_nearByPile select 0};

					if (count _nearByPile == 0) then
					{
						_pos = player modeltoWorld [0,1,0];
						_pos set [2, 0];
						//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
						_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
						_pile setPosATL _pos;
					};

					_pile addMagazineCargoGlobal [_giving,1];
				};
			};

			if (_extra_ammo > 50) then
			{
				_extra_ammo = _extra_ammo - 50;
				_giving = _toBoGiven + str(50);
				_isOK = [player,_giving] call BIS_fnc_invAdd;
				if (!_isOK) then
				{
					_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
					_pile = if (count _nearByPile > 0) then {_nearByPile select 0};

					if (count _nearByPile == 0) then
					{
						_pos = player modeltoWorld [0,1,0];
						_pos set [2, 0];
						//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
						_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
						_pile setPosATL _pos;
					};

					_pile addMagazineCargoGlobal [_giving,1];
				};
			};
			
			_base10 = floor (_extra_ammo / 10);

			if (_base10 > 0) then
			{
				_giving = _toBoGiven + str(_base10*10);
				//diag_log format ["_base10, %1 (%2), giving %3", _base10*10, _extra_ammo,_giving];
				_isOK = [player,_giving] call BIS_fnc_invAdd;

				if (!_isOK) then
				{
					_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
					_pile = if (count _nearByPile > 0) then {_nearByPile select 0};

					if (count _nearByPile == 0) then
					{
						_pos = player modeltoWorld [0,1,0];
						_pos set [2, 0];
						//diag_log format [ "%1 itempos:%2 _nearByPile:%3", __FILE__, _pos, _nearByPile];
						_pile = createVehicle ["WeaponHolder", _pos, [], 0.0, "CAN_COLLIDE"];
						_pile setPosATL _pos;
					};

					_pile addMagazineCargoGlobal [_giving,1];
				};
			};
			
			_base1 = _extra_ammo - _base10*10;
			
			if (_base1 > 0) then
			{
				_giving = _toBoGiven + str(_base1);
				//diag_log format ["_base1, %1 (%2), giving %3", _base1, _extra_ammo,_giving];
				_isOK = [player,_giving] call BIS_fnc_invAdd;

				if (!_isOK) then
				{
					_nearByPile = nearestObjects [getPosATL player, ["WeaponHolder","WeaponHolderBase"], 2];
					_pile = if (count _nearByPile > 0) then {_nearByPile select 0};

					if (count _nearByPile == 0) then
					{
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
	r_ammo_selected_slot = 0;
	r_ammo_selected = "";
	r_ammo_selected_mode = 0;

}
else
{
	if (0 == getNumber (configFile >> "CfgMagazines" >> _item >> "bulletCount")) exitWith {systemChat "Select bullet first";};
	r_ammo_selected_slot = _selectedSlot;	
	r_ammo_selected = _item;
	r_ammo_selected_mode = 2;
	systemChat format ["%1 selected, select magazine to load", getText (configFile >> "CfgMagazines" >> _item >> "displayName") ];
};

sleep 1;