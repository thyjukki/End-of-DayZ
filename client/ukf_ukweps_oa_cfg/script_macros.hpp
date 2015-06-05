#define private 0
#define protected 1
#define public 2

#define true 1
#define false	0

#define __NOARMORY class Armory {author = "P:UKF"; disabled = 1;}
#define __ARMORY class Armory {author = "P:UKF"; disabled = 0;}

#define __HEAT_SA80_ \
		htMin = 1;\
		htMax = 480;\
		afMax = 0;\
		mfMax = 0;\
		mFact = 1;\
		tBody = 100

#define __HEAT_GPMG_ \
		htMin = 1;\
		htMax = 600;\
		afMax = 0;\
		mfMax = 0;\
		mFact = 1;\
		tBody = 100

#define __HANDANIM_L85_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L85.rtm"}
#define __HANDANIM_L85_RIS_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L85_RIS.rtm"}
#define __HANDANIM_L85_RIS2_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L85_RIS2.rtm"}
#define __HANDANIM_L22_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L22.rtm"}
#define __HANDANIM_L123_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L123.rtm"}
#define __HANDANIM_L123_trig_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L123_trig.rtm"}
#define __HANDANIM_L110_erc_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L110_erc.rtm"}
#define __HANDANIM_L7_bp_ handanim[]={"OFP2_ManSkeleton","\ukf_ukweps_oa\anims\ukf_L7_bp.rtm"}

#define __NOLASER irDistance = 0
#define __LASER \
				irLaserPos = "laser pos"; \
				irLaserEnd = "laser dir"; \
				irDistance = 200

#define __FLASHLIGHT_ \
		class FlashLight {\
			color[] = {0.9, 0.9, 0.7, 0.9};\
			ambient[] = {0.1, 0.1, 0.1, 1.0};\
			position = "flash dir";\
			direction = "flash";\
			angle = 30;\
			scale[] = {1, 1, 0.5};\
			brightness = 0.1;\
		}

#define __UGL_LASER class ukf_AG36: ukf_AG36 {__LASER;}
#define __UGL_NOLASER class ukf_AG36: ukf_AG36 {__NOLASER;}
#define __UGL_FLASHLIGHT class ukf_AG36: ukf_AG36 {__NOLASER; __FLASHLIGHT_;}

//calibrated and also usable by AI --Robalo
#define __UKFGL \
    		modelOptics = "\ukf_ukweps_oa\optics\ukf_optic_ag36";\
    		optics = 1;\
    		opticsZoomMin = 0.475;\
    		opticsZoomMax = 0.475;\
    		opticsZoomInit = 0.475;\
    		discreteDistance[] = {100};\
    		discreteDistanceInitIndex = 0;\
    		cameraDir = "";\
    		memoryPointCamera = "eye"

#define __FLASH_HIDER fireLightIntensity = 0.002

#define __BIPOD ACE_bipod = 1
#define __NOBIPOD ACE_bipod = 0

#define __ZEROING weaponInfoType = "RscWeaponZeroing"
#define __NOZEROING weaponInfoType = "RscWeaponEmpty"

#define __AI_ROF_RIFLE_SMALL_SEMI_ \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 550;\
		minRange = 0;\
		minRangeProbab = 0.7;\
		midRange = 200;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.1

#define __AI_ROF_RIFLE_SMALL_SEMI_SCOPE_ \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 800;\
		minRange = 0;\
		minRangeProbab = 0.7;\
		midRange = 200;\
		midRangeProbab = 0.6;\
		maxRange = 650;\
		maxRangeProbab = 0.1

#define __modelOptics_SUSAT \
		modelOptics="\ukf_ukweps_oa\optics\ukf_susat3"
#define __modelOptics_ACOGTA31DOC \
		modelOptics="\ukf_ukweps_oa\optics\asr_acog_ta31doc"
#define __modelOptics_ACOGTA31ECOS \
		modelOptics="\ukf_ukweps_oa\optics\asr_acog_ta31ecos"
#define __modelOptics_UKF_CWS \
		modelOptics="\ukf_ukweps_oa\optics\ukf_CWS"

#define __OPTICMODES_SUSAT_ \
	class OpticsModes {\
		class SUSAT {\
			cameradir = "";\
			discretedistance[] = {300, 400, 500, 600, 700, 800};\
			discretedistanceinitindex = 0;\
			distancezoommax = 300;\
			distancezoommin = 300;\
			memorypointcamera = "opticView";\
			opticsdisableperipherialvision = 1;\
			opticsflare = 1;\
			opticsid = 1;\
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};\
			opticszoominit = 0.071945;\
			opticszoommax = 0.071945;\
			opticszoommin = 0.071945;\
			usemodeloptics = 1;\
			visionmode[] = {"Normal"};\
		};\
		class ironsights: SUSAT {\
			discretedistance[] = {};\
			discretedistanceinitindex = 0;\
			distancezoommax = 300;\
			distancezoommin = 300;\
			memorypointcamera = "eye";\
			opticsdisableperipherialvision = 0;\
			opticsflare = 0;\
			opticsid = 2;\
			opticsppeffects[] = {};\
			opticszoominit = 0.5;\
			opticszoommax = 1.1;\
			opticszoommin = 0.25;\
			usemodeloptics = 0;\
			visionmode[] = {};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
	}

#define __OPTICMODES_LWTI_ \
	class OpticsModes {\
		class LWTI {\
			cameradir = "";\
			discretedistance[] = {300};\
			discretedistanceinitindex = 0;\
			distancezoommax = 300;\
			distancezoommin = 300;\
			memorypointcamera = "opticView";\
			opticsdisableperipherialvision = 1;\
			opticsflare = 1;\
			opticsid = 1;\
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};\
			opticszoominit = 0.111111111;\
			opticszoommax = 0.111111111;\
			opticszoommin = 0.055555555;\
			usemodeloptics = 1;\
			visionmode[] = {"Ti"};\
			thermalMode[] = {0, 1};\
			discretefov[] = {0.111111111, 0.055555555};\
			discreteInitIndex = 0;\
		};\
		class Ironsights {\
			cameraDir = "";\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 100;\
			distancezoommin = 100;\
			memorypointcamera = "eye";\
			opticsdisableperipherialvision = 0;\
			opticsflare = 0;\
			opticsid = 2;\
			opticsppeffects[] = {};\
			opticszoominit = 0.5;\
			opticszoommax = 1.1;\
			opticszoommin = 0.25;\
			usemodeloptics = 0;\
			visionmode[] = {};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
	}

#define __OPTICMODES_VIPIR_ \
	class OpticsModes {\
		class VIPIR {\
			cameradir = "";\
			discretedistance[] = {300};\
			discretedistanceinitindex = 0;\
			distancezoommax = 300;\
			distancezoommin = 300;\
			memorypointcamera = "opticView";\
			opticsdisableperipherialvision = 1;\
			opticsflare = 1;\
			opticsid = 1;\
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};\
			opticszoominit = 0.08333333;\
			opticszoommax = 0.08333333;\
			opticszoommin = 0.04166666;\
			usemodeloptics = 1;\
			visionmode[] = {"Ti"};\
			thermalMode[] = {0, 1};\
			discretefov[] = {0.08333333, 0.04166666};\
			discreteInitIndex = 0;\
		};\
		class Ironsights {\
			cameraDir = "";\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 100;\
			distancezoommin = 100;\
			memorypointcamera = "eye";\
			opticsdisableperipherialvision = 0;\
			opticsflare = 0;\
			opticsid = 2;\
			opticsppeffects[] = {};\
			opticszoominit = 0.5;\
			opticszoommax = 1.1;\
			opticszoommin = 0.25;\
			usemodeloptics = 0;\
			visionmode[] = {};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
	}

#define __OPTICMODES_CWS_ \
	class OpticsModes {\
		class CWS {\
			cameradir = "";\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 189;\
			distancezoommin = 189;\
			memorypointcamera = "opticView";\
			opticsdisableperipherialvision = 1;\
			opticsflare = 1;\
			opticsid = 1;\
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};\
			opticszoominit = 0.071945;\
			opticszoommax = 0.071945;\
			opticszoommin = 0.071945;\
			usemodeloptics = 1;\
			visionmode[] = {"NVG"};\
		};\
		class Ironsights {\
			cameraDir = "";\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 100;\
			distancezoommin = 100;\
			memorypointcamera = "eye";\
			opticsdisableperipherialvision = 0;\
			opticsflare = 0;\
			opticsid = 2;\
			opticsppeffects[] = {};\
			opticszoominit = 0.5;\
			opticszoommax = 1.1;\
			opticszoommin = 0.25;\
			usemodeloptics = 0;\
			visionmode[] = {};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
	}

#define __OPTICMODES_MaxiKite_ \
	class OpticsModes {\
		class MaxiKite {\
			cameradir = "";\
			discretedistance[] = {300};\
			discretedistanceinitindex = 0;\
			distancezoommax = 300;\
			distancezoommin = 300;\
			memorypointcamera = "opticView";\
			opticsdisableperipherialvision = 1;\
			opticsflare = 1;\
			opticsid = 1;\
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};\
			opticszoominit = 0.05;\
			opticszoommax = 0.05;\
			opticszoommin = 0.05;\
			usemodeloptics = 1;\
			visionmode[] = {"NVG"};\
		};\
		class Ironsights {\
			cameraDir = "";\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 100;\
			distancezoommin = 100;\
			memorypointcamera = "eye";\
			opticsdisableperipherialvision = 0;\
			opticsflare = 0;\
			opticsid = 2;\
			opticsppeffects[] = {};\
			opticszoominit = 0.5;\
			opticszoommax = 1.1;\
			opticszoommin = 0.25;\
			usemodeloptics = 0;\
			visionmode[] = {};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
	}

#define __OPTICMODES_ACOG_ \
	class OpticsModes {\
		class ACOG {\
			cameradir = "";\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 189;\
			distancezoommin = 189;\
			memorypointcamera = "opticView";\
			opticsdisableperipherialvision = 1;\
			opticsflare = 1;\
			opticsid = 1;\
			opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};\
			opticszoominit = 0.071945;\
			opticszoommax = 0.071945;\
			opticszoommin = 0.071945;\
			usemodeloptics = 1;\
			visionmode[] = {"Normal"};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
		class Kolimator: ACOG {\
			discretedistance[] = {100};\
			discretedistanceinitindex = 0;\
			distancezoommax = 100;\
			distancezoommin = 100;\
			memorypointcamera = "eye";\
			opticsdisableperipherialvision = 0;\
			opticsflare = 0;\
			opticsid = 2;\
			opticsppeffects[] = {};\
			opticszoominit = 0.5;\
			opticszoommax = 1.1;\
			opticszoommin = 0.25;\
			usemodeloptics = 0;\
			visionmode[] = {};\
			weaponinfotype = "RscWeaponEmpty";\
		};\
	}

#define __M_MAG(x,y)	class _xx_##x {magazine = ##x; count = ##y;}
#define __M_WEP(x,y)	class _xx_##x {weapon = ##x; count = ##y;}
