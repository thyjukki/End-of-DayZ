class B_545x39_Ball : BulletBase
{
	caliber=1;
	indirectHit=0;
	indirectHitRange=0;
	cost=1;
	airFriction=-0.001412;
	cartridge="FxCartridge_556";
	model="";
	tracerScale=0;
	tracerStartTime=0;
	tracerEndTime=0;
	nvgOnly=0;
	hit=7;
};
				
class B_545x39_HP: B_545x39_Ball
{
	hit=10;
	airFriction=-0.0006;
	typicalSpeed=320;
};

class B_545x39_TRACER: B_545x39_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_545x39_RUBBER: B_545x39_Ball
{
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	isRubber = 1;
	typicalSpeed=150;
};

class B_545x39_BT: B_545x39_Ball
{
	hit=10;
};