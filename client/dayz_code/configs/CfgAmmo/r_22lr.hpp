
//22LR
class RH_B_22LR_SD: BulletBase
{
	cartridge="FxCartridge_Small";
	visibleFire=0.035000;
	audibleFire=0.035000;
	visibleFireTime=2;
	cost=1;
	typicalSpeed=278;
	airFriction=-0.001500;
	hit=6;
	caliber=0.100000;
};

class B_22LR_HP : RH_B_22LR_SD {
	airfriction = -0.001893;
	hit = 8;
	typicalspeed = 270;
	visiblefiretime = 2;
};

class B_22LR_TRACER : RH_B_22LR_SD {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_22LR_RUBBER : RH_B_22LR_SD {
	airfriction = -0.02;
	caliber = 2;
	hit = 1;
	typicalspeed = 250;
	isRubber = 1;
};

class B_22LR_BT: RH_B_22LR_SD
{
	hit=8;
};