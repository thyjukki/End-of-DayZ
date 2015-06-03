private ["_obj", "_objType", "_allowedList", "_pos", "_dir", "_this", "_x", "_y", "_z"];

_objStand = _this select 3;
_allowedList = _objStand getVariable ["AllowedList", []];
_objs = _objStand getVariable ["TargetBuilding", false];

player removeAction s_player_baseDoor;
s_player_baseDoor = -1;

if ((getPlayerUID player) in _allowedList) then {
	{
		private ["_active", "_pos", "_pos_x", "_pos_y", "_pos_y", "_pos_z", "_origpos"];
		_active = _x getVariable ['active', 0];
		if (_active == 0) then {
			_pos = getPosATL _x;
			_pos_x = _pos select 0;
			_pos_y = _pos select 1;
			_pos_z = _pos select 2;
			_origpos = _x getVariable ['origpos', []];
			if (count _origpos < 1) then {
				_x setVariable ['origpos', _pos, true];
			};
			_x setVariable ['active', 1, true];
			_new_pos = [_pos_x, _pos_y, (_pos_z - 200)];
			_x setPosATL _new_pos;
		} else {
			_origpos = _x getVariable ['origpos', []];
			if (count _origpos > 1) then {
				_x setVariable ['active', 0, true];
				_x setPosATL _origpos;
			} else {
				cutText ["Please wait a few seconds and try again.", "PLAIN DOWN"];
			};
		};
	} forEach _objs;
	sleep 10;
} else {
	cutText ["You can not activate this infostand", "PLAIN DOWN"];
};
