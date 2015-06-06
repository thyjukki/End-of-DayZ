class B_545x39_Ball;

class B_545x39_Ball_HP: B_545x39_Ball
{
	hit=10;
	airFriction=-0.0006;
	typicalSpeed=320;
};

class B_545x39_Ball_TRACER: B_545x39_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_545x39_Ball_RUBBER: B_545x39_Ball
{
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	isRubber = 1;
	typicalSpeed=150;
};

class B_545x39_Ball_BT: B_545x39_Ball
{
	hit=10;
};