class CfgPatches {
 class tb_alfr_mk21 {
	author = "ALFR Mod";
	authors[] = {"Toadball"};
	requiredaddons[] = {"A3_Weapons_F_Exp_Rifles_SPAR_01","cba_jr"};
	requiredversion = 1.1;
	units[] = {};
	weapons[] = {"tb_arifle_mk21","tb_arifle_mk21_rco","tb_arifle_mk21_m203","tb_arifle_mk21_m203_rco","tb_arifle_mk21c","tb_arifle_mk21c_rco","tb_arifle_mk21c_m203","tb_arifle_mk21c_m203_rco"};
	magazines[] = {};
 };
};
/*external*/ class Mode_SemiAuto;
/*external*/ class asdg_MuzzleSlot_556;
/*external*/ class asdg_FrontSideRail;
/*external*/ class asdg_OpticRail1913;
/*external*/ class asdg_UnderSlot;


class CfgWeapons {
	class Rifle_Base_F;
	/*class Tavor_base_F : Rifle_Base_F {
		class Single;
		class FullAuto;
		class single_medium_optics1;
		class single_medium_optics2;
		class EGLM;
	};*/
	class arifle_SPAR_01_base_F : Rifle_Base_F {
		class Single;
		class FullAuto;
		class single_medium_optics1;
		class single_medium_optics2;
	};	
	class UGL_F;

	
	class tb_arifle_mk21_base : arifle_SPAR_01_base_F {
		author = "Toadball";
		
		hasBipod = 0;
		deployedPivot = "bipodPivot";
		overviewPicture = "";
		drysound[] = {"A3\sounds_f\weapons\other\dry1", 0.630957, 1, 30};
		handanim[] = {};
		hiddenSelections[] = {};
		model =  "tb_alfr_mk21\mk21";
		inertia = 0.7;
		discretedistance[] = {200, 300, 400, 500, 600, 700};
		discretedistanceinitindex = 1;
		displayname = "Mk 21";
		displaynameshort = "Mk 21";
		modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_medium_optics2"};
		scope = 0;
		picture = "\tb_alfr_mk21\data\w_mk21_ca.paa";
		class Single : Single {
			reloadtime = 0.06;	
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;			
			//sounds[] = {"StandardSound","SilencedSound"};
		};
		class FullAuto : FullAuto {};
		
		class single_close: Single {
			//requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			dispersion = 0.00261;
		};
		class single_medium: single_close {
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far: single_medium {
			//requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
		};
		class fullauto_close: FullAuto {
			burst = 5;
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
		};
		class fullauto_short: FullAuto {
			burst = 5;
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
		};
		class fullauto_long: FullAuto {
			burst = 5;
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};			
		class WeaponSlotsInfo {
			mass = 100;
			allowedSlots[] = {};
			class FrontSideRail_mk21 : asdg_FrontSideRail {};
			class OpticRail_mk21 : asdg_OpticRail1913 {};
			class MuzzleSlot_mk21: asdg_MuzzleSlot_556 {};	
		};
		class Library {
			libtextdesc = "The Mk 21 is an AAF variant of the M16A4 produced under licence.";
		};
	};
	class tb_arifle_mk21 : tb_arifle_mk21_base {
		author = "Toadball";
		scope = 2;
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class UnderSlot_mk21 : asdg_UnderSlot {};
		};			
	};
	class tb_arifle_mk21c : tb_arifle_mk21_base {
		author = "Toadball";
		scope = 2;
		displayName = "Mk 21C";
		displaynameshort = "Mk 21C";
		picture = "\tb_alfr_mk21\data\w_mk21c_ca.paa";
		model =  "tb_alfr_mk21\mk21c";	
		handAnim[] = {"OFP2_ManSkeleton","\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
		inertia = 0.4;
		dexterity = 1.7;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 90;
		};		
	};

	class tb_arifle_mk21_m203_base : tb_arifle_mk21_base {
		author = "Toadball";
		handanim[] = {"OFP2_ManSkeleton", "\tb_alfr_mk21\Data\M16GL.rtm"};
		model = "\tb_alfr_mk21\mk21_gl";
		muzzles[] = {"this", "tb_m203b"};
		displayname = "Mk 21 M203";
		displaynameshort = "Mk 21 M203";
		descriptionshort = "Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
		picture = "\tb_alfr_mk21\data\w_mk21gl_ca.paa";		
		class tb_m203b : UGL_F {
			cameradir = "op_look";
			displayName = "M203";
			discretedistance[] = {100, 200, 300, 400};
			discretedistancecamerapoint[] = {"op_eye","op_eye2","op_eye3","op_eye4"};
			discretedistanceinitindex = 0;
			minRange = 50;
			minRangeProbab = 0.1;			
			midRange = 350;			
			midRangeProbab = 0.8;		
			maxRange = 500;		
			maxRangeProbab = 0.1;
			aiRateOfFire = 3;
            useModelOptics = 0;
            useExternalOptic = 0;
			reloadAction = "GestureReloadTrgUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.794328,1,10};
		};				
		class WeaponSlotsInfo;
	};
	
	class tb_arifle_mk21_m203 : tb_arifle_mk21_m203_base {
		//m4orgery
		author = "Toadball";
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 120;
		};
	};
	class tb_arifle_mk21c_m203 : tb_arifle_mk21_m203_base {
		//m4orgery w/ UGL
		author = "Toadball";
		scope = 2;
		displayName = "Mk 21C M203";
		displaynameshort = "Mk 21C M203";
		picture = "\tb_alfr_mk21\data\w_mk21cgl_ca.paa";
		model =  "tb_alfr_mk21\mk21c_gl";
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 110;
		};		
	};	
	//with optics
	class tb_arifle_mk21_rco : tb_arifle_mk21 {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk21";
				item = "optic_Hamr";
			};
		};	
	};
	class tb_arifle_mk21c_rco : tb_arifle_mk21c {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk21";
				item = "optic_Hamr";
			};
		};		
	};
	class tb_arifle_mk21_m203_rco : tb_arifle_mk21_m203 {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk21";
				item = "optic_Hamr";
			};
		};		
	};
	class tb_arifle_mk21c_m203_rco : tb_arifle_mk21c_m203 {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk21";
				item = "optic_Hamr";
			};
		};			
	};	
};
