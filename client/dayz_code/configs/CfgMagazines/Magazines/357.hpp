class RH_6Rnd_357_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName=".357 Magnum (Empty)";
	descriptionshort = "Caliber: .357<br/>Rounds: 6<br/>Used in: python";
	picture="\RH_de\inv\m_44m.paa";
	type=16;

	class ammoType
	{
		class RH_357mag_ball {
			ammoMag = "RH_6Rnd_357_Mag";
		};
	};
};

class RH_6Rnd_357_Mag: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_6Rnd_357_Mag_Empty";
};