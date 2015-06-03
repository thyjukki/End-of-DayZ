/*
	This script is not part of dayz permission must be given to use. r4z0r49@gmail.com or skype me R4Z0R49.
	
	Simple class system to use this script.
	class Upgrade {
		requiredTools[] = {"ItemToolbox"};
		requiredParts[] = {"equip_crate","PartWoodPile"};
		create = "TentStorage1";
	};
	
*/
private ["_objclass", "_cursorTarget", "_item", "_classname", "_requiredTools", "_requiredParts", "_upgrade", "_upgradeConfig", "_upgradeDisplayname", "_onLadder", "_isWater", "_upgradeParts", "_startUpgrade", "_missingPartsConfig", "_textMissingParts", "_dis", "_sfx", "_ownerID", "_objectID", "_objectUID", "_alreadyupgrading", "_pos", "_dir", "_weapons", "_magazines", "_backpacks", "_object", "_objWpnTypes", "_objWpnQty", "_countr"];

_objclass = _this;
_cursorTarget = _this select 3;

_item = typeof _cursorTarget;
//diag_log (str(_item));

//remove action menu
player removeAction s_player_upgradestroage;
s_player_upgradestroage = -1;

//Not needed
//_itemName = getText (configFile >> "CfgVehicles" >> _item >> "displayName");
////diag_log (str(_itemName));

//Get tools needed
_classname = configFile >> "CfgVehicles" >> _item;
_requiredTools = getArray (_classname >> "Upgrade" >> "requiredTools");
//diag_log (str(_requiredTools));

//get parts needed
_requiredParts = getArray (_classname >> "Upgrade" >> "requiredParts"); 
//diag_log (str(_requiredParts));

//get item to create
_upgrade = getText (_classname >> "Upgrade" >> "create");
//diag_log (str(_upgrade));

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
		_missingPartsConfig = configFile >> "CfgVehicles" >> _x;
		_textMissingParts = getText (_missingPartsConfig >> "displayName");
		//systemchat("Missing tools for upgrade." +str());
		systemChat format["Missing %1 to upgrade storage.", _textMissingParts];
		_startUpgrade = false;
	};
} count _requiredTools;

// lets check player has requiredParts for upgrade
{
	if (!(_x IN magazines player)) exitWith {
		_missingPartsConfig = configFile >> "CfgMagazines" >> _x;
		_textMissingParts = getText (_missingPartsConfig >> "displayName");
		systemChat format["Missing %1 to upgrade storage.", _textMissingParts];
		_startUpgrade = false;
	};
	if (_x IN magazines player) then {
		_upgradeParts set [count _upgradeParts, _x];
	};
} count _requiredParts;


//Does object have a upgrade option.
if ((_startUpgrade) AND (isClass(_upgradeConfig))) then {
	//play animation
	player playActionNow "Medic";
	_dis = 20;
	_sfx = "tentpack";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	// Added Nutrition-Factor for work
	["Working",0,[100,15,5,0]] call dayz_NutritionSystem;
	
	//get ownerID from old tent.
	_ownerID = _cursorTarget getVariable ["characterID","0"];
	_objectID = _cursorTarget getVariable ["ObjectID","0"];
	_objectUID = _cursorTarget getVariable ["ObjectUID","0"];

	//Upgrade
	_alreadyupgrading = _cursorTarget getVariable["alreadyupgrading",0];

	if (_alreadyupgrading == 1) exitWith {cutText [format[("Object is already upgrading")] , "PLAIN DOWN"]};
	
	_cursorTarget setVariable["alreadyupgrading",1];

	sleep 0.03;

	//Get location and direction of old item
	_pos = getposATL _cursorTarget;
	_dir = getDir _cursorTarget;
	
	//get contents
	_weapons = getWeaponCargo _cursorTarget;
	_magazines = getMagazineCargo _cursorTarget;
	_backpacks = getBackpackCargo _cursorTarget;
	
	//replay animation
	player playActionNow "Medic";
	
	//remove old tent
	PVDZ_obj_Destroy = [_objectID,_objectUID];
	publicVariableServer "PVDZ_obj_Destroy";
	
	if (isServer) then {
		PVDZ_obj_Destroy call server_deleteObj;
	};
	deleteVehicle _cursorTarget;
	
	// remove parts from players inventory before creation of new tent.
	{
		player removeMagazine _x;
		_upgradeParts = _upgradeParts - [_x];
	} count _upgradeParts;
	
	//create new tent
	_object = createVehicle [_upgrade, [0,0,0], [], 0, "NONE"];
	_object setdir _dir;
	_object setpos _pos;
	//set ownerID from old tent.
	_object setVariable ["characterID",_ownerID];
	
	//Make sure player knows about the new object
	player reveal _object;
	
	//Add contents back
	//Add Weapons
	_objWpnTypes = _weapons select 0;
	_objWpnQty = _weapons select 1;
	_countr = 0;
	{
		_object addweaponcargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;

	//Add Magazines
	_objWpnTypes = _magazines select 0;
	_objWpnQty = _magazines select 1;
	_countr = 0;
	{
		_object addmagazinecargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;

	//Add Backpacks
	_objWpnTypes = _backpacks select 0;
	_objWpnQty = _backpacks select 1;
	_countr = 0;
	{
		_object addbackpackcargoGlobal [_x,(_objWpnQty select _countr)];
		_countr = _countr + 1;
	} count _objWpnTypes;
	
	sleep 3;
	
	//publish new tent
	PVDZ_obj_Publish = [dayz_characterID,_object,[_dir, _pos],_upgrade];
	publicVariableServer "PVDZ_obj_Publish";

	cutText ["Upgrade done.", "PLAIN DOWN"];
/*
} else {
	cutText ["Object has no upgrade option.", "PLAIN DOWN"];
*/
};