private ["_totalTimeout","_display","_ctrl1","_ctrl1Pos","_timeout","_inVehicle","_bloodLow","_animType","_anim"];

disableSerialization;
if ((!r_player_handler1) and (r_handlerCount == 0)) then {
	//Unconscious Meter
	_totalTimeout = r_player_timeout;
	if (_totalTimeout == 0) then { _totalTimeout = r_player_timeout + 1; }; //Fix for zero divisor
	4 cutRsc ["playerStatusWaiting", "PLAIN",0];
	_display = uiNamespace getVariable 'DAYZ_GUI_waiting';
	_ctrl1 = _display displayCtrl 1400;
	_ctrl1Pos = ctrlPosition _ctrl1;

	_timeout = 0;
	r_handlerCount = r_handlerCount + 1;
	r_player_handler1 = true;
	player playAction "CanNotMove";
	"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [2]; "dynamicBlur" ppEffectCommit 0;
	"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectEnable true;"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];"colorCorrections" ppEffectCommit 0;
	0 fadeSound 0.05;
	disableUserInput true;
	diag_log "CLIENT: Unconscious...";
	while {r_player_unconscious} do {
		if (cameraView == "EXTERNAL") then {vehicle player switchCamera "INTERNAL";};
		_ctrl1 ctrlSetPosition [(_ctrl1Pos select 0),(_ctrl1Pos select 1),(_ctrl1Pos select 2),((0.136829 * safezoneH) * (1 -(r_player_timeout / _totalTimeout)))];
		_ctrl1 ctrlCommit 1;
		playSound "heartbeat_1";
		sleep 1;
		_inVehicle = (vehicle player != player);
		_bloodLow = ((r_player_blood/r_player_bloodTotal) < 0.5);
		if ((surfaceIsWater (getPosASL player)) and !_inVehicle) then {
			player setposASL [(getPosASL player select 0),(getPosASL player select 1),0.3];
		};

		if(_timeout == 0) then {
			if (!r_player_dead and !_bloodLow and r_player_injured) then {
				_timeout = 10;
				//_animType = (USEC_WoundAnim select (floor(random (count USEC_WoundAnim))));
				//player playActionNow _anim;
			};
		} else {
			_timeout = _timeout - 1;
		};

		if (r_player_timeout > 0) then {
			r_player_timeout = r_player_timeout - 1;
		} else {
			if ((!r_player_dead) and (!r_player_cardiac)) then {
				r_player_unconscious = false;
				nul = [] call fnc_usec_recoverUncons;
			};
		};
		if (r_player_timeout > 0 && !(player getVariable ["NORRN_unconscious", true])) then {
			nul = [] call fnc_usec_recoverUncons;
		};
		if (r_player_timeout > 0 && (animationState player == "AmovPpneMstpSnonWnonDnon_healed")) then {
			nul = [] call fnc_usec_recoverUncons;
		};
	};
	4 cutRsc ["default", "PLAIN",1];
	diag_log "CLIENT: Conscious...";
	disableUserInput false;

	if (!r_player_injured and ((r_player_blood/r_player_bloodTotal) >= 0.5)) then {

		"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 1]];"colorCorrections" ppEffectCommit 5;
	};
	player playActionNow "Stand";
	r_handlerCount = r_handlerCount - 1;
};