/*
	Anti-Teleport
	Created By Razor
	Refactored By Alby
*/

private["_debug","_curpos","_lastpos","_curheight","_lastheight","_terrainHeight","_curtime","_lasttime","_distance","_difftime","_speed","_topSpeed","_lastVehicle","_safetyVehicle", "_topv","_toph", "_v", "_h", "_al1veOnce"];

diag_log(format["%1: init", __FILE__]);
waitUntil {vehicle player == player};

[] spawn {
	private ["_playerName","_playerUID"];
	_playerName = name player;
	_playerUID = getPlayerUID player;
	while {1 == 1} do {
		if (typeName player != "OBJECT") then {
			PVDZ_sec_atp = format["WARNING typename error for player UID#%1", _playerUID];
			publicVariableServer "PVDZ_sec_atp";
			//forceEnd;
			endMission "LOSER";
			sleep 10; //Bypass spam
		};
	};
};
[] spawn {
	_playerName = name player;
	_playerUID = getPlayerUID player;
	while {true} do {
		sleep 5;
	};
	PVDZ_sec_atp = format["WARNING PLAYER WITH NAME (%1) and UID# (%2) HAS CHANGED THE TRUE VALUE TO FALSE", _playerName, _playerUID];
	publicVariableServer "PVDZ_sec_atp";
	endMission "LOSER";
	sleep 10;
};

_al1veOnce = false;
while {1 == 1} do {
	_debug = getMarkerpos "respawn_west";
	_lastpos = getPosATL (vehicle player);
	_lastheight = (ATLtoASL _lastpos) select 2;
	_lasttime = diag_ticktime;
	_lastVehicle = vehicle player;


	while {((typeName player == "OBJECT") AND {((player in playableUnits) AND {(alive player)})})} do {
		//[-18697.58,379.53012,25815.256]
		/*
		if ([getMarkerPos "respawn_west", [0,0,0]] call BIS_fnc_areEqual || !([getMarkerPos "respawn_west", _debug] call BIS_fnc_areEqual)) then {
			createMarkerLocal ["respawn_west", _debug];
			"respawn_west" setMarkerType "EMPTY";
		};
		*/
		_curpos = getPosATL (vehicle player);
		_distance = _lastpos distance _curpos;
		_curtime = diag_ticktime;
		_difftime = _curtime - _lasttime;

		if ((_distance > 10) OR {(_difftime > 1)}) then {
			if (!_al1veOnce) then {
				private [ "_loc", "_plant"];
				// check that plants libs are properly loaded
				// thanks to Tansien the great
				// run only once per character life
				_loc = getMarkerPos "center";
				{
					_plant = _x createVehicleLocal _loc;
					sleep 0.1;
					if (sizeOf _x == 0) exitWith { 
						PVDZ_sec_atp = "Plants texture hack for type " + _x;
						publicVariableServer "PVDZ_sec_atp";
						endMission "LOSER";
					};
					deleteVehicle _plant;
				} forEach ["grass", "prunus", "picea", "fallentree", "phragmites", "acer", "amygdalusn", "Brush", "fiberplant", "amygdalusc", "boulder"];
				diag_log format [ "%1: Plants libs tests done!", __FILE__];
			};
			_al1veOnce = true;
			_curheight = (ATLtoASL _curpos) select 2;
			_speed = _distance / _difftime;
			_topSpeed = 10;

			if (vehicle player != player) then {
				_topSpeed = (getNumber (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "maxSpeed")) min 500;
			};

			_terrainHeight = getTerrainHeightASL [_curpos select 0, _curpos select 1];

			/*
			_differenceCheck = false;
			_lastPosVar = player getVariable ["lastPos", []];
			if (count _lastPosVar > 0) then {
				_differenceCheck = (_lastPosVar distance _lastpos) > _topSpeed;
			} else {
				diag_log "LASTPOS RESET";
			};
			*/

			_safetyVehicle = vehicle player;

			if (_lastVehicle == vehicle player) then {
				if ((_speed > _topSpeed) && (alive player) && ((driver (vehicle player) == player) or (isNull (driver (vehicle player)))) && (_debug distance _lastpos > 3000) && !((vehicle player == player) && (_curheight < _lastheight) && ((_curheight - _terrainHeight) > 1))) then {
					(vehicle player) setposATL  _lastpos;
					PVDZ_sec_atp = format["TELEPORT REVERT for player UID#%1 from %2 to %3, %4 meters, now at %5", getPlayerUID player, _lastpos, _curPos, round(_lastpos distance _curpos), getPosATL player];
					publicVariableServer "PVDZ_sec_atp";
				} else {
					_lastpos = _curpos;
					_lastheight = _curheight;
				};

				_lasttime = _curtime;
			};

			if (_safetyVehicle == vehicle player) then {
				_lastVehicle = vehicle player;
			};

		};
		sleep 0.25;
	};
	if (_al1veOnce) then {
		sleep 5; 
		endMission "LOSER";
	}
	else {
		sleep 0.1;
	};
};
