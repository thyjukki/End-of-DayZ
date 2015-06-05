
class RH_32ACP: BulletBase
{
	hit=6.500000;
	cost=1;
	cartridge="FxCartridge_Small";
	typicalSpeed=300;
	airFriction=-0.001500;
	caliber=0.300000;
};

class RH_32ACP_HP: RH_32ACP
{
	hit=6;
	typicalSpeed=270;
	airFriction=-0.002000;
};

class RH_32ACP_TRACER: RH_32ACP
{
	hit=5;
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class RH_32ACP_RUBBER: RH_32ACP
{
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 150;
	isRubber = 1;
};

class RH_32ACP_BT: RH_32ACP
{
	hit=6;
};