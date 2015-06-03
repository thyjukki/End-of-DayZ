/*

 CARRY BODY SCRIPT

 Allows players to carry unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************
Start carry.sqf
*/

private ["_unit","_dragee","_pos","_dir","_addAction"];
_dragee = _this select 3;
_unit = player;
_unconscious = _dragee getVariable ["NORRN_unconscious", false];
_addAction = false;


if (isNull _dragee) exitWith {};
if (!_unconscious) exitWith {};

_unit removeAction Norrn_carryAction;
r_carry_sqf = true;
r_drag_sqf = false;


while {r_carry_sqf} do
{
	if (!_addAction) then {
		sleep 2;
		detach _dragee;

		PVDZ_drg_RACarUp = [_dragee];
		publicVariable "PVDZ_drg_RACarUp";
		//_dragee switchMove "ainjpfalmstpsnonwrfldnon_carried_up";

		PVDZ_drg_RAPicUp = [_unit];
		publicVariable "PVDZ_drg_RAPicUp";

		_unit switchMove "acinpknlmstpsraswrfldnon_acinpercmrunsraswrfldnon";
		sleep 10;

		PVDZ_drg_RaCarry = _dragee; // not used
		publicVariable "PVDZ_drg_RaCarry"; // not used
		_dragee switchmove "ainjpfalmstpsnonwrfldnon_carried_still";
		_dragee attachto [_unit,[-0.2, 0.2, 0]];

		sleep 1;
		_addAction = true;
	};


	if (force_dropBody) then {
		[_dragee, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};

	if (vehicle player != player) then {
		player action ["eject", vehicle player];
		cutText [localize "str_actions_medical_dragbody_veh","PLAIN DOWN"];
		[_dragee, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};
	if (_dragee getVariable ["NORRN_unconscious", false]) then {
		[_dragee, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};
	if (!r_carry_sqf) exitWith {};
};

