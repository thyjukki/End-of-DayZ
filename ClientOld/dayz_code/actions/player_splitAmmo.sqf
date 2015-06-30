private ["_item","_config","_consume","_create","_item_ammo","_consume_magsize","_create_magsize","_consume_type","_slotstart","_slotend","_dialog","_qty_total_ammo","_qty_consume_ammo","_qty_create_ammo","_qty_consume_mags","_qty_create_mags","_qty_free_slots","_control","_mag","_qtynew_create_ammo","_qtynew_consume_ammo","_qtynew_create_mags","_qtynew_consume_mags","_qtynew_consume_mags_full","_qtynew_create_mags_full","_qtynew_consume_ammo_rest","_qtynew_create_ammo_rest"];
disableSerialization;
call gear_ui_init;

//note - one slot ammo can be used!
r_action_count = r_action_count + 1;
if (r_action_count != 1) exitWith { cutText [localize "str_player_actionslimit", "PLAIN DOWN"]; };

_isOK = false;
_item = _this;

if (!(_item in magazines player)) exitWith {r_action_count = 0;};

_config = configFile >> "CfgMagazines" >> _item;

_create = getArray (_config >> "ItemActions" >> "Split" >> "out");
_createCount = count _create;

player playActionNow "PutDown";

{
    _isOK = [player,_x] call BIS_fnc_invAdd;
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
		_pile addMagazineCargoGlobal [_x,1];
	};
}
forEach _create;

if (!_isOK) then {
	closeDialog 0;
	cutText ["Not enough room, some ammo was dropped onto the ground.", "PLAIN DOWN"];
};

player removeMagazine _item;
sleep 1;
r_action_count = 0;