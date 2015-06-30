
//357 mag
class B_357mag_ball: BulletBase
{
	hit=8.900000;
	cost=1;
	cartridge="FxCartridge_Small";
	typicalSpeed=421;
	airFriction=-0.001500;
	caliber=0.300000;
};

class B_357mag_HP : B_357mag_ball {
	airfriction = -0.001893;
	hit = 10;
};

class B_357mag_TRACER : B_357mag_ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_357mag_RUBBER : B_357mag_ball {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_357mag_BT: B_357mag_ball
{
	hit=10;
};