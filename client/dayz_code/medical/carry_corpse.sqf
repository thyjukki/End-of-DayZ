/*

 CARRY BODY SCRIPT

 Allows players to carry unconscious bodies

 JULY 2010 - norrin
*****************************************************************************************************************************
Start carry.sqf
*/

private ["_unit","_dragee","_pos","_dir"];
_dragee = _this select 3;
_unit = player;
r_carry_sqf = true;
r_drag_sqf = false;

_unit removeAction Norrn_carryAction;
if (isNull _dragee) exitWith {};
_dragee setVariable ["NORRN_unit_dragged", true, true];
detach _dragee;
sleep 1.5;
// public EH
//PVDZ_drg_RACarUp = _dragee; // not used
//publicVariable "PVDZ_drg_RACarUp"; // not used
//_dragee switchMove "ainjpfalmstpsnonwrfldnon_carried_up";
//PVDZ_drg_RAPicUp = _unit; // not used
//publicVariable "PVDZ_drg_RAPicUp"; // not used
_unit switchMove "acinpknlmstpsraswrfldnon_acinpercmrunsraswrfldnon";
sleep 10;
_dragee switchmove "ainjpfalmstpsnonwrfldnon_carried_still";
_dragee attachto [_unit,[-0.2, 0.2, 0]];


while {r_carry_sqf} do
{
	_anim_name = animationstate _unit;
	_dragee switchmove "ainjpfalmstpsnonwrfldnon_carried_still";


	if (force_dropBody) then {
		[_dragee, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};

	if (vehicle player != player) then {
		player action ["eject", vehicle player];
		cutText [localize "str_actions_medical_dragbody_veh","PLAIN DOWN"];
		[_dragee, _unit, _unconscious, _dragee] execVM "\z\addons\dayz_code\medical\drop_body.sqf";
	};

	//check that dragged unit still exists
	if (isNull _dragee) exitWith
	{
		player removeAction NORRN_dropAction;
		detach _dragee;
		_unit switchMove "";
		r_carry_sqf = false;
	};
};
if (true) exitWith {};

