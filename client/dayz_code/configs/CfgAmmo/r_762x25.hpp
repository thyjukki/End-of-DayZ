class B_762x25: BulletBase
{
	hit=6;
	cost=1;
	cartridge="FxCartridge_Small";
	typicalSpeed=420;
	airFriction=-0.003000;
	caliber=0.300000;
};
				
class B_762x25_HP: B_762x25
{
	hit=8;
	airFriction=-0.003500;
	typicalSpeed=370;
};

class B_762x25_TRACER: B_762x25
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_762x25_RUBBER: B_762x25
{
	airfriction = -0.02;
	caliber = 2;
	hit = 1;
	isRubber = 1;
	typicalspeed = 250;
};

class B_762x25_BT: B_762x25
{
	hit=8;
};