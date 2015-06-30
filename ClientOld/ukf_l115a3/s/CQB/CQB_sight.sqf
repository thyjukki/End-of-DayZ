// CQB_sight.sqf
//  © FEBRUARY 2010 - norrin
L115_WepKey_pressed	= true;
L115_CQBsight_key  	= false;
_gun 				= primaryWeapon player;
_gunCQB				= "";

if (_gun in L115_CQBList) then
{
	_gunCQB	= _gun
} else {
	_gunCQB = format ["%1_CQB", _gun];
};

sleep 0.1;

player removeWeapon _gun;
player AddWeapon _gunCQB;

_primw = primaryWeapon player;
if (_primw != "") then {
    player selectWeapon _primw;
    //  Fix for weapons with grenade launcher
	_muzzles = getArray(configFile>>"cfgWeapons" >> _primw >> "muzzles");
    player selectWeapon (_muzzles select 0);
};

waitUntil {primaryWeapon player == _gunCQB};
sleep 0.5;
L115_WepKey_pressed	= false;