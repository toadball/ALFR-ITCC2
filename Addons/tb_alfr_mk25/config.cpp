class CfgPatches {
	class tb_alfr_mk25 {
		author = "ALFR Mod";
		authors[] = {"Kiory","Toadball"};
		units[] = {};
		weapons[] = {"tb_arifle_mk25","tb_arifle_mk25_rco","tb_acc_mk25S"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr","cba_jr"};
	};
};
/*external*/ class Mode_SemiAuto;
/*external*/ class asdg_MuzzleSlot;
/*external*/ class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
				class compatibleItems;
			 };
/*external*/ class asdg_FrontSideRail;
/*external*/ class asdg_OpticRail1913;
/*external*/ class asdg_UnderSlot;

class CfgWeapons {
	class Rifle_Long_Base_F;
	class EBR_base_F: Rifle_Long_Base_F {
		class Single;
	};
	class tb_arifle_mk25_base : EBR_base_F {
		hasBipod = 0;
		deployedPivot = "bipodPivot";	
		magazines[] = {"tb_20rnd_762x51_mk25_mag","20Rnd_762x51_Mag"};
		model = "\tb_alfr_mk25\kio_SR25_EC.p3d";
		picture = "\tb_alfr_mk25\Data\gear\gear_sr25ec_ca.paa";	
		author = "Model: Kiory Config: Toadball";
		displayName = "Mk 25";
		reloadAction = "GestureReloadSR25";		
		maxZeroing = 600;
		discreteDistanceInitIndex = 0;	
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;	
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Marksman rifle <br/>Caliber: 7.62x51 mm NATO";
		handAnim[] = {"OFP2_ManSkeleton","\tb_alfr_mk25\Data\anims\sr25_handanim.rtm"};
		modes[] = {"Single","single_close_optics","single_medium_optics","single_far_optics"};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.17782794,1,5};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
		reloadMagazineSound[] = {"tb_alfr_mk25\Data\sounds\Reload",1.5,1,10};
		class WeaponSlotsInfo {
			mass = 100;
			allowedSlots[] = {};
			class FrontSideRail_mk25 : asdg_FrontSideRail {};
			class OpticRail_mk25 : asdg_OpticRail1913 {};
			class MuzzleSlot_mk25: asdg_MuzzleSlot_762 {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				class compatibleItems: compatibleItems {
					tb_acc_mk25S = 1;
				};	
			};	
			class UnderSlot_mk25 : asdg_UnderSlot {};			
		};
		class Library {
			libTextDesc = "The Mk 25 is the KAC SR25 EC as used by the Altian Armed Forces";
		};
		class Single: Single {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.501187,1.2,30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.501187,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"tb_alfr_mk25\Data\sounds\Fire1",2,1,1800};
				begin2[] = {"tb_alfr_mk25\Data\sounds\Fire2",2,1,1800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"tb_alfr_mk25\Data\sounds\suppressed",1,1,600};
				soundBegin[] = {"begin1",0.333};
			};
			reloadTime = 0.096;
			dispersion = 0.00087;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};

		class single_close_optics : Single {
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 450;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics : single_close_optics {
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics : single_medium_optics {
			requiredOpticType = 2;
			minRange = 450;
			minRangeProbab = 0.05;
			midRange = 650;
			midRangeProbab = 0.4;
			maxRange = 850;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 650;
		};		

		
	};
	
	class tb_arifle_mk25 : tb_arifle_mk25_base {
		scope = 2;	
		author = "Model: Kiory Config: Toadball";

	};
	class tb_arifle_mk25_rco : tb_arifle_mk25 {
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk25";
				item = "optic_Hamr";
			};
		};	
	};	
	class muzzle_snds_B;
	class tb_acc_mk25S: muzzle_snds_B {
		author = "Model: Kiory Config: Toadball";
		displayName = "Mk 25 Rifle Suppressor";
		picture = "\tb_alfr_mk25\Data\gear\gear_sr25_suppressor_ca.paa";
		model = "\tb_alfr_mk25\kio_sr25_suppressor";
		inertia = 0.2;
	};	
};



class CfgMagazines {
	class 20Rnd_762x51_Mag;
	class tb_20rnd_762x51_mk25_mag : 20Rnd_762x51_Mag {
		displayName = "7.62mm 20Rnd Mk25 Mag";
		picture = "\tb_alfr_mk25\Data\gear\gear_sr25_magazine_ca.paa";
		model = "\tb_alfr_mk25\kio_SR25_magazine.p3d";
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: Mk25";
	};
};


class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		GestureReloadSR25 = "GestureReloadSR25";
		GestureReloadSR25Prone = "GestureReloadSR25Prone";
	};
	
	class Actions {
		class NoActions: ManActions {
			GestureReloadSR25[] = {"GestureReloadSR25","Gesture"};
		};	
		class RifleBaseStandActions; 
		class RifleProneActions: RifleBaseStandActions {
			GestureReloadSR25[] = {"GestureReloadSR25Prone","Gesture"};
		};
	};
};
	
class CfgGesturesMale {
	class Default;
	class States {
		class GestureReloadSR25: Default {
			file = "\tb_alfr_mk25\Data\anims\sr25_reload.rtm";
			looped = 0;
			speed = 0.30;
			mask = "handsWeapon";
			canPullTrigger = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			rightHandIKCurve[] = {0,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1 , 0.008333,0, 0.991667,0, 1.000000,1};
			};
			
		class GestureReloadSR25Prone: Default {
			file = "\tb_alfr_mk25\Data\anims\sr25_reload_prone.rtm";
			looped = 0;
			speed = 0.30;
			mask = "handsWeapon";
			canPullTrigger = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			rightHandIKCurve[] = {0,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1 , 0.008333,0, 0.991667,0, 1.000000,1};
		};
	};
	
};
	