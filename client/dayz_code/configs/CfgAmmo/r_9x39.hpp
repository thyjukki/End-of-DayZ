
//9x39
class B_9x39_SP5;
class B_9x39_Ball : B_9x39_SP5 {
	hit=12;
	cost=5;
	cartridge = "FxCartridge_Small";
	typicalSpeed=320;
	visibleFireTime = 2;	// how long is it visible
	airFriction = -0.001;
};

class B_9x39_HP : B_9x39_Ball {
	airfriction = -0.001893;
	hit = 14;
	typicalspeed = 315;
	visiblefiretime = 2;
};

class B_9x39_TRACER : B_9x39_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_9x39_RUBBER : B_9x39_Ball {
	airfriction = -0.02;
	caliber = 2;
	hit = 1;
	typicalspeed = 250;
	isRubber = 1;
};

class B_9x39_BT: B_9x39_Ball
{
	hit=14;
};