// Reserved Slots Script by TheMeq

private ["_reserved_uids", "_uid","_playercount","_servernoreserve","_server_reservedslots","_server_maxplayers","_testplayer"];

// Max Players
_server_maxplayers = 55;

// Reserved Slots
_server_reservedslots = 5;

// Reserved Player UID's
_reserved_uids = [
		"76561198025213815","76561198065774746","76561198117674423","76561198095638200"
		];

		waitUntil {!isNull player};
		waitUntil {(vehicle player) == player};
		waitUntil {(getPlayerUID player) != ""};
		
		_playercount = count playableUnits;
		_uid = getPlayerUID player;
		_servernoreserve = _server_maxplayers - _server_reservedslots;
		{
			_testplayer = getPlayerUID _x;
			if(_testplayer in _reserved_uids) then
				{
					_servernoreserve = _servernoreserve + 1;
					if (_servernoreserve > _server_maxplayers) then
						{
							_servernoreserve = _server_maxplayers;
						};
				};
		} forEach allPlayers;
		
		if ((_playercount > _servernoreserve)&& !(_uid in _reserved_uids)) then 
			{
				titleText ["", "BLACK OUT"];
				disableUserInput true;
				hint "You are in a reserved slot! You will be kicked to the lobby in 10 seconds!";
				sleep 5;
				hint "You are in a reserved slot! You will be kicked to the lobby in 5 seconds!";
				sleep 5;
				titleText ["", "BLACK IN"];
				disableUserInput false;
				failMission "end1";
			};  