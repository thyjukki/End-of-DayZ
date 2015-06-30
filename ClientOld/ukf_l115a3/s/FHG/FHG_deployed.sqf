//  FHG_deployed.sqf
//  © FEBRUARY 2010 - norrin

L115_WepKey_pressed	= true;
L115_FHG_key  		= false;
_gun 				= primaryWeapon player;
_gunFHG 			= "";
_scope_guns			= ["UKF_L115A3","UKF_L115A3_wdl","UKF_L115A3_des","UKF_L115A3_sd","UKF_L115A3_sd_wdl","UKF_L115A3_sd_des"];

if (_gun in	L115_FHG_deployedList) then
{
	_gunFHG = _gun;
} else {			   
	if (_gun in _scope_guns) then 
	{
		_gunFHG = format ["%1_fgrip", _gun]
	} else {	
		_gunFHG = switch (_gun) do {
			case "UKF_L115A3_CQB" : {"UKF_L115A3_fgrip_CQB"};
			case "UKF_L115A3_des_CQB" : {"UKF_L115A3_des_fgrip_CQB"};
			case "UKF_L115A3_wdl_CQB" : {"UKF_L115A3_wdl_fgrip_CQB"};
			case "UKF_L115A3_sd_CQB" : {"UKF_L115A3_sd_fgrip_CQB"};
			case "UKF_L115A3_sd_wdl_CQB" : {"UKF_L115A3_sd_wdl_fgrip_CQB"};
			case "UKF_L115A3_sd_des_CQB" : {"UKF_L115A3_sd_des_fgrip_CQB"};
		};
	};
};

sleep 0.1;

player removeWeapon _gun;
player AddWeapon _gunFHG;

_primw = primaryWeapon player;
if (_primw != "") then {
    player selectWeapon _primw;
    //  Fix for weapons with grenade launcher
	_muzzles = getArray(configFile>>"cfgWeapons" >> _primw >> "muzzles");
    player selectWeapon (_muzzles select 0);
};

waitUntil {primaryWeapon player == _gunFHG};
sleep 0.5;
L115_WepKey_pressed	= false;