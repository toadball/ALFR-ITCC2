class CfgPatches {
	class tb_alfr_mk23	{
		author = "ALFR Mod";
		authors[] = {"Toadball"};	
		units[] = {};
		weapons[] = {"tb_lmg_mk23","tb_lmg_mk24","tb_lmg_mk23_rco","tb_lmg_mk24_rco"};
		requiredVersion = 1.10;
		requiredAddons[] = {"A3_Weapons_F_Exp_Machineguns_LMG_03","cba_jr"};
	};
};
class SlotInfo;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot {
	class compatibleItems;
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class LMG_03_base_F: Rifle_Long_Base_F {
		class FullAutoFast;
	};
	class tb_lmg_mk23_base : LMG_03_base_F {
		author = "Toadball";
		displayname = "Mk 23 LMG";
		descriptionshort = "Light machine gun <br/>Caliber: 5.56x45mm NATO";
		overviewPicture = "";
		handAnim[] = {"OFP2_ManSkeleton","\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
		model = "\tb_alfr_mk23\mk23";
		picture = "\tb_alfr_mk23\Data\w_mk23_ca.paa";
		scope = 0;
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F","tb_100Rnd_556x45_box_tracer_green", "tb_100Rnd_556x45_box_tracer_yellow","tb_100Rnd_556x45_box_tracer_red","tb_100Rnd_556x45_box","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		modes[] = {"FullAuto", "close", "short", "medium","long","far_optic1","far_optic2"};		
		inertia = 0.8;
		dexterity = 1.1;
		deployedPivot = "bipodPivot";
		hiddenSelections[] = {};
		class FullAuto: FullAutoFast {
			dispersion = 0.00125;		
			reloadtime = 0.075;		
		};
		class close: FullAuto {
			dispersion = 0.00525;
			burst = 3;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close {
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close {
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class long: close {
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 750;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.6;
			maxRange = 850;
			maxRangeProbab = 0.1;
		};		
		class far_optic1: close {
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.04;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 850;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1 {
			requiredOpticType = 2;
			burst = 3;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	
		class Library {
			libtextdesc = "The Mk23 is the AAF light machine gun. It is a variant of the FN Minimi, a fully-automatic, gas-operated, magazine or belt-fed individual weapon. <br/>The Mk 23 provides the section with the accurate and sustained fire required to suppress and destroy enemy targets.";
		};	
		class WeaponSlotsInfo {
			mass = 260;
			allowedSlots[] = {};
			class FrontSideRail_mk23 : asdg_FrontSideRail {};
			class OpticRail_mk23 : asdg_OpticRail1913 {};
			class MuzzleSlot_mk23: asdg_MuzzleSlot_556 {};
		};
	};
	class tb_lmg_mk23 : tb_lmg_mk23_base {
		author = "Toadball";
		scope = 2;
	};	
	class tb_lmg_mk23_rco : tb_lmg_mk23 {
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk23";
				item = "optic_Hamr";
			};
		};			
	};
	class tb_lmg_mk24 : tb_lmg_mk23_base {
		author = "Toadball";
		displayname = "Mk 24 LMG";
		picture = "\tb_alfr_mk23\Data\w_mk24_ca.paa";
		model = "\tb_alfr_mk23\mk24";
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton","tb_alfr_mk23\data\anim\Mk48.rtm"};
		magazines[] = {"150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer", "tb_150Rnd_762x51_Box", "tb_150Rnd_762x51_Box_Tracer_green", "tb_150Rnd_762x51_Box_Tracer_yellow", "tb_150Rnd_762x51_Box_Tracer_red"};
		descriptionshort = "Light machine gun <br/>Caliber: 7.62mm NATO";
		class Library {
			libtextdesc = "The Mk 24 a variant of the FN Minimi re-chambered in 7.62mm NATO, a fully-automatic, gas-operated, magazine or belt-fed individual weapon. <br/>The Mk 24 provides the section with the accurate and sustained fire required to suppress and destroy enemy targets.";
		};	
		class WeaponSlotsInfo {
			mass = 118;
			allowedSlots[] = {};
			class FrontSideRail_mk24 : asdg_FrontSideRail {};
			class OpticRail_mk24 : asdg_OpticRail1913 {};			
			class MuzzleSlot_mk24: asdg_MuzzleSlot_762MG {
				class compatibleItems: compatibleItems {
					muzzle_snds_B = 1;
				};
			};			
		};
	};	
	class tb_lmg_mk24_rco : tb_lmg_mk24 {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "OpticRail_mk24";
				item = "optic_Hamr";
			};
		};			
	};
};


class CfgMagazines {
	class 200Rnd_556x45_Box_F;
	class 200Rnd_556x45_Box_Tracer_F; //yellow
	class 200Rnd_556x45_Box_Tracer_Red_F;
	
	class tb_100Rnd_556x45_box : 200Rnd_556x45_Box_F {
		author = "Toadball";
		count = 100;
		descriptionshort = "Caliber: 5.56x45 mm<br/>Rounds: 100";
		displayname = "5.56mm 100Rnd Box";
		displaynameshort = "";
		tracersevery = 0;
		lastroundstracer = 0;	
		mass = 20;
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
	};
	class tb_100Rnd_556x45_box_tracer_green : 200Rnd_556x45_Box_Tracer_F {
		author = "Toadball";
		count = 100;
		ammo = "B_556x45_Ball_Tracer_Green";
		descriptionshort = "Caliber: 5.56x45 mm<br/>Rounds: 100<br/>1 Tracer every 4<br/>Last 4 Tracer";
		displayname = "5.56mm 100Rnd Tracer (Green) Box";
		tracersevery = 4;
		lastroundstracer = 4;	
	};
	class tb_100Rnd_556x45_box_tracer_yellow : 200Rnd_556x45_Box_Tracer_F {
		author = "Toadball";
		count = 100;
		tracersevery = 4;
		lastroundstracer = 4;	
		descriptionshort = "Caliber: 5.56x45 mm Tracer - Yellow<br/>Rounds: 100<br/>1 Tracer every 4<br/>Last 4 Tracer";
		displayname = "5.56mm 100Rnd Tracer (Yellow) Box";	
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
	};
	class tb_100Rnd_556x45_box_tracer_red : 200Rnd_556x45_Box_Tracer_Red_F {
		author = "Toadball";
		count = 100;
		descriptionshort = "Caliber: 5.56x45 mm Tracer - Red<br/>Rounds: 100<br/>1 Tracer every 4<br/>Last 4 Tracer";
		displayname = "5.56mm 100Rnd Tracer (Red) Box";	
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersevery = 4;
		lastroundstracer = 4;			
	};

	
	class tb_200Rnd_556x45_box : 200Rnd_556x45_Box_F {};
	class tb_200Rnd_556x45_box_tracer_green : tb_100Rnd_556x45_box_tracer_green {
		author = "Toadball";
		count=200;
		descriptionshort = "Caliber: 5.56x45 mm<br/>Rounds: 200<br/>1 Tracer every 4<br/>Last 4 Tracer";
		displayname = "5.56mm 200Rnd Tracer (Green) Box";
	};
	class tb_200Rnd_556x45_box_tracer_yellow : 200Rnd_556x45_Box_Tracer_F {};
	class tb_200Rnd_556x45_box_tracer_red : 200Rnd_556x45_Box_Tracer_Red_F {};	
	
	class 150Rnd_762x51_Box_Tracer;
	class 150Rnd_762x51_Box;
	
	class tb_150Rnd_762x51_box : 150Rnd_762x51_Box {
		author = "Toadball";
		descriptionshort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br />Used in: Mk 24";
		displayname = "7.62mm Ball 150Rnd Box";			
        tracersEvery = 0;
        lastRoundsTracer = 0;		
	};
	
	class tb_150Rnd_762x51_Box_Tracer_green : 150Rnd_762x51_Box_Tracer {
		author = "Toadball";
		ammo = "B_762x51_Tracer_Green";
		descriptionshort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br/>1 Tracer every 4<br/>Last 4 Tracer<br />Used in: Mk 24";
		displayname = "7.62mm 150Rnd Tracer (Green) Box";	
		tracersevery = 4;
		lastroundstracer = 4;			
	};
	class tb_150Rnd_762x51_Box_Tracer_yellow : tb_150Rnd_762x51_Box_Tracer_green {
		author = "Toadball";
		ammo = "B_762x51_Tracer_Yellow";
		descriptionshort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br/>1 Tracer every 4<br/>Last 4 Tracer<br />Used in: Mk 24";
		displayname = "7.62mm 150Rnd Tracer (Yellow) Box";			
	};	
	class tb_150Rnd_762x51_Box_Tracer_red : tb_150Rnd_762x51_Box_Tracer_green {
		author = "Toadball";
		ammo = "B_762x51_Tracer_Red";
		descriptionshort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br/>1 Tracer every 4<br/>Last 4 Tracer<br />Used in: Mk 24";
		displayname = "7.62mm 150Rnd Tracer (Red) Box";		
	};	
};
