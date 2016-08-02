/* Kobra */



class RH_ak47;
class RH_ak47_Civ: RH_ak47
{
	class ItemActions {};
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