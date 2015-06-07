class M16A2GL: M16A2 {
	displayname = $STR_EQUIP_NAME_M16A2GL;
	descriptionshort = $STR_EQUIP_DESC_M16A2GL;
	magazines[] = {
		"20Rnd_556x45_Stanag",
		"20Rnd_556x45_StanagSD",
		"20Rnd_556x45_Stanag_hp",
		"20Rnd_556x45_Stanag_tracer",
		"20Rnd_556x45_Stanag_rubber",
		"20Rnd_556x45_Stanag_bt",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_StanagSD",
		"30Rnd_556x45_Stanag_hp",
		"30Rnd_556x45_Stanag_tracer",
		"30Rnd_556x45_Stanag_rubber",
		"30Rnd_556x45_Stanag_bt",
		"100Rnd_556x45_BetaCMag",
		"100Rnd_556x45_BetaCMagSD",
		"100Rnd_556x45_BetaCMag_hp",
		"100Rnd_556x45_BetaCMag_tracer",
		"100Rnd_556x45_BetaCMag_rubber",
		"100Rnd_556x45_BetaCMag_bt"
	};
	dexterity = 1.46;
	handanim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
	model = "\ca\weapons_e\m16\M16A2_GL";
	muzzles[] = {"this", "M203Muzzle"};
	picture = "\CA\weapons\data\equip\w_m16m203_ca.paa";
	uipicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	class Library {
		libtextdesc = "The M16 assault rifle entered service in 1965 at the onset of the Vietnam War. It answered the Army's need to replace the ill-suited M14 with a lightweight rifle capable of effective automatic fire.<br/>This version is equipped with an additional M203 40 mm grenade launcher.";
	};
};