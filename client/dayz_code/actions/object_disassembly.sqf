private ["_isMedic"];

_cursorTarget = _this select 3;

//Remove action Menu
player removeAction s_player_disassembly;
s_player_disassembly = -1;

//Item
_item = typeof _cursorTarget;
//diag_log (str(_item));

//Get tools needed
_classname = configFile >> "CfgVehicles" >> _item;
_displayname = getText (_classname >> "displayname");
_requiredTools = getArray (_classname >> "Disassembly" >> "requiredTools");
//diag_log (str(_requiredTools));

//get parts needed
_requiredParts = getArray (_classname >> "Disassembly" >> "requiredParts"); 
//diag_log (str(_requiredParts));

//get item to create
_create = getText (_classname >> "Disassembly" >> "create");
//diag_log (str(_create));

//Display name of upgrade part
_upgradeConfig = configFile >> "CfgVehicles" >> _create;
//diag_log (str(_upgradeConfig));


//Normal blocked stuff
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

_upgradeParts = [];
_startUpgrade = true;

if(_isWater or _onLadder) exitWith {
	//cutText ["unable to upgrade at this time", "PLAIN DOWN"];
	systemchat["unable to disassemble at this time"];
};

// lets check player has requiredTools for upgrade
{
	if (!(_x IN items player)) exitWith {
		//systemchat("Missing tools for upgrade." +str());
		systemChat format["Missing %1 to disassemble %2.",_x,_displayname];
		_startUpgrade = false;
	};
} count _requiredTools;

// lets check player has requiredParts for upgrade
{
	if (_x == []) exitwith {};
	
	if (!(_x IN magazines player)) exitWith {
		systemChat format["Missing %1 to disassemble %2.",_x,_displayname];
	};
	if (_x IN magazines player) then {
		_upgradeParts set [count _upgradeParts, _x];
	};
} count _requiredParts;

if ((_startUpgrade) AND (isClass(_upgradeConfig))) then {
	//play animation
	player playActionNow "Medic";
	_dis=20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;
	
	/*
	//Not Finished
	//Animation Loop
	r_doLoop = true;
	_started = false;
	_finished = false;
	while {r_doLoop} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;
		if (_isMedic) then {
			_started = true;
		};
		if (_started and _isMedic) then {
			r_doLoop = false;
			_finished = true;
		};
		
		if (!_isMedic) then {
			player playActionNow "Medic";
		};
		
		if (r_interrupt) then {
			r_doLoop = false;
		};
		sleep 0.1;
	};
	
	if (r_interrupt) then {
		r_interrupt = false;
		player switchMove "";
		player playActionNow "stop";
	};
	*/

	// Added Nutrition-Factor for work
	["Working",0,[20,40,15,0]] call dayz_NutritionSystem;
	
	//Upgrade
	_alreadyRemoving = _cursorTarget getVariable["alreadyRemoving",0];

	if (_alreadyRemoving == 1) exitWith {cutText [format[("Object is already disassembling")] , "PLAIN DOWN"]};
	
	_cursorTarget setVariable["alreadyRemoving",1];
	
	//Get location and direction of old item
	_pos = getposATL _cursorTarget;
	_dir = getDir _cursorTarget;
	
	//get ownerID from old tent.
	_ownerID = _cursorTarget getVariable ["characterID","0"];
	_objectID = _cursorTarget getVariable ["ObjectID","0"];
	_objectUID = _cursorTarget getVariable ["ObjectUID","0"];
	
	//Remove object
	PVDZ_obj_Destroy = [_objectID,_objectUID];
	publicVariableServer "PVDZ_obj_Destroy";
	
	if (isServer) then {
		PVDZ_obj_Destroy call server_deleteObj;
	};
	deleteVehicle _cursorTarget;
	
	player playActionNow "Medic";
	while {1 == 1} do {
		_animState = animationState player;
		_isMedic = ["medic",_animState] call fnc_inString;

		if (_isMedic) exitwith {};
	};
	
	waituntil {_isMedic};
	sleep 3;
	
	//create new object on debug
	_object = createVehicle [_create, [0,0,0], [], 0, "NONE"];
	//set direction
	_object setdir _dir;
	//set pos to old location
	_object setPosATL _pos;
	
	player reveal _object;
	
	cutText ["Disassemble done.", "PLAIN DOWN"];
} else {
	cutText ["Object has no disassemble option.", "PLAIN DOWN"];
};