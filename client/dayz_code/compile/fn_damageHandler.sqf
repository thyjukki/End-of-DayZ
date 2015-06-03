scriptName "Functions\misc\fn_damageHandler.sqf";
/***********************************************************

	Modifyed by Alby

	PROCESS DAMAGE TO A UNIT
	- Function
	- [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private ["_unit","_hit","_damage","_unconscious","_source","_ammo","_Viralzed","_isMinor","_isHeadHit","_isPlayer","_canHitFree","_isBandit","_punishment","_humanityHit","_myKills","_wpst","_sourceDist","_sourceWeap","_scale","_type","_nrj","_rndPain","_hitPain","_wound","_isHit","_isbleeding","_rndBleed","_hitBleed","_isInjured","_lowBlood","_rndInfection","_hitInfection","_isCardiac","_chance","_breakaleg"];_unit = _this select 0;
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_unconscious = _unit getVariable ["NORRN_unconscious", false];
_source = _this select 3;
_ammo = _this select 4;
_Viralzed = typeOf _source in DayZ_ViralZeds;
_isMinor = (_hit in USEC_MinorWounds);
_isHeadHit = (_hit == "head_hit");
_isPlayer = (isPlayer _source);

// anti-hack for local explosions (HelicopterExploSmall, HelicopterExploBig, SmallSecondary...) spawned by hackers
_breakaleg = (((_hit == "legs") AND {(_source==_unit)}) AND {((_ammo=="") AND {(!isNil "Dayz_freefall")})}) AND {(abs(time - (Dayz_freefall select 0))<1)};
if ( (!_breakaleg) AND {(((isNull _source) OR {(_unit == _source)}) AND {((_ammo == "") OR {({damage _x > 0.9} count((getposATL vehicle _unit) nearEntities [["Air", "LandVehicle", "Ship"],15]) == 0) AND (count nearestObjects [getPosATL vehicle _unit, ["TrapItems"], 30] == 0)})})}) exitWith {0};

if (_unit == player) then {
	if (_hit == "") then {
		if ((_source != player) and _isPlayer) then {		
			_canHitFree = 	player getVariable ["freeTarget",false];
			_isBandit = (player getVariable["humanity",0]) <= -2000;
			_punishment = _canHitFree or _isBandit; //if u are bandit or start first - player will not recieve humanity drop
			_humanityHit = 0;

			if (!_punishment) then {
				_myKills = 	200 - (((player getVariable ["humanKills",0]) / 30) * 100);
				_humanityHit = -(_myKills * _damage);
				[_source,_humanityHit] spawn {	
					private ["_source","_humanityHit"];
					_source = _this select 0;
					_humanityHit = _this select 1;
					PVDZ_send = [_source,"Humanity",[_source,_humanityHit,30]];
					publicVariableServer "PVDZ_send";
				};
			};
			
			_dist = player distance _source;
			PVDZ_plr_Hit = [_unit, _source, currentweapon _source, _dist];
			publicVariableServer "PVDZ_plr_Hit";
		};
	};
	
	if ((_ammo == "tranquiliser_bolt") and (!_unconscious) and (vehicle player == player)) then {
		[_unit] spawn {
			private ["_unit"];
			_unit = _this select 0;
			systemChat format ["YOU HAVE BEEN TRANQUILISED"];
			"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [2]; "dynamicBlur" ppEffectCommit 0;
			"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit 0;
			sleep 2; 
			 0 fadeSound 0.05;
			sleep 5; 
			[_unit,0.01] call fnc_usec_damageUnconscious;
			_unit setVariable ["NORRN_unconscious", true, true];
			r_player_timeout = round(random 60);
			r_player_unconscious = true;
			player setVariable["medForceUpdate",true,true];
			player setVariable ["unconsciousTime", r_player_timeout, true];
		};
	};
	
	if (((!(isNil {_source})) AND {(!(isNull _source))}) AND {((_source isKindOf "CAManBase") AND {(!local _source )})}) then {
		if (diag_ticktime-(_source getVariable ["lastloghit",0])>2) then {
			private ["_sourceWeap"];
			_source setVariable ["lastloghit",diag_ticktime];
			_wpst = weaponState _source;

			_sourceDist = round(_unit distance _source);
			_sourceWeap = switch (true) do {
				case ((vehicle _source) != _source) : { format ["in %1",getText(configFile >> "CfgVehicles" >> (typeOf (vehicle _source)) >> "displayName")] };
				case (_ammo == "zombie") : { _ammo };
				case (_wpst select 0 == "Throw") : { format ["with %1 thrown", _wpst select 3] };
				case (["Horn", currentWeapon _source] call fnc_inString) : {"with suspicious vehicle "+str((getposATL _source) nearEntities [["Air", "LandVehicle", "Ship"],5])};
				case (["Melee", _wpst select 0] call fnc_inString) : { format ["with %2%1",_wpst select 0, if (_sourceDist>6) then {"suspicious weapon "} else {""}] }; 
				case ((_wpst select 0 == "") AND {(_wpst select 4 == 0)}) : { format ["with %1/%2 suspicious", primaryWeapon _source, _ammo] };
				case (_wpst select 0 != "") : { format ["with %1/%2 <ammo left:%3>", _wpst select 0, _ammo, _wpst select 4] };
				default { "with suspicious weapon" };
			};
			if (_ammo != "zombie") then { // don't log any zombie wounds, even from remote zombies
				PVDZ_sec_atp = [_unit, _source, _sourceWeap, _sourceDist];
				publicVariableServer "PVDZ_sec_atp";
			};
		};
	};
};

//Pure blood damage
_scale = 200;
_type = 0;
if ((_ammo isKindof "Grenade") or (_ammo isKindof "ShellBase") or (_ammo isKindof "TimeBombCore") or (_ammo isKindof "BombCore") or (_ammo isKindof "MissileCore") or (_ammo isKindof "RocketCore") or (_ammo isKindof "FuelExplosion") or (_ammo isKindof "GrenadeBase")) then {
	_type = 1;
};
if ((_ammo isKindof "B_127x107_Ball") or (_ammo isKindof "B_127x99_Ball")) then {
	_type = 2;
};

if (_damage > 0.4) then {
	if (_ammo != "zombie") then {
		_scale = _scale + 50;
	};
	//Start body part scale
	if (_ammo == "zombie") then {
		//_scale = _scale * 3; //600 = Normal, 900 = Viral
		_scale = getNumber (configFile >> "CfgVehicles" >> (typeOf _source) >> "damageScale");
		diag_log format["DamageScale: %1 %2",(typeOf _source),_scale];
	};
	
	if (_isHeadHit) then {
		_scale = _scale * 2; //2400 = Normal, 3600 = Viral
	};
	
	//End body part scale
	if ((isPlayer _source) and !(player == _source)) then {
		_scale = _scale + 800;
		if (_isHeadHit) then {
			_scale = _scale + 500;
		};
	};
	switch (_type) do {
		case 1: {_scale = _scale + 200};
		case 2: {_scale = _scale + 200};
	};
	if (_unit == player) then {
		diag_log ("DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale) + " Conscious " + str (!_unconscious));
		r_player_blood = r_player_blood - (_damage * _scale);
	};
};

//Record Damage to Minor parts (legs, arms)
if (_hit in USEC_MinorWounds) then {
	private ["_type"];
	if (_ammo == "zombie") then {
		if (_hit == "legs") then {
			[_unit,_hit,(_damage / 6)] call object_processHit;
		} else {
			[_unit,_hit,(_damage / 4)] call object_processHit;
		};
	} else {
		if (_breakaleg) then {
			_nrj = ((Dayz_freefall select 1)*20) / 100;
			if (random(((1 + _nrj)^2) - 1) >= 1.5) then { // freefall from 5m => 1/2 chance to get hit legs registered
					diag_log(format["%1 Legs damage registered from freefall. _damage:%2  _nrj:%3 (odds %4:1) freefall:%5",__FILE__,_damage, _nrj,(((1+_nrj)^2)-1)/1.5, Dayz_freefall, time]);
					r_player_blood = r_player_blood - ((Dayz_freefall select 1) * 1000);
					[_unit,_hit,_damage] call object_processHit;
			} else {
					[_unit,"arms",(_damage / 6)] call object_processHit; // prevent broken legs due to arma bugs
			};
		} else {
			[_unit,_hit,(_damage / 2)] call object_processHit;
		};
		if ((_hit == "legs") AND (_source==_unit) AND (_ammo=="")) then {
			if ((!isNil "Dayz_freefall") AND {(abs(time - (Dayz_freefall select 0))<1)}) then {
				_nrj = ((Dayz_freefall select 1)*20) / 100;
				if (random(((1 + _nrj)^2) - 1) >= 1.5) then { // freefall from 5m => 1/2 chance to get hit legs registered
					diag_log(format["%1 Legs damage registered from freefall. _damage:%2  _nrj:%3 (odds %4:1) freefall:%5",__FILE__,_damage, _nrj,(((1+_nrj)^2)-1)/1.5, Dayz_freefall, time]);
					[_unit,_hit,_damage] call object_processHit;
				}
				else {
					[_unit,"arms",(_damage / 6)] call object_processHit; // prevent broken legs due to arma bugs
				};
			};
		}
		else {
			[_unit,_hit,(_damage / 2)] call object_processHit;
		};	
	};
};

if (_unit == player) then {
//incombat
	_unit setVariable["startcombattimer", 1];
};

//Shake the cam, frighten them!
if (_damage > 0.1) then {
	if (_unit == player) then {
		//player sidechat format["Processed bullet hit for %1 (should only be for me!)",_unit];
		1 call fnc_usec_bulletHit;
	};
	if (local _unit) then {
		_unit setVariable["medForceUpdate",true,true];
	};
};

if (_damage > 0.4) then {
	//Pain and Infection
	if (_unit == player) then {
		_rndPain = 		floor(random 10);
		_hitPain = 		(_rndPain < _damage);
		
		if ((_isHeadHit) or (_damage > 1.2 and _hitPain)) then {
			_hitPain = true;
		};
		
		if (_hitPain) then {
			r_player_inpain = true;
			player setVariable["USEC_inPain",true,true];
		};
		
		if ((_damage > 1.5) and _isHeadHit) then {
			_id = [_source,"shothead"] spawn player_death;
		};
	};

	//Create wound and cause bleed
	_wound = _hit call fnc_usec_damageGetWound;
	_isHit = _unit getVariable["hit_"+_wound,false];
	
	_isbleeding = false;
	_isScratched = false;
	switch true do {
		default {
			_rndBleed = floor(random 100);
			_rndBleedChance = getNumber (configFile >> "CfgVehicles" >> (typeOf _source) >> "BleedChance");
			_hitBleed = (_rndBleed < _rndBleedChance);

			if (_hitBleed) then {
				_isbleeding = true;
			};
		};
	};

	if (_ammo == "zombie") then {
	
		if(!_isHit and _isbleeding) then {
			//Create Wound
			_unit setVariable["hit_"+_wound,true,true];
			
			PVDZ_hlt_Bleed = [_unit,_wound,_damage];
			publicVariable "PVDZ_hlt_Bleed";   // draw blood stream on character, on all gameclients
			
			[_unit,_wound,_hit] spawn fnc_usec_damageBleed;  // draw blood stream on character, locally
			
			//Set Injured if not already
			_isInjured = _unit getVariable["USEC_injured",false];
			
			if (!_isInjured) then {
				_unit setVariable["USEC_injured",true,true];
				if ((_unit == player) and (_ammo != "zombie")) then {
					dayz_sourceBleeding = _source;
				};
			};
			//Set ability to give blood
			_lowBlood = _unit getVariable["USEC_lowBlood",false];
			if (!_lowBlood) then {
				_unit setVariable["USEC_lowBlood",true,true];
			};
			if (_unit == player) then {
				r_player_injured = true;
			};
			
			//HitInfection from zombies
			if ((!r_player_infected) and !(r_player_Sepsis select 0)) then {
				if (_ammo == "zombie") then {
					_rndSepsis = floor(random 100);
					_sepsisChance = getNumber (configFile >> "CfgVehicles" >> (typeOf _source) >> "sepsisChance");
					//_hitInfection = (_rndInfection < _infectionChance);

					if (_rndSepsis < _sepsisChance) then {
						r_player_Sepsis = [true, diag_tickTime];
						player setVariable["USEC_Sepsis",true,true];
					};
				};
			};
		};
	} else {
		if(!_isHit) then {
			//Create Wound
			_unit setVariable["hit_"+_wound,true,true];
			PVDZ_hlt_Bleed = [_unit,_wound,_damage];
			publicVariable "PVDZ_hlt_Bleed";  // draw blood stream on character, on all gameclients
			[_unit,_wound,_hit] spawn fnc_usec_damageBleed;  // draw blood stream on character, locally
			//Set Injured if not already
			_isInjured = _unit getVariable["USEC_injured",false];
			if (!_isInjured) then {
				_unit setVariable["USEC_injured",true,true];
				if ((_unit == player) and (_ammo != "zombie")) then {
					dayz_sourceBleeding = _source;
				};
			};
			//Set ability to give blood
			_lowBlood = _unit getVariable["USEC_lowBlood",false];
			if (!_lowBlood) then {
				_unit setVariable["USEC_lowBlood",true,true];
			};
			if (_unit == player) then {
				r_player_injured = true;
			};
		};
	};
};

if (_type == 1) then {
	/*
		BALISTIC DAMAGE
	*/
	if ((_damage > 0.01) and (_unit == player)) then {
		//affect the player
		[20,45] call fnc_usec_pitchWhine; //Visual , Sound
	};
	if (_damage > 4) then {
		//serious ballistic damage
		if (_unit == player) then {
			_id = [_source,"explosion"] spawn player_death;
		};
	} else {
		if (_damage > 2) then {
			_isCardiac = _unit getVariable["USEC_isCardiac",false];
			if (!_isCardiac) then {
				_unit setVariable["USEC_isCardiac",true,true];
				r_player_cardiac = true;
			};
		};
	};
};
if (_type == 2) then {
	/*
		HIGH CALIBRE
	*/
	if (_damage > 4) then {
		//serious ballistic damage
		if (_unit == player) then {
			_id = [_source,"shotheavy"] spawn player_death;
		};
	} else {
		if (_damage > 2) then {
			_isCardiac = _unit getVariable["USEC_isCardiac",false];
			if (!_isCardiac) then {
				_unit setVariable["USEC_isCardiac",true,true];
				r_player_cardiac = true;
			};
		};
	};
};

if (_ammo == "zombie") then {
	if (!_unconscious and !_isMinor and _isHeadHit) then {
		_chance = random 1;
		if ((_damage > 0.8) and (_chance < 0.5)) then {
			[_unit,_damage] call fnc_usec_damageUnconscious;
		};
	};
} else {
	if (!_unconscious and !_isMinor and ((_damage > 2) or ((_damage > 0.5) and _isHeadHit))) then {
		//set unconsious
		[_unit,_damage] call fnc_usec_damageUnconscious;
	};
};

// all "HandleDamage event" functions should return the effective damage that the engine will record
0
