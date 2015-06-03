private ["_id", "_uid"];
_trap = _this select 0;

_id = _trap getVariable ["ObjectID", "0"];
_uid = _trap getVariable ["ObjectUID", "0"];

PVDZ_obj_Delete = [_id,_uid];
publicVariableServer "PVDZ_obj_Delete";
