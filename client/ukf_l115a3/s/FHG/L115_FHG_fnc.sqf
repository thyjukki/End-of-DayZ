// L115_FHC_fnc.sqf

L115_FHG_keyAdded  	= true;
L115_shiftH_keyDownEHId 	= (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call L115_shiftH_keyDown"];
