// L115_CQBwep.sqf
// © FEBRUARY 2010 - norrin  
// Based upon ideas from ACE2

if (L115_noCQBsights) exitWith {}; //added 040210 - so that functionality can be removed by mission maker
if (L115_noGripOrBipod) then {L115_FHG_key = true};

L115_WepKey_pressed	= false;
L115_CQBsight_fnc 	= Compile PreprocessFile "\UKF_L115A3\s\CQB\L115_CQBsight_fnc.sqf";
L115_shiftF_keyDown 	= Compile preprocessfile "\UKF_L115A3\s\CQB\shiftF_keyDown.sqf";

	_origPrimWeap			= "";
	_scope_UGLUp				= [""];
	_scope_UGLDown				= [""];
	_scope_sightList 		= _scope_UGLUp + _scope_UGLDown	;
	_CQB_UGLUp				= [""];
	_CQB_UGLDown				= [""];
	_CQB_sightList 			= _CQB_UGLUp + _CQB_UGLDown;
	_scope_MGUp				= [""];					   
	_scope_MGDown				= [""];	   
	_scope_MGList			= _scope_MGDown + _scope_MGUp;
	_CQB_MGUp				= [""];
	_CQB_MGDown				= [""];
	_CQB_MGList			= _CQB_MGDown + _CQB_MGUp;
	_scope_L85A2				= [""];
	_CQB_L85A2				= [""];
	_bipodUp 				= ["UKF_L115A3","UKF_L115A3_wdl","UKF_L115A3_des","UKF_L115A3_sd","UKF_L115A3_sd_wdl","UKF_L115A3_sd_des"];
	_bipodDown   				= ["UKF_L115A3_fgrip","UKF_L115A3_wdl_fgrip","UKF_L115A3_des_fgrip","UKF_L115A3_sd_fgrip","UKF_L115A3_sd_wdl_fgrip","UKF_L115A3_sd_des_fgrip"];
	L115_scopeList 			= _scope_sightList + _scope_MGList + _scope_L85A2; 
	L115_CQBList			= _CQB_sightList + _CQB_MGList + _CQB_L85A2;
	_all_Scopes			= _scope_sightList + _CQB_sightList + _scope_MGList + _CQB_MGList + _scope_L85A2 + _CQB_L85A2;
	_mg_list			= _scope_MGList + _CQB_MGList;
	_gun_list			= _scope_sightList + _CQB_sightList;
	L115_CQBsight_keyAdded  	= false;
	L115_CQBsight_key  		= false;
	sleep 2;
	_primaryWeapon		 	= primaryWeapon player; //added 040210 - so that units that start mission carrying L115 weapons can use functionality without having to drop then pick up weapons
	if (_primaryWeapon in L115_scopeList) then {[_primaryWeapon] call L115_CQBsight_fnc};
	
	while {true} do
	{
		if (primaryWeapon player != _origPrimWeap) then
		{
			_origPrimWeap = primaryWeapon player;
			if (_origPrimWeap in L115_scopeList) then
			{	
				if (L115_CQBsight_keyAdded) then 
				{
					L115_CQBsight_key  = true;
					(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftF_keyDownEHId];
					[_origPrimWeap] call L115_CQBsight_fnc;
				} else {
					L115_CQBsight_key  = true;
					[_origPrimWeap] call L115_CQBsight_fnc;
				};
			};
			if (_origPrimWeap in L115_CQBList) then 
			{	
				if (L115_CQBsight_keyAdded) then 
				{
					L115_CQBsight_key  = false;
					(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftF_keyDownEHId];
					[_origPrimWeap] call L115_CQBsight_fnc;
				} else {
					L115_CQBsight_key  = false;
					[_origPrimWeap] call L115_CQBsight_fnc;
				};
			};	
			if !(_origPrimWeap in _all_Scopes) then
			{
				if (L115_CQBsight_keyAdded) then 
				{
					L115_CQBsight_keyAdded = false;
					L115_CQBsight_key  = false;
					(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftF_keyDownEHId];
					hintSilent "Weapon is not equipped with a CQB scope";
				};
			};
			//hintSilent Current Weapon Set-up 
			if (_origPrimWeap in _bipodDown ) then {hintSilent "Bipod: Down"};
			if (_origPrimWeap in _bipodUp ) then {hintSilent "Bipod: Up"};
			if (_origPrimWeap in _scope_L85A2) then {hintSilent "Sight: Scope"};
			if (_origPrimWeap in _CQB_L85A2) then {hintSilent "Sight: CQB"};
			if (_origPrimWeap in _scope_MGDown) then {hintSilent "Sight: Scope \nBipod: Down"};
			if (_origPrimWeap in _scope_MGUp) then {hintSilent "Sight: Scope \nBipod: Up"};	
			if (_origPrimWeap in _CQB_MGDown) then {hintSilent "Sight: CQB \nBipod: Down"};
			if (_origPrimWeap in _CQB_MGUp) then {hintSilent "Sight: CQB \nBipod: Up"};	
			if (_origPrimWeap in _scope_UGLUp) then {hintSilent "Sight: Scope \nFront Grip: Up"};
			if (_origPrimWeap in _scope_UGLDown) then {hintSilent "Sight: Scope \nFront Grip: Down"};
			if (_origPrimWeap in _CQB_UGLUp) then {hintSilent "Sight: CQB \nFront Grip: Up"};
			if (_origPrimWeap in _CQB_UGLDown) then {hintSilent "Sight: CQB \nFront Grip: Down"};
		};
		
		if (!alive player) then
		{
			_origPrimWeap	= "";
			if (L115_CQBsight_keyAdded) then
			{	
				L115_CQBsight_keyAdded = false;
				L115_CQBsight_key  = false;
				(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftF_keyDownEHId];
			};
			waitUntil {alive player};
		};
		sleep 1;
	};
