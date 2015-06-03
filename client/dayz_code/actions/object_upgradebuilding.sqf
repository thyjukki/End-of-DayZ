/*
	This script is not part of dayz permission must be given to use. r4z0r49@gmail.com or skype me R4Z0R49.
	
	Simple class system to use this script.
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage1";
	};
	
*/
_objclass = _this;
_cursorTarget = _this select 3;

//remove action menu
player removeAction s_player_building;

_item = typeof _cursorTarget;
//diag_log (str(_item));

//Get tools needed
_classname = configFile >> "CfgVehicles" >> _item;
_requiredTools = getArray (_classname >> "Upgrade" >> "requiredTools");
//diag_log (str(_requiredTools));

//get parts needed
_requiredParts = getArray (_classname >> "Upgrade" >> "requiredParts");
//_requiredParts = []; 
//diag_log (str(_requiredParts));

//get item to create
_upgrade = getText (_classname >> "Upgrade" >> "create");
//diag_log (str(_upgrade));

//Allow random choice of items if specified.
if (isArray(configFile >> "CfgVehicles" >> _item >> "Upgrade" >> "randomcreate")) then { 
	_randomCreate = getArray (_classname >> "Upgrade" >> "randomcreate");
	//diag_log (str(_randomCreate));
	_upgrade = _randomCreate call BIS_fnc_selectRandom;
	//diag_log ("UpdageArray: "+str(_upgrade));
};

//Display name of upgrade part
_upgradeConfig = configFile >> "CfgVehicles" >> _upgrade;
//diag_log (str(_upgradeConfig));
_upgradeDisplayname = getText (_upgradeConfig >> "displayName");
//diag_log (str(_upgradeDisplayname));
//Normal blocked stuff
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_isWater = 		(surfaceIsWater (getPosATL player)) or dayz_isSwimming;

_upgradeParts = [];
_startUpgrade = true;

if(_isWater or _onLadder) exitWith {
	//cutText ["unable to upgrade at this time", "PLAIN DOWN"];
	systemchat["unable to upgrade at this time"];
};

// lets check player has requiredTools for upgrade
{
	if (!(_x IN items player)) exitWith {
		//systemchat("Missing tools for upgrade." +str());
		systemChat format["Missing %1 to upgrade building.",_x];
		_startUpgrade = false;
	};
} count _requiredTools;

// lets check player has requiredParts for upgrade
if (count _requiredParts > 0) then {
	{
		if (!(_x IN magazines player)) exitWith {
			systemChat format["Missing %1 to upgrade building.",_x];
			_startUpgrade = false;
		};
		if (_x IN magazines player) then {
			_upgradeParts set [count _upgradeParts, _x];
		};
	} count _requiredParts;
};

//Does object have a upgrade option.
if ((_startUpgrade) AND (isClass(_upgradeConfig))) then {
	//Remove action menu
	player removeAction s_player_building;
	
	//play animation
	player playActionNow "Medic";
	_dis=20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[100,15,5,0]] call dayz_NutritionSystem;
	
	//get ownerID from old tent.
	_ownerID = _cursorTarget getVariable ["characterID","0"];
	_objectID = _cursorTarget getVariable ["ObjectID","0"];
	_objectUID = _cursorTarget getVariable ["ObjectUID","0"];
	_ownerArray = _cursorTarget getVariable ["ownerArray",[]];

	//Upgrade Started
	if ((player getVariable["alreadyBuilding",0]) == 1) exitWith {cutText [format[("Object is already upgrading")] , "PLAIN DOWN"]};

	//Lock scripts
	player setVariable["alreadyBuilding",1];

	//Get location and direction of old item
	_pos = getposATL _cursorTarget;
	_dir = getDir _cursorTarget;
	
	// remove parts from players inventory before creation.
	{
		player removeMagazine _x;
		_upgradeParts = _upgradeParts - [_x];
	} count _upgradeParts;
	
	//remove dmg from old object
	_cursorTarget allowDamage false;
	
	
	//Animation Loop
	r_doLoop = true;
	_started = false;
	_finished = false;
	while {r_doLoop} do {
		_animState = animationState player;
		_isRefuel = ["medic",_animState] call fnc_inString;
		if (_isRefuel) then {
			_started = true;
		};
		if (_started and !_isRefuel) then {
			r_doLoop = false;
			_finished = true;
		};
		sleep 0.1;
	};

	r_doLoop = false;
	
	if (_finished) then {
		//create new object in debug
		_object = createVehicle [_upgrade, [0,0,0], [], 0, "NONE"];
		//remove dmg from new object
		_object allowDamage false;
		//set direction
		_object setdir _dir;
		//set pos to old location
		_object setPosATL _pos;
		
		//remove old object
		PVDZ_obj_Destroy = [_objectID,_objectUID];
		publicVariableServer "PVDZ_obj_Destroy";
		
		if (isServer) then {
			PVDZ_obj_Destroy call server_deleteObj;
		};
		
		//Need to remove this due to BE filters.
		deleteVehicle _cursorTarget;
		
		//reenable dmg on created object
		_object allowDamage true;
		
		//set ownerID from old tent.
		_object setVariable ["characterID",_ownerID];
		
		//Set _owner info
		_object setVariable ["ownerArray",_ownerArray,true];
		
		//publish new object
		PVDZ_obj_Publish = [dayz_characterID,_object,[_dir, _pos],_upgrade];
		publicVariableServer "PVDZ_obj_Publish";
		
		//Send maintenance info
		PVDZ_veh_Save = [_object,"maintenance"];
		publicVariableServer "PVDZ_veh_Save";
		if (isServer) then {
			PVDZ_veh_Save call server_updateObject;
		};
		
		//Make sure  its unlocked 
		player setVariable["alreadyBuilding",0];
		
		//remove action menu
		s_player_building = -1;
			
		//Make sure player knows about the new object
		player reveal _object;
		
		//Remove action menu
		player removeAction s_player_building;	
	};
	
	cutText ["Upgrade done.", "PLAIN DOWN"];
} else {
	//remove action menu
	s_player_building = -1;
	//Remove action menu
	player removeAction s_player_building;	
	cutText ["Object has no upgrade option.", "PLAIN DOWN"];
};