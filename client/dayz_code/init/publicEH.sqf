"PVDZ_drg_RaLW"   		addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf"};
"PVDZ_drg_RLact"		addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\medical\load\load_wounded.sqf"};
"PVDZ_hlt_Bleed"		addPublicVariableEventHandler {_id = (_this select 1) spawn fnc_usec_damageBleed};
"PVCDZ_veh_SH" 			addPublicVariableEventHandler {(_this select 1) call fnc_veh_handleDam}; // set damage to vehicle part
"PVDZ_veh_SF"			addPublicVariableEventHandler {(_this select 1) call fnc_veh_handleRepair}; // repair a part from a vehicle
"PVCDZ_obj_HideBody"	addPublicVariableEventHandler {hideBody (_this select 1)};
"PVCDZ_obj_GutBody"		addPublicVariableEventHandler {(_this select 1) spawn local_gutObject};
"PVCDZ_veh_SetFuel"		addPublicVariableEventHandler {(_this select 1) spawn local_setFuel};
"dayzInfectedCamps"		addPublicVariableEventHandler {(_this select 1) call infectedcamps};
	
	"PVDZ_receiveUnconscious" addPublicVariableEventHandler {	
		_unit = ((_this select 1) select 0);
		_duration = ((_this select 1) select 1);
		
		diag_log format["%1,%2",_unit,_duration];
		
		[_unit,_duration] call fnc_usec_damageUnconscious;
		_unit setVariable ["NORRN_unconscious", true, true];
	};

	"PVDZ_Server_changeOwner" addPublicVariableEventHandler {		
		_agent = ((_this select 1) select 0);
		_reciever = ((_this select 1) select 1);
		_ownerID = owner _agent;
		_newownerID = 1; //1 = server

		if (typeName _reciever == "OBJECT") then {
			_newownerID = owner _reciever;
		};
		if (isnil ("Owner")) then {
			_agent setVariable ["Owner",_ownerID];
		};

		_agent setOwner _newownerID;
		diag_log ("TRANSFER OWNERSHIP: " + (typeOf _agent) + " OF _unit: " + str(_agent) + " TO _client: " + str(_reciever) );
	};

if (isServer) then {
	"PVDZ_plr_Death"		addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerDied};
	"PVDZ_plr_Hit"			addPublicVariableEventHandler {_id = (_this select 1) spawn server_playerHit};
	"PVDZ_plr_Save"			addPublicVariableEventHandler {_id = (_this select 1) call server_playerSync;};
	"PVDZ_obj_Publish"		addPublicVariableEventHandler {(_this select 1) call server_publishObj};
	"PVDZ_veh_Save" 		addPublicVariableEventHandler {(_this select 1) call server_updateObject};
	"PVDZ_plr_Login1"		addPublicVariableEventHandler {_id = (_this select 1) call server_playerLogin};
	"PVDZ_spawnpos"			addPublicVariableEventHandler {PVDZ_spawnpos = getPosATL player};
	"PVDZ_plr_Login2"		addPublicVariableEventHandler {(_this select 1) call server_playerSetup};
	"PVDZ_plr_LoginRecord"	addPublicVariableEventHandler {_id = (_this select 1) spawn dayz_recordLogin};
	"PVDZ_obj_Destroy"		addPublicVariableEventHandler {(_this select 1) call server_deleteObj};
	"PVDZ_send" addPublicVariableEventHandler {(_this select 1) call server_sendToClient};
	"PVDZ_dayzCarBomb" addPublicVariableEventHandler {[_this select 1] execVM "\z\addons\dayz_code\actions\detonate_bomb.sqf";};
	
	"PVDZ_sendUnconscious" addPublicVariableEventHandler {	
		_owner = ((_this select 1) select 0);
		_duration = ((_this select 1) select 1);
		
		diag_log format["%1,%2",_owner,_duration];
		
		PVDZ_receiveUnconscious = [_owner,_duration];
		(owner _owner) publicVariableClient "PVDZ_receiveUnconscious";
	};
	
	"PVDZ_gridsActive" addPublicVariableEventHandler {
		_gridref = ((_this select 1) select 0);
		_gridloc = ((_this select 1) select 1);

		if (!(_gridref in dayz_gridsActive)) then {
			dayz_gridsActive set [count dayz_gridsActive,_gridref];
			dayz_seedloot set [count dayz_seedloot,[_gridloc,_gridref]];
		};
		diag_log format ["%1, %2, %3", _gridref, dayz_gridsActive, dayz_seedloot];
	};
	
	"PVDZ_gridsRemove" addPublicVariableEventHandler {
		_gridref = ((_this select 1) select 0);
		_gridloc = ((_this select 1) select 1);

		if (_gridref in dayz_gridsActive) then {
			dayz_gridsActive = dayz_gridsActive - [_gridref];
			dayz_deseedloot set [count dayz_deseedloot,[_gridloc,_gridref]];
		};
		diag_log format ["%1, %2", _gridref, dayz_gridsActive];
	};

	"PVDZ_Server_Simulation" addPublicVariableEventHandler {
		_agent = ((_this select 1) select 0);
		_control = ((_this select 1) select 1);
		
		_agent enableSimulation _control;
	};
	
	"PVDZ_obj_Delete" addPublicVariableEventHandler {
		_obj = ((_this select 1) select 0);
		_player = ((_this select 1) select 1);
		_type = typeOf _obj;
		_dis = _player distance _obj;

		if (_type in Dayz_plants) then {
			if (_dis < 3) then {
				deleteVehicle _obj;
			};
		};
		
		if (_type == "Blood_Trail_DZ") then {
			deleteVehicle _obj;
		};
		
		//Make sure object is a cardboardbox and make sure the player distance is under 15 meters from object
		if (_type iskindOf "CardboardBox") then {
			if (_dis < 15) then {
				deleteVehicle _obj;
			};
		};
	};
	
	"PVDZ_objgather_Knockdown" addPublicVariableEventHandler {
		_tree = ((_this select 1) select 0);
		_player = ((_this select 1) select 1);
		_dis = _player distance _tree;

		if (_dis < 30) then {
			_tree setDamage 1;
			deleteVehicle _tree;
		};			
	};

	"PVDZ_serverStoreVar" addPublicVariableEventHandler {
		_obj = ((_this select 1) select 0);
		_name = ((_this select 1) select 1);
		_value = ((_this select 1) select 2);
		
		
		_obj setVariable [_name, _value];
		/*
		switch (_name) do {
			case "looted": {
				_obj =  ((_this select 1) select 0);
				_name = "looted";
				_value = ((_this select 1) select 2);
				
				_obj setVariable [_name, _value];
			};
			case "zombieSpawn": {
				_obj = ((_this select 1) select 0);
				_name = "zombieSpawn";
				_value = ((_this select 1) select 2);
				
				_obj setVariable [_name, _value];
			};
			case "USEC_BloodQty": {
				_obj = ((_this select 1) select 0);
				_name = ((_this select 1) select 1);
				_value = ((_this select 1) select 2);
				//diag_log format ["%1, %2, %3", _obj, _name, _value]; 
				if (isPlayer _obj) then {
					_obj setVariable [_name, _value];
				};
			};
		};
		*/
	};

	"PVDZ_receiveVar" addPublicVariableEventHandler {
		_owner = ((_this select 1) select 0);
		_object = ((_this select 1) select 1);
		_name = ((_this select 1) select 2);
		_value = ((_this select 1) select 3);

		switch (_name) do {
			case "looted": {
				diag_log format ["%4 - %1, %2, %3", _object, _name, _value, "receive looted"]; 
			};
			case "zombieSpawn": {
				//diag_log format ["%4 - %1, %2, %3", _object, _name, _value, "receive zombieSpawn"]; 
			};
		};

		_ownerID = owner _owner;
		_return = _object getVariable [_name,_value];

		diag_log format ["%1", _return];	

		PVCDZ_SetVar = [_object,_name,_return];
		_ownerID publicVariableClient "PVCDZ_SetVar";
	};
	
	"PVDZ_getTickTime" addPublicVariableEventHandler {
		_owner = owner (_this select 1);
		//diag_log format["TICK TIME: %1", diag_tickTime];
		PVCDZ_setServerTickTimeOffset = diag_TickTime;
		_owner publicVariableClient "PVCDZ_setServerTickTimeOffset";
	};
};

//Client only
if (!isDedicated) then {
	"dayzSetDate"				addPublicVariableEventHandler {setDate (_this select 1)};
	"PVDZ_obj_RoadFlare"		addPublicVariableEventHandler {(_this select 1) spawn object_roadFlare};
	"PVDZ_drg_RaDrag"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animDrag.sqf"};
	"PVDZ_drg_RaCarry"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animCarry.sqf"};
	"PVDZ_drg_RACarUp"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animCarryUp.sqf"};
	"PVDZ_drg_RAPicUp"   		addPublicVariableEventHandler {(_this select 1) execVM "\z\addons\dayz_code\medical\publicEH\animPicUp.sqf"};
	"PVDZ_obj_Fire"				addPublicVariableEventHandler {nul=(_this select 1) spawn BIS_Effects_Burn};
	"PVDZ_dayzFlies"			addPublicVariableEventHandler {(_this select 1) call spawn_flies};
	
			//Medical
	"PVCDZ_hlt_Morphine"		addPublicVariableEventHandler {(_this select 1) call player_medMorphine};
	"PVCDZ_hlt_Bandage"			addPublicVariableEventHandler {(_this select 1) call player_medBandage};
	"PVCDZ_hlt_Epi"				addPublicVariableEventHandler {(_this select 1) call player_medEpi};
	"PVCDZ_hlt_Transfuse"		addPublicVariableEventHandler {(_this select 1) call player_medTransfuse; PVCDZ_hlt_Transfuse = nil};
	"PVCDZ_hlt_PainK"			addPublicVariableEventHandler {(_this select 1) call player_medPainkiller};
	"PVCDZ_hlt_AntiB"			addPublicVariableEventHandler {(_this select 1) call player_medAntiBiotics};
	"dayz_chloroform"	addPublicVariableEventHandler {nul=(_this select 1) call player_chloroformed};

	"PVCDZ_plr_Humanity"		addPublicVariableEventHandler {(_this select 1) spawn player_humanityChange};
	"PVCDZ_plr_Legs"			addPublicVariableEventHandler {
		_entity = (_this select 1) select 0;
		_entity setHit ["legs", 1];

		if (isPlayer _entity) then {
			_entity setVariable ["hit_legs", 2, true];
		};
	};
	
	"PVCDZ_SetVar" addPublicVariableEventHandler {
		_object = ((_this select 1) select 0);
		_name = ((_this select 1) select 1);
		_value = ((_this select 1) select 2);
		
		_object setVariable [_name,_value];
	};
	
	"PVCDZ_setServerTickTimeOffset"  addPublicVariableEventHandler {
		_serverTickTime = _this select 1;
		_offset = _serverTickTime - diag_tickTime;
		dayz_tickTimeOffset = _offset;
		//diag_log format["SERVER TIME: %1    OFFSET: %2    PLAYER TIME: %3    COMPUTED TIME: %4", _serverTickTime, _offset, diag_tickTime, (diag_tickTime + _offset)];
	};	
};

Detain = 0;