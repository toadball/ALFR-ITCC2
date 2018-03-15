	
	class tb_alfr2bn_soldier_cc : tb_alfr1bn_soldier_cc {
		_generalmacro = "tb_alfr2bn_soldier_cc";
		author = "ToadBall";		
		backpack = "";
		faction = "tb_alfr_2bn";
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};		
	};
	class tb_alfr2bn_soldier_c2 : tb_alfr1bn_soldier_c2 {	
		_generalmacro = "tb_alfr2bn_soldier_c2";
		author = "ToadBall";		
		backpack = "";
		faction = "tb_alfr_2bn";
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};			
	};
	class tb_alfr2bn_soldier_csm : tb_alfr1bn_soldier_csm {	
		_generalmacro = "tb_alfr2bn_soldier_csm";
		author = "ToadBall";		
		backpack = "";
		faction = "tb_alfr_2bn";
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};			
	};	
	class tb_alfr2bn_soldier_pc : tb_alfr1bn_soldier_pc {
		_generalmacro = "tb_alfr2bn_soldier_pc";
		author = "ToadBall";		
		backpack = "";
		faction = "tb_alfr_2bn";
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};		
	};
	class tb_alfr2bn_soldier_ps : tb_alfr1bn_soldier_ps {	
		_generalmacro = "tb_alfr2bn_soldier_ps";
		author = "ToadBall";		
		backpack = "";
		faction = "tb_alfr_2bn";
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
	};
	class tb_alfr2bn_soldier_sc : tb_alfr1bn_soldier_sc {
		_generalmacro = "tb_alfr2bn_soldier_sc";
		author = "ToadBall";		
		backpack = "";
		weapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};
		respawnweapons[] = {"tb_arifle_mk21c_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};
		faction = "tb_alfr_2bn";
		magazines[] = {
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"HandGrenade", 
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};
		respawnmagazines[] = {
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"30Rnd_556x45_Stanag_Tracer_Yellow", 
			"HandGrenade", 
			"SmokeShell",
			"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"
		};		
	};
	class tb_alfr2bn_soldier_s2 : tb_alfr1bn_soldier_s2 {
		_generalmacro = "tb_alfr2bn_soldier_s2";
		author = "ToadBall";		
		backpack = "";
		respawnweapons[] = {"tb_arifle_mk21c_m203_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_m203_rco","hgun_ACPC2_F","Binocular", "Throw", "Put"};	
		faction = "tb_alfr_2bn";		
	};
	class tb_alfr2bn_soldier_srf : tb_alfr1bn_soldier_rf {
		_generalmacro = "tb_alfr2bn_soldier_srf";
		author = "ToadBall";		
		displayname = "Senior Rifleman";
		icon = "iconManLeader";		
		backpack = "";		
		linkeditems[] = {"tb_alfr_platecarrier_02GL", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };
		respawnlinkeditems[] = {"tb_alfr_platecarrier_02GL", "tb_alfr_mich_AFPAT", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","NVGoggles_INDEP" };				
		magazines[] += {
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
		respawnweapons[] = {"tb_arifle_mk21c_m203_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_m203_rco", "hgun_ACPC2_F", "Binocular", "Throw", "Put"};	
		faction = "tb_alfr_2bn";	
	};	
	class tb_alfr2bn_soldier_rf : tb_alfr1bn_soldier_rf {
		_generalmacro = "tb_alfr2bn_soldier_s2";
		author = "ToadBall";		
		backpack = "";		
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};	
		faction = "tb_alfr_2bn";	
	};	
	class tb_alfr2bn_soldier_sraaw : tb_alfr1bn_soldier_sraaw {
		_generalmacro = "tb_alfr2bn_soldier_sraaw";	
		author = "ToadBall";		
		backpack = "tb_Carryall_oli_SRAAW";		
		respawnweapons[] = {"tb_arifle_mk21c_rco", "tb_launcher_mk13", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "tb_launcher_mk13", "Throw", "Put"};
		faction = "tb_alfr_2bn";
	};
	class tb_alfr2bn_soldier_sraawA : tb_alfr1bn_soldier_sraawA {
		_generalmacro = "tb_alfr2bn_soldier_sraawA";
		author = "ToadBall";		
		backpack = "tb_Carryall_oli_SRAAW";		
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		faction = "tb_alfr_2bn";
	};	
	class tb_alfr2bn_soldier_cls : tb_alfr1bn_soldier_cls {
		_generalmacro = "tb_alfr2bn_soldier_cls";	
		author = "ToadBall";		
		backpack = "";		
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		faction = "tb_alfr_2bn";
	};
	class tb_alfr2bn_soldier_lmgmk23 : tb_alfr1bn_soldier_lmgmk23 {
		_generalmacro = "tb_alfr2bn_soldier_lmgmk23";
		author = "ToadBall";		
		backpack = "";		
		faction = "tb_alfr_2bn";
	};	
	class tb_alfr2bn_soldier_marksman : tb_alfr1bn_soldier_marksman {
		_generalmacro = "tb_alfr2bn_soldier_marksman";
		author = "ToadBall";		
		backpack = "";		
		faction = "tb_alfr_2bn";
	};	
	class tb_alfr2bn_soldier_atgw : tb_alfr1bn_soldier_atgw {
		_generalmacro = "tb_alfr2bn_soldier_atgw";
		author = "ToadBall";		
		backpack = "tb_Carryall_oli_atgw";			
		faction = "tb_alfr_2bn";
	};
	class tb_alfr2bn_soldier_atgwA : tb_alfr1bn_soldier_atgwA {
		_generalmacro = "tb_alfr2bn_soldier_atgwA";
		author = "ToadBall";		
		backpack = "tb_Carryall_oli_atgw";			
		faction = "tb_alfr_2bn";
	};
	class tb_alfr2bn_soldier_eng : tb_alfr1bn_soldier_eng {
		_generalmacro = "tb_albfr2bn_soldier_eng";	
		author = "ToadBall";		
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		faction = "tb_alfr_2bn";
	};
	class tb_alfr2bn_soldier_afvcrew : tb_alfr_soldier_base {
		_generalmacro = "tb_albfr2bn_soldier_afvcrew";
		author = "ToadBall";
		displayname = "AFV Crew";		
		backpack = "";	
		scope = 2;
		weapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		respawnweapons[] = {"tb_arifle_mk21c_rco", "Throw", "Put"};
		faction = "tb_alfr_2bn";
		respawnlinkeditems[] = {"tb_alfr_platecarrier_01", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};		
		linkeditems[] = {"tb_alfr_platecarrier_01", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};		
	};
	
	class tb_alfr2bn_soldier_mfc : tb_alfr1bn_soldier_mfc {
		_generalmacro = "tb_alfr1bn_soldier_mfc";
		author = "ToadBall";		
		faction = "tb_alfr_2bn";
	};
	class tb_alfr2bn_soldier_morGun : tb_alfr1bn_soldier_morGun {
		_generalmacro = "tb_alfr2bn_soldier_morGun";
		author = "ToadBall";		
		faction = "tb_alfr_2bn";
	};	
	class tb_alfr2bn_soldier_morA : tb_alfr1bn_soldier_morA {
		_generalmacro = "tb_alfr2bn_soldier_morA";
		author = "ToadBall";		
		faction = "tb_alfr_2bn";
	};	
	class tb_alfr2bn_soldier_csw : tb_alfr1bn_soldier_csw {
		_generalmacro = "tb_alfr2bn_soldier_csw";
		author = "ToadBall";	
		faction = "tb_alfr_2bn";		
	};		
	class tb_alfr2bn_mortar : tb_alfr1bn_mortar {
		_generalmacro = "tb_alfr1bn_mortar";	
		faction = "tb_alfr_2bn";
		author = "ToadBall";				
		crew = "tb_alfr2bn_soldier_csw";
	};
	
	class I_APC_tracked_03_base_F;
	class tb_alfr2bn_mcv10 : I_APC_tracked_03_base_F {
		// to be replaced with 2 variants with additional armour and no addon armour
		author = "Toadball";
		_generalMacro = "tb_alfr2bn_mcv10";
		scope = 2;
		displayName = "MCV-10 Warrior";
		crew = "tb_alfr2bn_soldier_afvcrew";		
		typicalCargo[] = {"tb_alfr2bn_soldier_rf"};		
		faction = "tb_alfr_2bn";
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext_2bn_co.paa","tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext2_2bn_co.paa","tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext_2bn_co.paa"};
		textureList[] = {"ALFR_01", 1};
		class TextureSources
		{
			class ALFR_01
			{
				displayName = "Altis Forces - Temperate";
				author = "Toadball";
				textures[] = {"tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext_2bn_co.paa","tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext2_2bn_co.paa","tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext_2bn_co.paa"};
				faction[] = {"tb_alfr_2bn"};
			};
			class ALFR_02
			{
				displayName = "Altis Forces - Arid";
				author = "Toadball";
				textures[] = {"tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext_2bnA_co.paa","tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext2_2bnA_co.paa","tb_alfr_units\data\apc_tracked_03\apc_tracked_03_ext_2bnA_co.paa"};
				faction[] = {"tb_alfr_2bn"};
			};				
		};			
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_HandGrenade {
				magazine = "SmokeShellGreen";
				count = 7;
			};
			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 14;
			};
			class _xx_tb_100Rnd_556x45_box {
				magazine = "tb_100Rnd_556x45_box";
				count = 6;
			};					
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};	
			class _xx_tb_mk13_hedp {
				magazine = "tb_mk13_hedp";
				count = 2;
			};
			class _xx_tb_mk13_heat {
			 	magazine = "tb_mk13_heat";
				count = 2;
			}; 
			class _xx_Titan_AT {
			 	magazine = "Titan_AT";
				count = 2;
			}; 			
		};
		class TransportWeapons {
			class _xx_tb_launcher_Mk13 {
				weapon = "tb_launcher_Mk13";
				count = 1;
			};			
		};
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};		
	};
	class I_APC_Wheeled_03_cannon_F;
	class tb_alfr2bn_mcv12 : I_APC_Wheeled_03_cannon_F {
		author = "Bohemia Interactive";
		_generalMacro = "tb_alfr2bn_mcv12";
		scope = 2;
		displayName = "MCV-12 Pandur II (Recce Platoon)";
		crew = "tb_alfr2bn_soldier_afvcrew";		
		typicalCargo[] = {"tb_alfr2bn_soldier_rf"};		
		faction = "tb_alfr_2bn";
		textureList[] = {"Guerilla_03", 1};
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_HandGrenade {
				magazine = "SmokeShellGreen";
				count = 7;
			};
			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 14;
			};
			class _xx_tb_100Rnd_556x45_box {
				magazine = "tb_100Rnd_556x45_box";
				count = 6;
			};			
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};	
			class _xx_tb_mk13_hedp {
				magazine = "tb_mk13_hedp";
				count = 2;
			};
			class _xx_tb_mk13_heat {
			 	magazine = "tb_mk13_heat";
				count = 2;
			}; 
			class _xx_Titan_AT {
			 	magazine = "Titan_AT";
				count = 2;
			}; 			
		};
		class TransportWeapons {
			class _xx_tb_launcher_Mk13 {
				weapon = "tb_launcher_Mk13";
				count = 1;
			};			
		};
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};		
	};
	class tb_alfr2bn_mcv12_atgwPlt : I_APC_Wheeled_03_cannon_F {
		author = "Bohemia Interactive";
		_generalMacro = "tb_alfr2bn_mcv12_atgwPlt";
		scope = 2;
		displayName = "MCV-12 Pandur II (ATGW Platoon)";
		crew = "tb_alfr2bn_soldier_afvcrew";		
		typicalCargo[] = {"tb_alfr2bn_soldier_rf"};		
		faction = "tb_alfr_2bn";	
		textureList[] = {"Guerilla_03", 1};		
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_HandGrenade {
				magazine = "SmokeShellGreen";
				count = 7;
			};
			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 14;
			};
			class _xx_Titan_AT {
			 	magazine = "Titan_AT";
				count = 10;
			}; 			
		};
		class TransportWeapons {
			class _xx_launch_I_Titan_short_F {
				weapon = "launch_I_Titan_short_F";
				count = 1;
			};			
		};
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};		
	};	
	class I_MBT_03_base_F;
	class tb_alfr2bn_leo2ALF: I_MBT_03_base_F {	
		author = "Toadball";
		_generalMacro = "tb_alfr2bn_leo2ALF";
		scope = 2;
		displayName = "MBT Leo 2ALF";		
		faction = "tb_alfr_2bn";
		crew = "tb_alfr2bn_soldier_afvcrew";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"tb_alfr_units\data\mbt_03\mbt_03_ext01_2bnG2_co.paa","tb_alfr_units\data\mbt_03\mbt_03_ext02_2bnG2_co.paa","tb_alfr_units\data\mbt_03\mbt_03_rcws_2bnG2_co.paa"};
		textureList[] = {"ALFR_01", 1};
		class TextureSources
		{
			class ALFR_01
			{
				displayName = "Altis Forces - Temperate";
				author = "Toadball";
				textures[] = {"tb_alfr_units\data\mbt_03\mbt_03_ext01_2bnG2_co.paa","tb_alfr_units\data\mbt_03\mbt_03_ext02_2bnG2_co.paa","tb_alfr_units\data\mbt_03\mbt_03_rcws_2bnG2_co.paa"};
				faction[] = {"tb_alfr_2bn"};
			};
			class ALFR_02
			{
				displayName = "Altis Forces - Arid";
				author = "Toadball";
				textures[] = {"tb_alfr_units\data\mbt_03\mbt_03_ext01_2bnA2_co.paa","tb_alfr_units\data\mbt_03\mbt_03_ext02_2bnA2_co.paa","tb_alfr_units\data\mbt_03\mbt_03_rcws_2bnA2_co.paa"};
				faction[] = {"tb_alfr_2bn"};
			};			
		};		
		class TransportMagazines {
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons {
			class _xx_tb_arifle_mk21c_rco
			{
				weapon = "tb_arifle_mk21c_rco";
				count = 2;
			};
		};
		class TransportItems {
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};		
	};
	
	