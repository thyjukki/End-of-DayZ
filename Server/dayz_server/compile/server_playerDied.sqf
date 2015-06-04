#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

private ["_characterID","_minutes","_newObject","_playerID","_key", "_killer", "_weapon", "_distance","_loc_message","_killerName","_killerPlayerID"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]

_characterID = 	_this select 0;
_minutes =	_this select 1;
_newObject = 	_this select 2;
_playerID = 	_this select 3;
_playerName = 	name _newObject;
_killer = _this select 4;
_weapon =  _this select 5;
if (isNil "_weapon") then {_weapon = "Unknown";};
_distance = _this select 6;
if (isNil "_distance") then {_weapon = 0;};

_newObject setVariable["processedDeath",diag_tickTime];
_newObject setVariable ["bodyName", _playerName, true];

// when a zombie kills a player _killer, _killerName and _weapon will be "nil"
// we can use this to determine a zombie kill and send a customized message for that. right now no killmsg means it was a zombie.
if (isNil "_killer") then {
	_killerID = 0;
	_killerName = "Unknown";
} else {
	_killerID = getPlayerUID _killer;
	_killerName = name _killer;
};

if (_playerName == _killerName) then 
{
	_a2n_sql_run = Format [
		"Arma2NETMySQLCommand ['dayz_server01', 'INSERT INTO server_other_logs (victimName, victimID, cause) VALUES ('%1','%2','%3')']",
		_killerName,
		_killerID,
		"suicide"
	];
	"Arma2Net.Unmanaged" callExtension _a2n_sql_run;
	diag_log (_a2n_sql_run);
} else {
	_a2n_sql_run = Format [
		"Arma2NETMySQLCommand ['dayz_server01', 'INSERT INTO server_logs (victimName, victimID, killerName, killerID, weapon, distance) VALUES ('%1','%2','%3','%4','%5','%6')']",
		_playerName,
		_playerID,
		_killerName,
		_killerID,
		_weapon,
		_distance
	];
	"Arma2Net.Unmanaged" callExtension _a2n_sql_run;
	diag_log (_a2n_sql_run);
};

if (typeName _minutes == "STRING") then 
{
	_minutes = parseNumber _minutes;
};

if (_characterID != "0") then 
{
	_key = format["CHILD:202:%1:%2:",_characterID,_minutes];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
} 
else 
{
	deleteVehicle _newObject;
};

//dead_bodyCleanup set [count dead_bodyCleanup,_newObject];