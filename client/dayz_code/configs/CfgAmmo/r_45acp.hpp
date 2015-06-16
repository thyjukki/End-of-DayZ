class B_45ACP_Ball;

class B_45ACP_HP: B_45ACP_Ball
{
	hit=6;
	typicalSpeed=240;
	airFriction=-0.002000;
};

class B_45ACP_TRACER: B_45ACP_Ball
{
	hit=5;
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_45ACP_RUBBER: B_45ACP_Ball
{
	airfriction = -0.02;
	caliber = 2;
	hit = 1;
	typicalspeed = 250;
	isRubber = 1;
};

class B_45ACP_BT: B_45ACP_Ball
{
	hit=6;
};

//45 acp doesnt need sd