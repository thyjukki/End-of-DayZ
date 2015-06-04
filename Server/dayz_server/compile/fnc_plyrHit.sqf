private ["_victim", "_attacker","_weapon","_distance","_damage"];
_victim = _this select 0;
_attacker = _this select 1;
_damage = _this select 2;

if (!isPlayer _victim || !isPlayer _attacker) exitWith {};
if ((owner _victim) == (owner _attacker)) exitWith {
	_victim setVariable["AttackedBy", _victim, true];
};

_weapon = weaponState _attacker;
if (_weapon select 0 == "Throw") then 
{
	_weapon = _weapon select 3;
}
else
{
	_weapon = _weapon select 0;
};

_vehicle = typeOf (vehicle _attacker); 
if ((getText (configFile >> "CfgVehicles" >> _vehicle >> "vehicleClass")) in ["CarW","Car","CarD","Armored","Ship","Support","Air","ArmouredW","ArmouredD","SupportWoodland_ACR"]) then {
	_weapon = getText (configFile >> "CfgVehicles" >> _vehicle >> "displayName");
};

_distance = _victim distance _attacker;

diag_log format["PHIT: %1 was hit by %2 with %3 from %4m with %5 dmg", _victim, _attacker, _weapon, _distance, _damage];

_victim setVariable["AttackedBy", _attacker, true];
_victim setVariable["AttackedByName", (name _attacker), true];
//_victim setVariable["AttackedByWeapon", (currentWeapon _attacker), true];
_victim setVariable["AttackedByWeapon", _weapon, true];
_victim setVariable["AttackedFromDistance", _distance, true];

//DONN MYSQL BEGIN
_a2n_sql_run = Format [
	"Arma2NETMySQLCommand ['server_logs_hits', 'INSERT INTO PLAYER_HITS VALUES ('%1', NULL,'%2','%3','%4','%5','%6',%7,%8)']",
	don_date_time,
	name _attacker,
	getPlayerUID _attacker,
	name _victim,
	getPlayerUID _victim,
	_weapon,
	_distance,
	_damage
];
"Arma2Net.Unmanaged" callExtension _a2n_sql_run;
//DONN MYSQL END
