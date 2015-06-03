private["_item","_newweapon","_secondaryweapon","_hasattachment","_onLadder","_pistol"];
_item = _this;
_newweapon = 0;
call gear_ui_init;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasattachment = _this in magazines player;

_unit = player;

{
	if ((getNumber (configFile >> "CfgWeapons" >> _x >> "Type")) == 2) then {
		_pistol = _x;
	};
} forEach (weapons _unit);


_secondaryweapon = _pistol;

if (_secondaryweapon == "RH_mk22") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _secondaryweapon;
		player addWeapon "RH_mk22sd";
	};
};
if (_secondaryweapon == "RH_usp") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _secondaryweapon;
		player addWeapon "RH_uspsd";
	};
};
if (_secondaryweapon == "RH_m1911") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _secondaryweapon;
		player addWeapon "RH_m1911sd";
	};
};
if (_secondaryweapon == "RH_m9") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _secondaryweapon;
		player addWeapon "RH_m9sd";
	};
};
if (_secondaryweapon == "RH_m9c") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _secondaryweapon;
		player addWeapon "RH_m9sdc";
	};
};
if (_secondaryweapon == "RH_g17") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _secondaryweapon;
		player addWeapon "RH_g17sd";
	};
};

{
	if ((getNumber (configFile >> "CfgWeapons" >> _x >> "Type")) == 2) then {
		_pistol = _x;
	};
} forEach (weapons _unit);

if (_secondaryweapon == _pistol) exitWith {cutText [format["Your weapon %1 does not support this attachment.", getText (configFile >> "CfgWeapons" >> _pistol >> "displayname")], "PLAIN DOWN"];};

player playActionNow "Medic";


cutText [format["Attachment %1 succesfully applied.",_item], "PLAIN DOWN"];