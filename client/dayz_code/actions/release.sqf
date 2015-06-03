_newCiv = cursorTarget;
_dist = player distance _newCiv;
_isMan = _newCiv isKindOf "Man";
_hasToolbox = "ItemToolbox" in items player;
_hasKnife = "ItemKnife" in items player;
_hasItemKnife5 = "ItemKnife5" in items player;
_hasItemKnife4 = "ItemKnife4" in items player;
_hasItemKnife3 = "ItemKnife3" in items player;
_hasItemKnife2 = "ItemKnife2" in items player;
_hasItemKnife1 = "ItemKnife1" in items player;
_hasKnifeBlunt = "ItemKnifeBlunt" in items player;

_isDetained = _newCiv getVariable ["Detain",0];

if (_isDetained == 1) then
{
	if (!_hasToolbox && !_hasKnife && !_hasKnifeBlunt && !_hasItemKnife5 && !_hasItemKnife4 && !_hasItemKnife3 &&  _hasItemKnife2 && !_hasItemKnife1) exitWith 
	{
		cutText ["You need knife or toolbox to release him." , "PLAIN DOWN"];
	};
} else {
	cutText ["Something wrong, releaseing anyways." , "PLAIN DOWN"];
};

// Dont need alive check incase they're dead
if(_isMan && _dist < 10) then {
// Removing temp can just in case
    _objects = nearestObjects [player, ["Can_Small"], 50];
    _objects = _objects select 0;
    deleteVehicle _objects;
    detach _newCiv; // Just in case
    // animation reset
    [objNull, _newCiv, rswitchmove,""] call RE;

    player forceWalk False;
    // Public Var
    _newCiv setVariable ["Detain",0,true];
    PVDZ_ply_Arrst = _newCiv;
    publicVariable "PVDZ_ply_Arrst";
};