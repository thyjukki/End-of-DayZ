class RH_762x25;
				
class B_762x15_HP: RH_762x25
{
	hit=8;
	airFriction=-0.003500;
	typicalSpeed=370;
};

class B_762x15_TRACER: RH_762x25
{
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_762x15_RUBBER: RH_762x25
{
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	isRubber = 1;
	typicalSpeed=150;
};

class B_762x15_BT: RH_762x25
{
	hit=8;
};