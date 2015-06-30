// L115_FHGwep.sqf
// © FEBRUARY 2010 - norrin  
// Based upon ideas from ACE2

if (L115_noGripOrBipod) exitWith {}; //added 040210 - so that functionality can be removed by mission maker
if (L115_noCQBsights) then {L115_WepKey_pressed = false};

L115_FHG_fnc 		= Compile PreprocessFile "\UKF_L115A3\s\FHG\L115_FHG_fnc.sqf";
L115_shiftH_keyDown 	= Compile preprocessfile "\UKF_L115A3\s\FHG\shiftH_keyDown.sqf";

	_origPrimWeap		 = "";
	L115_FHG_List 		 = ["UKF_L115A3","UKF_L115A3_wdl","UKF_L115A3_des","UKF_L115A3_sd","UKF_L115A3_sd_wdl","UKF_L115A3_sd_des"];
	L115_FHG_deployedList = ["UKF_L115A3_fgrip","UKF_L115A3_wdl_fgrip","UKF_L115A3_des_fgrip","UKF_L115A3_sd_fgrip","UKF_L115A3_sd_wdl_fgrip","UKF_L115A3_sd_des_fgrip"];
	_all_List			 = L115_FHG_List + L115_FHG_deployedList;
	L115_FHG_keyAdded  	 = false;
	L115_FHG_key  		 = false;
	sleep 2;
	_primaryWeapon		 =	primaryWeapon player; //added 040210 - so that units that start mission carrying L115 weapons can use functionality without having to drop then pick up weapons
	if (_primaryWeapon in L115_FHG_List) then  {[_primaryWeapon] call L115_FHG_fnc};
	
	while {true} do
	{
		if (primaryWeapon player != _origPrimWeap) then
		{
			_origPrimWeap = primaryWeapon player;
			if (_origPrimWeap in L115_FHG_List) then
			{	
				if (L115_FHG_keyAdded) then 
				{
					L115_FHG_key  = true;
					(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftH_keyDownEHId];
					[_origPrimWeap] call L115_FHG_fnc;
				} else {
					L115_FHG_key  = true;
					[_origPrimWeap] call L115_FHG_fnc;
				};
			};
			if (_origPrimWeap in L115_FHG_deployedList) then 
			{	
				if (L115_FHG_keyAdded) then 
				{
					L115_FHG_key  = false;
					(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftH_keyDownEHId];
					[_origPrimWeap] call L115_FHG_fnc;
				} else {
					L115_FHG_key  = false;
					[_origPrimWeap] call L115_FHG_fnc;
				};
			};	
			if !(_origPrimWeap in _all_List) then
			{
				if (L115_FHG_keyAdded) then 
				{
					L115_FHG_keyAdded = false;
					L115_FHG_key  = false;
					(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftH_keyDownEHId];
				};
			};	
		};
		
		if (!alive player) then
		{
			_origPrimWeap	= "";
			if (L115_FHG_keyAdded) then
			{	
				L115_FHG_keyAdded = false;
				L115_FHG_key  = false;
				(findDisplay 46) displayRemoveEventHandler ["KeyDown", L115_shiftH_keyDownEHId];
			};
			waitUntil {alive player};
		};
		sleep 1;
	};