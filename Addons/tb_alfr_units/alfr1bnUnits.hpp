
	class tb_alfr1bn_soldier_cc : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_cc";
		author = "ToadBall";
		backpack = "tb_Carryall_oli";
		camouflage = 1.6;
		cost = 600000;	
		displayname = "Company Commander";
		namesound = "veh_infantry_officer_s";
		icon = "iconManOfficer";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPAT";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_officer_p"};
				speechsingular[] = {"veh_infantry_officer_s"};
			};
		};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_INDEP" };		
		linkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_INDEP" };
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		textplural = "officers";
		textsingular = "officer";	
		scope =2;		
	};
	class tb_alfr1bn_soldier_c2 : tb_alfr1bn_soldier_cc {
		_generalmacro = "tb_alfr1bn_soldier_c2";
		author = "ToadBall";		
		cost = 550000;	
		displayname = "Company 2IC";			
	};
	class tb_alfr1bn_soldier_csm : tb_alfr1bn_soldier_cc {
		_generalmacro = "tb_alfr1bn_soldier_csm";
		author = "ToadBall";		
		cost = 550000;	
		displayname = "Company Sergeant Major";			
	};		
	
	class tb_alfr1bn_soldier_pc : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_pc";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli";
		camouflage = 1.6;
		cost = 600000;	
		displayname = "Platoon Commander";
		namesound = "veh_infantry_officer_s";
		icon = "iconManOfficer";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_officer_p"};
				speechsingular[] = {"veh_infantry_officer_s"};
			};
		};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_INDEP" };		
		linkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_INDEP" };		
		textplural = "officers";
		textsingular = "officer";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPAT";		
		scope =2;
		weapons[] += {"hgun_ACPC2_F","Binocular"};
		respawnweapons[] += {"hgun_ACPC2_F","Binocular"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};		
	};
	class tb_alfr1bn_soldier_ps : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_ps";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli";
		camouflage = 1.6;
		cost = 550000;	
		displayname = "Platoon Sergeant";
		namesound = "veh_infantry_officer_s";
		icon = "iconManOfficer";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_officer_p"};
				speechsingular[] = {"veh_infantry_officer_s"};
			};
		};
		textplural = "officers";
		textsingular = "officer";
		scope =2;
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_INDEP" };		
		linkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles_INDEP" };				
		weapons[] += {"hgun_ACPC2_F","Binocular"};
		respawnweapons[] += {"hgun_ACPC2_F","Binocular"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};		
	};	
	class tb_alfr1bn_soldier_sc : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_sc";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_ugl";
		camouflage = 1.6;
		cost = 500000;
		displayname = "Section Commander";
		icon = "iconManLeader";
		sensitivity = 3.2;
		linkeditems[] = {"tb_alfr_platecarrier_02GL", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02GL", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };	
		magazines[] += {
			"SmokeShell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};		
		respawnmagazines[] += {
			"SmokeShell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
		respawnweapons[] = {"tb_arifle_mk21_m203_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21_m203_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		scope = 2;
		threat[] = {1, 0.3, 0.1};
		
	};
	class tb_alfr1bn_soldier_s2 : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_s2";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_ugl";
		camouflage = 1.6;
		cost = 450000;
		displayname = "Section 2IC";
		icon = "iconManLeader";
		sensitivity = 3.2;
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPAT";		
		linkeditems[] = {"tb_alfr_platecarrier_02GL", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02GL", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };				
		magazines[] += {
			"SmokeShell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};		
		respawnmagazines[] += {
			"SmokeShell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell", 
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
		respawnweapons[] = {"tb_arifle_mk21_m203_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21_m203_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		scope = 2;
		threat[] = {1, 0.3, 0.1};
	};	
	

	class tb_alfr1bn_soldier_rf : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_rf";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_rifle";
		cost = 100000;
		displayname = "Rifleman";
		scope = 2;
	};
	class tb_alfr1bn_soldier_csw : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_csw";
		author = "ToadBall";				
		backpack = "";
		cost = 100000;
		displayname = "Support Weapon Crew";
		vehicleClass = "Support";
		scope = 2;
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};		
	};	
	class tb_alfr1bn_soldier_scout : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_scout";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_scout";		
		cost = 150000;
		displayname = "Lead Scout";
		scope = 2;
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		magazines[] = {
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"HandGrenade", 
			"SmokeShell"
		};		
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPAT";	
		respawnmagazines[] = {
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"HandGrenade", 
			"SmokeShell"
		};
		respawnweapons[] = {"tb_arifle_mk25_rco", "Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk25_rco", "Binocular", "Throw", "Put"};		
		sensitivity = 3.3;
	};
	class tb_alfr1bn_soldier_sraaw : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_sraaw";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_SRAAW";
		cost = 180000;
		displayname = "Mk13 SRAAW Gunner";
		icon = "iconManAT";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		namesound = "veh_infantry_AT_s";
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		respawnweapons[] += {"tb_launcher_mk13"};
		scope = 2;
		secondaryammocoef = 0.5;
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		threat[] = {1, 0.7, 0.3};
		weapons[] += {"tb_launcher_mk13"};
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_AT_p"};
				speechsingular[] = {"veh_infantry_AT_s"};
			};
		};
	};
	class tb_alfr1bn_soldier_sraawA : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_sraawA";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_SRAAW";		
		cost = 100000;
		displayname = "Mk13 SRAAW Assistant";
		scope = 2;
		
	};

	class tb_alfr1bn_soldier_cls : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_cls";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_medic";
		attendant = 1;
		camouflage = 1.6;
		cost = 300000;
		displayname = "Combat Life Saver";
		textplural = "medics";
		textsingular = "medic";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPAT";	
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";		
		scope = 2;
		namesound = "veh_infantry_medic_s";
		picture = "pictureHeal";
		icon = "iconManMedic";	
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_medic_p"};
				speechsingular[] = {"veh_infantry_medic_s"};
			};
		};		
	};
		
	class tb_alfr1bn_soldier_lmgmk23 : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_lmgmk23";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_mk23";
		cost = 110000;
		displayname = "LMG Gunner Mk 23";
		scope = 2;
		
		icon = "iconManMG";
		magazines[] = {
			"tb_100Rnd_556x45_box", 
			"tb_100Rnd_556x45_box", 
			"tb_100Rnd_556x45_box", 
			"tb_100Rnd_556x45_box_tracer_yellow", 
			"HandGrenade",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"tb_100Rnd_556x45_box", 
			"tb_100Rnd_556x45_box", 
			"tb_100Rnd_556x45_box", 
			"tb_100Rnd_556x45_box_tracer_yellow", 
			"HandGrenade",
			"SmokeShell"
			
		};
		respawnweapons[] = {"tb_lmg_mk23_rco", "Throw", "Put"};	
		weapons[] = {"tb_lmg_mk23_rco", "Throw", "Put"};		
	};	
	class tb_alfr1bn_soldier_lmgmk24 : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr_soldier_lmgmk24";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_mk24";
		cost = 110000;
		displayname = "LMG Gunner Mk 24";
		scope = 2;
		
		icon = "iconManMG";
		magazines[] = {
			"150Rnd_762x51_Box", 
			"tb_150Rnd_762x51_Box_Tracer_yellow", 
			"HandGrenade",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"150Rnd_762x51_Box", 
			"tb_150Rnd_762x51_Box_Tracer_yellow", 
			"HandGrenade",
			"SmokeShell"
		};
		respawnweapons[] = {"tb_lmg_mk24_rco", "Throw", "Put"};	
		weapons[] = {"tb_lmg_mk24_rco", "Throw", "Put"};		
	};
	
	class tb_alfr1bn_soldier_marksman : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_marksman";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_marksman";		
		cost = 120000;
		displayname = "Marksman";
		scope = 2;
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		magazines[] = {
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"HandGrenade",  
			"SmokeShell"
		};		
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		respawnmagazines[] = {
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"HandGrenade",  
			"SmokeShell"
		};
		respawnweapons[] = {"tb_arifle_mk22_w_lrps","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk22_w_lrps","Binocular", "Throw", "Put"};		
	};

	class tb_alfr1bn_soldier_atgw : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_atgw";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_atgw";
		cost = 180000;
		displayname = "ATGW Gunner";
		icon = "iconManAT";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		namesound = "veh_infantry_AT_s";
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "launch_I_Titan_short_F", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "launch_I_Titan_short_F", "Throw", "Put"};
		vehicleClass = "Support";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_AT_p"};
				speechsingular[] = {"veh_infantry_AT_s"};
			};
		};
	};
	class tb_alfr1bn_soldier_atgwA : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr_soldier_atgwA";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_atgw";		
		cost = 100000;
		displayname = "ATGW Assistant";
		scope = 2;
		vehicleClass = "Support";
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
	};

	class tb_alfr1bn_soldier_hmgGun : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_hmgGun";
		author = "ToadBall";				
		backpack = "I_HMG_01_weapon_F";
		cost = 180000;
		displayname = "HMG Gunner";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		vehicleClass = "Support";
	};	
	class tb_alfr1bn_soldier_hmgA : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_hmgA";
		author = "ToadBall";				
		backpack = "I_HMG_01_support_F";
		cost = 180000;
		displayname = "HMG Assistant";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		vehicleClass = "Support";
	};
	class tb_alfr1bn_soldier_gmgGun : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_hmgGun";
		author = "ToadBall";				
		backpack = "I_GMG_01_weapon_F";
		cost = 180000;
		displayname = "GMG Gunner";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		vehicleClass = "Support";
	};	
	class tb_alfr1bn_soldier_gmgA : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_hmgA";
		author = "ToadBall";				
		backpack = "I_HMG_01_support_F";
		cost = 180000;
		displayname = "GMG Assistant";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		vehicleClass = "Support";
	};
	class tb_alfr1bn_soldier_eng : tb_alfr_soldier_base {
		_generalmacro = "tb_albfr1bn_soldier_eng";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_exp";
		camouflage = 1.6;
		candeactivatemines = 1;
		cost = 220000;
		detectskill = 60;
		displayname = "Engineer";
		engineer = 1;
		scope = 2;
		icon = "iconManEngineer";
		vehicleClass = "Support";
	};
	
	class tb_alfr1bn_soldier_mfc : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_mfc";
		author = "ToadBall";				
		backpack = "tb_Carryall_oli_mfc";
		cost = 100000;
		displayname = "Mortar Fire Controller";
		scope = 2;
		vehicleClass = "Support";		
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};				
		linkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGoggles_INDEP"};		
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGoggles_INDEP"};				
	};
	class tb_alfr1bn_soldier_morGun : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_morGun";
		author = "ToadBall";				
		backpack = "I_Mortar_01_weapon_F";
		cost = 180000;
		displayname = "Mortar Gunner";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		threat[] = {1, 0.7, 0.3};
		vehicleClass = "Support";
	};	
	class tb_alfr1bn_soldier_morA : tb_alfr_soldier_base {
		_generalmacro = "tb_alfr1bn_soldier_morA";
		author = "ToadBall";				
		backpack = "I_Mortar_01_support_F";
		cost = 180000;
		displayname = "Mortar Assistant";
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		vehicleClass = "Support";
	};

	class I_Mortar_01_F;
	class tb_alfr1bn_mortar : I_Mortar_01_F {
		_generalmacro = "tb_alfr1bn_mortar";	
		faction = "tb_alfr_1bn";
		author = "ToadBall";				
		crew = "tb_alfr1bn_soldier_csw";
	};
	class I_GMG_01_high_F;
	class tb_alfr1bn_gmg_high : I_GMG_01_high_F {
		_generalmacro = "tb_alfr1bn_gmg_high";		
		faction = "tb_alfr_1bn";
		author = "ToadBall";				
		crew = "tb_alfr1bn_soldier_csw";	
	};
	class I_GMG_01_F;
	class tb_alfr1bn_gmg : I_GMG_01_F {
		_generalmacro = "tb_alfr1bn_gmg";		
		faction = "tb_alfr_1bn";
		author = "ToadBall";				
		crew = "tb_alfr1bn_soldier_csw";	
	};
	class I_HMG_01_high_F;
	class tb_alfr1bn_hmg_high : I_HMG_01_high_F {
		_generalmacro = "tb_alfr1bn_hmg_high";		
		faction = "tb_alfr_1bn";
		author = "ToadBall";				
		crew = "tb_alfr1bn_soldier_csw";	
	};	
	class I_HMG_01_F;
	class tb_alfr1bn_hmg : I_HMG_01_F {
		_generalmacro = "tb_alfr1bn_hmg";		
		faction = "tb_alfr_1bn";
		author = "ToadBall";				
		crew = "tb_alfr1bn_soldier_csw";	
	};	