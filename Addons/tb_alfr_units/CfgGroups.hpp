class CfgGroups {
	class Indep {
		class tb_alfr_1bn {
			name = "AAF (1 Bn)";
			class Infantry {	
				name = "Infantry Company";
				class tb_ALFR1BN_CoyHQ {
					name = "Company HQ";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_cc";
						rank = "MAJOR";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_c2";
						rank = "CAPTAIN";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_csm";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-25,0};
					};					
				};					
				class tb_ALFR1BN_InfHQ {
					name = "Platoon HQ";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_pc";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_ps";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_marksman";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
				};								
				class tb_ALFR1BN_InfSec {
					name = "Rifle Section";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_sc";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_scout";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_lmgmk23";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_sraaw";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_sraawA";
						rank = "PRIVATE";
						position[] = {0,-25,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_s2";
						rank = "CORPORAL";
						position[] = {0,-30,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_lmgmk23";
						rank = "PRIVATE";
						position[] = {0,-35,0};
					};
				};	
			};		
			class Support {
				name = "Support Weapons Company";		
				class tb_ALFR1BN_InfATdet {
					name = "ATGW Detachment";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_atgw";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_atgwA";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};					
				class tb_ALFR1BN_InfHMGdet {
					name = "HMG Detachment";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_hmgGun";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_hmgA";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};	
				class tb_ALFR1BN_InfGMGdet {
					name = "GMG Detachment";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_gmgGun";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_gmgA";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};
				class tb_ALFR1BN_InfMFCdet {
					name = "Mortar Fire Control Team";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_mfc";
						rank = "Sergeant";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_mfc";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};									
				class tb_ALFR1BN_InfMORdet {
					name = "Mortar Detachment";
					side = 2;
					faction = "tb_alfr_1bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_morGun";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_morA";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};						
			};
		};
		class tb_alfr_1bn_arid {
			name = "AAF (1 Bn Arid Kit)";
			class Infantry {	
				name = "Infantry Company";			
				class tb_ALFR1BN_a_CoyHQ {
					name = "Company HQ";
					side = 2;
					faction = "tb_alfr_1bn_arid";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_cc";
						rank = "MAJOR";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_c2";
						rank = "CAPTAIN";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_csm";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_cls";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_cls";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_cls";
						rank = "PRIVATE";
						position[] = {0,-25,0};
					};					
				};			
				class tb_ALFR1BN_a_InfHQ {
					name = "Platoon HQ";
					side = 2;
					faction = "tb_alfr_1bn_arid";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_pc";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_ps";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_cls";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_marksman";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
				};								
				class tb_ALFR1BN_a_InfSec {
					name = "Rifle Section";
					side = 2;
					faction = "tb_alfr_1bn_arid";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_sc";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_scout";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_cls";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_lmgmk23";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_sraaw";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_sraawA";
						rank = "PRIVATE";
						position[] = {0,-25,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_s2";
						rank = "CORPORAL";
						position[] = {0,-30,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_lmgmk24";
						rank = "PRIVATE";
						position[] = {0,-35,0};
					};
				};	
			};		
			class Support {
				name = "Support Weapons Company";
				aliveCategory="Infantry";				
				class tb_ALFR1BN_a_InfATdet {
					name = "ATGW Detachment";
					side = 2;
					faction = "tb_alfr_1bn_arid";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_atgw";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_atgwA";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};					
				class tb_ALFR1BN_a_InfMFCdet {
					name = "Mortar Fire Control Team";
					side = 2;
					faction = "tb_alfr_1bn_arid";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_mfc";
						rank = "Sergeant";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr1bn_soldier_a_mfc";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};															
			};		
		};
		class tb_alfr_2bn {
			name = "AAF (2 Bn)";
			class Mechanized {	
				name = "Armoured Infantry Company";
				class tb_ALFR2BN_CoyHQ {
					name = "Company HQ";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_cc";
						rank = "MAJOR";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_c2";
						rank = "CAPTAIN";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_csm";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-25,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "tb_alfr2bn_mcv10";
						rank = "SERGEANT";
						position[] = {10,0,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "tb_alfr2bn_mcv10";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};						
				};					
				class tb_ALFR2BN_InfHQ {
					name = "Platoon HQ";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_pc";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_ps";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgw";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgwA";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};		
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgw";
						rank = "PRIVATE";
						position[] = {5,-15,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgwA";
						rank = "PRIVATE";
						position[] = {5,-20,0};
					};	
					class Unit7 {
						side = 2;
						vehicle = "tb_alfr2bn_mcv10";
						rank = "SERGEANT";
						position[] = {10,0,0};
					};						
				};				
				class tb_ALFR2BN_InfSec {
					name = "Rifle Section";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_sc";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_s2";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};					
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_rf";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_lmgmk23";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_srf";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_cls";
						rank = "PRIVATE";
						position[] = {0,-25,0};
					};					
					class Unit6 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_lmgmk23";
						rank = "PRIVATE";
						position[] = {0,-30,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "tb_alfr2bn_mcv10";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};					
				};	
			};	
			class Support {
				name = "Support Weapons Company";
				class tb_ALFR2BN_InfATdet {
					name = "ATGW Detachment";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgw";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgwA";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};					
				class tb_ALFR2BN_InfATSec {
					name = "ATGW Section";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_mcv12_atgwPlt";
						rank = "SERGEANT";
						position[] = {-10,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgw";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgwA";
						rank = "PRIVATE";
						position[] = {0,-5,0};					
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgw";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfr2bn_soldier_atgwA";
						rank = "PRIVATE";
						position[] = {0,-15,0};					
					};						
				};
				class tb_ALFR2BN_MORTroop {
					name = "Mortar Troop";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_mortar";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_mortar";
						rank = "CORPORAL";
						position[] = {10,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr2bn_mortar";
						rank = "PRIVATE";
						position[] = {20,0,0};					
					};					
				};				
			};
			class Armored {	
				name = "Armour Company";
				class tb_ALFR2BN_TankSec {
					name = "Leo 2ALF Section";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_leo2ALF";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_leo2ALF";
						rank = "CORPORAL";
						position[] = {-10,0,0};
					};
				};	
				class tb_ALFR2BN_TankPlt {
					name = "Leo 2ALF Platoon";
					side = 2;
					faction = "tb_alfr_2bn";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfr2bn_leo2ALF";
						rank = "LIEUTENANT";
						position[] = {-10,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfr2bn_leo2ALF";
						rank = "CORPORAL";
						position[] = {-20,0,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfr2bn_leo2ALF";
						rank = "SERGEANT";
						position[] = {-30,0,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfr2bn_leo2ALF";
						rank = "CORPORAL";
						position[] = {-40,0,0};
					};						
				};	
			};
		};			
		class tb_alfr_pf {
			name = "AAF (Pathfinders)";	
			class SpecOps {	
				name = "Pathfinder Company";
				class tb_alfrPFC_troopHQ {
					name = "Troop HQ";
					side = 2;
					faction = "tb_alfr_pf";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_TC";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_TS";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_CLS";
						rank = "CORPORAL";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_CLS";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_CLS";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};						
				};					
				class tb_alfrPFC_patrol {
					name = "Pathfinder Patrol";
					side = 2;
					faction = "tb_alfr_pf";	
					class Unit0 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_PC";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_TL";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};	
					class Unit2 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_UGL";
						rank = "CORPORAL";
						position[] = {-5,-10,0};
					};	
					class Unit3 {
						side = 2;
						vehicle = "tb_alfrPF_soldier";
						rank = "PRIVATE";
						position[] = {-5,-15,0};
					};	
					class Unit4 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_LMG";
						rank = "PRIVATE";
						position[] = {-5,-20,0};
					};	
					class Unit5 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_TL";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};	
					class Unit6 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_UGL";
						rank = "CORPORAL";
						position[] = {0,-10,0};
					};	
					class Unit7 {
						side = 2;
						vehicle = "tb_alfrPF_soldier";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};	
					class Unit8 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_LMG";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit9 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_TL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};	
					class Unit10 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_UGL";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};	
					class Unit11 {
						side = 2;
						vehicle = "tb_alfrPF_soldier";
						rank = "PRIVATE";
						position[] = {5,-15,0};
					};	
					class Unit12 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_LMG";
						rank = "PRIVATE";
						position[] = {5,-20,0};
					};						
				};
				
			};	
		};
		class tb_alfr_pf_arid {
			name = "AAF (Pathfinders Arid Kit)";			
			class SpecOps {	
				name = "Pathfinder Company";
				class tb_alfrPFC_troopHQ {
					name = "Troop HQ";
					side = 2;
					faction = "tb_alfr_pf_arid";
					class Unit0 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_TC";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_TS";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_CLS";
						rank = "CORPORAL";
						position[] = {0,-10,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_CLS";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};
					class Unit4 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_CLS";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};						
				};					
				class tb_alfrPFC_patrol {
					name = "Pathfinder Patrol";
					side = 2;
					faction = "tb_alfr_pf_arid";	
					class Unit0 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_PC";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_TL";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};	
					class Unit2 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_UGL";
						rank = "CORPORAL";
						position[] = {-5,-10,0};
					};	
					class Unit3 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a";
						rank = "PRIVATE";
						position[] = {-5,-15,0};
					};	
					class Unit4 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_LMG";
						rank = "PRIVATE";
						position[] = {-5,-20,0};
					};	
					class Unit5 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_TL";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};	
					class Unit6 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_UGL";
						rank = "CORPORAL";
						position[] = {0,-10,0};
					};	
					class Unit7 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a";
						rank = "PRIVATE";
						position[] = {0,-15,0};
					};	
					class Unit8 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_LMG";
						rank = "PRIVATE";
						position[] = {0,-20,0};
					};
					class Unit9 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_TL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};	
					class Unit10 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_UGL";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};	
					class Unit11 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a";
						rank = "PRIVATE";
						position[] = {5,-15,0};
					};	
					class Unit12 {
						side = 2;
						vehicle = "tb_alfrPF_soldier_a_LMG";
						rank = "PRIVATE";
						position[] = {5,-20,0};
					};						
				};
			};			
		};
	};
};