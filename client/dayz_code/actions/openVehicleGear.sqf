private ["_unit","_unconcious","_inVeh","_alive"];
call fnc_usec_medic_removeActions;
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);


if (_inVehicle && _alive) then {
	player action ["Gear", _vehicle];
};