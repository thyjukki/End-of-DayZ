private["_item","_newweapon","_hasattachment","_onLadder"];
_newweapon = 0;
call gear_ui_init;
closeDialog 1;
_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_weapon = _this select 0;
_config = configFile >> "cfgWeapons" >> _weapon;
_giveAtt = getText(_config >> "ItemActions" >> _this select 1 >> "att");


_empty = [player] call BIS_fnc_invSlotsEmpty;
_emptymagslotcount = _empty select 4; //empty magazines slots

if (_emptymagslotcount > 0) then 
{	
	player playActionNow "Medic";
	_dis=20;
	_sfx = "repair";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	sleep 5;
	player removeWeapon _weapon;

	player addWeapon getText(_config >> "ItemActions" >> _this select 1 >> "out");
	
	player addMagazine _giveAtt;

	cutText [format["Attachment %1 succesfully removed.",getText (configFile >> "CfgMagazines" >> _giveAtt >> "displayName")], "PLAIN DOWN"];
	player removeMagazine _item;
} else {cutText [format["You need room in inventory to remove attachment.",getText (configFile >> "CfgMagazines" >> _requiredAtt >> "displayName")], "PLAIN DOWN"];};