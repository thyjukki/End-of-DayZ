class B_762x51_Ball : BulletBase
{
	hit = 12;
	indirectHit = 0;
	indirectHitRange = 0;
	cartridge = "FxCartridge_762";
	visibleFire = 22;
	audibleFire = 18;
	visibleFireTime = 3;
	cost = 1.2;
	typicalSpeed=780;
	airLock = 1;
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerScale = 0;
	tracerStartTime = 0;
	tracerEndTime = 0;
	airFriction = -0.0009324;
};

class B_762x51_SD : B_762x51_Ball {
	hit = 11;
	typicalSpeed = 320;
	airFriction = -0.00098;
	visibleFire = 0.1;
	audibleFire = 0.1;
	visibleFireTime = 2;
};
				
class B_762x51_HP: B_762x51_Ball
{
	hit = 14;
	airFriction = -0.001;
};

class B_762x51_TRACER: B_762x51_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_762x51_RUBBER: B_762x51_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_762x51_BT: B_762x51_Ball
{
	hit=14;
};