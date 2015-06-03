private ["_timer","_timer1","_timer2"];
_timer = diag_tickTime;
_timer1 = diag_tickTime;
_spawnCheck = diag_tickTime;
_timer2 = diag_Ticktime;
_timer10 = diag_Ticktime;
_NewDay  = diag_tickTime;
_playerPos = getPosATL player;

while {1 == 1} do {
	//add player actions
	[] call fnc_usec_selfActions;
	[] call fnc_usec_damageActions;
	[] call fnc_usec_upgardeActions;
	
	//spawning system
	if ((diag_tickTime - _spawnCheck) > 6) then {
		[false] call player_spawnCheck;
		_spawnCheck  = diag_tickTime;
	};
	
	//Check if new day
	if ((diag_tickTime - _NewDay) > 5) then {
		private "_day";
		_day = round(360 * (dateToNumber date));
		if(dayz_currentDay != _day) then {
			dayz_sunRise = call world_sunRise;
			dayz_currentDay = _day;
		};
		
		_NewDay  = diag_tickTime;
	};
	//wait
	sleep 0.001; 
};