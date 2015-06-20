/* Kobra */

class AK_BASE: Rifle
{
};


class AK_74 : AK_BASE
{
	magazines[]=
	{
		"545x39_x1",
		"545x39_SD_x1",
		"545x39_HP_x1",
		"545x39_TRACER_x1",
		"545x39_RUBBER_x1",
		"545x39_BT_x1",
		"30Rnd_545x39_AK",
		"30Rnd_545x39_AKSD",
		"30Rnd_545x39_AK_hp",
		"30Rnd_545x39_AK_tracer",
		"30Rnd_545x39_AK_rubber",
		"30Rnd_545x39_AK_bt",
		"RH_45Rnd_545x39_mag",
		"RH_45Rnd_545x39_magSD",
		"RH_45Rnd_545x39_mag_hp",
		"RH_45Rnd_545x39_mag_tracer",
		"RH_45Rnd_545x39_mag_rubber",
		"RH_45Rnd_545x39_mag_bt",
		"75Rnd_545x39_RPK",
		"75Rnd_545x39_RPKSD",
		"75Rnd_545x39_RPK_hp",
		"75Rnd_545x39_RPK_tracer",
		"75Rnd_545x39_RPK_rubber",
		"75Rnd_545x39_RPK_bt"
	};
};

class RH_ak47;
class RH_ak47_Civ: RH_ak47
{
	delete ItemActions;
	scope=2;
	displayName="AK 47 Civ";
	descriptionShort="<br />Ammo: 7.62x39 mm<br />Civilian, semi auto only";
	modes[]=
	{
		"Single"
	};
	class Single: Mode_SemiAuto
	{
		begin1[]=
		{
			"\RH_aks\sound\ak47.wss",
			1.778279,
			1,
			1000
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		multiplier=1;
		burst=1;
		dispersion=0.002800;
		reloadTime=0.092000;
		recoil="RH_AK47Recoil";
		recoilProne="RH_AK47RecoilProne";
		ffCount=1;
		ffMagnitude=0.500000;
		ffFrequency=11;
		autofire=0;
		flash="gunfire";
		flashSize=0.100000;
		useAction=0;
		useActionTitle="";
		showToPlayer=1;
		aiRateOfFire=4.500000;
		aiRateOfFireDistance=400;
		minRange=2;
		minRangeProbab=0.700000;
		midRange=250;
		midRangeProbab=0.800000;
		maxRange=400;
		maxRangeProbab=0.500000;
	};
	class Library
	{
		libTextDesc="The AK-47 Avtomat Kalashnikova 1947 is a gas-operated assault rifle used in most Eastern bloc countries during the Cold War. Adopted and standardized in 1947, it was designed by Mikhail Kalashnikov and originally produced by Russian manufacturer Izhevsk Mechanical Works. Compared with most auto-loading rifles of World War II, the AK-47 is compact, of comparative range, moderate power, and capable of selective fire. It was one of the first, true assault rifles and remains the most widely-used, known as the Best Automatic Assault Rifle. More AK-type rifles have been produced than of any other assault rifle type. Once manufacturing difficulties had been overcome, a redesigned version designated the AKM M for modernized or upgraded—in was introduced in 1959. This new model used a stamped sheet metal receiver and featured a slanted muzzle brake on the end of the barrel to compensate for muzzle rise under recoil.";
	};
};