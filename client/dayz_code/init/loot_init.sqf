private ["_weighted","_j"];
dayz_CBLChances = [];
dayz_CBLBase = [];

_config = missionConfigFile >> "CfgBuildingLoot";
for "_i" from 0 to ((count _config) - 1) do {
	_classname = configName (_config select _i);
	_itemChances = getArray (_config >> _classname >> "lootType");
	_itemCount = count _itemChances;

//diag_log format["Classname: %1, Array: %2, Amount: %3", _classname, _itemChances, _itemCount];

	if (_itemCount > 0) then {
		if (dayz_CBLBase find _classname < 0) then {
			_weighted = [];
			_j = 0;
			for "_l" from 0 to ((count _itemChances) - 1) do {
			//diag_log ("Item: "+str(_itemChances select _l));
			// * JUKKI START DEBUGING
			_iItem = ((_itemChances select _l) select 1);
			_class = ((_itemChances select _l) select 3);
			switch (_class) do {
				case "weapon": {
					player addWeapon _iItem;
				};
				case "magazine": {
					player addMagazine _iItem;
				};
				case "object": {
					//Item is one object as a special weaponholder
					_item = createVehicle [_iItem, (getPos player), [], 0.0, "CAN_COLLIDE"];
				};
			};
			
			// */ JUKKI END
			_weight = round (((_itemChances select _l) select 2) * 100);
				for "_k" from 0 to (_weight - 1) do
				{
					_weighted set [_j + _k, _l];
				};
			_j = _j + _weight;
			};
		dayz_CBLChances set [count dayz_CBLChances, _weighted];
		dayz_CBLBase set [count dayz_CBLBase, _classname];
		};
	} else {
		dayz_CBLChances set [count dayz_CBLChances, [0]];
		dayz_CBLBase set [count dayz_CBLBase, _classname];
	};
};

dayz_CLChances = [];
dayz_CLBase = [];
//dayz_CLItemNames = [];

_config = missionConfigFile >> "cfgLoot";
	for "_i" from 0 to ((count (_config)) - 1) do {
		_classname = configName (_config select _i);
		_itemChances = getArray (_config select _i);
		_weighted = [];
		_j = 0;
		//_items = [];
		for "_l" from 0 to ((count _itemChances) - 1) do {
			//diag_log ("Item: "+str(_itemChances select _l));
			//player addMagazine (_itemChances select _l);
			_weight = round (((_itemChances select _l) select 1) * 100);
			for "_k" from 0 to (_weight - 1) do {
				_weighted set [_j + _k, _l];
				//_items set [count _items, ((_itemChances select _l) select 0)];
			};
			_j = _j + _weight;
		};
		dayz_CLBase set [count dayz_CLBase, _classname];
		//dayz_CLItemNames set [count dayz_CLBase, _items];
		dayz_CLChances set [count dayz_CLChances, _weighted];
		
		//diag_log format["CFGLoot: %1, Array: %2", _classname, _items];
	};
diag_log ("BaseLoot: " +str(dayz_CLBase));
dayz_ZombieBuildings = [];
dayz_LootBuildings = [];
for "_i" from 0 to (count (missionConfigFile >> "CfgBuildingLoot") - 1) do {
	_type = (missionConfigFile >> "CfgBuildingLoot") select _i;
	_canZombie = getNumber (_type >> "zombieChance") > 0;
	_canLoot = getNumber (_type >> "lootChance") > 0;
	if(_canZombie) then {
		if(!((configName _type) in dayz_ZombieBuildings)) then {
			dayz_ZombieBuildings set [count dayz_ZombieBuildings, configName _type];
		};
	};
	if(_canLoot) then {
		if(!((configName _type) in dayz_LootBuildings)) then {
			dayz_LootBuildings set [count dayz_LootBuildings, configName _type];
		};
	};
};
//diag_log format["ZombieBuildings: %1", dayz_ZombieBuildings];
//diag_log format["LootBuildings: %1", dayz_LootBuildings];