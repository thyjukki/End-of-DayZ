private ["_maxControlledZombies","_looted","_zombied","_doNothing","_spawnZedRadius"];

_age = -1;
//_nearbyBuildings = [];
_position = getPosATL player;
_spawnableObjects = ["building", "SpawnableWreck", "IC_Fireplace1", "IC_DomeTent", "IC_Tent"];
//_force = false;
_speed = speed (vehicle player);
_radius = 150;
_spawnZedRadius = 20;

//Tick Time
PVDZ_getTickTime = player;
publicVariableServer "PVDZ_getTickTime";

// we start by the closest buildings. 
_nearby = nearestObjects [_position, _spawnableObjects,_radius];

//Total Counts
_maxlocalspawned = round(dayz_spawnZombies);
_maxControlledZombies = round(dayz_maxLocalZombies);
_maxWeaponHolders = round(dayz_maxMaxWeaponHolders);
_currentWeaponHolders = round(dayz_currentWeaponHolders);
_maxtoCreate = 3;

//Limits (Land,Sea,Air)
_inVehicle = (vehicle player != player);
_isAir = vehicle player iskindof "Air";
_isLand =  vehicle player iskindof "Land";
_isSea =  vehicle player iskindof "Sea";
if (_isLand) then { } else {  };
if (_isAir) then { } else {  };
if (_isSea) then { } else {  };

_doNothing = false;
if (_inVehicle) then {
	_Controlledzeddivided = 0;
	//exit if too fast
	if (_speed > 25) exitwith {_doNothing = true;};

	//Crew can spawn zeds.
	_totalcrew = count (crew (vehicle player));
	if (_totalcrew > 1) then {
		_Controlledzeddivided = 2;
		
		//Dont allow driver to spawn if we have other crew members.
		if (player == driver (vehicle player)) exitwith {_doNothing = true;};
	} else {
		_Controlledzeddivided = 4;
	};
	
	if (_Controlledzeddivided > 0) then {
		_maxControlledZombies = round(_maxControlledZombies / _Controlledzeddivided);
		r_player_divideinvehicle = _Controlledzeddivided;
	};
};

if (_doNothing) exitwith {lastSpawned = diag_tickTime;};


//Logging
/*diag_log (format["%1 Local.Agents: %2/%3, NearBy.Agents: %8/%9, Global.Agents: %6/%7, W.holders: %10/%11, (radius:%4m %5fps).","SpawnCheck",
	_maxlocalspawned, _maxControlledZombies, _radius, round diag_fpsmin,dayz_currentGlobalZombies, 
	dayz_maxGlobalZeds, dayz_CurrentNearByZombies, dayz_maxNearByZombies, _currentWeaponHolders,_maxWeaponHolders]);*/

//Make only 1/5 spawn along player's journey.
_maxlocalspawned = _maxlocalspawned max floor(_maxControlledZombies*.8);

//
if (_maxlocalspawned > 0) then { _spawnZedRadius = _spawnZedRadius * 3; };

//Spawn wild zeds
/*_nearbyCount = count _nearby;
_tooClose = if ({isPlayer _x} count (_position nearEntities ["CAManBase",_spawnZedRadius]) > 0) then { true } else { false };
if ((_nearbyCount < 1) && (!_tooClose)) exitwith {
	if (!_inVehicle) then {
		_maxControlledZombies = _maxControlledZombies / 5;
		// spawn some a wild zombie if we can afford
		if ((dayz_spawnZombies < _maxControlledZombies) and (dayz_CurrentNearByZombies < dayz_maxNearByZombies) and (dayz_currentGlobalZombies < dayz_maxGlobalZeds)) then {
			[_position,true,0,true] call zombie_generate;
		};
	};
};*/

//last check before spawning numbers are correct.
//dayz_maxLocalZombies = _maxControlledZombies;

//Spawn zeds in buildings
{
	_type = typeOf _x;
	_config = missionConfigFile >> "CfgBuildingLoot" >> _type;
	_canSpawn = isClass (_config);
	_dis = _x distance player;
	_checkLoot = ((count (getArray (_config >> "lootPos"))) > 0);
	_islocal = _x getVariable ["", false]; // object created locally via TownGenerator. See stream_locationFill.sqf

	//Make sure wrecks always spawn Zeds
	//_isWreck = _x isKindOf "SpawnableWreck";
	//if (_isWreck) then { _force = true; };

	//Loot
	if (_canSpawn) then {
		if (!dayz_serversideloot) then {
			if (_currentWeaponHolders < _maxWeaponHolders) then {
				//Baisc loot check
				if ((_dis < 125) and (_dis > 30) and !_inVehicle and _checkLoot) then {
					_looted = (_x getVariable ["looted",(diag_tickTime + dayz_tickTimeOffset)]);      
					_age = ((diag_tickTime + dayz_tickTimeOffset) - _looted);
					//diag_log ("SPAWN LOOT: " + _type + " Building is " + str(_age) + " old" );

					if ((_age < 0) or (_age == 0) or (_age > 300)) then { 
						_x setVariable ["looted",diag_tickTime,!_islocal];					
						_x call building_spawnLoot;
						if (!(_x in dayz_buildingBubbleMonitor)) then {
							dayz_buildingBubbleMonitor set [count dayz_buildingBubbleMonitor, _x];
						};
					};
				};
			};
		};

	//Zeds
		if (_dis > _spawnZedRadius) then {
			if ((dayz_spawnZombies < _maxControlledZombies) and (dayz_CurrentNearByZombies < dayz_maxNearByZombies) and (dayz_currentGlobalZombies < dayz_maxGlobalZeds)) then {

				_zombied = (_x getVariable ["zombieSpawn",(diag_tickTime + dayz_tickTimeOffset)]);
				_cooldown = (_x getVariable ["last_zombie_time",(diag_tickTime + dayz_tickTimeOffset)]);
				_age = ((diag_tickTime + dayz_tickTimeOffset) - _zombied);
				_cooldown_age = ((diag_tickTime + dayz_tickTimeOffset) - _cooldown);
				_building_zombies = (_x getVariable ["currentZombies",0]);
				
				if ((_age < 0) or (_age == 0) or (_age > 300)) then { 
					_bPos = getPosATL _x;
					_zombiesNum = {alive _x} count (_bPos nearEntities ["zZombie_Base",(((sizeOf _type) * 2) + 10)]);
				
					//diag_log (format["SpawnCheck: currentZombies for building: %1 is %2 (%3)", _type, _building_zombies, _cooldown_age]);//todo test with the cooldown age
					if (_zombiesNum == 0 && ((_cooldown_age < 0) or (_cooldown_age == 0) or (_cooldown_age > 600))) then {
						if (_building_zombies == 0) then { //if no zombies spawned by this building then go ahead and spawn them in!
							_x setVariable ["zombieSpawn",diag_tickTime + dayz_tickTimeOffset, true];
							
							if (!(_x in dayz_buildingBubbleMonitor)) then {
								//add active zed to var
								dayz_buildingBubbleMonitor set [count dayz_buildingBubbleMonitor, _x];
							};
							
							//start spawn
							[_x] call building_spawnZombies;
							//diag_log (format["SpawnCheck: spawning done, currentZombies for building: %1 is %2", _type, _building_zombies]);
						} else {
							_x setVariable ["currentZombies",0, true];
							_x setVariable ["last_zombie_time",(diag_tickTime + dayz_tickTimeOffset), true];
							//diag_log ("SpawnCheck: last zombie is dead, setting 10 minute timer");
							
						};
					};	
				};
				
				//diag_log (format["%1 building. %2", __FILE__, _x]);
			};
		};
	};
} forEach _nearby;

//Timer system to monitor if running.
lastSpawned = diag_tickTime;