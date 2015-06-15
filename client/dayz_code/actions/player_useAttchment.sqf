private["_item","_newweapon","_hasattachment","_onLadder"];
call gear_ui_init;
_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_weapon = _this select 0;
_config = configFile >> "cfgWeapons" >> _weapon;
_requiredAtt = _this select 1;
_giveWep = _this select 2;

if (_requiredAtt in magazines player) then 
{
	player playActionNow "Medic";
	_dis=20;
	_sfx = "repair";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	sleep 5;
	if (carryClick) then {
		DayZ_onBack = _giveWep;
	} else {
		player removeWeapon _weapon;

		player addWeapon _giveWep;
	};

	cutText [format["Attachment %1 succesfully applied.",getText (configFile >> "CfgMagazines" >> _requiredAtt >> "displayName")], "PLAIN DOWN"];
	player removeMagazine _requiredAtt;
}
else
{
	cutText [format["You need %1 for this.",getText (configFile >> "CfgMagazines" >> _requiredAtt >> "displayName")], "PLAIN DOWN"];
};