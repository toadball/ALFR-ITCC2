	class tb_alfrPF_soldier_a : tb_alfrPF_soldier_a_base {
		faction = "tb_alfr_pf_arid";
		_generalmacro = "tb_alfrPF_soldier_a";
		author = "ToadBall";
		backpack = "tb_Carryall_tan_pf";
		camouflage = 0.6;
		cost = 100000;	
		detectSkill = 30;
		displayname = "Pathfinder";
		namesound = "veh_infantry_SF_s";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_TANAFPATA";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		respawnlinkeditems[] = {"V_TacVest_brn", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_TacVest_brn", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		respawnweapons[] = {"tb_arifle_mk21_rco","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21_rco","hgun_ACPC2_F", "Throw", "Put"};	
		magazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnmagazines[] += {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		textSingular = "specop";
		textPlural = "specops";	
		scope =2;		
	};
	class tb_alfrPF_soldier_a_TC : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_TC";
		author = "ToadBall";
		backpack = "tb_Carryall_tan";
		displayname = "Troop Commander";
		namesound = "veh_infantry_officer_s";
		icon = "iconManOfficer";
		textplural = "officers";
		textsingular = "officer";		
		cost = 600000;
		respawnweapons[] = {"tb_arifle_mk21c_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};		
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "tb_alfr_headset_01", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "tb_alfr_headset_01", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };				
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_officer_p"};
				speechsingular[] = {"veh_infantry_officer_s"};
			};
		};		
	};
	class tb_alfrPF_soldier_a_TS : tb_alfrPF_soldier_a_TC {
		_generalmacro = "tb_alfrPF_soldier_TS";
		author = "ToadBall";
		displayname = "Troop Sergeant";
		backpack = "tb_Carryall_tan";
		cost = 550000;
		respawnweapons[] = {"tb_arifle_mk21_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};		
		uniformclass = "tb_alfr_SOFCombatUniform_TANAFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };				
		
	};
	class tb_alfrPF_soldier_a_CLS : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_CLS";
		author = "ToadBall";
		attendant = 1;
		backpack = "tb_Carryall_tan_medic";
		displayname = "Combat Life Saver";
		picture = "pictureHeal";
		icon = "iconManMedic";
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F", "Throw", "Put"};			
		cost = 290000;
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_AFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };				
	};		
	class tb_alfrPF_soldier_a_PC : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_PC";
		author = "ToadBall";
		backpack = "tb_Carryall_tan_pf";
		displayname = "Patrol Commander";
		icon = "iconManLeader";
		cost = 500000;
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
		uniformclass = "tb_alfr_SOFCombatUniform_TANAFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "tb_alfr_headset_01", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "tb_alfr_headset_01", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };				
	};
	class tb_alfrPF_soldier_a_TL : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_TL";
		author = "ToadBall";
		backpack = "tb_Carryall_tan_pf";
		displayname = "Team Leader";
		icon = "iconManLeader";
		cost = 450000;
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_BLKAFPATA";
		respawnlinkeditems[] = {"V_TacVest_brn", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_TacVest_brn", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };				
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F", "Throw", "Put"};			
	};	
	class tb_alfrPF_soldier_a_UGL : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_UGL";
		author = "ToadBall";
		backpack = "tb_Carryall_tan_pf_ugl";
		cost = 130000;	
		displayname = "Pathfinder (UGL)";
		uniformclass = "tb_alfr_SOFCombatUniform_AFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "H_Booniehat_khk_hs", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "H_Booniehat_khk_hs", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		respawnweapons[] = {"tb_arifle_mk21c_m203_rco","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_m203_rco","hgun_ACPC2_F", "Throw", "Put"};	
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
		
	};
	class tb_alfrPF_soldier_a_LMG : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_LMG";
		author = "ToadBall";
		backpack = "tb_Carryall_tan_mk24";
		cost = 120000;	
		displayname = "LMG Gunner Mk 24";
		uniformclass = "tb_alfr_SOFCombatUniform_TANAFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		respawnweapons[] = {"tb_lmg_mk24_rco","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_lmg_mk24_rco","hgun_ACPC2_F", "Throw", "Put"};		
		icon = "iconManMG";
		magazines[] = {
			"150Rnd_762x51_Box", 
			"tb_150Rnd_762x51_Box_Tracer_yellow", 
			"HandGrenade",
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
		respawnmagazines[] = {
			"150Rnd_762x51_Box", 
			"tb_150Rnd_762x51_Box_Tracer_yellow", 
			"HandGrenade",
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
	
	};
	class tb_alfrPF_soldier_a_sraaw : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_sraaw";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_SRAAW";
		cost = 180000;
		displayname = "Mk13 SRAAW Gunner";
		icon = "iconManAT";
		namesound = "veh_infantry_AT_s";
		scope = 2;
		secondaryammocoef = 0.5;
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		threat[] = {1, 0.7, 0.3};
		respawnweapons[] = {"tb_arifle_mk21c_rco","tb_launcher_mk13","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","tb_launcher_mk13","hgun_ACPC2_F", "Throw", "Put"};			
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_infantry_AT_p"};
				speechsingular[] = {"veh_infantry_AT_s"};
			};
		};
	};	
	class tb_alfrPF_soldier_a_sraawA : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfr1bn_soldier_a_sraawA";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_BLKAFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "H_Booniehat_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "H_Booniehat_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };				
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_SRAAW";		
		displayname = "Mk13 SRAAW Assistant";
		scope = 2;	
	};	
	class tb_alfrPF_soldier_a_FAC : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_FAC";
		author = "ToadBall";
		backpack = "tb_Carryall_tan_pf_fac";
		cost = 130000;	
		displayname = "Pathfinder FAC";
		uniformclass = "tb_alfr_SOFCombatUniform_TANAFPATA";
		respawnlinkeditems[] = {"V_Chestrig_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		linkeditems[] = {"V_Chestrig_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		respawnweapons[] = {"tb_arifle_mk21c_m203_rco","hgun_ACPC2_F", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_m203_rco","hgun_ACPC2_F", "Throw", "Put"};	
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
		
	};	
	class tb_alfrPF_soldier_a_scout : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_scout";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_pf_scout";		
		cost = 150000;
		displayname = "Pathfinder Scout";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_TANAFPATA";
		linkeditems[] = {"V_BandollierB_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		magazines[] = {
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"HandGrenade", 
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};		
		respawnlinkeditems[] = {"V_BandollierB_khk", "tb_alfr_booniehat_hs_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		respawnmagazines[] = {
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"tb_20rnd_762x51_mk25_mag", 
			"HandGrenade", 
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
		respawnweapons[] = {"tb_arifle_mk25_rco","hgun_ACPC2_F", "Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk25_rco","hgun_ACPC2_F", "Binocular", "Throw", "Put"};		
	};
	class tb_alfrPF_soldier_a_marksman : tb_alfrPF_soldier_a {
		_generalmacro = "tb_alfrPF_soldier_a_marksman";
		author = "ToadBall";				
		backpack = "tb_Carryall_tan_marksman";		
		cost = 190000;
		displayname = "Pathfinder Marksman";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_AFPATA";
		linkeditems[] = {"V_BandollierB_khk", "H_Booniehat_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		magazines[] = {
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"HandGrenade", 
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};		
		respawnlinkeditems[] = {"V_BandollierB_khk", "H_Booniehat_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS" };		
		respawnmagazines[] = {
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"tb_5Rnd_338Lapua", 
			"HandGrenade", 
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
		respawnweapons[] = {"tb_arifle_mk22_d_lrps","hgun_ACPC2_F", "Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk22_d_lrps","hgun_ACPC2_F", "Binocular", "Throw", "Put"};		
	};