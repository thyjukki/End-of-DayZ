private ["_WaterHoleArray","_ShuffleArray"];

_WaterHoleArray = [
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\BlackLake.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Gvozdno.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Gvozdno.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Kabanino.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Kopyto.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Mogilevka.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Nadezdinho.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\NorthNadezdinho.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\NorthPusta.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\NorthTopolka.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Novy.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\PobedaDam.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Pogorevka.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Polana.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Prud.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Sosnovy.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Stary.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Topolka.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\Vysota.sqf",
	"\z\addons\dayz_code\system\mission\chernarus\infectiousWaterholes\WillowLake.sqf"
];

_ShuffleArray = {
	private ["_ar","_rand_array","_rand"];
	_ar = _this;
	_rand_array = [];
	while {count _ar > 0} do {
		_rand = (count _ar);
		_rand = floor (random _rand);
		_rand_array set [count _rand_array, _ar select _rand];
		_ar set [_rand, "randarray_del"];
		_ar = _ar - ["randarray_del"];
		sleep 0.001;
	};
	_rand_array;
};

_infectedWaterHoles = _WaterHoleArray call _ShuffleArray;

_i = 0;
_t = 0;
_activeArray = [];

{
	if ((random 1) < 0.5) then {
		[] execVM _x;
		_activeArray set [count _activeArray, _x]; // set  
		_i = _i + 1;
	};
	_t = _t + 1;
	sleep 0.01;
}count _infectedWaterHoles;

diag_log format["Max: %1, Spawned: %2, Active: %3",_t,_i,_activeArray];