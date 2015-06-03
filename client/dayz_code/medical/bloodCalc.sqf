/*
Created exclusively for ArmA2:OA - DayZMod.
permission is required to use/alter/distribute from project leader (R4Z0R49) AND the author (icomrade).

breakdown of blood type distribution (based on world population)
O		A		B		AB
39%		32%		23%		6%

We use realistic RH distribution per blood type as well
Ex. CID = 13... _bt_calc = 31... Blood Type = A
*/
private ["_CID_array","_ranVal","_length","_rh_val","_bt_val","_CID_first","_CID","_CID_select_1","_CID_select_2","_CID_1_String","_CID_2_String","_CID_1","_CID_2","_bt_calc"];

_CID = _this select 0;
//diag_log format["PLAYER BLOOD CALC: Character ID == %1", _CID];
_CID_array = toArray _CID;
_length = count _CID_array;
_CID_first = _CID_array select 0;

if (_length < 2) then {
	_CID_array = toArray str(_CID_first);
	_length = count _CID_array;
};

_CID_select_1 = [_CID_array select (_length - 1)];
_CID_select_2 = [_CID_array select (_length - 2)];
_CID_1_String = toString _CID_select_1;
_CID_2_String = toString _CID_select_2;
_CID_1 = parseNumber _CID_1_String;
_CID_2 = parseNumber _CID_2_String;

_ranVal = floor(random 100);
_bt_calc = (_CID_1 * 10) + _CID_2;

switch true do {
	case (_bt_calc >= 61) : {
		_bt_val = "O";
		if (_ranVal >= 11) then {
			_rh_val = true; //89% of O type population is RH +
		} else {
			_rh_val = false;
		};
	};
	case (_bt_calc >= 29) : {
		_bt_val = "A";
		if (_ranVal >= 11) then {
			_rh_val = true; //89% of A type population is RH +
		} else {
			_rh_val = false;
		};
	};
	case (_bt_calc >= 6) : {
		_bt_val = "B";
		if (_ranVal >= 6) then {
			_rh_val = true; //94% of B type population is RH +
		} else {
			_rh_val = false;
		};
	};
	case (_bt_calc >= 0) : {
		_bt_val = "AB";
		if (_ranVal >= 9) then {
			_rh_val = true; //91% of AB type population is RH +
		} else {
			_rh_val = false;
		};
	};
};
//diag_log format["PLAYER BLOOD CALC: Blood Type == %1 Rh Type == %2", _bt_val, _rh_val];

//RH type
player setVariable ["rh_factor", _rh_val, true];
//blood type
player setVariable ["blood_type", _bt_val, true];