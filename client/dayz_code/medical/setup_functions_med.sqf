fnc_usec_damageHandle = {
	/***********************************************************
	ASSIGN DAMAGE HANDLER TO A UNIT
	- Function
	- [unit] call fnc_usec_damageHandle;
	************************************************************/
	//private["_unit","_eh"];
	_unit = _this select 0;
	mydamage_eh1 = _unit addeventhandler ["HandleDamage",{_this call fnc_usec_damageHandler;} ];
	mydamage_eh2 = _unit addEventHandler ["Fired", {_this call player_fired;}];
	mydamage_eh3 = _unit addEventHandler ["Killed", {_id = [] spawn player_death;}];
};

fnc_usec_pitchWhine = {
	_visual = _this select 0;
	_sound = _this select 1;
	//affect the player
	0 fadeSound 0;
	playMusic ["PitchWhine",0];
	if (!r_player_unconscious) then {
		_visual call fnc_usec_bulletHit;
		_sound fadeSound 1;
	};
	r_pitchWhine = true;
	[] spawn {
		sleep 32;
		r_pitchWhine = false;
	};
};

//Modifyed by Alby
fnc_usec_damageUnconscious = {
	private["_unit","_damage"];
	_unit = _this select 0;
	_damage = _this select 1;
	_inVehicle = (vehicle _unit != _unit);
	
	//diag_log format["%1,%2,%3,%4",_unit,_damage,_inVehicle, player];
	
	if (_unit == player) then {
		r_player_timeout = round((((random 2) max 0.1) * _damage) * 20);
		r_player_unconscious = true;
		player setVariable["medForceUpdate",true,true];
		player setVariable ["unconsciousTime", r_player_timeout, true];
	};
	
	if (_inVehicle) then {
		_unit spawn {
			private["_veh","_unit"];
			_veh = vehicle _this;
			_unit = _this;
			waitUntil{(((getPosATL _veh select 2 < 1) and (speed _veh < 1)) or (!r_player_unconscious))};
			if (r_player_unconscious) then {
				_unit action ["eject", _veh];
				waitUntil{((vehicle _this) != _this)};
				sleep 1;
				_unit setVariable ["NORRN_unconscious", true, true];
				_unit playActionNow "Die";
			};
		};
	} else {
		_unit setVariable ["NORRN_unconscious", true, true];
		_unit playActionNow "Die";
	};
};

//Action Handlers added to init file

fnc_usec_bulletHit = {
	//private["_commit"];
	_commit = _this;
	if (!r_player_unconscious) then {
		"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit 0;
		"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [2]; "dynamicBlur" ppEffectCommit 0;
		addCamShake [5, 0.5, 25];
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit _commit;
		"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit _commit;
	};
};

fnc_usec_damageGetWound = {
	//private["_wound"];
	_hit = format["%1",_this];
	_sPoint = USEC_woundHit find _hit;
	_options = USEC_woundPoint select _sPoint;
	_rnd = floor(random(count _options));
	_wound = _options select _rnd;
	_wound
};

fnc_usec_medic_removeActions = {
	_obj = player;
	{
		_obj = _x;
		{
			_obj removeAction _x;
		} forEach r_player_actions;
	} forEach r_action_targets;
	r_player_actions = [];
	r_action_targets = [];
};

fnc_usec_self_removeActions = {
	{
		player removeAction _x;
	} forEach r_self_actions;
	r_self_actions = [];
};

fnc_usec_calculateBloodPerSec = {
	private["_bloodLossPerSec","_bloodGainPerSec","_bloodPerSec"];
	_bloodLossPerSec = 0;
	_bloodGainPerSec = 0;

	if (r_player_injured) then {
		_bloodLossPerSec = 10;

		{
			_wounded = player getVariable["hit_"+_x,false];

			if (_wounded) then {
				_bloodLossPerSec = _bloodLossPerSec + 10;
			};
		} forEach USEC_typeOfWounds;
	};
	
	//Sepsis
	if (!r_player_infected) then { 
		if (r_player_Sepsis select 0) then {
			 _time = diag_tickTime - (r_player_Sepsis select 1);
			if (_time > 900) then {
				if (_time < 1800) then {
					_time = ((_time - 900) max 1) min 900;
					_bloodLossPerSec = _bloodLossPerSec + (_time / 450) + 1;
					_bloodLossPerSec = _bloodLossPerSec - (_bloodLossPerSec % 1);
					//hintSilent (format["SetupMedFNCS: Blood Level: %2/12000 bloodLossPerSec %1",_bloodLossPerSec,r_player_blood]);
				} else {
					r_player_Sepsis = [false, 0];
					r_player_infected = true;
					player setVariable["USEC_infected",true,true];
				};
			};
			
			if ((_time < 1) and (isNil "sepsisStarted")) then {
			//if (isNil "sepsisStarted") then {
				//cutText [localize "str_medical_sepsis_warning","PLAIN DOWN",5];
				systemChat (localize "str_medical_sepsis_warning");
				player setVariable ["sepsisStarted", _time];
			};
		};
	};
	
	if (r_player_infected) then { 
		_bloodLossPerSec = _bloodLossPerSec + 3;
	};
	
	//_golbalNutrition = 1200 / (r_player_Nutrition select 0);

	if (r_player_bloodregen > 0) then {
		_bloodGainPerSec = r_player_bloodregen * 0.1;
/*		
		if ((r_player_bloodregen) < 30) then {
			_bloodGainPerSec = r_player_bloodregen * _golbalNutrition;
		};
		
		if ((r_player_bloodregen)< 60) then {
			_bloodGainPerSec = r_player_bloodregen * _golbalNutrition;
		};
*/

		r_player_bloodregen = r_player_bloodregen - _bloodGainPerSec;
	};

	r_player_bloodlosspersec = _bloodLossPerSec;
	r_player_bloodgainpersec = _bloodGainPerSec;

	_bloodPerSec = _bloodGainPerSec - _bloodLossPerSec;
	r_player_bloodpersec = _bloodPerSec;
	_bloodPerSec;
};

fnc_usec_playerHandleBlood = {
	private["_bloodPerSec","_elapsedTime"];
	if (r_player_injured) then { // bleeding
		_bleedTime = (random 500) + 100;
		_elapsedTime = 0;

		while {(r_player_injured) and (r_player_blood > 0)} do {
			_bloodPerSec = [] call fnc_usec_calculateBloodPerSec;
			r_player_blood = r_player_blood + _bloodPerSec;
			_elapsedTime = _elapsedTime + 1;

			if (_elapsedTime > _bleedTime) then {
				r_player_injured = false;
				_id = [player,player] execVM "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
				dayz_sourceBleeding = objNull;
				call fnc_usec_resetWoundPoints;
			};

			_bloodDiff = r_player_blood - (player getVariable["USEC_BloodQty", 12000]);
			
			if ((_bloodDiff >= 500) or (_bloodDiff <= -500)) then {
				player setVariable["USEC_BloodQty",r_player_blood,true];
				player setVariable["medForceUpdate",true];
			};
			
			
			sleep 1;
		};
	} else { // not bleeding
		_bloodPerSec = [] call fnc_usec_calculateBloodPerSec;

		if (_bloodPerSec != 0) then {
			r_player_blood = r_player_blood + _bloodPerSec;
		};

		_bloodDiff = r_player_blood - (player getVariable["USEC_BloodQty", 12000]);


		if ((_bloodDiff >= 500) or (_bloodDiff <= -500)) then {
			player setVariable["USEC_BloodQty",r_player_blood,true];
			player setVariable["medForceUpdate",true];
		};
	};
};

fnc_usec_resetWoundPoints = {
	{
		player setVariable["hit_"+_x,false,true];
	} forEach USEC_typeOfWounds;
	player setVariable ["USEC_injured",false,true];
};

fnc_usec_damageBleed = {
	/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function fnc_usec_damageBleed: Draw a creepy blood stream from a player limb
	- [_unit, _wound, _injury] call fnc_usec_damageBleed;
	************************************************************/
	private["_wound","_modelPos","_point","_source"];
	_unit = _this select 0;
	_wound = _this select 1;
	//_injury = _this select 2; // not used. damage% ???

	if (isServer) exitWith{}; // no graphical effects on server!
/*
	while {!r_player_dead} do {
			_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
		_inVehicle = (vehicle player != player);
		_pooldelay = 34 + r_player_bloodpersec;
		
		if ((!_inVehicle) && (!dayz_isSwimming)) then {
			if ((r_player_bloodpersec < 0) AND ((diag_tickTime - _timerbloodpooldelay) > _pooldelay/2)) then { //r_player_injured is bleeding.. i think
				_jeep = createVehicle ["Blood_Trail_DZ", _debug, [], 0, "NONE"];
				_jeep setVariable ["bloodpools",diag_ticktime];
				_playerPos = getPosATL player;
				_jeep setPos [(_playerPos select 0), (_playerPos select 1), 0];
				r_player_bloodpools set [count r_player_bloodpools, _jeep]; //Add new puddle to end of array
				_timerbloodpooldelay = diag_tickTime;
			};
		};
		sleep 0.5;
	};
*/
		if ((dayz_bleedingeffect == 1) or (dayz_bleedingeffect == 3)) then {
			[] spawn fnc_blooddrops;
		};
		//diag_log format ["%1::fnc_usec_damageBleed %2", __FILE__, _this];

		_modelPos = [0,0,0];

		switch (_wound) do {
			case "Pelvis": {
				_modelPos = [0,0,0.2];
			};
			case "aimpoint": {
				_rndX = (0.1 - random 0.2);
				_modelPos = [_rndX,0,0.2];
			};
			case "RightShoulder": {
				_modelPos = [0,0,0.2];
			};
			case "LeftShoulder": {
				_modelPos = [0,0,0.2];
			};
			//added visual wounds to foots
			case "RightFoot": {
				_modelPos = [0,0,0.2];
			};
			case "LeftFoot": {
				_modelPos = [0,0,0.2];
			};
		};

		while {1 == 1} do {
			scopeName "main";
			waitUntil {(vehicle _unit == _unit)};
			
			if ((dayz_bleedingeffect == 2) or (dayz_bleedingeffect == 3)) then {
				//Blood partical
				_point = "Logic" createVehicleLocal getPosATL _unit;
				_source = "#particlesource" createVehicleLocal getPosATL _unit;
				_source setParticleParams
				/* Sprite */			[["\Ca\Data\ParticleEffects\Universal\Universal", 16, 13, 1],"",	// File,Ntieth,Index,Count,Loop(Bool)
				/* Type */				"Billboard",
				/* TimmerPer */			1,
				/* Lifetime */			0.2,
				/* Position */			[0,0,0],
				/* MoveVelocity */		[0,0,0.5],
				/* Simulation */		1,0.32,0.1,0.05,	//rotationVel,weight,volume,rubbing
				/* Scale */				[0.05,0.25],
				/* Color */				[[0.2,0.01,0.01,1],[0.2,0.01,0.01,0]],
				/* AnimSpeed */			[0.1],
				/* randDirPeriod */		0,
				/* randDirIntesity */	0,
				/* onTimerScript */		"",
				/* DestroyScript */		"",
				/* Follow */			_point];
				_source setParticleRandom [2, [0, 0, 0], [0.0, 0.0, 0.0], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
				_source setDropInterval 0.02;
				_point attachTo [_unit,_modelPos,_wound];
			};

			sleep 5;

			while {((_unit getVariable["USEC_injured",true]) and (alive _unit))} do {
				scopeName "loop";
				if (vehicle _unit != _unit) then {
					BreakOut "loop";
				};
				sleep 1;
			};
			deleteVehicle _source;
			deleteVehicle _point;

			if (!(_unit getVariable["USEC_injured",false])) then {
				BreakOut "main";
			};
		};

		deleteVehicle _source;
		deleteVehicle _point;
};

fnc_blooddrops = {
	
	r_player_bloodpools = [];
	_recycleArray = false; //Flag to remove old puddles
	_debug = getMarkerpos "respawn_west";
	_timerbloodpooldelay = diag_tickTime;
	_timerbloodpoolcleandelay = diag_tickTime;
	
	//Blood on the ground
	_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	_inVehicle = (vehicle player != player);
	_pooldelay = 34 + r_player_bloodpersec;
	while {!r_player_dead} do {
		if ((!_inVehicle) && (!dayz_isSwimming)) then {
			if ((r_player_bloodpersec < 0) AND ((diag_tickTime - _timerbloodpooldelay) > _pooldelay/2)) then { //r_player_injured is bleeding.. i think
				_jeep = createVehicle ["Blood_Trail_DZ", _debug, [], 0, "NONE"];
				_jeep setVariable ["bloodpools",diag_ticktime];
				_playerPos = getPosATL player;
				_jeep setPos [(_playerPos select 0), (_playerPos select 1), 0];
				r_player_bloodpools set [count r_player_bloodpools, _jeep]; //Add new puddle to end of array
				_timerbloodpooldelay = diag_tickTime;
			};
		};
		sleep 1;
	};
};

fnc_usec_recoverUncons = {
	//same actions as in the EH, just timed differently
	player setVariable ["NORRN_unconscious", false, true];
	player setVariable ["unconsciousTime", 0, true];
	player setVariable ["USEC_isCardiac",false,true];
	player setVariable["medForceUpdate",true,true];
	sleep 1;
	PVDZ_send = [player,"Epinephrine",[player,player,"ItemEpinephrine"]];
	publicVariableServer "PVDZ_send";
	r_player_unconscious = false;
	sleep 1;
	r_player_cardiac = false;
	r_player_handler1 = false;
	player switchMove "AmovPpneMstpSnonWnonDnon_healed";
	[objNull, player, rSwitchMove,"AmovPpneMstpSnonWnonDnon_healed"] call RE;
};