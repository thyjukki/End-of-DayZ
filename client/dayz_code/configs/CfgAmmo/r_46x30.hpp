
//46x30
class C1987_B_46x30_Ball;

class B_46x30_HP : C1987_B_46x30_Ball {
	airfriction = -0.001893;
	hit = 9;
	typicalspeed = 650;
	visiblefiretime = 2;
};

class B_46x30_TRACER : C1987_B_46x30_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_46x30_RUBBER : C1987_B_46x30_Ball {
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 321;
	isRubber = 1;
};

class B_46x30_BT: C1987_B_46x30_Ball
{
	hit=9;
};