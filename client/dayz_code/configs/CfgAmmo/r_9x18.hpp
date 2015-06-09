
//9x19
class B_9x18_Ball : BulletBase {
	airfriction = -0.002751;
	audiblefire = 15;
	caliber = 0.33;
	cartridge = "FxCartridge_9mm";
	cost = 5;
	hit = 6;
	typicalspeed = 350;
	visiblefire = 15;
};

class B_9x18_SD : B_9x18_Ball {
	airfriction = -0.001893;
	audiblefire = 0.035;
	hit = 6;
	typicalspeed = 310;
	visiblefire = 0.035;
	visiblefiretime = 2;
};

class B_9x18_HP : B_9x18_Ball {
	airfriction = -0.001893;
	hit = 7;
	typicalspeed = 310;
	visiblefiretime = 2;
};

class B_9x18_TRACER : B_9x18_Ball {
	hit=5;
};

class B_9x18_RUBBER : B_9x18_Ball {
	airfriction = -0.01;
	caliber = 0.1;
	hit = 1;
	typicalspeed = 321;
	isRubber = 1;
};

class B_9x18_BT : B_9x18_Ball {
	hit = 7;
};