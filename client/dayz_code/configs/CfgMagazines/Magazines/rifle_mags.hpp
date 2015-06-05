class 30Rnd_762x39_AK47: CA_Magazine {
	ammo = "B_762x39_Ball";
	count = 30;
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 30 <br/>Used in: AK47 based weapons";
	displayname = "AKM Mag";
	initspeed = 710;
	picture = "\CA\weapons\AK\data\equip\M_AK47_CA.paa";
	scope = 2;
	baseBullet = 762x39_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "30Rnd_762x39_AK47_Empty";
};

class 30Rnd_762x39_AK47_SD: 30Rnd_762x39_AK47 {
	ammo = "B_762x39_Ball_SD";
	displayname = "AKM SD Mag";
	descriptionshort = "Caliber:7.62x39mm SD <br/>Rounds: 30 <br/>Used in: AK47 based weapons";
	initSpeed=320;
	scope = 2;
	baseBullet = 762x39_SD_x;
};

class 30Rnd_762x39_AK47_hp: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_HP_x;
	initSpeed=240;
	ammo="B_762x39_Ball_HP";
	displayname = "AKM HP Mag";
	descriptionshort = "Caliber:7.62x39mm Hollow Point <br/>Rounds: 30 <br/>Used in: AK47 based weapons";
};

class 30Rnd_762x39_AK47_tracer: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_Ball_TRACER";
	displayname = "AKM Tracer Mag";
	descriptionshort = "Caliber:7.62x39mm Tracer <br/>Rounds: 30 <br/>Used in: AK47 based weapons";
};

class 30Rnd_762x39_AK47_rubber: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=240;
	ammo="B_762x39_Ball_RUBBER";
	displayname = "AKM Rubber Mag";
	descriptionshort = "Caliber:7.62x39mm Rubber <br/>Rounds: 30 <br/>Used in: AK47 based weapons";
};

class 30Rnd_762x39_AK47_bt: 30Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_Ball_BT";
	displayname = "AKM BT Mag";
	descriptionshort = "Caliber:7.62x39mm Ballistic Tip <br/>Rounds: 30 <br/>Used in: AK47 based weapons";
};

class RH_75Rnd_762x39_mag: 30Rnd_762x39_AK47
{
	displayName="RPK47 drum mag";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
	picture="\RH_aks\inv\m_rpk.paa";
	model="\RH_aks\mags\mag_rpk.p3d";
	count=75;
	initspeed=745;
	type="2*256";
	baseBullet = 762x39_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "RH_75Rnd_762x39_mag_Empty";
};

class RH_75Rnd_762x39_mag_SD: RH_75Rnd_762x39_mag {
	ammo = "B_762x39_Ball_SD";
	displayName="RPK47 drum SD mag";
	descriptionshort = "Caliber:7.62x39mm SD <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
	initSpeed=320;
	scope = 2;
	baseBullet = 762x39_SD_x;
};

class RH_75Rnd_762x39_mag_hp: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_HP_x;
	initSpeed=240;
	ammo="B_762x39_Ball_HP";
	displayName="RPK47 drum HP mag";
	descriptionshort = "Caliber:7.62x39mm Hollow Point <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
};

class RH_75Rnd_762x39_mag_tracer: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_Ball_TRACER";
	displayName="RPK47 drum Tracer mag";
	descriptionshort = "Caliber:7.62x39mm Tracer <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
};

class RH_75Rnd_762x39_mag_rubber: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=240;
	ammo="B_762x39_Ball_RUBBER";
	displayName="RPK47 drum Rubber mag";
	descriptionshort = "Caliber:7.62x39mm Rubber <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
};

class RH_75Rnd_762x39_mag_bt: RH_75Rnd_762x39_mag {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_Ball_BT";
	displayName="RPK47 drum BT mag";
	descriptionshort = "Caliber:7.62x39mm Ballistic Tip <br/>Rounds: 75 <br/>Used in: AK47 based weapons";
};

	
class vil_40Rnd_762x39_AK47 : 30Rnd_762x39_AK47 {
	scope = public;
	ammo = "B_762x39_Ball";
	count = 40;
	initSpeed = 710;
	picture = "\vilas_aks\ico\m_vil_rpk_ca.paa";
	displayName = "RPK Mag";
	descriptionshort = "Caliber:7.62x39mm <br/>Rounds: 40 <br/>Used in: AK47 based weapons";
	baseBullet = 762x39_x;
	class ItemActions {
		class loadMag {
			text = "Load";
			script = "spawn player_loadAmmo;";
		};
		class unLoadMag {
			text = "Un Load";
			script = "spawn player_unloadAmmo;";
		};
	};
	emptyMag = "vil_40Rnd_762x39_AK47_Empty";
};

class vil_40Rnd_762x39_AK47_hp: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_HP_x;
	initSpeed=240;
	ammo="B_762x39_Ball_HP";
	displayName="RPK47 HP mag";
	descriptionshort = "Caliber:7.62x39mm Hollow Point <br/>Rounds: 40 <br/>Used in: AK47 based weapons";
};

class vil_40Rnd_762x39_AK47_tracer: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_TRACER_x;
	lastroundstracer = 7;
	tracersevery = 1;
	ammo="B_762x39_Ball_TRACER";
	displayName="RPK47 Tracer mag";
	descriptionshort = "Caliber:7.62x39mm Tracer <br/>Rounds: 40 <br/>Used in: AK47 based weapons";
};

class vil_40Rnd_762x39_AK47_rubber: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_RUBBER_x;
	initSpeed=240;
	ammo="B_762x39_Ball_RUBBER";
	displayName="RPK47 Rubber mag";
	descriptionshort = "Caliber:7.62x39mm Rubber <br/>Rounds: 40 <br/>Used in: AK47 based weapons";
};

class vil_40Rnd_762x39_AK47_bt: vil_40Rnd_762x39_AK47 {
	scope=2;
	baseBullet = 762x39_BT_x;
	ammo="B_762x39_Ball_BT";
	displayName="RPK47 BT mag";
	descriptionshort = "Caliber:7.62x39mm Ballistic Tip <br/>Rounds: 40 <br/>Used in: AK47 based weapons";
};


class KPFS_100Rnd_762x39_RPD: 30Rnd_762x39_AK47
{
	scope=2;
	type="2*256";
	ammo="B_762x39_Ball";
	count=100;
	initSpeed=710;
	tracersEvery=4;
	lastRoundsTracer=4;
	nameSound="mgun";
	picture="\kpfs_weapons2\data\icons\m_rpd_ca.paa";
	displayName="$STR_KPFS_RPD_BOX";
	magazineReloadTime=8;
};
class KPFS_10Rnd_762x39_SKS: 30Rnd_762x39_AK47 {
	class ItemActions {
		class CombineMag {
			text = $STR_MAG_COMBINE;
			script = "spawn player_combineMag; r_action_count = r_action_count + 1;";
		};
	};
	emptyMag = "KPFS_10Rnd_762x39_SKS_Empty";
};
