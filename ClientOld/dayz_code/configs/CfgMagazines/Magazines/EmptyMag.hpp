
class emptiedMagazine: CA_Magazine {
	scope=0;
	count=1;
	isEmptyMag = 1;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
	};
};
