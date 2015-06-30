class G36K_Camo_DZ : G36C
{
	model = "z\addons\dayz_communityweapons\g36\g36k_camo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36k_camo_ca.paa";
	displayName = $STR_DZ_WPN_G36K_CAMO_NAME;
	
	magazines[] =
	{
		"545x39_x1",
		"545x39_SD_x1",
		"545x39_HP_x1",
		"545x39_TRACER_x1",
		"545x39_RUBBER_x1",
		"545x39_BT_x1",
		"30Rnd_556x45_G36",
		"30Rnd_556x45_G36SD",
		"30Rnd_556x45_G36_hp",
		"30Rnd_556x45_G36_tracer",
		"30Rnd_556x45_G36_rubber",
		"30Rnd_556x45_G36_bt"
	};
	
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36.p3d";
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;
	
	dexterity = 1.8;
	
	class Single : Single
	{
		dispersion = 0.0011;
	};
	
	class Burst : Burst
	{
		dispersion = 0.0011;
	};
	
	class FullAuto : FullAuto
	{
		dispersion = 0.0011;
	};

	class OpticsModes
	{
		class Kolimator
		{
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin=100;
			distanceZoomMax=100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
		
		class Scope
		{
			opticsID = 2;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.083;
			opticsZoomMax = 0.083;
			opticsZoomInit= 0.083;
			distanceZoomMin=200;
			distanceZoomMax=200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
	};
	//G36 Optic end
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Attach Silencer";
			script = "spawn player_useAttchment;";
			att = "Attachment_SupNATO";
			out = "G36K_Camo_SD_DZ";
		};
	};	
};

class G36K_Camo_SD_DZ : G36_C_SD_eotech
{
	model = "z\addons\dayz_communityweapons\g36\g36k_camo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36k_camo_sd_ca.paa";
	displayName = $STR_DZ_WPN_G36K_CAMO_SD_NAME;
	
	magazines[] =
	{
		"545x39_x1",
		"545x39_SD_x1",
		"545x39_HP_x1",
		"545x39_TRACER_x1",
		"545x39_RUBBER_x1",
		"545x39_BT_x1",
		"30Rnd_556x45_G36",
		"30Rnd_556x45_G36SD",
		"30Rnd_556x45_G36_hp",
		"30Rnd_556x45_G36_tracer",
		"30Rnd_556x45_G36_rubber",
		"30Rnd_556x45_G36_bt"
	};
	
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36_noflash.p3d";
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;
	
	dexterity = 1.7;
	
	class Single : Single
	{
		dispersion = 0.0011;
	};
	
	class Burst : Burst
	{
		dispersion = 0.0011;
	};
	
	class FullAuto : FullAuto
	{
		dispersion = 0.0011;
	};

	class OpticsModes
	{
		class Kolimator
		{
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin=100;
			distanceZoomMax=100;
			memoryPointCamera = "eye";
			visionMode[] = {};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
		
		class Scope
		{
			opticsID = 2;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.083;
			opticsZoomMax = 0.083;
			opticsZoomInit= 0.083;
			distanceZoomMin=200;
			distanceZoomMax=200;
			memoryPointCamera = "opticView";
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
			cameraDir = "";
		};
	};
	//G36 Optic end
	

	class ItemActions {
		class UseAtt {
			isAttachment = 1;
			text = "Detach Silencer";
			script = "spawn player_removeAttchment;";
			att = "Attachment_SupNATO";
			out = "G36K_Camo_DZ";
		};
	};	
};