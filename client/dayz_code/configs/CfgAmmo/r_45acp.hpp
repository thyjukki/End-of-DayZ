class RH_45ACP: BulletBase
{
	hit=5;
	typicalSpeed=260;
	airFriction=-0.001500;
	caliber=0.300000;
};

class RH_45ACP_HP: RH_45ACP
{
	hit=6;
	typicalSpeed=240;
	airFriction=-0.002000;
};

class RH_45ACP_TRACER: RH_45ACP
{
	hit=5;
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class RH_45ACP_RUBBER: RH_45ACP
{
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 321;
	isRubber = 1;
};

class RH_45ACP_BT: RH_45ACP
{
	hit=6;
};

//45 acp doesnt need sd