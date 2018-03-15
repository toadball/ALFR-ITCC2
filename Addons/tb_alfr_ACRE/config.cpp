class CfgPatches {
	class tb_alfr_ACRE	{
		author = "ALFR Mod";
		authors[] = {"Toadball"};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"A3_Characters_F_INDEP","tb_alfr_units","acre_main"};
	};	
};

class CfgVehicles {
	class tb_alfr_soldier_base;
	class tb_alfr1bn_soldier_cc : tb_alfr_soldier_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};

	class tb_alfr1bn_soldier_pc : tb_alfr_soldier_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
		backpack = "tb_Carryall_oli_PC";		
	};	
	class tb_alfr1bn_soldier_ps : tb_alfr_soldier_base {	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
		backpack = "tb_Carryall_oli_PS";			
	};	
	class tb_alfr1bn_soldier_sc : tb_alfr_soldier_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};	
	class tb_alfr1bn_soldier_s2 : tb_alfr_soldier_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};	
	class tb_alfr1bn_soldier_mfc : tb_alfr_soldier_base {
		backpack = "tb_Carryall_oli_mfc";
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};

	class tb_alfr2bn_soldier_pc : tb_alfr1bn_soldier_pc {	
		items[] += {"ACRE_PRC152","ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152","ACRE_PRC152"};
		backpack = "";
	};		
	class tb_alfr2bn_soldier_ps : tb_alfr1bn_soldier_ps {	
		items[] += {"ACRE_PRC152","ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152","ACRE_PRC152"};
		backpack = "";
	};		
	class tb_alfr2bn_soldier_sc : tb_alfr1bn_soldier_sc {	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};	
	class tb_alfr2bn_soldier_s2 : tb_alfr1bn_soldier_s2 {	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};	
	class tb_alfr2bn_soldier_mfc : tb_alfr1bn_soldier_mfc {	
		items[] += {"ACRE_PRC152","ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152","ACRE_PRC152"};
	};	
	class I_helipilot_F;
	class tb_alfrAC_helipilot : I_helipilot_F {	
		items[] += {"ACRE_PRC152","ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152","ACRE_PRC152"};
	};
	class I_pilot_F;
	class tb_alfrAC_pilot_jet : I_pilot_F {
		items[] += {"ACRE_PRC152","ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152","ACRE_PRC152"};
	};	
	class tb_alfrPF_soldier;
	class tb_alfrPF_soldier_TC : tb_alfrPF_soldier {
		author = "ToadBall";
		backpack = "tb_Carryall_PC";	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};
	class tb_alfrPF_soldier_TS : tb_alfrPF_soldier_TC {
		author = "ToadBall";
		backpack = "tb_Carryall_oli_PC";	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};
	class tb_alfrPF_soldier_PC : tb_alfrPF_soldier {
		author = "ToadBall";
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};
	class tb_alfrPF_soldier_FAC : tb_alfrPF_soldier {
		author = "ToadBall";
		backpack = "tb_Carryall_oli_pf_fac";
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};

	class tb_alfr_soldier_a_base;
	class tb_alfr1bn_soldier_a_cc : tb_alfr_soldier_a_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};	
	class tb_alfr1bn_soldier_a_pc : tb_alfr_soldier_a_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
		backpack = "tb_Carryall_tan_PC";		
	};	
	class tb_alfr1bn_soldier_a_ps : tb_alfr_soldier_a_base {
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
		backpack = "tb_Carryall_tan_PS";	
	};
	class tb_alfr1bn_soldier_a_sc : tb_alfr_soldier_a_base {	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};
	class tb_alfr1bn_soldier_a_s2 : tb_alfr_soldier_a_base {	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};	
	class tb_alfr1bn_soldier_a_mfc : tb_alfr_soldier_a_base {
		backpack = "tb_Carryall_tan_mfc";
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};
	
	class tb_alfrPF_soldier_a;
	class tb_alfrPF_soldier_a_TC : tb_alfrPF_soldier_a {
		author = "ToadBall";
		backpack = "tb_Carryall_PC";	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};
	class tb_alfrPF_soldier_a_TS : tb_alfrPF_soldier_a_TC {
		author = "ToadBall";
		backpack = "tb_Carryall_oli_PC";	
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};
	};
	class tb_alfrPF_soldier_a_PC : tb_alfrPF_soldier_a {
		author = "ToadBall";
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};
	class tb_alfrPF_soldier_a_FAC : tb_alfrPF_soldier_a {
		author = "ToadBall";
		backpack = "tb_Carryall_oli_pf_fac";
		items[] += {"ACRE_PRC152"};
		respawnitems[] += {"ACRE_PRC152"};	
	};
	
	class tb_Carryall_oli;
	class tb_Carryall_oli_PC : tb_Carryall_oli {
		author = "ToadBall";
		class TransportItems {		
			class _xx_ACRE_PRC117F {
				count = 1;
				name = "ACRE_PRC117F";
			};															
		};	
	};
	class tb_Carryall_oli_PS : tb_Carryall_oli_PC {author = "ToadBall";};	
	class tb_Carryall_oli_mfc : tb_Carryall_oli {
		author = "ToadBall";
		scope = 1;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				count = 3;
				magazine = "30Rnd_556x45_Stanag";
			};				
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow {
				count = 1;
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
			};	
			class _xx_SmokeShell {
				count = 1;
				magazine = "SmokeShell";
			};				
			class _xx_HandGrenade {			
				count = 1;
				magazine = "HandGrenade";
			};												
		};

		class TransportWeapons {
			class _xx_Rangefinder {
				weapon = "Rangefinder";
				count = 1;
			};
		};		
		class TransportItems {		
			class _xx_ACRE_PRC117F {
				count = 1;
				name = "ACRE_PRC117F";
			};															
		};	
	};
	class tb_Carryall_oli_pf_fac : tb_Carryall_oli {
		author = "ToadBall";
		scope = 1;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				count = 3;
				magazine = "30Rnd_556x45_Stanag";
			};				
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow {
				count = 1;
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
			};	
			class _xx_SmokeShell {
				count = 1;
				magazine = "SmokeShell";
			};				
			class _xx_HandGrenade {			
				count = 1;
				magazine = "HandGrenade";
			};	
			class _xx_1Rnd_HE_Grenade_shell {
				count = 4;
				magazine = "1Rnd_HE_Grenade_shell";
			};	
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 4;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_Laserbatteries {
				count = 2;
				magazine = "Laserbatteries";
			};												
		};
		class TransportWeapons {
			class _xx_Laserdesignator {
				weapon = "Laserdesignator";
				count = 1;
			};
		};			
		class TransportItems {		
			class _xx_ACRE_PRC117F {
				count = 1;
				name = "ACRE_PRC117F";
			};															
		};	
	};
	
	class tb_Carryall_tan;
	class tb_Carryall_tan_PC : tb_Carryall_tan {
		author = "ToadBall";
		class TransportItems {		
			class _xx_ACRE_PRC117F {
				count = 1;
				name = "ACRE_PRC117F";
			};															
		};		
	};
	class tb_Carryall_tan_PS : tb_Carryall_tan_PC {author = "ToadBall";};
	class tb_Carryall_tan_mfc : tb_Carryall_tan {
		author = "ToadBall";
		scope = 1;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				count = 3;
				magazine = "30Rnd_556x45_Stanag";
			};				
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow {
				count = 1;
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
			};	
			class _xx_SmokeShell {
				count = 1;
				magazine = "SmokeShell";
			};				
			class _xx_HandGrenade {			
				count = 1;
				magazine = "HandGrenade";
			};												
		};

		class TransportWeapons {
			class _xx_Rangefinder {
				weapon = "Rangefinder";
				count = 1;
			};
		};		
		class TransportItems {		
			class _xx_ACRE_PRC117F {
				count = 1;
				name = "ACRE_PRC117F";
			};															
		};	
	};	
	class tb_Carryall_tan_pf_fac : tb_Carryall_tan {
		author = "ToadBall";
		scope = 1;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				count = 3;
				magazine = "30Rnd_556x45_Stanag";
			};				
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow {
				count = 1;
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
			};	
			class _xx_SmokeShell {
				count = 1;
				magazine = "SmokeShell";
			};				
			class _xx_HandGrenade {			
				count = 1;
				magazine = "HandGrenade";
			};	
			class _xx_1Rnd_HE_Grenade_shell {
				count = 4;
				magazine = "1Rnd_HE_Grenade_shell";
			};	
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 4;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_Laserbatteries {
				count = 2;
				magazine = "Laserbatteries";
			};												
		};
		class TransportWeapons {
			class _xx_Laserdesignator {
				weapon = "Laserdesignator";
				count = 1;
			};
		};			
		class TransportItems {		
			class _xx_ACRE_PRC117F {
				count = 1;
				name = "ACRE_PRC117F";
			};															
		};	
	};	
		
};