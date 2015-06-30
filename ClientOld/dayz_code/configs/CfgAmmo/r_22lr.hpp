
//22LR
class B_22LR_SD: BulletBase
{
	cartridge="FxCartridge_Small";
	visibleFire=0.035000;
	audibleFire=0.035000;
	visibleFireTime=2;
	cost=1;
	typicalSpeed=290;
	airFriction=-0.001500;
	hit=6;
	caliber=0.100000;
};

class B_22LR_HP : B_22LR_SD {
	airfriction = -0.003;
	hit = 8;
	visiblefiretime = 2;
};

class B_22LR_TRACER : B_22LR_SD {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_22LR_RUBBER : B_22LR_SD {
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_22LR_BT: B_22LR_SD
{
	hit=8;
};