
//338 mag
class B_338mag_ball: BulletBase
{
	hit=22;
	indirectHit=2;
	indirectHitRange=0.010000;
	cartridge="UKFCartridge_338";
	visibleFire=18;
	audibleFire=18;
	visibleFireTime=3;
	airLock=1;
	typicalspeed = 936;
	cost=20;
	airFriction=-0.000517;
	caliber=1.780000;
	muzzleEffect="BIS_Effects_HeavySniper";
};

class B_338mag_HP : B_338mag_ball {
	airfriction =-0.001;
	hit = 26;
	visiblefiretime = 2;
};

class B_338mag_TRACER : B_338mag_ball {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_338mag_RUBBER : B_338mag_ball {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_338mag_BT: B_338mag_ball
{
	hit=26;
};