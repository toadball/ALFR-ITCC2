	class I_Soldier_base_F;
	class tb_alfr_soldier_base : I_Soldier_base_F {
		author = "ToadBall";
		camouflage = 1.4;
		cost = 40000;
		faction = "tb_alfr_1bn";
		uniformclass = "tb_alfr_CombatUniform_AFPAT";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_ia_uniform_co.paa"};
		identitytypes[] = {"LanguageGRE_F", "Head_Greek", "G_HAF_default"};
		items[] = {"FirstAidKit"};
		linkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP"};
		magazines[] = {
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"HandGrenade", 
			"SmokeShell"
		};		
		respawnitems[] = {"FirstAidKit"};
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP"};
		respawnmagazines[] = {
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"HandGrenade", 
			"SmokeShell"
		};
		respawnweapons[] = {"tb_arifle_mk21_rco", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21_rco", "Throw", "Put"};
		scope = 1;
	};
	class tb_alfr_soldier_shortsleeve_base : tb_alfr_soldier_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPAT";	
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_ia_uniform_co.paa"};
		scope = 1;
	};	
	
	class tb_alfrPF_soldier_base : tb_alfr_soldier_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_AFPAT";	
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform2_co.paa"};
		scope = 1;
	};
	class tb_alfrPF_soldier_GRN_base : tb_alfrPF_soldier_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_GRNAFPAT";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_co.paa"};
		scope = 1;
	};
	class tb_alfrPF_soldier_BLK_base : tb_alfrPF_soldier_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_BLKAFPAT";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_co.paa"};
		scope = 1;
	};		
	class tb_alfrPF_soldier_shortsleeve_base : tb_alfr_soldier_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_AFPAT";	
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform2_co.paa"};
		scope = 1;
	};	
	class tb_alfrPF_soldier_shortsleeve_GRN_base : tb_alfrPF_soldier_shortsleeve_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_GRNAFPAT";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_co.paa"};
		scope = 1;
	};
	class tb_alfrPF_soldier_shortsleeve_BLK_base : tb_alfrPF_soldier_shortsleeve_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_BLKAFPAT";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_co.paa"};
		scope = 1;
	};		
	class tb_alfrPF_soldier_tshirt_base : tb_alfr_soldier_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_AFPAT";	
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform2_co.paa"};
		scope = 1;
	};	
	
	
	
	//arid base units
	//reg
	class tb_alfr_soldier_a_base : tb_alfr_soldier_base {
		author = "ToadBall";
		faction = "tb_alfr_1bn_arid";
		uniformclass = "tb_alfr_CombatUniform_AFPATA";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_ia_uniform_a_co.paa"};
		linkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles"};		
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles"};		
	};
	class tb_alfr_soldier_shortsleeve_a_base : tb_alfr_soldier_shortsleeve_base {
		author = "ToadBall";
		faction = "tb_alfr_1bn_arid";
		uniformclass = "tb_alfr_CombatUniform_shortsleeve_AFPATA";	
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_ia_uniform_a_co.paa"};
		linkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles"};		
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01_AFPATA", "tb_alfr_mich_AFPATA", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles"};		
	};
	
	//pf
	class tb_alfrPF_soldier_a_base : tb_alfrPF_soldier_base {
		author = "ToadBall";
		faction = "tb_alfr_pf_arid";
		uniformclass = "tb_alfr_SOFCombatUniform_AFPATA";	
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_a_co.paa"};
		scope = 1;
	};
	class tb_alfrPF_soldier_TANa_base : tb_alfrPF_soldier_a_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_TANAFPATA";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_unformt_a_co.paa"};
		scope = 1;
	};	
	class tb_alfrPF_soldier_BLKa_base : tb_alfrPF_soldier_a_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_BLKAFPATA";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_a_co.paa"};
		scope = 1;
	};		
	
	class tb_alfrPF_soldier_shortsleeve_a_base : tb_alfrPF_soldier_shortsleeve_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_AFPATA";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_a_co.paa"};
		scope = 1;
	};	
	class tb_alfrPF_soldier_shortsleeve_TANa_base : tb_alfrPF_soldier_shortsleeve_a_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_TANAFPATA";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_unformt_a_co.paa"};
		scope = 1;
	};	
	class tb_alfrPF_soldier_shortsleeve_BLKa_base : tb_alfrPF_soldier_shortsleeve_a_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_shortsleeve_BLKAFPATA";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_a_co.paa"};
		scope = 1;
	};		

	
	class tb_alfrPF_soldier_tshirt_a_base : tb_alfrPF_soldier_tshirt_base {
		author = "ToadBall";
		uniformclass = "tb_alfr_SOFCombatUniform_tshirt_AFPATA";	
		hiddenselections[] = {"Camo","insignia"};
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_a_co.paa"};
		scope = 1;
	};	
