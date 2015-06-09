class B_556x45_Ball : BulletBase
{
	caliber=1;
	indirectHit=0;
	indirectHitRange=0;
	cost=1;
	airFriction=-0.001412;
	cartridge="FxCartridge_556";
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerScale=0;
	tracerStartTime=0;
	tracerEndTime=0;
	nvgOnly=0;
	hit=8;
};

class B_556x45_SD : BulletBase {
	hit=7;
};
				
class B_556x45_HP: B_556x45_Ball
{
	hit=10;
	airFriction=-0.0006;
	typicalSpeed=320;
};

class B_556x45_TRACER: B_556x45_Ball
{
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_556x45_RUBBER: B_556x45_Ball
{
	airfriction = -0.02;
	caliber = 2;
	hit = 1;
	isRubber = 1;
	typicalspeed = 250;
};

class B_556x45_BT: B_556x45_Ball
{
	hit=10;
};