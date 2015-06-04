private ["_class","_uid","_charID","_object","_worldspace","_key"];
//[dayz_characterID,_tent,[_dir,_location],"TentStorage"]
_charID =		_this select 0;
_object = 		_this select 1;
_worldspace = 	_this select 2;
_class = 		_this select 3;
_failed = false;

if (count _this > 3) then {
	_player = _this select 4;
	
	if (_player distance _object > 10) then { 
		_failed = true; 
		diag_log format["Player: %1 is too far from object: %2, Distance: %3",_player,_object,(_player distance _object)]; 
	};
};

#include "\z\addons\dayz_server\compile\server_toggle_debug.hpp"

if (!(_object isKindOf "Building")) exitWith {
	deleteVehicle _object;
};

_allowed = [_object, "Server"] call check_publishobject;

if (_allowed) then {
	//diag_log ("PUBLISH: Attempt " + str(_object));

	//get UID
	_uid = _worldspace call dayz_objectUID2;

	//Send request
	if (_object isKindOf "TrapItems") then {
		_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _charID, _worldspace, [_object getVariable ["armed", false]], [], 0,_uid];
	} else {
		_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, _class, 0 , _charID, _worldspace, [], [], 0,_uid];
	};
	//diag_log ("HIVE: WRITE: "+ str(_key));

	if (!_failed) then {
		_key call server_hiveWrite;
	};

	_object setVariable ["ObjectUID", _uid,true];

	if (_object isKindOf "TentStorage" || _object isKindOf "CamoNet_DZ" || _object isKindOf "Land_A_tent") then {
		_object addMPEventHandler ["MPKilled",{_this call vehicle_handleServerKilled;}];
	};

	dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_object];

	#ifdef OBJECT_DEBUG
	diag_log ("PUBLISH: Created " + (_class) + " with ID " + _uid);
	#endif

};
