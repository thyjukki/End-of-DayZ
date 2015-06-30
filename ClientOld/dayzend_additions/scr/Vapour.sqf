#include "\wop_gui\data\Scripts\dikCodes.h"
private ["_plane","_alt","_a1", "_a2", "_a3", "_particle","_zloop"];
_plane = _this select 0;
temp_tire = 0.0;
tt = 1;
_oldphase = 0;
sleep 0.01;
_sayed = 0;

globemaster_c17_BRAKE=Compile PreProcessFile ("\globemaster_c17\scr\brake.sqf");
globemaster_c17_BOOST=Compile PreProcessFile ("\globemaster_c17\scr\booster.sqf");

globemaster_c17_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "_as =_this Spawn globemaster_c17_BRAKE"];
globemaster_c17_keyDownEHId2 = (findDisplay 46) displayAddEventHandler ["KeyDown", "_as2 =_this Spawn globemaster_c17_BOOST"];

while {(alive _plane)} do
{
	if ((isengineon _plane) and ((speed _plane) >= 250) and ((getpos _plane select 2)>500)) then 
	{
		_alt = (getpos _plane select 2);
		_a1 = 0.1 + (_alt/1000);
		_a2 = _a1 + 0.2;
		_a3 = _a1 + 0.5;
		if ((_a1 < 0.85)) then 
		{
			_a1 = 0.85;
			_a2 = 0.92;
			_a3 = 1.0;
		};
		
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule_1_1"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[1.0,1.0,1.0,0.0],[1.0,1.0,1.0,0.2],[1.0,1.0,1.0,0.1],[1.0,1.0,1.0,0.05],[1.0,1.0,1.0,0.025],[1.0,1.0,1.0,0.012],[1.0,1.0,1.0,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule_1_2"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[1.0,1.0,1.0,0.0],[1.0,1.0,1.0,0.2],[1.0,1.0,1.0,0.1],[1.0,1.0,1.0,0.05],[1.0,1.0,1.0,0.025],[1.0,1.0,1.0,0.012],[1.0,1.0,1.0,0.0]],[0],0.0,2.0, "", "", _plane];		
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule_2_1"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[1.0,1.0,1.0,0.0],[1.0,1.0,1.0,0.2],[1.0,1.0,1.0,0.1],[1.0,1.0,1.0,0.05],[1.0,1.0,1.0,0.025],[1.0,1.0,1.0,0.012],[1.0,1.0,1.0,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule_2_2"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[1.0,1.0,1.0,0.0],[1.0,1.0,1.0,0.2],[1.0,1.0,1.0,0.1],[1.0,1.0,1.0,0.05],[1.0,1.0,1.0,0.025],[1.0,1.0,1.0,0.012],[1.0,1.0,1.0,0.0]],[0],0.0,2.0, "", "", _plane];
		
		_zloop = abs(0.10-((speed _plane)/6000));
		sleep (0.001 + _zloop);		
	}
	else
	{
		sleep 0.05;
	};
};

