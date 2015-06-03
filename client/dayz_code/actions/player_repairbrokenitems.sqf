//thank you to DayZ Namalsk for items and inspiration

private ["_brokenItem","_repairedItem","_hasToolbox","_hasScrap","_hasItem"];

_itemType = _this;
closeDialog 106;
switch (_itemType) do {
case "ItemBrokenRadio": {_brokenItem = "ItemBrokenRadio";_repairedItem = "ItemRadioRP";};
};

_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {
	cutText [(localize "str_player_21") , "PLAIN DOWN"];
};

_hasScrap = "equip_scrapelectronics" in magazines player;
_hasToolbox = "ItemToolbox" in items player;

if (!_hasScrap OR !_hasToolbox) exitWith {
	cutText ["I need a toolbox and scrap electronics to repair broken equipment.", "PLAIN DOWN"];
};

player removeMagazine "equip_scrapelectronics";
player removeMagazine _brokenItem;
player addWeapon _repairedItem;

player playActionNow "Medic";
sleep 5;
_dis=10;
_sfx = "repair";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak; 
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

cutText ["I've repaired the broken item.", "PLAIN DOWN"];
