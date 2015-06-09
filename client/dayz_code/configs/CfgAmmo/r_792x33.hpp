class B_792x33_Ball: B_762x54_Ball
{
	hit=8;
	indirectHit=0;
	indirectHitRange=0;
	cartridge="FxCartridge_762";
	visibleFire=22;
	audibleFire=18;
	visibleFireTime=3;
	cost=1;
	airLock=1;
	caliber=0.830000;
	tracerScale=0;
	tracerStartTime=0;
	tracerEndTime=0;
	airFriction=-0.000960;
};
				
class B_792x33_HP: B_792x33_Ball
{
	hit = 10;
	typicalSpeed = 600;
	airFriction = -0.001;
};

class B_792x33_TRACER: B_792x33_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_792x33_RUBBER: B_792x33_Ball
{
	airfriction = -0.02;
	caliber = 2;
	hit = 1;
	isRubber = 1;
	typicalspeed = 250;
};

class B_792x33_BT: B_792x33_Ball
{
	hit=10;
};