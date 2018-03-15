class CfgPatches {
	class tb_sys_c_rhsacemags {
		author = "ALFR Mod";
		authors[] = {"Toadball"};
		requiredaddons[] = {"A3_Weapons_F",
							"A3_Weapons_F_beta",
							"tb_alfr_mk21",
							"tb_alfr_mk23",
							"tb_alfr_mk25",
							"rhsusf_c_weapons",
							"ace_ballistics"	
						};
		requiredversion = 1.1;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgWeapons {
	class LMG_03_base_F;
	class tb_lmg_mk23_base : LMG_03_base_F {
		magazines[] = {	
			//mags
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
			
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M200_Stanag",
			
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			
			//belts
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
	
			"tb_100Rnd_556x45_box_tracer_green",
			"tb_100Rnd_556x45_box_tracer_yellow",
			"tb_100Rnd_556x45_box_tracer_red",
			"tb_100Rnd_556x45_box",
			
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_M200_soft_pouch",
			"rhsusf_100Rnd_556x45_M855_soft_pouch",
			
			"rhsusf_200Rnd_556x45_soft_pouch",
			"rhsusf_200Rnd_556x45_M855_soft_pouch",
			
			"rhs_200rnd_556x45_M_SAW",	
			"rhs_200rnd_556x45_T_SAW",	
			"rhs_200rnd_556x45_B_SAW"	
	
		};
	};
	class tb_lmg_mk24 : tb_lmg_mk23_base {
		magazines[] = {
			"150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer",
			"tb_150Rnd_762x51_Box", "tb_150Rnd_762x51_Box_Tracer_green",
			"tb_150Rnd_762x51_Box_Tracer_yellow",
			"tb_150Rnd_762x51_Box_Tracer_red",
			
			"rhsusf_50Rnd_762x51",	
			"rhsusf_50Rnd_762x51_m61_ap",	
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m80a1epr",	
			"rhsusf_50Rnd_762x51_m82_blank",	
			"rhsusf_100Rnd_762x51",	
			"rhsusf_100Rnd_762x51_m61_ap",	
			"rhsusf_100Rnd_762x51_m62_tracer",	
			"rhsusf_100Rnd_762x51_m80a1epr",	
			"rhsusf_100Rnd_762x51_m82_blank",
			"rhsusf_50Rnd_762x51_m993",
			"rhsusf_100Rnd_762x51_m993"
		};
	};	
	class Rifle_Base_F;
	class arifle_SPAR_01_base_F : Rifle_Base_F {};
	class UGL_F;

	class tb_arifle_mk21_base : arifle_SPAR_01_base_F {	
		magazines[] = {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
			
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M200_Stanag",
			
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",

			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"	
		};	
	};
	class tb_arifle_mk21_m203_base : tb_arifle_mk21_base {
		class tb_m203b : UGL_F {
			magazines[] = { 	
				"rhs_mag_M441_HE",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M397_HET",
				"rhs_mag_M4009",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_M661_green",
				"rhs_mag_M662_red",
				"rhs_mag_M713_red",
				"rhs_mag_M714_white",
				"rhs_mag_M715_green",
				"rhs_mag_M716_yellow",
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
								
				"ACE_HuntIR_M203"				
			};
		};				
	};
	class EBR_base_F;
	class tb_arifle_mk25_base : EBR_base_F {	
		magazines[] = {
			"tb_20rnd_762x51_mk25_mag",
			"20Rnd_762x51_Mag",
			
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_10Rnd_762x51_M118LR_Mag",
			"ACE_10Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_10Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_10Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x67_Mk248_Mod_0_Mag",
			"ACE_20Rnd_762x67_Mk248_Mod_1_Mag",
			"ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",
			
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m993_Mag"
		};
	
	};
	class launch_RPG32_F;
	class tb_launcher_mk13 : launch_RPG32_F {
		
		magazines[] = {"tb_mk13_heat","tb_mk13_hedp","tb_mk13_smoke","rhs_mag_maaws_HEAT", "rhs_mag_maaws_HEDP", "rhs_mag_maaws_HE"};
		
	};
};