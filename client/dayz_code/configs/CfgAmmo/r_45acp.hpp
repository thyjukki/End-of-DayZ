class B_45ACP_Ball : BulletBase {
	airfriction = -0.0013522;
	audiblefire = 16;
	caliber = 0.33; //33
	cartridge = "FxCartridge_9mm";
	cost = 5;
	hit = 6;
	indirecthit = 0;
	indirecthitrange = 0;
	typicalspeed = 260;
	visiblefire = 16;
};

class B_45ACP_HP: B_45ACP_Ball
{
	hit=8;
	airFriction=-0.002000;
};

class B_45ACP_TRACER: B_45ACP_Ball
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
};

class B_45ACP_RUBBER: B_45ACP_Ball
{
	hit = 1;
	typicalspeed = 200;
	airFriction=-0.00500;
	isRubber = 1;
};

class B_45ACP_BT: B_45ACP_Ball
{
	hit=8;
};