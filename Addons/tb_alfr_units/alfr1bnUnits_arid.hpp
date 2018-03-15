
	class tb_alfr1bn_soldier_a_cc : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_cc";
		author = "ToadBall";
		backpack = "tb_Carryall_tan";
		camouflage = 1.6;
		cost = 600000;	
		displayname = "Company Commander";
		namesound = "veh_infantry_officer_s";
		icon = "iconManOfficer";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_officer_p"};
				speechsingular[] = {"veh_infantry_officer_s"};
			};
		};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles" };		
		linkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles" };
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		textplural = "officers";
		textsingular = "officer";	
		scope =2;		
	};
	class tb_alfr1bn_soldier_a_c2 : tb_alfr1bn_soldier_a_cc {
		_generalmacro = "tb_alfr1bn_soldier_c2";
		author = "ToadBall";		
		cost = 550000;	
		displayname = "Company 2IC";			
	};
	class tb_alfr1bn_soldier_a_csm : tb_alfr1bn_soldier_a_cc {
		_generalmacro = "tb_alfr1bn_soldier_csm";
		author = "ToadBall";		
		cost = 550000;	
		displayname = "Company Sergeant Major";			
	};		
	
	class tb_alfr1bn_soldier_a_pc : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_pc";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan";
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
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles" };		
		linkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles" };		
		textplural = "officers";
		textsingular = "officer";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";		
		scope =2;
		weapons[] += {"hgun_ACPC2_F","Binocular"};
		respawnweapons[] += {"hgun_ACPC2_F","Binocular"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};		
	};
	class tb_alfr1bn_soldier_a_ps : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_ps";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan";
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
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles" };		
		linkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","NVGoggles" };				
		weapons[] += {"hgun_ACPC2_F","Binocular"};
		respawnweapons[] += {"hgun_ACPC2_F","Binocular"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};		
	};	
	class tb_alfr1bn_soldier_a_sc : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_sc";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_ugl";
		camouflage = 1.6;
		cost = 500000;
		displayname = "Section Commander";
		icon = "iconManLeader";
		sensitivity = 3.2;
		linkeditems[] = {"tb_alfr_platecarrier_02GL_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02GL_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };	
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
	class tb_alfr1bn_soldier_a_s2 : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_s2";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_ugl";
		camouflage = 1.6;
		cost = 450000;
		displayname = "Section 2IC";
		icon = "iconManLeader";
		sensitivity = 3.2;
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";		
		linkeditems[] = {"tb_alfr_platecarrier_02GL_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02GL_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };				
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
	

	class tb_alfr1bn_soldier_a_rf : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_rf";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_rifle";
		cost = 100000;
		displayname = "Rifleman";
		scope = 2;
	};
	class tb_alfr1bn_soldier_a_csw : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_csw";
		author = "ToadBall";				
		backpack = "";
		cost = 100000;
		displayname = "Support Weapon Crew";
		vehicleClass = "Support";
		scope = 2;
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};		
	};	
	class tb_alfr1bn_soldier_a_scout : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_scout";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_scout";		
		cost = 150000;
		displayname = "Lead Scout";
		scope = 2;
		linkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
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
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";	
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
	class tb_alfr1bn_soldier_a_sraaw : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_sraaw";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_SRAAW";
		cost = 180000;
		displayname = "Mk13 SRAAW Gunner";
		icon = "iconManAT";
		linkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
		namesound = "veh_infantry_AT_s";
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
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
	class tb_alfr1bn_soldier_a_sraawA : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_sraawA";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_SRAAW";		
		cost = 100000;
		displayname = "Mk13 SRAAW Assistant";
		scope = 2;
		
	};

	class tb_alfr1bn_soldier_a_cls : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_cls";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_medic";
		attendant = 1;
		camouflage = 1.6;
		cost = 300000;
		displayname = "Combat Life Saver";
		textplural = "medics";
		textsingular = "medic";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";	
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
		
	class tb_alfr1bn_soldier_a_lmgmk23 : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_lmgmk23";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_mk23";
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
	class tb_alfr1bn_soldier_a_lmgmk24 : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr_soldier_a_lmgmk24";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_mk24";
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
	
	class tb_alfr1bn_soldier_a_marksman : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_marksman";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_marksman";		
		cost = 120000;
		displayname = "Marksman";
		scope = 2;
		linkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
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
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
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

	class tb_alfr1bn_soldier_a_atgw : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_atgw";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_atgw";
		cost = 180000;
		displayname = "ATGW Gunner";
		icon = "iconManAT";
		linkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles" };
		namesound = "veh_infantry_AT_s";
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "launch_Titan_short_F", "Throw", "Put"};
		scope = 2;
		secondaryammocoef = 0.5;
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		threat[] = {1, 0.7, 0.3};
		weapons[] = {"tb_arifle_mk21c_rco", "launch_Titan_short_F", "Throw", "Put"};
		vehicleClass = "Support";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_AT_p"};
				speechsingular[] = {"veh_infantry_AT_s"};
			};
		};
	};
	class tb_alfr1bn_soldier_a_atgwA : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr_soldier_a_atgwA";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_atgw";		
		cost = 100000;
		displayname = "ATGW Assistant";
		scope = 2;
		vehicleClass = "Support";
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
	};
	class tb_alfr1bn_soldier_a_eng : tb_alfr_soldier_a_base {
		_generalmacro = "tb_albfr1bn_soldier_a_eng";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_exp";
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
	
	class tb_alfr1bn_soldier_a_mfc : tb_alfr_soldier_a_base {
		_generalmacro = "tb_alfr1bn_soldier_a_mfc";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_mfc";
		cost = 100000;
		displayname = "Mortar Fire Controller";
		scope = 2;
		vehicleClass = "Support";		
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};				
		linkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGoggles"};		
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGoggles"};				
	};