// L115_CQBsight_fnc.sqf

L115_CQBsight_keyAdded  	= true;
L115_shiftF_keyDownEHId 	= (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call L115_shiftF_keyDown"];
