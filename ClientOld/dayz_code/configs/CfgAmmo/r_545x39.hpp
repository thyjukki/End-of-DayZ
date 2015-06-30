class B_545x39_Ball : BulletBase
{
	caliber=0.5;
	indirectHit=0;
	indirectHitRange=0;
	cost=1;
	typicalspeed = 900;
	airFriction=-0.001412;
	cartridge="FxCartridge_556";
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerScale=0;
	tracerStartTime=0;
	tracerEndTime=0;
	nvgOnly=0;
	hit=7;
};

class B_545x39_SD : BulletBase
{
	hit=6;
	indirectHit=0;
	indirectHitRange=0;
	visibleFire=0.07;
	typicalspeed = 320;
	audibleFire=0.07;
	visibleFireTime=2;
	cost=1;
	airFriction=-0.0006;
	caliber=0.5;
};

class B_545x39_HP: B_545x39_Ball
{
	hit=10;
	airFriction=-0.0006;
};

class B_545x39_TRACER: B_545x39_Ball
{
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_545x39_RUBBER: B_545x39_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_545x39_BT: B_545x39_Ball
{
	hit=10;
};