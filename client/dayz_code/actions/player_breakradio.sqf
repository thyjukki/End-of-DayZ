private["_hasRadio""_qty"];

player removeWeapon "ItemRadioRP";
player addMagazine "ItemBrokenRadio";

closeDialog 106;
player playActionNow "Medic";
sleep 5;
_dis=10;
_sfx = "repair";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak; 
[player,_dis,true,(getPosATL player)] spawn player_alertZombies;

cutText ["You have broken the radio.", "PLAIN DOWN"];