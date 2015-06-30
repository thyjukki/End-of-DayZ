class B_762x25_Ball: BulletBase
{
	hit=6;
	cost=1;
	cartridge="FxCartridge_Small";
	typicalSpeed=420;
	airFriction=-0.003000;
	caliber=0.300000;
};
				
class B_762x25_HP: B_762x25_Ball
{
	hit=8;
	airFriction=-0.004000;
};

class B_762x25_TRACER: B_762x25_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_762x25_RUBBER: B_762x25_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_762x25_BT: B_762x25_Ball
{
	hit=8;
};