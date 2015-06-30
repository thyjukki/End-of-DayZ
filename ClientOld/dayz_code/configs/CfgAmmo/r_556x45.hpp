class B_556x45_Ball : BulletBase
{
	caliber=0.5;
	indirectHit=0;
	indirectHitRange=0;
	cost=1;
	airFriction=-0.001425;
	cartridge="FxCartridge_556";
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerScale=0;
	tracerStartTime=0;
	tracerEndTime=0;
	nvgOnly=0;
	typicalSpeed=930;
	hit=8;
};

class B_556x45_SD : BulletBase {
	hit=7;
	indirectHit=0;
	indirectHitRange=0;
	visibleFire=0.07;
	audibleFire=0.07;
	visibleFireTime=2;
	cost=1;
	airFriction=-0.0006;
	typicalSpeed=330;
	caliber=0.5;
};
				
class B_556x45_HP: B_556x45_Ball
{
	hit=10;
	airFriction=-0.0006;
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
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_556x45_BT: B_556x45_Ball
{
	hit=10;
};