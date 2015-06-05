// TODO(Do revolvers need magazines?
class RH_6Rnd_44_Mag_Empty: emptiedMagazine
{
	scope=2;
	displayName=".44 Magnum (Empty)";
	picture="\RH_de\inv\m_44m.paa";
	type=16;
	class ammoType
	{
		class RH_44mag_ball {
			ammoMag = "RH_6Rnd_44_Mag";
		};
	};
};

class RH_6Rnd_44_Mag: CA_Magazine
{
	class ItemActions
	{
		COMBINE_MAG
	};

	emptyMag = "RH_6Rnd_44_Mag_Empty";
};