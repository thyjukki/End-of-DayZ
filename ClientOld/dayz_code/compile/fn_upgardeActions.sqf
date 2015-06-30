scriptName "Functions\misc\fn_upgradeActions.sqf";
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_cursorTarget = cursorTarget;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);
r_action_build = false;

dayz_resetUpgradeActions = {
	player removeAction s_player_building;
	s_player_building = -1;
	player removeAction s_player_maintenance;
	s_player_maintenance = -1;
	player removeAction s_player_disassembly;
	s_player_disassembly = -1;
};

if ((player getVariable["alreadyBuilding",0]) == 1) exitWith { call dayz_resetUpgradeActions; };


if (!isNull _cursorTarget and !_inVehicle and (player distance _cursorTarget < 4) and _canDo) then { 
	_ownerArray = _cursorTarget getVariable ["ownerArray",[]];
	//building System
	//if (typeOf _cursorTarget in ["ShantyHouse_Base","SurvivorWorkshop","SurvivorWorkshopStage2","SurvivorWorkshopAStage3","SurvivorWorkshopBStage3","SurvivorWorkshopCStage3","SurvivorWorkshopAStage4","SurvivorWorkshopBStage4","SurvivorWorkshopCStage4"]) then {
	_text = getText (configFile >> "CfgVehicles" >> typeOf _cursorTarget >> "displayName");
	
	if (_cursorTarget iskindof "DZ_buildables") then {
		if (s_player_building < 0) then {
			if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Upgrade" >> "create")) then {
				s_player_building = player addAction [format["Build %1",_text], "\z\addons\dayz_code\actions\object_upgradebuilding.sqf",_cursorTarget, 0, false, true, "",""];
			};
		};
		if (s_player_maintenance < 0) then {
			if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Maintenance" >> "active")) then {
				_text = getText (configFile >> "CfgVehicles" >> typeOf _cursorTarget >> "maintenancename");
				s_player_maintenance = player addAction [format["%1 Maintenance",_text], "\z\addons\dayz_code\actions\object_maintenance.sqf",_cursorTarget, 0, false, true, "", "'ItemToolbox' in items player"];
			};
		};
	} else {
		player removeAction s_player_building;
		s_player_building = -1;
		player removeAction s_player_maintenance;
		s_player_maintenance = -1;
	};
	
	if ((getPlayerUID player) in _ownerArray) then {
		if (s_player_disassembly < 0) then {
			if (isText (configFile >> "CfgVehicles" >> (typeof _cursorTarget) >> "Disassembly" >> "create")) then {
				s_player_disassembly = player addAction [format["%1 Disassembly",_text], "\z\addons\dayz_code\actions\object_disassembly.sqf",_cursorTarget, 0, false, true, "", "'ItemToolbox' in items player"];
			};
		};
	};
} else {
	call dayz_resetUpgradeActions;
};


/*
dayz_resetUpgradeActions = {
	s_player_disassembly = -1;
	s_player_building = -1;
	s_player_maintenance = -1;
};
*/

//Monitor
player setVariable ["upgradeActions", diag_ticktime, false];