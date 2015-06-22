
//57x28
class B_57x28_Ball: BulletBase
{
	hit=7;
	cartridge="FxCartridge_9mm";
	indirectHit=0;
	indirectHitRange=0;
	typicalspeed = 400;
	cost=1;
	airFriction=-0.001425;
	caliber=0.5;
};
class B_57x28_SD: B_57x28_Ball
{
	hit=6;
	visibleFire=0.07;
	audibleFire=0.07;
	visibleFireTime=2;
	typicalSpeed=320;
	airFriction=-0.00060000003;
};

class B_57x28_HP : B_57x28_Ball {
	airFriction=-0.00060000003;
	hit = 10;
	visiblefiretime = 2;
};

class B_57x28_TRACER : B_57x28_Ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_57x28_RUBBER : B_57x28_Ball {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_57x28_BT: B_57x28_Ball
{
	hit=10;
};