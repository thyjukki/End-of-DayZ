private ["_unit","_type","_animState","_isMedic","_mags","_weapons","_ItemCount","_FeelEmpty","_FeelLight","_FeelMedium","_FeelHeavy","_HasRadio","_HasSharp","_HasSphere"];




player removeAction s_player_friskbody;
s_player_friskbody = -1;

_unit =	cursorTarget;//_unit, player we are frisking

_isClose = ((player distance _unit) < ((sizeOf typeOf _unit) / 2));//we just check that the player is in range here
if (!_isClose) exitWith
{
	cutText ["You have to be close frisk!" , "PLAIN DOWN"];
};
if ( primaryweapon _unit != "") exitWith
{
	cutText ["The person is armed..." , "PLAIN DOWN"];
};
if (dayZ_OnBack != "") exitWith
{
	cutText ["The has weapon on his back..." , "PLAIN DOWN"];
};
if (vehicle player == player) then
{
	//not in a vehicle
	player playActionNow "Medic";
};

_FeelHeavy = false;
_FeelMedium = false;
_FeelLight = false;
_FeelEmpty = false;
_HasSphere = "";
_HasSharp = "";
_HasRadio = "";
_HasChloroform = "";
_Output = "";
_FinalOutput = "";

sleep 1;

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
[player,"bandage",0,false] call dayz_zombieSpeak;

while {r_doLoop} do {
	_animState = animationState player;
	_isMedic = ["medic",_animState] call fnc_inString;
	if (_isMedic) then {
		_started = true;
	};
	if (_started and !_isMedic) then {
		r_doLoop = false;
		_finished = true;
	};
	if (r_interrupt) then {
		r_doLoop = false;
	};
	if (vehicle player != player) then {
		sleep 3;
		r_doLoop = false;
		_finished = true;
	};
	sleep 0.1;
};
r_doLoop = false;

if (_finished) then
{
	_mags = magazines _unit; 						//Check the item array
	_weapons = weapons _unit;						//toolbox items and binocs are clasified as weapon.
	_ItemCount = (count _mags) + (count _weapons);	//combine the 2 array counts in to one.
	
	if (_ItemCount > 15) then
	{
		_FeelHeavy = true;
	};
	if (_ItemCount > 10 && !_FeelHeavy) then
	{
		_FeelMedium = true;
	};
	if (_ItemCount > 5 && !_FeelHeavy && !_FeelMedium) then
	{
		_FeelLight = true;
	};
	if (!_FeelHeavy && !_FeelMedium && !_FeelLight) then
	{
		_FeelEmpty = true;
	};
	
	if (random 1 < 0.5) then
	{
		if (("HandGrenade_East" in _mags) or ("SmokeShell" in _mags) or ("SmokeShellYellow" in _mags) or ("SmokeShellOrange" in _mags) or ("SmokeShellRed" in _mags) or ("SmokeShellGreen" in _mags) or ("SmokeShellBlue" in _mags)) then
		{
			_HasSphere = "  You feel a hard, spherical item..";
		};
	};
	if (random 1 < 0.4) then
	{
		if (("ItemRadio" in _weapons)) then
		{
			_HasRadio = " A static noise emits from one of the pockets.";
		};
	};
	if (random 1 < 0.4) then
	{
		if (("ItemChloroform" in _mags)) then
		{
			_HasChloroform = " You Find a medical Bottle containing some liquid.";
		};
	};
	if (random 1 < 0.5) then
	{
		if (("ItemMachete" in _weapons) or ("ItemHatchet" in _weapons) or ("ItemKnife" in _weapons) or ("ItemTrashRazor" in _mags)) then
		{
			_HasSharp = " You feel something sharp.";
		};
	};
	
	if (_FeelEmpty) then //pocket feel empty, so we should not get any aditional info of the players gear.
	{
		_Output = "The pockets feel empty.";
	}
	else
	{
		if (_FeelLight) then
		{
			_Output = "The pockets feel quite light.";
		};
		if (_FeelMedium) then
		{
			_Output = "You feel something in the pockets.";
		};
		if (_FeelHeavy) then
		{
			_Output = "The pockets feel completely full.";
		};
	};
	
	_FinalOutput = _Output + _HasSphere + _HasRadio + _HasChloroform + _HasSharp;
	cutText [_FinalOutput, "PLAIN DOWN"];
}
else
{
	r_interrupt = false;
	if (vehicle player == player) then
	{
		[objNull, player, rSwitchMove,""] call RE;
		player playActionNow "stop";
	};
	cutText ["Frisking interupted!", "PLAIN DOWN"];
};

