
//46x30
class B_50_AE_Ball: BulletBase
{
	hit=9.500000;
	cartridge="FxCartridge_Small";
	cost=1;
	typicalSpeed=421;
	airFriction=-0.001650;
	caliber=0.700000;
};

class B_50_AE_HP : B_50_AE_Ball {
	airfriction = -0.003;
	hit = 11;
	visiblefiretime = 2;
};

class B_50_AE_TRACER : B_50_AE_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_50_AE_RUBBER : B_50_AE_Ball {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_50_AE_BT: B_50_AE_Ball
{
	hit=11;
};