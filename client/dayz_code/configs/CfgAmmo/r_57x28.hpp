
//57x28
class RH_smg_57x28mm_Round;

class B_57x28_HP : RH_smg_57x28mm_Round {
	airFriction=-0.00060000003;
	hit = 10;
	typicalspeed = 320;
	visiblefiretime = 2;
};

class B_57x28_TRACER : RH_smg_57x28mm_Round {
	model = "\ca\Weapons\Data\bullettracer\tracer_red";
	tracerendtime = 1;
	tracerscale = 1;
	tracerstarttime = 0.05;
	nvgOnly=0;
};

class B_57x28_RUBBER : RH_smg_57x28mm_Round {
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 321;
	isRubber = 1;
};

class B_57x28_BT: RH_smg_57x28mm_Round
{
	hit=10;
};