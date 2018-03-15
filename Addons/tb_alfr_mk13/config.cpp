class CfgPatches {
	class tb_alfr_mk13 {
		author = "ALFR Mod";
		authors[] = {"Toadball"};
		units[] = {};
		weapons[] ={"tb_launcher_mk13"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class Mode_SemiAuto;
class CfgWeapons {
	class launch_RPG32_F;
	class tb_launcher_mk13 : launch_RPG32_F {
		author = "ToadBall";
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		initSpeed = -1;
		modes[] = {
			"Single"
		};
		class Single : Mode_SemiAuto {
			sounds[] = {
				"StandardSound"
			};
			class BaseSoundModeType { };
			class StandardSound : BaseSoundModeType {
				begin1[] = {
					"tb_alfr_mk13\data\sound\gun73",
					7,
					1,
					2500
				};
				soundBegin[] = {
					"begin1",
					1
				};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 10;
			aiRateOfFireDistance = 450;
			minRange = 20; 
			minRangeProbab = 0.1;
			midRange = 350; 
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.4;
		};		
		sounds[] = {"StandardSound"};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.177828,1,15};
		displayName="Mk 13 SRAAW";
		model = "tb_alfr_mk13\MAAWS.p3d";
		handAnim[]={"OFP2_ManSkeleton","tb_alfr_mk13\data\MAAWS.rtm"};
		reloadAction = "ReloadRPG";
		magazinereloadtime = 3;
		magazines[] = {"tb_mk13_heat","tb_mk13_hedp","tb_mk13_smoke"};
		modelOptics = "\tb_alfr_mk13\M3_optic_3x.p3d";
		visionMode[] = {"Normal"};
		opticsZoomMin=0.14389; 
		opticsZoomMax=0.14389;
		distanceZoomMin=100; 
		distanceZoomMax=100;
		picture="\tb_alfr_mk13\data\w_mk13_ca.paa";
		class Library {libTextDesc = "Mk 13 SRAAW is the AAF's designation for the Carl Gustav 84mm Recoilless Rifle";};
		descriptionShort = "Mk 13 SRAAW<br/>84mm Recoilless Rifle";
	    ace_reloadlaunchers_enabled = 1;
        ace_overpressure_range = 15;
        ace_overpressure_angle = 70;
        ace_overpressure_damage = 0.75;
	};
};

class CfgMagazines {
	class RPG32_F;
	class tb_mk13_heat : RPG32_F {
		author = "ToadBall";
		ammo = "tb_mk13_heat";
		descriptionshort = "Type: HEAT<br/>Used in: Mk 13 SRAAW";
		displayname = "84mm HEAT";
		displaynameshort = "HEAT";
		initspeed = 255;
		picture = "\tb_alfr_mk13\data\m_M136_ca.paa";
		scope = 2;
		type = "2 * 255";
		mass = 60;
		modelSpecial = "\tb_alfr_mk13\MAAWS_loaded.p3d";
	};
	class RPG32_HE_F;
	class tb_mk13_hedp : RPG32_HE_F {
		author = "ToadBall";
		ammo = "tb_mk13_hedp";
		descriptionshort = "Type: HEDP (High Explosive Dual Purpose)<br/>Used in: Mk 13 SRAAW";
		displayname = "84mm HEDP";
		displaynameshort = "HEDP";
		initspeed = 255;
		picture = "\tb_alfr_mk13\data\m_M136_ca.paa";
		scope = 2;
		type = "2 * 256";
		mass = 60;
		modelSpecial = "\tb_alfr_mk13\MAAWS_loaded.p3d";
	};
	class tb_mk13_smoke : RPG32_HE_F {
		author = "ToadBall";
		initspeed = 255;
		descriptionshort = "Type: Smoke<br/>Used in: Mk 13 SRAAW";
		displayname = "84mm Smoke";
		displaynameshort = "SMOKE";	
		ammo = "tb_mk13_smoke";
		picture = "\tb_alfr_mk13\data\m_M136_ca.paa";
		type = "2 * 256";
		scope = 2;
		mass = 60;
		modelSpecial = "\tb_alfr_mk13\MAAWS_loaded.p3d";
	};
};

class CfgAmmo {
	class R_PG32V_F;
	class R_TBG32V_F;
	class tb_mk13_heat : R_PG32V_F {
		ACE_FRAG_SKIP = 1;
		ACE_FRAG_FORCE = 0;
		ACE_FRAG_METAL = 2400;
		ACE_FRAG_CHARGE = 500;
		ACE_FRAG_GURNEY_C = 2800; //Assuming similar to Octol 72/25
		ACE_FRAG_GURNEY_K = 1/2;
		audiblefire = 65;
		hit = 700;
		indirecthit = 30;
		indirecthitrange = 5;
		inittime = 0.05;
		maxspeed = 330;
		thrust = 295;
		thrusttime = 0.5;
	};
	class tb_mk13_hedp : R_TBG32V_F {
		ACE_FRAG_SKIP = 0;
		ACE_FRAG_FORCE = 1;
		ACE_FRAG_METAL = 2500;
		ACE_FRAG_CHARGE = 600;
		ACE_FRAG_GURNEY_C = 2800; //Assuming similar to Octol 72/25
		ACE_FRAG_GURNEY_K = 1/2;
		audiblefire = 65;
		hit = 450;
		indirecthit = 60;
		indirecthitrange = 5;
		inittime = 0.05;
		maxspeed = 255;
		sideairfriction = 0.1;
		thrusttime = 0.5;
		thrust = 1;
		allowAgainstInfantry = 1;
		explosive = 0.9;
	};
	class tb_mk13_smoke : R_TBG32V_F {
		ACE_FRAG_SKIP = 1;
		ACE_FRAG_FORCE = 0;
		ACE_FRAG_METAL = 3100;
		ACE_FRAG_CHARGE = 100;
		ACE_FRAG_GURNEY_C = 2800; //Assuming similar to Octol 72/25
		ACE_FRAG_GURNEY_K = 1/2;
		audiblefire = 65;
		hit = 15;
		indirecthit = 2;
		indirecthitrange = 3;
		explosioneffects = "TB_MK13SmokeEffects";
		allowAgainstInfantry = 1;
		inittime = 0.05;
		maxspeed = 255;
		sideairfriction = 0.1;
		thrust = 1;
		thrusttime = 0.5;
		explosive = 1;
	};
};
class TB_MK13SmokeEffects {
	class LightExpSmall {
		simulation = "light";
		type = "ExploLight";
		position[] = {0, 1.3, 0};
		intensity = 0.0005;
		interval = 1;
		lifeTime = 0.8;
	};

	class SmokeCloud {
		simulation = "particles";
		type = "TB_MK13SmokeCloudBigLight";
		position[] = {0, 0.6, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 2.2;
	};

	class SmokeCloudLinger {
		simulation = "particles";
		type = "TB_MK13SmokeCloudBigLightSlow";
		position[] = {0, 0.6, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 30;
	};
};

class CfgCloudlets {
	class Default;
	class TB_MK13SmokeCloudBigLight : Default {
		interval = "0.4 * interval";
		circleRadius = 3.3;
		circleVelocity[] = {0, 0.03, 0};
		angleVar = 1;
		animationName = "";
		timerPeriod = 1;
		lifeTime = 30;
		moveVelocity[] = {0.05, 0.085, 0.05};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.025;
		size[] = {"0.0125 * intensity + 7", "0.0125 * intensity + 13", "0.0125 * intensity + 14", "0.0125 * intensity + 16"};
		color[] = {{0.8, 0.8, 0.8, 0.8}, {0.9, 0.9, 0.9, 0.8}, {0.95, 0.95, 0.95, 0.75}, {0.97, 0.97, 0.97, 0.65}, {0.97, 0.97, 0.97, 0.6}, {0.98, 0.98, 0.98, 0.6}, {1, 1, 1, 0}};
		animationSpeed[] = {1.5, 0.5, 0.3, 0.25, 0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {5, 12, 5};
		MoveVelocityVar[] = {0.05, 0.05, 0.05};
		rotationVelocityVar = 20;
		sizeVar = 0.7;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class TB_MK13SmokeCloudBigLightSlow : TB_MK13SmokeCloudBigLight {
		circleRadius = 2.9;
		interval = 0.8;
		positionVar[] = {4, 8, 4};
	};
};