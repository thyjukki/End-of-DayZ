#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

private ["_characterID","_minutes","_newObject","_victimID","_key", "_attacker", "_weapon", "_distance","_loc_message","_attackerName","_attackerPlayerID"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]

_victim	 		= _this select 0;
_victimID 		= getPlayerUID _victim;
_victimName 	= name _victim;
_attacker 		= _this select 1;
_attackerName 	= name _attacker;
if (!isNil "_attacker") then {
	_attackerID 	= getPlayerUID _attacker;
} else {
	_attackerName == "unkown";
	_attackerID 	= 0;
};
	
_weapon 		= _this select 2;
if (isNil "_weapon") then {_weapon = "Unknown";};
_distance 		= _this select 3;
if (isNil "_distance") then {_weapon = 0;};

if (isPlayer _attacker) then
{
	if (_victimName != _attackerName) then 
	{
		_a2n_sql_run = Format [
			"Arma2NETMySQLCommand ['dayz_server01', 'INSERT INTO server_hit_logs (victimName, victimID, attackerName, attackerID, weapon, distance) VALUES ('%1','%2','%3','%4','%5','%6')']",
			_victimName,
			_victimID,
			_attackerName,
			_attackerID,
			_weapon,
			_distance
		];
		"Arma2Net.Unmanaged" callExtension _a2n_sql_run;
	};
};