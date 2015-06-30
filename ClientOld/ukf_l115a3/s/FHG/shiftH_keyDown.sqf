// shiftH_keyDown.sqf

// ====================================================================================
#include "\ca\editor\Data\Scripts\dikCodes.h"

private["_handled", "_ctrl", "_dikCode", "_shift", "_ctrl", "_alt"];
_ctrl = _this select 0;
_dikCode = _this select 1;
_shift = _this select 2;
_ctrl = _this select 3;
_alt = _this select 4;

//hint "key down";

if (!_shift && !_ctrl && !_alt && L115_FHG_key && !L115_WepKey_pressed) then
{
	if (_dikCode in ([DIK_H]+(actionKeys "NetworkStats"))) then
	{	
		null = [] execVM "\UKF_L115A3\s\FHG\FHG_deployed.sqf";
	};
};
if (!_shift && !_ctrl && !_alt && !L115_FHG_key && !L115_WepKey_pressed) then
{	
	if (_dikCode in ([DIK_H]+(actionKeys "NetworkStats"))) then
	{	
		null = [] execVM "\UKF_L115A3\s\FHG\FHG_raised.sqf";
	};
};
// ====================================================================================