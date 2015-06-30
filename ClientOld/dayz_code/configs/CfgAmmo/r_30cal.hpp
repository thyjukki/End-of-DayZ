
//22LR
class B_30cal_Ball: BulletBase
{
	cartridge="FxCartridge_Small";
	visibleFire=0.035000;
	audibleFire=0.035000;
	visibleFireTime=2;
	cost=1;
	typicalSpeed=850;
	airFriction=-0.001500;
	hit=7;
	caliber=0.100000;
};

class B_30cal_HP : B_30cal_Ball {
	airfriction = -0.003;
	hit = 9;
	visiblefiretime = 2;
};

class B_30cal_TRACER : B_30cal_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_30cal_RUBBER : B_30cal_Ball {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_30cal_BT: B_30cal_Ball
{
	hit=9;
};