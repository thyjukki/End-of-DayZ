
//46x30
class RH_50_AE_Ball;

class B_50_AE_HP : RH_50_AE_Ball {
	airfriction = -0.001893;
	hit = 11;
	typicalspeed = 350;
	visiblefiretime = 2;
};

class B_50_AE_TRACER : RH_50_AE_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_50_AE_RUBBER : RH_50_AE_Ball {
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 150;
	isRubber = 1;
};

class B_50_AE_BT: RH_50_AE_Ball
{
	hit=11;
};