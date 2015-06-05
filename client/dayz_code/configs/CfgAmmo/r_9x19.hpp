
//9x19
class B_9x19_Ball : B_9x18_Ball {
	hit=5;
	cost=5;
	typicalSpeed=398;
	airFriction=-0.001513;
	visibleFire=16;
	audibleFire=16;
};

class B_9x19_SD : B_9x19_Ball {
	hit=5;
	visibleFire=0.035;
	audibleFire=0.035;
	visibleFireTime=2;
	cost=5;
	typicalSpeed=315;
	airFriction=-0.001312;
};

class B_9x19_HP : B_9x19_Ball {
	airfriction = -0.001893;
	hit = 7;
	typicalspeed = 315;
	visiblefiretime = 2;
};

class B_9x19_TRACER : B_9x19_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_9x19_RUBBER : B_9x19_Ball {
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 150;
	isRubber = 1;
};

class B_9x19_BT: B_9x19_Ball
{
	hit=7;
};