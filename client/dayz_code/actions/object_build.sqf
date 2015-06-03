private ["_status","_array","_object","_items","_classname","_text","_build","_inside","_location","_nearObjects","_dis","_sfx"];
_array = _this select 3;

_object = _array select 0;
_items = _array select 1;
_classname = _array select 2;
_text = _array select 3;
_build = _array select 4;
_dis = _array select 5;
_sfx = _array select 6;

_uid = getPlayerUID player;

if (isNull _object) exitWith {};

player setVariable ["constructionObject", objNull];

//diag_log("Array: "+str(_array));
//diag_log(format["Array: object: %1 item: %2, classname: %3, text: %4, build: %5, booleans: %6, dis: %7, sfx: %8", _object, _items, _classname, _text, _build, _booleans, _dis,_sfx]);
_createPoints = {
    private ["_unit","_boundingBox","_points"];
    _unit = _this select 0;
	_boundingBox = boundingBox _unit;
	_points = [getPosATL _unit];
	
	for "_i" from 1 to 0 step -0.5 do {
		for "_j" from 0 to 1 do {
			_points set [count _points, _unit modelToWorld [0, ((_boundingBox select 0) select 1) * _i, 0]];
			_points set [count _points, _unit modelToWorld [0, ((_boundingBox select 1) select 1) * _i, 0]];
			_points set [count _points, _unit modelToWorld [((_boundingBox select 0) select 0) * 0.5, ((_boundingBox select _j) select 1) * _i, 0]];
			_points set [count _points, _unit modelToWorld [((_boundingBox select 1) select 0) * 0.5, ((_boundingBox select _j) select 1) * _i, 0]];
			_points set [count _points, _unit modelToWorld [((_boundingBox select 0) select 0) * 1, ((_boundingBox select _j) select 1) * _i, 0]];
			_points set [count _points, _unit modelToWorld [((_boundingBox select 1) select 0) * 1, ((_boundingBox select _j) select 1) * _i, 0]];
		};
	};
	_points;
};

_insideCheck = {
	private ["_x","_inside","_myX","_myY","_building","_unit","_boundingBox","_points","_min","_max"];
    _building = _this select 0;
	_unit = _this select 1;
	_inside = false;
	_points = [_unit] call _createPoints;
	
	_boundingBox = boundingBox _building;
	_min = _building modelToWorld (_boundingBox select 0);
	_max = _building modelToWorld (_boundingBox select 1);
	//diag_log format["boundingBox: %1    min: %2    max: %3", _boundingBox, _min, _max];
	
	{
		_myX = _x select 0;
		_myY = _x select 1;

		if ((_myX > ((_min select 0) min (_max select 0))) and {(_myX < ((_max select 0) max (_min select 0)))}) then {
			if ((_myY > ((_min select 1) min (_max select 1))) and {(_myY < ((_max select 1) max (_min select 1)))}) then {
				_inside = true;
			};
		};
			
		if (_inside) exitWith { };
	} forEach _points;
	
	_inside;
};

if (_build) then {
	_inside = false;
	_nearObjects = nearestObjects [player, [], 15];
	//diag_log format["nearObjects: %1", _nearObjects];
	{
		if ((!isNull _x) and (!(_x == player)) and (!(_x == _object)) and (!(_x IN DayZ_SafeObjects))) then {
			//diag_log format["object: %1, type: %2, string: %3, t_: %4, b_: %5, building: %6 vehicle: %7", _x, typeOf _x, str(_x), [": t_", str(_x)] call fnc_inString, [": b_", str(_x)] call fnc_inString, _x isKindOf "Building", _x isKindOf "AllVehicles"];
			//Check for building, vehicles, rocks
			
			//x is the item on the ground
			//_object is placed
			if ((_x isKindOf "Building") or (_x isKindOf "AllVehicles")) then { //(["rock", str(_x)] call fnc_inString) removed due to fxrocks <<<

				_inside = false;
				_inside = [_object, _x] call _insideCheck;
				if (!_inside) then {
					_inside = [_x, _object] call _insideCheck;
				};
			};	
		};
		
		//_overlapobjects = ["CamoNet_DZ","WoodenFence_1_foundation","WoodenFence_1_ghost","MetalFence_1","ShantyHouse","SurvivorWorkshop"]; //"SurvivorWorkshop","ShantyHouse","MetalFence_1"
		//_allowedinside = [];
								
		//if (((typeOf _x) in _overlapobjects) or ((typeOf _object) in _allowedinside)) then { };
		if (_x isKindOf "DZ_buildables") exitwith { _inside = false; diag_log format["Type of %1, Object Type %2",(typeOf _x),(typeOf _object)]; };
		if (_inside) exitWith { _status = (typeOf _x);  diag_log format["Type of %1, Object Type %2",(typeOf _x),(typeOf _object)]; };
	}forEach _nearObjects;
	
	if (!_inside) then {
		[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
		[player,_dis,true,(getPosATL player)] call player_alertZombies;

		// Added Nutrition-Factor for work
		["Working",0,[20,40,15,0]] call dayz_NutritionSystem;

		player playActionNow "Medic";

		sleep 5;
		
		_heightAdjustment = configFile >> "CfgVehicles" >> _classname >> "heightAdjustment";
		_newHeightAdjustment = 0;
		if ( isNumber(_heightAdjustment)) then {
			_newHeightAdjustment = getNumber(_heightAdjustment);
		};
		
		_location = getPosATL _object;
		_object setPosATL [_location select 0, _location select 1, 0.01 + _newHeightAdjustment];
		_object setDir (getDir _object);

		player reveal _object;

		_object setVariable ["characterID",dayz_characterID,true];
		
		if (_object iskindof "DZ_buildables") then {
			_object setVariable ["ownerArray",[getPlayerUID player],true];
		};

		if (_object isKindOf "TrapItems") then {
			if (getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "initState") > 0) then {
				_object setVariable ["armed", true, true];
			} else {
				_object setVariable ["armed", false, true];
			};
		};

		cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];

		PVDZ_obj_Publish = [dayz_characterID,_object,[getDir _object, getPosATL _object],_classname,ASLtoATL getPosASL player];
		publicVariableServer "PVDZ_obj_Publish";
	
		
		//set fuel
		if (_object isKindOf "Generator_DZ") then {
		diag_log format["Object: %1, Fuel: %2",_object,fuel _object];
			if (local _object) then {
				_object setFuel 0;
			} else {
				PVDZ_send = [_object,"SetFuel",[_object,0]];
				publicVariableServer "PVDZ_send";
			};
		};

		r_action_count = 0;
		cutText [format[localize "str_build_01",_text], "PLAIN DOWN"];
	} else {
		r_action_count = 0;
		deleteVehicle _object;
		{
			if (isClass (configFile >> "CfgMagazines" >> _x)) then {
				player addMagazine _x;
			};
		} foreach _items;
		cutText [format[localize "str_build_failed_01",_text,_status], "PLAIN DOWN"];
	};
} else {
	r_action_count = 0;
	deleteVehicle _object;
	{
		if (isClass (configFile >> "CfgMagazines" >> _x)) then {
			player addMagazine _x;
		};
	} foreach _items;
	cutText [format[localize "str_build_failed_02",_text], "PLAIN DOWN"];
};