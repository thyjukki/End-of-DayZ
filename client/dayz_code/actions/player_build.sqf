private ["_ghost","_objGhost", "_maxPointGhost", "_item", "_classname", "_require", "_text", "_location", "_sfx", "_object", "_string", "_onLadder", "_isWater", "_boundingBox", "_maxPoint", "_actionBuild", "_actionCancel", "_hasGhost", "_missingTools", "_missingItem", "_consume", "_action", "_isClass"];

call gear_ui_init;
closeDialog 1;

if (r_action_count != 1) exitWith { cutText [localize "str_player_actionslimit", "PLAIN DOWN"]; };

_item = _this select 0;
_action = _this select 1;
_missingTools = "";
_missingItem = "";

_isClass = switch (1==1) do {
	case (isClass (configFile >> "CfgMagazines" >> _item)): {"CfgMagazines"};
	case (isClass (configFile >> "CfgWeapons" >> _item)): {"CfgWeapons"};
};

_classname = getText (configFile >> _isClass >> _item >> "ItemActions" >> _action >> "create");
_require = getArray (configFile >> _isClass >> _item >> "ItemActions" >> _action >> "require");
_consume = getArray (configFile >> _isClass >> _item >> "ItemActions" >> _action >> "consume");
_ghost = getText (configFile >> _isClass >> _item >> "ItemActions" >> _action >> "ghost");

_text = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

if(_isWater) exitWith {
	r_action_count = 0;
	cutText [localize "str_player_26", "PLAIN DOWN"];
};

if(_onLadder) exitWith {
	r_action_count = 0;
	cutText [localize "str_player_21", "PLAIN DOWN"];
};

// item is missin - this really is pointless but it aint broke so dont fix it
if (isClass (configFile >> _isClass >> _item)) then {
	if ((!(_item IN magazines player))) exitWith {
		r_action_count = 0;
		_string = switch true do {
			case (_item isKindOf "Land_A_tent"): {"str_player_31_pitch"};
			default {"str_player_31_build"};
		};
		cutText [format[(localize "str_player_31"),_text,(localize _string)] , "PLAIN DOWN"];
		//diag_log(format["player_build: item:%1 require:%2  Player items:%3  magazines:%4", _item, _require, (items player), (magazines player)]);
	};
};

{
	if (isClass (configFile >> "CfgMagazines" >> _x)) then {
		if ((_x != "") and {(!(_x IN magazines player))}) exitWith {
			_missingTools = _x;
		};
	} else {
		if ((_x != "") and {(!(_x IN items player))}) exitWith {
			_missingTools = _x;
		};
	};
} forEach _require;

//required item is missing
if (_missingTools != "") exitwith { 
	r_action_count = 0;
	cutText [format[(localize "str_player_31_missingtools"),_text,_missingTools] , "PLAIN DOWN"]; 
};

{
	if (isClass (configFile >> "CfgMagazines" >> _x)) then {
		if ((_x != "") and {(!(_x IN magazines player))}) exitWith {
			_missingItem = _x;
		};
	} else {
		if ((_x != "") and {(!(_x IN items player))}) exitWith {
			_missingItem = _x;
		};
	};
} foreach _consume;

//consume item is missing
if (_missingItem != "") exitwith { 
	r_action_count = 0;
	cutText [format[(localize "str_player_31"), _missingItem, (localize "str_player_31_build")] , "PLAIN DOWN"];
};

if (!isNull (player getVariable "constructionObject")) exitWith {
	r_action_count = 0;
	cutText [localize "str_already_building", "PLAIN DOWN"];
};

player setVariable ["constructionObject", player]; //Quick fix to stop multi build bug

{
	if (isClass (configFile >> "CfgMagazines" >> _x)) then {
		player removeMagazine _x;
	};
} foreach _consume;

cutText [localize "str_player_build_rotate", "PLAIN DOWN"];

_location = getMarkerpos "respawn_west";
_object = createVehicle [_classname, _location, [], 0, "NONE"];

if (isText (configFile >> _isClass >> _item >> "ItemActions" >> _action >> "ghost")) then {
	_objGhost =	_ghost createVehicleLocal _location;
	_objGhost attachTo [_object, [0, 0, 0.7]];
};

_boundingBox = boundingBox _object;
_maxPoint = ([[0,0], _boundingBox select 1] call BIS_fnc_distance2D) + 1;
//_object attachTo [player, [0, _maxPoint + 1, 0]];

player setVariable ["constructionObject", _object];
_object setVariable ["characterID",dayz_characterID,true];

_sfx = switch true do {
	case (_object isKindOf "Land_A_tent"): {"tentunpack"};
	default {"repair"};
};

player setVariable["BuildCamera",cameraView];
player setVariable["BuildObject",_object];

_build_cam = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 0x39) then { [] call fn_buildCamera };"];

_actionBuild = player addAction [localize "str_player_build_complete", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _consume, _classname, _text, true, 20, _sfx], 1, true, true, "", "!isNull (_target getVariable [""constructionObject"", objNull])"];
_actionCancel = player addAction [localize "str_player_build_cancel", "\z\addons\dayz_code\actions\object_build.sqf", [_object, _consume, _classname, _text, false, 0, "none"], 1, true, true, "", "!isNull (_target getVariable [""constructionObject"", objNull])"];

_position = [0,0,0];
while {!isNull (player getVariable "constructionObject")} do {
	if (vehicle player != player) then {
		[[],[],[],[_object, _consume, _classname, _text, false, 0, "none"]] call object_build;
	};
	
	if (speed player > 10 or speed player <= -8) then {
		//syatemChat [localize "str_player_build_movingfast"];
		//player playMove "amovpercmstpssurwnondnon";
		[[],[],[],[_object, _consume, _classname, _text, false, 0, "none"]] call object_build; 
	};
	
	if (!((count ((getPosATL player) - _position)) == 0)) then {
		_position = getPosATL player;
		_object setPosATL [(_position select 0) + _maxPoint * sin(getDir player), (_position select 1) + _maxPoint * cos(getDir player), 0.01];
	};
	
	sleep 0.01;
	
	if ((!alive player) or {((getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1)}) then {
		[[],[],[],[_object, _consume, _classname, _text, false, 0, "none"]] call object_build; 
	};
	
	if ((player distance _object) > 15) then {
		systemChat format["Too far %1 meters",player distance _object];
		[[],[],[],[_object, _consume, _classname, _text, false, 0, "none"]] call object_build; 
	};
};

player removeAction _actionBuild;
player removeAction _actionCancel;

if (Dayz_BuildCameraMode == 1) then {
	call fn_buildCamera;
};

player setVariable["BuildObject",null];
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _build_cam];

if (isText (configFile >> _isClass >> _item >> "ItemActions" >> _action >> "ghost")) then {
	detach _objGhost;
	_objGhost setpos [0,0,0];
};
