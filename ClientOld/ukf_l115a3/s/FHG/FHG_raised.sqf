//  FHG_raised.sqf
//  © FEBRUARY 2010 - norrin  

L115_WepKey_pressed	= true;
L115_FHG_key 		= true;
_gunFHG 			= primaryWeapon player;
_gun  				= "";

if (_gunFHG in L115_FHG_List) then
{
	_gun = _gunFHG;
} else {
	_gun = switch (_gunFHG) do {
		//L115A3
		case "UKF_L115A3_fgrip" : {"UKF_L115A3"};
		case "UKF_L115A3_wdl_fgrip" : {"UKF_L115A3_wdl"};
		case "UKF_L115A3_des_fgrip" : {"UKF_L115A3_des"};
		case "UKF_L115A3_sd_fgrip" : {"UKF_L115A3_sd"};
		case "UKF_L115A3_sd_wdl_fgrip" : {"UKF_L115A3_sd_wdl"};
		case "UKF_L115A3_sd_des_fgrip" : {"UKF_L115A3_sd_des"};
	};
};
sleep 0.1;
player removeWeapon _gunFHG;
player AddWeapon _gun;

_primw = primaryWeapon player;
if (_primw != "") then {
    player selectWeapon _primw;
    //  Fix for weapons with grenade launcher
	_muzzles = getArray(configFile>>"cfgWeapons" >> _primw >> "muzzles");
    player selectWeapon (_muzzles select 0);
};

waitUntil {primaryWeapon player == _gun};
sleep 0.5;
L115_WepKey_pressed	= false;