class B_762x54_Ball: BulletBase
{
	hit = 12;
	indirectHit = 0;
	indirectHitRange = 0;
	cartridge = "FxCartridge_762";
	visibleFire = 22;
	audibleFire = 18;
	visibleFireTime = 3;
	typicalspeed = 870;
	cost = 1.2;
	airLock = 0;
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerScale = 0;
	tracerStartTime = 0;
	tracerEndTime = 0;
	airFriction = -0.00096;
};
				
class B_762x54_HP: B_762x54_Ball
{
	hit = 14;
	airFriction = -0.001;
};

class B_762x54_TRACER: B_762x54_Ball
{
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_762x54_RUBBER: B_762x54_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_762x54_BT: B_762x54_Ball
{
	hit=14;
};