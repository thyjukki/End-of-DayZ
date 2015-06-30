//  scope_sight.sqf
//  © FEBRUARY 2010 - norrin

L115_WepKey_pressed	= true;
L115_CQBsight_key 	= true;
_gunCQB 		 	= primaryWeapon player;
_gunScope  		 	= "";

if (_gunCQB in L115_scopeList) then
{
	_gunScope = _gunCQB;
} else {
	_gunScope = switch (_gunCQB) do {
		//L115A3
		case "UKF_L115A3_CQB": {"UKF_L115A3"};
		case "UKF_L115A3_des_CQB": {"UKF_L115A3_des"};
		case "UKF_L115A3_wdl_CQB": {"UKF_L115A3_wdl"};
		case "UKF_L115A3_sd_CQB": {"UKF_L115A3_sd"};
		case "UKF_L115A3_sd_wdl_CQB": {"UKF_L115A3_sd_wdl"};
		case "UKF_L115A3_sd_des_CQB": {"UKF_L115A3_sd_des"};
	};
};
sleep 0.1;
player removeWeapon _gunCQB;
player AddWeapon _gunScope;

_primw = primaryWeapon player;
if (_primw != "") then {
    player selectWeapon _primw;
    //  Fix for weapons with grenade launcher
	_muzzles = getArray(configFile>>"cfgWeapons" >> _primw >> "muzzles");
    player selectWeapon (_muzzles select 0);
};

waitUntil {primaryWeapon player == _gunScope};
sleep 0.5;
L115_WepKey_pressed	= false;