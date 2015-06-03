private["_hasChloroform","_hasPaper","_item","_text","_body","_name"];
_body = 	(_this select 3) select 0;

call fnc_usec_medic_removeActions;
r_action = false;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_item = "ItemChloroform";

_config =	configFile >> "CfgMagazines" >> _item;
_text = 	getText (_config >> "displayName");

_hasChloroform = _item in magazines player;
_hasPaper = ("equip_rag" in magazines player);

if (!_hasChloroform) exitWith {cutText [format[(localize "str_player_31"),_text,"use"] , "PLAIN DOWN"]};
if (!_hasPaper) exitWith {cutText [format[(localize "str_player_31"),"rag","use"] , "PLAIN DOWN"]};

dayz_chloroform = [_body,3.5];
publicVariable "dayz_chloroform";

player playActionNow "PutDown";
player removeMagazine _item;
sleep 1;

player removeAction s_player_chloroform;
s_player_chloroform = -1;


dayzHumanity = [player,-250];
_id = dayzHumanity spawn player_humanityChange;