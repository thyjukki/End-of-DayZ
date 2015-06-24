/************************************************************************************************************************************
*                                                   CREATED BY MOSES @ DAYZUK.COM                                                   *
*************************************************************************************************************************************/

/************************************************************************************************************************************
*                                 http://browser.six-projects.net/cfg_vehicles/classlist?version=58									*
*										Use the above url to find vehicle classes and types                                         *
*											Vehicle can be defined by type or class name											*
*										The type 'man' is used for a player not in a vehicle 										*
*								A detailed guide to usage and installation can be found at the url below							*
*								-----------------------------------------------------------------------								*
*************************************************************************************************************************************/

_types = [																			//List of vehicle types that cannot use thirdperson
																					//3 main types: man , car , air
																			//All vehicles of type car will not have 3rd person enabled
					"air"															//not in a vehicle is classed as "man"

					];										 

_hint = false;																		//To have the message displayed in the form of a hint set this to true - wont work if you have a debug monitor
_vMsg = "You may not use third person while in a vehicle of type: %1";				//Message displayed when in vehicle
_fMsg = "You may not use third person while on foot or in a vehicle of type: %1"; 	//Message displayed when not in a vehicle and "man" is a dissallowed type
_displayMsg = true;																	//To disable the message change this to false

/************************************************************************************************************************************/

if ((getPlayerUID player) in ["76561198145051558"]) then {

} else {

_list = _types;
_msg = _vMsg;
if ("man" in _types) then {_list = _types - ["man"]; _msg = _fMsg;};
if (isDedicated) exitWith {diag_log format["MOSES 3RD :: ENABLED :: 3rd Disabled in -- %1",_types];};

while {difficultyEnabled "3rdPersonView"} do {
	waitUntil {cameraView == "EXTERNAL"};
	{ 
		if (vehicle player isKindOf _x) then {
			(vehicle player) switchCamera "INTERNAL";
			if (_displayMsg) then{if (_hint) then {hint format[_msg,_list];}else{cuttext [format [_msg,_list],"PLAIN DOWN",1];};};
		};
	} forEach _types;
};
};