class CfgPatches
{
	class dayzend_additions
	{
		units[]=
		{
            "sab_UN_OA_Mi24V",
			"sab_UN_OA_Mi24P",
			"sab_UN_OA_Su25",
			"sab_UN_OA_C130",
			"sab_UN_OA_An2",
			"sab_RC_OA_An2",
			"sab_RC_OA_C130",
			"globemaster_c17"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		pilot="pilot";
		commander="commander";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class pilot_dead: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped="false";
			terminal=1;
			file="\globemaster_c17\anim\kia.rtm";
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class pilot: Crew
		{
			file="\globemaster_c17\anim\pilot.rtm";
			interpolateTo[]=
			{
				"pilot_dead",
				1
			};
		};
		class commander: Crew
		{
			file="\globemaster_c17\anim\commander.rtm";
			interpolateTo[]=
			{
				"pilot_dead",
				1
			};
		};
	};
};
class CfgSounds
{
	class globemaster_c17_doors
	{
		sound[]=
		{
			"\globemaster_c17\sound\ramp.WAV",
			0.2,
			1
		};
		name="globemaster_c17_doors";
		titles[]={};
	};
};
class Extended_Init_EventHandlers
{
	class globemaster_c17
	{
		globemaster_c17_init="[_this select 0] exec ""\globemaster_c17\scr\init.sqs""; _misscr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
	};
	class globemaster_c17_Jordan
	{
		globemaster_c17_Jordan_init="[_this select 0] exec ""\globemaster_c17\scr\init.sqs""; _misscr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
	};
};
class CfgFactionClasses
{
	class sab_UN_OA_faction
	{
		icon="\sab_UN_OA\data\ui\UN_Flag_Ico.paa";
		displayName="UN Air Wing";
		priority=2;
		side=2;
	};
	class sab_CIV_OA_faction
	{
		icon="\sab_UN_OA\data\ui\CIV_Flag_Ico.paa";
		displayName="Red Cross Planes";
		priority=2;
		side=3;
	};
};
class CfgVehicleClasses
{
	class sab_UN_OA_air
	{
		displayName="UN Aircraft";
		faction="sab_UN_OA_faction";
	};
	class sab_CIV_OA_air
	{
		displayName="Red Cross Aircraft";
		faction="sab_CIV_OA_faction";
	};
};
class CfgVehicles
{
    class Mi24_V;
	class Mi24_P;
	class Su25_CDF;
	class C130J;
	class An2_1_TK_CIV_EP1;
	class AllVehicles;
	class Air: AllVehicles
	{
	};
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
	};
	class globemaster_c17: Plane
	{
		scope=2;
		side=1;
		faction="USMC";
		vehicleClass="Air";
		model="\globemaster_c17\globemaster_c17.p3d";
		displayName="$STR_GLOBEMASTER_C17_NAME1";
		picture="\globemaster_c17\icons\picture.paa";
		icon="\globemaster_c17\icons\icon.paa";
		mapSize=54;
		destrType="DestructWreck";
		damageResistance=0.0048500001;
		armor=150;
		armorStructured=1;
		armorWheels=4000;
		gearRetracting=1;
		crewVulnerable="false";
		author="Ported by randomslap";
		attendant=1;
		simulation="airplane";
		canFloat="false";
		waterLeakiness=25;
		waterResistanceCoef=0.0040000002;
		spotabledarknightlightsoff=0.003;
		spotablenightlightsoff=0.035;
		spotablenightlightson=4;
		aggregatereflectors[]={};
		visiblenightlightsoff=0.1;
		visiblenightlightson=0.2;
		crew="US_Soldier_Pilot_EP1";
		driverAction="A10_Pilot";
		driverCanEject=0;
		driverrighthandanimname="stick_pilot";
		cargoAction[]=
		{
			"C130_Cargo",
			"Mi17_Cargo02"
		};
		driverhasflares=1;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		getInRadius=3;
		radartype=4;
		LockDetectionSystem=8;
		IncommingMisslieDetectionSystem=16;
		soundLocked[]=
		{
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622799,
			2
		};
		soundIncommingMissile[]=
		{
			"\ca\Tracked\Data\Sound\alarm_loop1",
			0.00031622799,
			4
		};
		cabinOpening=0;
		camouflage=10;
		audible=6;
		accuracy=0.2;
		sensitivity=2;
		fov=0.5;
		vtol=1;
		precision=350;
		landingAoa="5.5*3.1415/180";
		landingSpeed=275;
		textplural="Airplanes";
		textsingular="Airplane";
		maneuvrability=70;
		brakeDistance=400;
		selectiondashboard="podsvit pristroju";
		acceleration=1500;
		maxSpeed=550;
		lightongear=0;
		geardowntime=6;
		gearuptime=6;
		supplyRadius=20;
		formationX=190;
		formationZ=190;
		formationTime=15;
		irScanGround=1;
		irScanRangeMin=100;
		irScanRangeMax=10000;
		irScanToEyeFactor=3;
		laserScanner=1;
		transportFuel=10000;
		transportVehiclesCount=4;
		transportVehiclesMass=2000000;
		transportSoldier=54;
		transportMaxWeapons=400;
		transportMaxMagazines=800;
		transportMaxBackpacks=100;
		fuelCapacity=22000;
		dustEffect="HeliDust";
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		memoryPointSupply="pos supply";
		memoryPointCM[]=
		{
			"launcher1",
			"launcher2",
			"levy prach",
			"pravy prach"
		};
		memoryPointCMDir[]=
		{
			"launcher1_dir",
			"launcher2_dir",
			"cerveny pozicni",
			"zeleny pozicni"
		};
		memoryPointsGetInCargo[]=
		{
			"flare_launcher1"
		};
		memoryPointsGetInCargoDir[]=
		{
			"flare_launcher1_dir"
		};
		viewDriverShadow=1;
		castDriverShadow=1;
		wheelSteeringSensitivity=8.5;
		aileronSensitivity=0.68000001;
		elevatorSensitivity=5.8000002;
		flapsFrictionCoef=0.30000001;
		envelope[]={0,0,0.37,2.45,5.1999998,8,11.2,9.6000004,7.1999998,5,3.8,2.5,1.7,1.3,1,0};
		gunAimDown=0.045000002;
		nosedowncoef=1;
		minFireTime=5;
		extCameraPosition[]={0,9,-53};
		cost=20000000;
		type="VAir";
		threat[]={1,1,1};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		soundLandCrash[]=
		{
			"\globemaster_c17\sound\tire",
			0.5,
			1.1
		};
		soundServo[]=
		{
			"\globemaster_c17\sound\trains.wss",
			0.2,
			1.4,
			50
		};
		soundDammage[]=
		{
			"\globemaster_c17\sound\alert.wss",
			0.2,
			1
		};
		soundGetIn[]={};
		soundGetOut[]={};
		soundEngineOnInt[]=
		{
			"\globemaster_c17\sound\c17_start_in.wss",
			0.39810699,
			1
		};
		soundEngineOnExt[]=
		{
			"\globemaster_c17\sound\c17_start.wss",
			0.39810699,
			1,
			700
		};
		soundEngineOffInt[]=
		{
			"\globemaster_c17\sound\c17_stop_in.wss",
			0.39810699,
			1
		};
		soundEngineOffExt[]=
		{
			"\globemaster_c17\sound\c17_stop.wss",
			0.39810699,
			1,
			700
		};
		soundEngine[]=
		{
			"\globemaster_c17\sound\XBAN13a.wav",
			4,
			1.2
		};
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		insideSoundCoef=1;
		leftDustEffect="LDustEffects";
		rightDustEffect="RDustEffects";
		class Turrets
		{
			class MainTurret: NewTurret
			{
				body="";
				gun="";
				commanding=-1;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]={};
				magazines[]={};
				caneject=0;
				startEngine=1;
				gunnerForceOptics=0;
				gunnerAction="A10_Pilot";
				gunnerInAction="A10_Pilot";
				gunnerName="$STR_WOP_PILOT2_NAME";
				gunnerCompartments="Compartment1";
				minElev=-60;
				maxElev=10;
				initElev=0;
				minTurn=-70;
				maxTurn=70;
				initTurn=0;
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov=1;
			minFov=0.30000001;
			maxFov=1.2;
			initAngleX=0;
			minAngleX=-40;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"\globemaster_c17\sound\c17_engine",
					2,
					0.60000002,
					800
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="engineOn*camPos*(thrust factor[1.0, 0.6])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"\globemaster_c17\sound\c17_engine",
					2,
					1,
					1000
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.30000001};
			};
			class ForsageOut
			{
				sound[]=
				{
					"\globemaster_c17\sound\ext-jetair-forsage1",
					1,
					1.1,
					3000
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.30000001};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"\globemaster_c17\sound\ext-jetair-wind",
					5,
					1,
					500
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class DistantPlaneOut
			{
				sound[]=
				{
					"\globemaster_c17\sound\distantplane",
					4,
					0.5,
					5000
				};
				frequency="1";
				volume="engineOn*camPos*(speed factor[1, 100])";
				cone[]={3.1400001,3.9200001,2,0.2};
			};
			class EngineLowIn
			{
				sound[]=
				{
					"\globemaster_c17\sound\engine_in",
					1.2589254,
					1
				};
				frequency="0.5 + engineOn*(speed factor[1, 150]))";
				volume="(1-camPos)*(engineOn*(thrust factor[1.0, 0.4]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"\globemaster_c17\sound\engine_in",
					1.2589254,
					1
				};
				frequency="0.5 + engineOn*(speed factor[1,150]))";
				volume="(1-camPos)*(engineOn*(thrust factor[0.3, 1.0]))";
			};
			class ForsageIn
			{
				sound[]=
				{
					"\globemaster_c17\sound\engine_in",
					1.4125376,
					1.2
				};
				frequency="0.5 + engineOn*(speed factor[1,150]))";
				volume="(1-camPos)*(engineOn*(thrust factor[0.75, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"\globemaster_c17\sound\int-jetair-wind1",
					0.44668359,
					1.1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		class AnimationSources
		{
			class doors
			{
				source="user";
				initPhase=0;
				animPeriod=7;
			};
			class back_ramp
			{
				source="user";
				initPhase=0;
				animPeriod=20;
			};
		};
		class UserActions
		{
			class OpenRear
			{
				displayName="Open Cargo Door";
				onlyforplayer="false";
				position="pos nose open";
				radius=50;
				showWindow=0;
				condition="(this animationPhase ""back_ramp"" == 0) and (this animationPhase ""back_ramp_h"" == 0)";
				statement="[this] execVM ""\globemaster_c17\scr\back_rampdown.sqf""";
			};
			class OpenRearHalf
			{
				displayName="Open Cargo Door Halfway";
				onlyforplayer="false";
				position="pos nose open";
				radius=50;
				showWindow=0;
				condition="(this animationPhase ""back_ramp_h"" == 0) and (this animationPhase ""back_ramp"" == 0)";
				statement="[this] execVM ""\globemaster_c17\scr\back_rampdown_h.sqf""";
			};
			class loadcargo
			{
				onlyforplayer="false";
				displayName="$STR_GLOBEMASTER_C17_AC";
				position="axiscargo";
				radius=20;
				showWindow=0;
				condition="((vehicle player != vehicle this) and (vehicle player != player) and (speed vehicle this < 5))";
				statement="[this, vehicle player, player] execVM ""\globemaster_c17\scr\attach.sqf""";
			};
			class unloadcargo
			{
				onlyforplayer="false";
				displayName="$STR_GLOBEMASTER_C17_DC";
				position="axiscargo";
				radius=100;
				showWindow=0;
				condition="(vehicle player != vehicle this) and (vehicle player != player)";
				statement="[this, vehicle player, player] execVM ""\globemaster_c17\scr\detach.sqf""";
			};
			class unloadcargoall
			{
				onlyforplayer="false";
				displayName="$STR_GLOBEMASTER_C17_DCA";
				position="axiscargo";
				radius=100;
				showWindow=0;
				condition="(player in this) and ((count (position this nearEntities 25)) > 1) and (this animationPhase ""back_ramp_h"" == 1)";
				statement="[this, vehicle player, player] execVM ""\globemaster_c17\scr\detachall.sqf""";
			};
			class CloseRear
			{
				onlyforplayer="false";
				displayName="Close Cargo Door";
				position="pos nose open";
				radius=50;
				showWindow=0;
				condition="this animationPhase ""back_ramp"" == 1";
				statement="[this] execVM ""\globemaster_c17\scr\back_rampclose.sqf""";
			};
			class CloseRearHalf
			{
				onlyforplayer="false";
				displayName="Close Cargo Door";
				position="pos nose open";
				radius=50;
				showWindow=0;
				condition="this animationPhase ""back_ramp_h"" == 1";
				statement="[this] execVM ""\globemaster_c17\scr\back_rampclose_h.sqf""";
			};
			class open_door
			{
				displayName="$STR_GLOBEMASTER_C17_OBD";
				position="pos_action";
				onlyforplayer=0;
				radius=10;
				showWindow=0;
				condition="this animationPhase ""door"" < 0.2";
				statement="this animate [""door"", 1]; this animate [""ladder"", 1]; this animate [""stup"", 1];";
			};
			class close_door
			{
				displayName="$STR_GLOBEMASTER_C17_CBD";
				position="pos_action";
				onlyforplayer=0;
				radius=10;
				showWindow=0;
				condition="this animationPhase ""door"" > 0.8";
				statement="this animate [""door"", 0]; this animate [""ladder"", 0]; this animate [""stup"", 0];";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1 dir";
				effect="ExhaustsEffectPlane";
				position="exhaust1";
			};
			class Exhaust2
			{
				direction="exhaust2 dir";
				effect="ExhaustsEffectPlane";
				position="exhaust2";
			};
			class Exhaust3
			{
				direction="exhaust3 dir";
				effect="ExhaustsEffectPlane";
				position="exhaust3";
			};
			class Exhaust4
			{
				direction="exhaust4 dir";
				effect="ExhaustsEffectPlane";
				position="exhaust4";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class MarkerLights
		{
			class Red_Still_L
			{
				name="cerveny pozicni";
				color[]={0.81999999,0.079999998,0,1};
				ambient[]={100,100,100,0};
				brightness=0.035;
				intensity=5.5;
				activeLight=0;
				useFlare=1;
				flareSize=2;
				blinking=0;
			};
			class Green_Still_R
			{
				name="zeleny pozicni";
				color[]={0.029999999,1,0.11,1};
				ambient[]={100,100,100,0};
				brightness=0.035;
				intensity=5.5;
				activeLight=0;
				useFlare=1;
				flareSize=2;
				blinking=0;
			};
			class Red_Blinking_T
			{
				name="Tail_Light";
				color[]={0.81999999,0.079999998,0,1};
				ambient[]={100,100,100,0};
				brightness=0.035;
				blinkingPattern[]={0.1,0.89999998};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
				intensity=5.5;
				activeLight=0;
				useFlare=1;
				flareSize=2;
				blinking=1;
			};
			class Red_Blinking_B
			{
				name="Light_bottom";
				color[]={1000,0,0,1};
				ambient[]={1,0,0,1};
				brightness=0.1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
				blinking=1;
			};
			class White_Blinking_L
			{
				name="_leftwingemitter";
				color[]={1,1,1,1};
				ambient[]={1,1,1,1};
				brightness=0.1;
				blinking=1;
				blinkingPattern[]={0.2,1};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
			};
			class White_Blinking_R
			{
				name="_rightwingemitter";
				color[]={1,1,1,1};
				ambient[]={1,1,1,1};
				brightness=0.1;
				blinking=1;
				blinkingPattern[]={0.2,1};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
			class Right
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
			class Left2
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="L_wing_light";
				direction="L_wing_light_dir";
				hitpoint="L_wing_light";
				selection="L_wing_light";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
			class Right2
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="R_wing_light";
				direction="R_wing_light_dir";
				hitpoint="R_wing_light";
				selection="R_wing_light";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
			class Left3
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="M svetlo";
				direction="konec M svetla";
				hitpoint="M svetlo";
				selection="M svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
			class Right3
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="N svetlo";
				direction="konec N svetla";
				hitpoint="N svetlo";
				selection="N svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
		};
		class MFD
		{
			class HUD
			{
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class WeaponAim: Pos10Vector
					{
						source="weapon";
					};
					class Target: Pos10Vector
					{
						source="target";
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.40000001};
						pos10[]={1.24,1.1};
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.40000001};
						pos3[]={0.722,0.40000001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.61000001};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.40000001};
						pos10[]={1.24,1.1};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"PlaneW",
								{-0.079999998,0},
								1
							},
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.015,0.028378399},
								1
							},
							
							{
								"PlaneW",
								{0,0},
								1
							},
							
							{
								"PlaneW",
								{0.015,0.028378399},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.079999998,0},
								1
							}
						};
					};
					class PlaneHeading
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							
							{
								"Velocity",
								{0.014,-0.0132432},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.014,0.0132432},
								1
							},
							
							{
								"Velocity",
								{0,0.0189189},
								1
							},
							
							{
								"Velocity",
								{-0.014,0.0132432},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.014,-0.0132432},
								1
							},
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.0378378},
								1
							},
							
							{
								"Velocity",
								{0,-0.0189189},
								1
							},
							{}
						};
					};
					class Static
					{
						clipTL[]={0,0.1};
						clipBR[]={1,0};
						type="line";
						points[]=
						{
							
							{
								{0.20999999,0.51999998},
								1
							},
							
							{
								{0.19,0.5},
								1
							},
							
							{
								{0.20999999,0.47999999},
								1
							},
							{},
							
							{
								{0.18000001,0.2},
								1
							},
							
							{
								{0.18000001,0.85000002},
								1
							},
							{},
							
							{
								{0.79000002,0.51999998},
								1
							},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.79000002,0.47999999},
								1
							},
							{},
							
							{
								{0.81999999,0.2},
								1
							},
							
							{
								{0.81999999,0.85000002},
								1
							},
							{},
							
							{
								
								{
									0.51999998,
									"0.08+0.01"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.06+0.01"
								},
								1
							},
							
							{
								
								{
									0.47999999,
									"0.08+0.01"
								},
								1
							},
							{},
							
							{
								
								{
									0.2,
									"0.055+0.01"
								},
								1
							},
							
							{
								
								{
									0.80000001,
									"0.055+0.01"
								},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0,0};
						clipBR[]={1,1};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.2,0},
										1
									},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									
									{
										"Level0",
										{0.2,0},
										1
									}
								};
							};
							class VALM_1_0
							{
								type="text";
								source="static";
								text=0;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									{-0.23,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{-0.13,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{-0.23,0.025},
									1
								};
							};
							class VALM_2_0: VALM_1_0
							{
								align="right";
								pos[]=
								{
									"Level0",
									{0.22,-0.025},
									1
								};
								right[]=
								{
									"Level0",
									{0.31999999,-0.025},
									1
								};
								down[]=
								{
									"Level0",
									{0.22,0.025},
									1
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{-0.2,0},
										1
									},
									
									{
										"LevelM5",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,0},
										1
									},
									
									{
										"LevelM5",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_5: VALM_1_5
							{
								align="right";
								pos[]=
								{
									"LevelM5",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.22,-0.035},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_5: VALP_1_5
							{
								align="right";
								pos[]=
								{
									"LevelP5",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{-0.2,0},
										1
									},
									
									{
										"LevelM15",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,0},
										1
									},
									
									{
										"LevelM15",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_15: VALM_1_15
							{
								align="right";
								pos[]=
								{
									"LevelM15",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.22,-0.035},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_15: VALP_1_15
							{
								align="right";
								pos[]=
								{
									"LevelP15",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{-0.2,0},
										1
									},
									
									{
										"LevelM25",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,0},
										1
									},
									
									{
										"LevelM25",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_25: VALM_1_25
							{
								align="right";
								pos[]=
								{
									"LevelM25",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.22,-0.035},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_25: VALP_1_25
							{
								align="right";
								pos[]=
								{
									"LevelP25",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{-0.2,0},
										1
									},
									
									{
										"LevelM35",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,0},
										1
									},
									
									{
										"LevelM35",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_35: VALM_1_35
							{
								align="right";
								pos[]=
								{
									"LevelM35",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.22,-0.035},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_35: VALP_1_35
							{
								align="right";
								pos[]=
								{
									"LevelP35",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{-0.2,0},
										1
									},
									
									{
										"LevelM45",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,0},
										1
									},
									
									{
										"LevelM45",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_45: VALM_1_45
							{
								align="right";
								pos[]=
								{
									"LevelM45",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.22,-0.035},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_45: VALP_1_45
							{
								align="right";
								pos[]=
								{
									"LevelP45",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.23,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.23,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.23,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.13,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.23,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class RadarTargets
					{
						type="radar";
						pos0[]={0.48500001,0.40000001};
						pos10[]={1.225,1.1};
						points[]=
						{
							
							{
								{-0.050000001,-0.047297299},
								1
							},
							
							{
								{0.050000001,-0.047297299},
								1
							},
							
							{
								{0.050000001,0.047297299},
								1
							},
							
							{
								{-0.050000001,0.047297299},
								1
							},
							
							{
								{-0.050000001,-0.047297299},
								1
							}
						};
					};
					class MGun
					{
						condition="mgun";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.0094594602},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.0094594602},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,-0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{0.048999999,0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{0,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.048999999,-0.046351399},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.066216201},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.132432},
									1
								},
								
								{
									"WeaponAim",
									{0.07,-0.115216},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1218,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.07,0.115216},
									1
								},
								
								{
									"WeaponAim",
									{0,0.132432},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,0.115216},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.14,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1218,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.07,-0.115216},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.132432},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.132432},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.151351},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,-0.11469},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,-0.131074},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,-0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.14,5.7888099e-009},
									1
								},
								
								{
									"WeaponAim",
									{-0.16,6.6157799e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.121244,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{-0.13856401,0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.07,0.11469},
									1
								},
								
								{
									"WeaponAim",
									{-0.079999998,0.131074},
									1
								},
								{},
								
								{
									"WeaponAim",
									{1.22392e-008,0.132432},
									1
								},
								
								{
									"WeaponAim",
									{1.39876e-008,0.151351},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,0.11469},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,0.131074},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.14,-1.57924e-009},
									1
								},
								
								{
									"WeaponAim",
									{0.16,-1.80485e-009},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.121244,-0.066216201},
									1
								},
								
								{
									"WeaponAim",
									{0.13856401,-0.075675704},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.07,-0.11469},
									1
								},
								
								{
									"WeaponAim",
									{0.079999998,-0.131074},
									1
								},
								{}
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.094594598},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,-0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.086999997,0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{0,0.094594598},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.086999997,-0.047297299},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.082297303},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.094594598},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"WeaponAim",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.066216201},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.066216201},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.066216201},
									1
								}
							};
						};
					};
					class AAMissile
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.236486},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.205743},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,-0.118243},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2175,0.118243},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.205743},
									1
								},
								
								{
									"WeaponAim",
									{0,0.236486},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.205743},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,0.118243},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2175,-0.118243},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.205743},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.236486},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.066216201},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.066216201},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.066216201},
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition="ATmissile";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.17027},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,-0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,-0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1566,0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{0.090000004,0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{0,0.17027},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{-0.18000001,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1566,-0.085135102},
									1
								},
								
								{
									"WeaponAim",
									{-0.090000004,-0.14813501},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.17027},
									1
								},
								{},
								
								{
									"Target",
									{0,-0.066216201},
									1
								},
								
								{
									"Target",
									{0.07,0},
									1
								},
								
								{
									"Target",
									{0,0.066216201},
									1
								},
								
								{
									"Target",
									{-0.07,0},
									1
								},
								
								{
									"Target",
									{0,-0.066216201},
									1
								}
							};
						};
					};
					class Rockets
					{
						condition="Rocket";
						class Circle
						{
							type="line";
							points[]=
							{
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,0.0094594602},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.0094594602},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.113514},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,-0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,-0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{0.1044,0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{0.059999999,0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{0,0.113514},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{-0.12,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.1044,-0.056756798},
									1
								},
								
								{
									"WeaponAim",
									{-0.059999999,-0.098756798},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.113514},
									1
								},
								{}
							};
						};
					};
					class AltScale
					{
						type="scale";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						align="right";
						pos[]={0.86000001,0.81999999};
						right[]={0.94,0.81999999};
						down[]={0.86000001,0.87};
						lineXleft=0.82499999;
						lineYright=0.83499998;
						lineXleftMajor=0.82499999;
						lineYrightMajor=0.84500003;
						bottom=0.2;
						top=0.85000002;
						center=0.5;
						step=20;
						StepSize="(0.85- 0.2)/20";
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class SpeedScale
					{
						type="scale";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						align="right";
						pos[]=
						{
							0.059999999,
							"0.82-0.85+0.2"
						};
						right[]=
						{
							0.14,
							"0.82-0.85+0.2"
						};
						down[]=
						{
							0.059999999,
							"0.87-0.85+0.2"
						};
						lineXleft="0.18 + 0.82 - 0.825";
						lineYright="0.18 + 0.82 - 0.835";
						lineXleftMajor="0.18 + 0.82 - 0.825";
						lineYrightMajor="0.18 + 0.82 - 0.845";
						bottom=0.85000002;
						center=0.5;
						top=0.2;
						step=20;
						StepSize="(0.85- 0.2)/20";
						horizontal=0;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class Gear
					{
						condition="ils";
						class text
						{
							align="right";
							down[]=
							{
								{0.83999997,0.924227},
								1
							};
							pos[]=
							{
								{0.83999997,0.88453603},
								1
							};
							right[]=
							{
								{0.89999998,0.88453603},
								1
							};
							scale=0.5;
							source="static";
							sourcescale=1;
							text="GEAR";
							type="text";
						};
					};
					class Flaps
					{
						condition="flaps";
						class text
						{
							type="text";
							source="static";
							text="FLAPS";
							align="right";
							scale=0.5;
							sourceScale=1;
							pos[]=
							{
								{0.83999997,0.93000001},
								1
							};
							right[]=
							{
								{0.89999998,0.93000001},
								1
							};
							down[]=
							{
								{0.83999997,0.97000003},
								1
							};
						};
					};
					class weapons
					{
						type="text";
						source="weapon";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.88},
							1
						};
						right[]=
						{
							{0.16,0.88},
							1
						};
						down[]=
						{
							{0.1,0.92000002},
							1
						};
					};
					class ammo
					{
						type="text";
						source="ammo";
						align="right";
						scale=0.5;
						sourceScale=1;
						pos[]=
						{
							{0.1,0.93000001},
							1
						};
						right[]=
						{
							{0.16,0.93000001},
							1
						};
						down[]=
						{
							{0.1,0.97000003},
							1
						};
					};
					class VspeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="vspeed";
						sourceScale=1;
						pos[]=
						{
							
							{
								0.86000001,
								"0.52-0.4"
							},
							1
						};
						right[]=
						{
							
							{
								0.94,
								"0.52-0.4"
							},
							1
						};
						down[]=
						{
							
							{
								0.86000001,
								"0.57-0.4"
							},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						scale=1;
						source="Heading";
						sourceScale=1;
						align="center";
						pos[]=
						{
							"0.21-0.01",
							0
						};
						right[]=
						{
							"0.29-0.01",
							0
						};
						down[]=
						{
							"0.21-0.01",
							0.050000001
						};
						lineXleft=0.059999999;
						lineYright=0.050000001;
						lineXleftMajor=0.059999999;
						lineYrightMajor=0.039999999;
						bottom=0.80000001;
						center=0.5;
						top=0.2;
						step="18/9";
						StepSize="(0.80- 0.2)/20";
						horizontal=1;
						min="none";
						max="none";
						numberEach=5;
						majorLineEach=5;
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0.12,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{-0.12,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,0.0227027},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,-0.0227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.227027},
										1
									},
									
									{
										"ILS_H",
										{0,0.227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.113514},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.113514},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,0.227027},
										1
									},
									
									{
										"ILS_H",
										{-0.024,0.227027},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.113514},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.113514},
										1
									},
									{},
									
									{
										"ILS_H",
										{0.024,-0.227027},
										1
									},
									
									{
										"ILS_H",
										{-0.024,-0.227027},
										1
									}
								};
							};
						};
					};
				};
			};
			class HUD2: HUD
			{
				topLeft="HUD2 LH";
				topRight="HUD2 PH";
				bottomLeft="HUD2 LD";
			};
		};
	};
	class globemaster_c17_701: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME2";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.701\C17-1.paa",
			"\globemaster_c17\liveries\texture.701\C17-2.paa",
			"\globemaster_c17\liveries\texture.701\C17-3.paa",
			"\globemaster_c17\liveries\texture.701\C17-5.paa",
			"\globemaster_c17\liveries\texture.701\C17-6.paa",
			"\globemaster_c17\liveries\texture.701\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.701\C17-8.paa",
			"\globemaster_c17\liveries\texture.701\Eng_t.paa",
			"\globemaster_c17\liveries\texture.701\Lwng.paa",
			"\globemaster_c17\liveries\texture.701\Rwng.paa",
			"\globemaster_c17\liveries\texture.701\Tail.paa"
		};
	};
	class globemaster_c17_703: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME3";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.703\C17-1.paa",
			"\globemaster_c17\liveries\texture.703\C17-2.paa",
			"\globemaster_c17\liveries\texture.703\C17-3.paa",
			"\globemaster_c17\liveries\texture.703\C17-5.paa",
			"\globemaster_c17\liveries\texture.703\C17-6.paa",
			"\globemaster_c17\liveries\texture.703\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.703\C17-8.paa",
			"\globemaster_c17\liveries\texture.703\Eng_t.paa",
			"\globemaster_c17\liveries\texture.703\Lwng.paa",
			"\globemaster_c17\liveries\texture.703\Rwng.paa",
			"\globemaster_c17\liveries\texture.703\Tail.paa"
		};
	};
	class globemaster_c17_704: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME4";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.704\C17-1.paa",
			"\globemaster_c17\liveries\texture.704\C17-2.paa",
			"\globemaster_c17\liveries\texture.704\C17-3.paa",
			"\globemaster_c17\liveries\texture.704\C17-5.paa",
			"\globemaster_c17\liveries\texture.704\C17-6.paa",
			"\globemaster_c17\liveries\texture.704\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.704\C17-8.paa",
			"\globemaster_c17\liveries\texture.704\Eng_t.paa",
			"\globemaster_c17\liveries\texture.704\Lwng.paa",
			"\globemaster_c17\liveries\texture.704\Rwng.paa",
			"\globemaster_c17\liveries\texture.704\Tail.paa"
		};
	};
	class globemaster_c17_705: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME5";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.705\C17-1.paa",
			"\globemaster_c17\liveries\texture.705\C17-2.paa",
			"\globemaster_c17\liveries\texture.705\C17-3.paa",
			"\globemaster_c17\liveries\texture.705\C17-5.paa",
			"\globemaster_c17\liveries\texture.705\C17-6.paa",
			"\globemaster_c17\liveries\texture.705\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.705\C17-8.paa",
			"\globemaster_c17\liveries\texture.705\Eng_t.paa",
			"\globemaster_c17\liveries\texture.705\Lwng.paa",
			"\globemaster_c17\liveries\texture.705\Rwng.paa",
			"\globemaster_c17\liveries\texture.705\Tail.paa"
		};
	};
	class globemaster_c17_altus: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME6";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.altus\C17-1.paa",
			"\globemaster_c17\liveries\texture.altus\C17-2.paa",
			"\globemaster_c17\liveries\texture.altus\C17-3.paa",
			"\globemaster_c17\liveries\texture.altus\C17-5.paa",
			"\globemaster_c17\liveries\texture.altus\C17-6.paa",
			"\globemaster_c17\liveries\texture.altus\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.altus\C17-8.paa",
			"\globemaster_c17\liveries\texture.altus\Eng_t.paa",
			"\globemaster_c17\liveries\texture.altus\Lwng.paa",
			"\globemaster_c17\liveries\texture.altus\Rwng.paa",
			"\globemaster_c17\liveries\texture.altus\Tail.paa"
		};
	};
	class globemaster_c17_dover: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME7";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.dover\C17-1.paa",
			"\globemaster_c17\liveries\texture.dover\C17-2.paa",
			"\globemaster_c17\liveries\texture.dover\C17-3.paa",
			"\globemaster_c17\liveries\texture.dover\C17-5.paa",
			"\globemaster_c17\liveries\texture.dover\C17-6.paa",
			"\globemaster_c17\liveries\texture.dover\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.dover\C17-8.paa",
			"\globemaster_c17\liveries\texture.dover\Eng_t.paa",
			"\globemaster_c17\liveries\texture.dover\Lwng.paa",
			"\globemaster_c17\liveries\texture.dover\Rwng.paa",
			"\globemaster_c17\liveries\texture.dover\Tail.paa"
		};
	};
	class globemaster_c17_edwards: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME8";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.edwards\C17-1.paa",
			"\globemaster_c17\liveries\texture.edwards\C17-2.paa",
			"\globemaster_c17\liveries\texture.edwards\C17-3.paa",
			"\globemaster_c17\liveries\texture.edwards\C17-5.paa",
			"\globemaster_c17\liveries\texture.edwards\C17-6.paa",
			"\globemaster_c17\liveries\texture.edwards\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.edwards\C17-8.paa",
			"\globemaster_c17\liveries\texture.edwards\Eng_t.paa",
			"\globemaster_c17\liveries\texture.edwards\Lwng.paa",
			"\globemaster_c17\liveries\texture.edwards\Rwng.paa",
			"\globemaster_c17\liveries\texture.edwards\Tail.paa"
		};
	};
	class globemaster_c17_Elmendorf: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME9";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.Elmendorf\C17-1.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\C17-2.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\C17-3.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\C17-5.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\C17-6.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\C17-8.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\Eng_t.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\Lwng.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\Rwng.paa",
			"\globemaster_c17\liveries\texture.Elmendorf\Tail.paa"
		};
	};
	class globemaster_c17_hickam: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME10";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.hickam\C17-1.paa",
			"\globemaster_c17\liveries\texture.hickam\C17-2.paa",
			"\globemaster_c17\liveries\texture.hickam\C17-3.paa",
			"\globemaster_c17\liveries\texture.hickam\C17-5.paa",
			"\globemaster_c17\liveries\texture.hickam\C17-6.paa",
			"\globemaster_c17\liveries\texture.hickam\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.hickam\C17-8.paa",
			"\globemaster_c17\liveries\texture.hickam\Eng_t.paa",
			"\globemaster_c17\liveries\texture.hickam\Lwng.paa",
			"\globemaster_c17\liveries\texture.hickam\Rwng.paa",
			"\globemaster_c17\liveries\texture.hickam\Tail.paa"
		};
	};
	class globemaster_c17_IAF: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME11";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.IAF\C17-1.paa",
			"\globemaster_c17\liveries\texture.IAF\C17-2.paa",
			"\globemaster_c17\liveries\texture.IAF\C17-3.paa",
			"\globemaster_c17\liveries\texture.IAF\C17-5.paa",
			"\globemaster_c17\liveries\texture.IAF\C17-6.paa",
			"\globemaster_c17\liveries\texture.IAF\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.IAF\C17-8.paa",
			"\globemaster_c17\liveries\texture.IAF\Eng_t.paa",
			"\globemaster_c17\liveries\texture.IAF\Lwng.paa",
			"\globemaster_c17\liveries\texture.IAF\Rwng.paa",
			"\globemaster_c17\liveries\texture.IAF\Tail.paa"
		};
	};
	class globemaster_c17_March: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME12";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.March\C17-1.paa",
			"\globemaster_c17\liveries\texture.March\C17-2.paa",
			"\globemaster_c17\liveries\texture.March\C17-3.paa",
			"\globemaster_c17\liveries\texture.March\C17-5.paa",
			"\globemaster_c17\liveries\texture.March\C17-6.paa",
			"\globemaster_c17\liveries\texture.March\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.March\C17-8.paa",
			"\globemaster_c17\liveries\texture.March\Eng_t.paa",
			"\globemaster_c17\liveries\texture.March\Lwng.paa",
			"\globemaster_c17\liveries\texture.March\Rwng.paa",
			"\globemaster_c17\liveries\texture.March\Tail.paa"
		};
	};
	class globemaster_c17_mcchord: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME13";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.mcchord\C17-1.paa",
			"\globemaster_c17\liveries\texture.mcchord\C17-2.paa",
			"\globemaster_c17\liveries\texture.mcchord\C17-3.paa",
			"\globemaster_c17\liveries\texture.mcchord\C17-5.paa",
			"\globemaster_c17\liveries\texture.mcchord\C17-6.paa",
			"\globemaster_c17\liveries\texture.mcchord\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.mcchord\C17-8.paa",
			"\globemaster_c17\liveries\texture.mcchord\Eng_t.paa",
			"\globemaster_c17\liveries\texture.mcchord\Lwng.paa",
			"\globemaster_c17\liveries\texture.mcchord\Rwng.paa",
			"\globemaster_c17\liveries\texture.mcchord\Tail.paa"
		};
	};
	class globemaster_c17_McGuire: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME14";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.McGuire\C17-1.paa",
			"\globemaster_c17\liveries\texture.McGuire\C17-2.paa",
			"\globemaster_c17\liveries\texture.McGuire\C17-3.paa",
			"\globemaster_c17\liveries\texture.McGuire\C17-5.paa",
			"\globemaster_c17\liveries\texture.McGuire\C17-6.paa",
			"\globemaster_c17\liveries\texture.McGuire\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.McGuire\C17-8.paa",
			"\globemaster_c17\liveries\texture.McGuire\Eng_t.paa",
			"\globemaster_c17\liveries\texture.McGuire\Lwng.paa",
			"\globemaster_c17\liveries\texture.McGuire\Rwng.paa",
			"\globemaster_c17\liveries\texture.McGuire\Tail.paa"
		};
	};
	class globemaster_c17_Mississipi: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME15";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.Mississipi\C17-1.paa",
			"\globemaster_c17\liveries\texture.Mississipi\C17-2.paa",
			"\globemaster_c17\liveries\texture.Mississipi\C17-3.paa",
			"\globemaster_c17\liveries\texture.Mississipi\C17-5.paa",
			"\globemaster_c17\liveries\texture.Mississipi\C17-6.paa",
			"\globemaster_c17\liveries\texture.Mississipi\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.Mississipi\C17-8.paa",
			"\globemaster_c17\liveries\texture.Mississipi\Eng_t.paa",
			"\globemaster_c17\liveries\texture.Mississipi\Lwng.paa",
			"\globemaster_c17\liveries\texture.Mississipi\Rwng.paa",
			"\globemaster_c17\liveries\texture.Mississipi\Tail.paa"
		};
	};
	class globemaster_c17_NATO: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME16";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.NATO\C17-1.paa",
			"\globemaster_c17\liveries\texture.NATO\C17-2.paa",
			"\globemaster_c17\liveries\texture.NATO\C17-3.paa",
			"\globemaster_c17\liveries\texture.NATO\C17-5.paa",
			"\globemaster_c17\liveries\texture.NATO\C17-6.paa",
			"\globemaster_c17\liveries\texture.NATO\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.NATO\C17-8.paa",
			"\globemaster_c17\liveries\texture.NATO\Eng_t.paa",
			"\globemaster_c17\liveries\texture.NATO\Lwng.paa",
			"\globemaster_c17\liveries\texture.NATO\Rwng.paa",
			"\globemaster_c17\liveries\texture.NATO\Tail.paa"
		};
	};
	class globemaster_c17_natoPAPA: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME17";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.natoPAPA\C17-1.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\C17-2.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\C17-3.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\C17-5.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\C17-6.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\C17-8.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\Eng_t.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\Lwng.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\Rwng.paa",
			"\globemaster_c17\liveries\texture.natoPAPA\Tail.paa"
		};
	};
	class globemaster_c17_Qatar: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME18";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.Qatar\C17-1.paa",
			"\globemaster_c17\liveries\texture.Qatar\C17-2.paa",
			"\globemaster_c17\liveries\texture.Qatar\C17-3.paa",
			"\globemaster_c17\liveries\texture.Qatar\C17-5.paa",
			"\globemaster_c17\liveries\texture.Qatar\C17-6.paa",
			"\globemaster_c17\liveries\texture.Qatar\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.Qatar\C17-8.paa",
			"\globemaster_c17\liveries\texture.Qatar\Eng_t.paa",
			"\globemaster_c17\liveries\texture.Qatar\Lwng.paa",
			"\globemaster_c17\liveries\texture.Qatar\Rwng.paa",
			"\globemaster_c17\liveries\texture.Qatar\Tail.paa"
		};
	};
	class globemaster_c17_RAAF: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME19";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.RAAF\C17-1.paa",
			"\globemaster_c17\liveries\texture.RAAF\C17-2.paa",
			"\globemaster_c17\liveries\texture.RAAF\C17-3.paa",
			"\globemaster_c17\liveries\texture.RAAF\C17-5.paa",
			"\globemaster_c17\liveries\texture.RAAF\C17-6.paa",
			"\globemaster_c17\liveries\texture.RAAF\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.RAAF\C17-8.paa",
			"\globemaster_c17\liveries\texture.RAAF\Eng_t.paa",
			"\globemaster_c17\liveries\texture.RAAF\Lwng.paa",
			"\globemaster_c17\liveries\texture.RAAF\Rwng.paa",
			"\globemaster_c17\liveries\texture.RAAF\Tail.paa"
		};
	};
	class globemaster_c17_RCAF: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME20";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.RCAF\C17-1.paa",
			"\globemaster_c17\liveries\texture.RCAF\C17-2.paa",
			"\globemaster_c17\liveries\texture.RCAF\C17-3.paa",
			"\globemaster_c17\liveries\texture.RCAF\C17-5.paa",
			"\globemaster_c17\liveries\texture.RCAF\C17-6.paa",
			"\globemaster_c17\liveries\texture.RCAF\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.RCAF\C17-8.paa",
			"\globemaster_c17\liveries\texture.RCAF\Eng_t.paa",
			"\globemaster_c17\liveries\texture.RCAF\Lwng.paa",
			"\globemaster_c17\liveries\texture.RCAF\Rwng.paa",
			"\globemaster_c17\liveries\texture.RCAF\Tail.paa"
		};
	};
	class globemaster_c17_Stewart: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME21";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.Stewart\C17-1.paa",
			"\globemaster_c17\liveries\texture.Stewart\C17-2.paa",
			"\globemaster_c17\liveries\texture.Stewart\C17-3.paa",
			"\globemaster_c17\liveries\texture.Stewart\C17-5.paa",
			"\globemaster_c17\liveries\texture.Stewart\C17-6.paa",
			"\globemaster_c17\liveries\texture.Stewart\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.Stewart\C17-8.paa",
			"\globemaster_c17\liveries\texture.Stewart\Eng_t.paa",
			"\globemaster_c17\liveries\texture.Stewart\Lwng.paa",
			"\globemaster_c17\liveries\texture.Stewart\Rwng.paa",
			"\globemaster_c17\liveries\texture.Stewart\Tail.paa"
		};
	};
	class globemaster_c17_therock: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME22";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.therock\C17-1.paa",
			"\globemaster_c17\liveries\texture.therock\C17-2.paa",
			"\globemaster_c17\liveries\texture.therock\C17-3.paa",
			"\globemaster_c17\liveries\texture.therock\C17-5.paa",
			"\globemaster_c17\liveries\texture.therock\C17-6.paa",
			"\globemaster_c17\liveries\texture.therock\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.therock\C17-8.paa",
			"\globemaster_c17\liveries\texture.therock\Eng_t.paa",
			"\globemaster_c17\liveries\texture.therock\Lwng.paa",
			"\globemaster_c17\liveries\texture.therock\Rwng.paa",
			"\globemaster_c17\liveries\texture.therock\Tail.paa"
		};
	};
	class globemaster_c17_travis: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME23";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.travis\C17-1.paa",
			"\globemaster_c17\liveries\texture.travis\C17-2.paa",
			"\globemaster_c17\liveries\texture.travis\C17-3.paa",
			"\globemaster_c17\liveries\texture.travis\C17-5.paa",
			"\globemaster_c17\liveries\texture.travis\C17-6.paa",
			"\globemaster_c17\liveries\texture.travis\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.travis\C17-8.paa",
			"\globemaster_c17\liveries\texture.travis\Eng_t.paa",
			"\globemaster_c17\liveries\texture.travis\Lwng.paa",
			"\globemaster_c17\liveries\texture.travis\Rwng.paa",
			"\globemaster_c17\liveries\texture.travis\Tail.paa"
		};
	};
	class globemaster_c17_UAE: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME24";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.UAE\C17-1.paa",
			"\globemaster_c17\liveries\texture.UAE\C17-2.paa",
			"\globemaster_c17\liveries\texture.UAE\C17-3.paa",
			"\globemaster_c17\liveries\texture.UAE\C17-5.paa",
			"\globemaster_c17\liveries\texture.UAE\C17-6.paa",
			"\globemaster_c17\liveries\texture.UAE\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.UAE\C17-8.paa",
			"\globemaster_c17\liveries\texture.UAE\Eng_t.paa",
			"\globemaster_c17\liveries\texture.UAE\Lwng.paa",
			"\globemaster_c17\liveries\texture.UAE\Rwng.paa",
			"\globemaster_c17\liveries\texture.UAE\Tail.paa"
		};
	};
	class globemaster_c17_wright_patt: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME25";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.wright-patt\C17-1.paa",
			"\globemaster_c17\liveries\texture.wright-patt\C17-2.paa",
			"\globemaster_c17\liveries\texture.wright-patt\C17-3.paa",
			"\globemaster_c17\liveries\texture.wright-patt\C17-5.paa",
			"\globemaster_c17\liveries\texture.wright-patt\C17-6.paa",
			"\globemaster_c17\liveries\texture.wright-patt\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.wright-patt\C17-8.paa",
			"\globemaster_c17\liveries\texture.wright-patt\Eng_t.paa",
			"\globemaster_c17\liveries\texture.wright-patt\Lwng.paa",
			"\globemaster_c17\liveries\texture.wright-patt\Rwng.paa",
			"\globemaster_c17\liveries\texture.wright-patt\Tail.paa"
		};
	};
	class globemaster_c17_ZZ172_RAF: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME26";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-1.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-2.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-3.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-5.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-6.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\C17-8.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\Eng_t.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\Lwng.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\Rwng.paa",
			"\globemaster_c17\liveries\texture.ZZ172_RAF\Tail.paa"
		};
	};
	class globemaster_c17_Jordan: globemaster_c17
	{
		displayName="$STR_GLOBEMASTER_C17_NAME27";
		hiddenSelections[]=
		{
			"c17-1",
			"c17-2",
			"c17-3",
			"c17-5",
			"c17-6",
			"c17-7_t",
			"c17-8",
			"eng_t",
			"lwng",
			"rwng",
			"tail"
		};
		hiddenSelectionsTextures[]=
		{
			"\globemaster_c17\liveries\texture.Jordan\C17-1.paa",
			"\globemaster_c17\liveries\texture.Jordan\C17-2.paa",
			"\globemaster_c17\liveries\texture.Jordan\C17-3.paa",
			"\globemaster_c17\liveries\texture.Jordan\C17-5.paa",
			"\globemaster_c17\liveries\texture.Jordan\C17-6.paa",
			"\globemaster_c17\liveries\texture.Jordan\C17-7_t.paa",
			"\globemaster_c17\liveries\texture.Jordan\C17-8.paa",
			"\globemaster_c17\liveries\texture.Jordan\Eng_t.paa",
			"\globemaster_c17\liveries\texture.Jordan\Lwng.paa",
			"\globemaster_c17\liveries\texture.Jordan\Rwng.paa",
			"\globemaster_c17\liveries\texture.Jordan\Tail.paa"
		};
	};
	class PlaneWreck;
	class globemaster_c17_Wreck: PlaneWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\globemaster_c17\globemaster_c17_Wreck.p3d";
		typicalCargo[]={};
		irTarget="false";
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
		class EventHandlers
		{
			init="[_this select 0] exec ""\globemaster_c17\scr\init.sqs"";";
		};
		class Library
		{
			libTextDesc="$STR_GLOBEMASTER_DESCR";
		};
	};
    class sab_UN_OA_Mi24V: Mi24_V
	{
		author="Sabre[Dust]";
		scope=1;
		displayName="UN Mi24V";
		crew="UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=2;
		faction="sab_UN_OA_faction";
		vehicleClass="sab_UN_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\mi24v_UN1.paa",
			"sab_UN_OA\data\mi24v_UN2.paa",
			"sab_UN_OA\data\UN_Mi24_Mlod.paa"
		};
	};
	class sab_UN_OA_Mi24P: Mi24_P
	{
		author="Sabre[Dust]";
		scope=2;
		displayName="UN Mi24P";
		crew="UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=2;
		faction="sab_UN_OA_faction";
		vehicleClass="sab_UN_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\mi24v_UN1.paa",
			"sab_UN_OA\data\mi24v_UN2.paa",
			"sab_UN_OA\data\UN_Mi24_Mlod.paa"
		};
	};
	class sab_UN_OA_Su25: Su25_CDF
	{
		author="Sabre[Dust]";
		scope=1;
		displayName="UN Su25";
		crew="UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=2;
		faction="sab_UN_OA_faction";
		vehicleClass="sab_UN_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\su25_UN1.paa",
			"sab_UN_OA\data\su25_UN2.paa"
		};
	};
	class sab_UN_OA_C130: C130J
	{
		author="Sabre[Dust]";
		scope=2;
		displayName="UN C130";
		crew="Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=2;
		faction="sab_UN_OA_faction";
		vehicleClass="sab_UN_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\c130j_body_UN.paa",
			"sab_UN_OA\data\c130j_wings_UN.paa"
		};
	};
	class sab_UN_OA_An2: An2_1_TK_CIV_EP1
	{
		author="Sabre[Dust]";
		scope=2;
		displayName="UN Annushka";
		crew="UN_CDF_Soldier_Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=2;
		faction="sab_UN_OA_faction";
		vehicleClass="sab_UN_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\UN_an2_1.paa",
			"sab_UN_OA\data\UN_an2_2.paa",
			"sab_UN_OA\data\UN_an2_wings.paa"
		};
	};
	class sab_RC_OA_An2: An2_1_TK_CIV_EP1
	{
		author="Sabre[Dust]";
		scope=2;
		displayName="RC Ani";
		crew="Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=3;
		faction="sab_CIV_OA_faction";
		vehicleClass="sab_CIV_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\RC_an2_1.paa",
			"sab_UN_OA\data\RC_an2_2.paa",
			"sab_UN_OA\data\RC_an2_wings.paa"
		};
	};
	class sab_RC_OA_C130: C130J
	{
		author="Sabre[Dust]";
		scope=2;
		displayName="RC C130";
		crew="Pilot_EP1";
		typicalCargo[]=
		{
			""
		};
		side=3;
		faction="sab_CIV_OA_faction";
		vehicleClass="sab_CIV_OA_air";
		hiddenSelectionsTextures[]=
		{
			"sab_UN_OA\data\c130j_body_RC.paa",
			"sab_UN_OA\data\c130j_wings_RC.paa"
		};
	};
};
