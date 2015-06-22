class B_762x39_Ball: BulletBase {
	airfriction = -0.00195;
	audiblefire = 18;
	caliber = 0.83;
	cartridge = "FxCartridge_762";
	cost = 1;
	hit = 9;
	indirecthit = 0;
	indirecthitrange = 0;
	tracercolor[] = {0.2, 0.8, 0.1, 0.04};
	tracercolorr[] = {0, 0, 0, 0};
	typicalspeed = 710;
	visiblefire = 18;
};

class B_762x39_SD: BulletBase
{
	hit=7;
	caliber = 0.83;
	typicalSpeed=320;
	airFriction=-0.000550;
	supersonicCrackNear[]=
	{
		"",
		1,
		1
	};
	supersonicCrackFar[]=
	{
		"",
		1,
		1
	};
	visibleFire=0.200000;
	audibleFire=0.200000;
	visibleFireTime=0.500000;
	cartridge="FxCartridge_762";
};

class B_762x39_HP: B_762x39_Ball
{
	hit=10;
	airFriction=-0.000550;
};

class B_762x39_TRACER: B_762x39_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_762x39_RUBBER: B_762x39_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_762x39_BT: B_762x39_Ball
{
	hit=10;
};