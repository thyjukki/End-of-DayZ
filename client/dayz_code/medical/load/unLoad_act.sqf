// unLoad_act.sqf
// AUGUST 2010 - norrin

private ["_args","_vcl","_loop","_unit","_name","_crewVcl"];

_args		= _this select 3;
_name 		= _args select 0;
_vcl 		= _args select 1;
_crewVcl	= crew _vcl;

_name removeAction (_this select 2);

for [{ _loop = 0 },{ _loop < count _crewVcl },{ _loop = _loop + 1}] do
{
	_unit = _crewVcl select _loop; 

	if (_unit getVariable "NORRN_unconscious") then
	{
		unassignVehicle _unit;
		sleep 0.05;
		_unit action ["EJECT", _vcl];
		sleep 1;
		_unit switchMove "";
		_unit switchMove "ainjppnemstpsnonwrfldnon";
		sleep 0.2;
		norrnRalie = _unit;
		publicVariable "norrnRalie";
	};
	sleep 0.1;
};