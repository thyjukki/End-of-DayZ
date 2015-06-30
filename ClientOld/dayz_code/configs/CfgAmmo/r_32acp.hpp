
class B_32ACP_Ball: BulletBase
{
	hit=6.500000;
	cost=1;
	cartridge="FxCartridge_Small";
	typicalSpeed=300;
	airFriction=-0.001500;
	caliber=0.300000;
};

class B_32ACP_HP: B_32ACP_Ball
{
	hit=6;
	airFriction=-0.002000;
};

class B_32ACP_TRACER: B_32ACP_Ball
{
	hit=5;
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_32ACP_RUBBER: B_32ACP_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_32ACP_BT: B_32ACP_Ball
{
	hit=6;
};