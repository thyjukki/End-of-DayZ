
//46x30
class B_46x30_Ball: BulletBase
{
	cartridge="FxCartridge_Mp7";
	cost=5;
	typicalSpeed=735;
	airFriction=-0.001425;
	caliber=0.9;
	hit=6;
};
class B_46x30_SD: B_46x30_Ball
{
	visibleFire=0.065000;
	audibleFire=0.065000;
	cost=5;
	typicalSpeed=650;
	airFriction=-0.001200;
	hit=5;
};

class B_46x30_HP : B_46x30_Ball {
	airfriction = -0.003;
	hit = 9;
	visiblefiretime = 2;
};

class B_46x30_TRACER : B_46x30_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_46x30_RUBBER : B_46x30_Ball {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_46x30_BT: B_46x30_Ball
{
	hit=9;
};