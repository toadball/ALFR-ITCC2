 class CfgPatches {
	class tb_alfr_units	{
		units[] = {
			"tb_alfr1bn_soldier_cc",
			"tb_alfr1bn_soldier_c2",
			"tb_alfr1bn_soldier_csm",
			"tb_alfr1bn_soldier_pc",
			"tb_alfr1bn_soldier_ps",
			"tb_alfr1bn_soldier_sc",
			"tb_alfr1bn_soldier_s2",
			"tb_alfr1bn_soldier_rf",
			"tb_alfr1bn_soldier_csw",
			"tb_alfr1bn_soldier_scout",
			"tb_alfr1bn_soldier_sraaw",
			"tb_alfr1bn_soldier_sraawA",
			"tb_alfr1bn_soldier_cls",
			"tb_alfr1bn_soldier_lmgmk23",
			"tb_alfr1bn_soldier_lmgmk24",
			"tb_alfr1bn_soldier_marksman",
			"tb_alfr1bn_soldier_atgw",
			"tb_alfr1bn_soldier_atgwA",
			"tb_alfr1bn_soldier_hmgGun",
			"tb_alfr1bn_soldier_hmgA",
			"tb_alfr1bn_soldier_gmgGun",
			"tb_alfr1bn_soldier_gmgA",
			"tb_alfr1bn_soldier_eng",
			"tb_alfr1bn_soldier_mfc",
			"tb_alfr1bn_soldier_morGun",
			"tb_alfr1bn_soldier_morA",
			"tb_alfr2bn_soldier_cc",
			"tb_alfr2bn_soldier_c2",
			"tb_alfr2bn_soldier_csm",
			"tb_alfr2bn_soldier_pc",
			"tb_alfr2bn_soldier_ps",
			"tb_alfr2bn_soldier_sc",
			"tb_alfr2bn_soldier_s2",
			"tb_alfr2bn_soldier_srf",
			"tb_alfr2bn_soldier_rf",
			"tb_alfr2bn_soldier_sraaw",
			"tb_alfr2bn_soldier_sraawA",
			"tb_alfr2bn_soldier_cls",
			"tb_alfr2bn_soldier_lmgmk23",
			"tb_alfr2bn_soldier_marksman",
			"tb_alfr2bn_soldier_atgw",
			"tb_alfr2bn_soldier_atgwA",
			"tb_alfr2bn_soldier_eng",
			"tb_alfr2bn_soldier_afvcrew",
			"tb_alfr2bn_soldier_mfc",
			"tb_alfr2bn_soldier_morGun",
			"tb_alfr2bn_soldier_morA",
			"tb_alfr2bn_soldier_csw",
			"tb_alfr2bn_mcv10",
			"tb_alfr2bn_mcv12",
			"tb_alfr2bn_mcv12_atgwPlt",
			"tb_alfr2bn_leo2ALF",			
			"tb_alfrAC_helipilot",
			"tb_alfrAC_pilot_jet",
			"tb_alfrAC_helicrew",
			"tb_alfrPF_soldier",
			"tb_alfrPF_soldier_TC",
			"tb_alfrPF_soldier_TS",
			"tb_alfrPF_soldier_CLS",
			"tb_alfrPF_soldier_PC",
			"tb_alfrPF_soldier_TL",
			"tb_alfrPF_soldier_UGL",
			"tb_alfrPF_soldier_LMG",
			"tb_alfrPF_soldier_sraaw",
			"tb_alfr1bn_soldier_sraawA",
			"tb_alfrPF_soldier_FAC",
			"tb_alfrPF_soldier_scout",
			"tb_alfrPF_soldier_marksman",
			"tb_alfrPF_soldier_a",
			"tb_alfrPF_soldier_a_TC",
			"tb_alfrPF_soldier_a_TS",
			"tb_alfrPF_soldier_a_CLS",
			"tb_alfrPF_soldier_a_PC",
			"tb_alfrPF_soldier_a_TL",
			"tb_alfrPF_soldier_a_UGL",
			"tb_alfrPF_soldier_a_LMG",
			"tb_alfrPF_soldier_a_sraaw",
			"tb_alfrPF_soldier_a_sraawA",
			"tb_alfrPF_soldier_a_FAC",
			"tb_alfrPF_soldier_a_scout",
			"tb_alfrPF_soldier_a_marksman",
			"tb_alfr1bn_soldier_a_cc",
			"tb_alfr1bn_soldier_a_c2",
			"tb_alfr1bn_soldier_a_csm",
			"tb_alfr1bn_soldier_a_pc",
			"tb_alfr1bn_soldier_a_ps",
			"tb_alfr1bn_soldier_a_sc",
			"tb_alfr1bn_soldier_a_s2",
			"tb_alfr1bn_soldier_a_rf",
			"tb_alfr1bn_soldier_a_csw",
			"tb_alfr1bn_soldier_a_scout",
			"tb_alfr1bn_soldier_a_sraaw",
			"tb_alfr1bn_soldier_a_sraawA",
			"tb_alfr1bn_soldier_a_cls",
			"tb_alfr1bn_soldier_a_lmgmk23",
			"tb_alfr1bn_soldier_a_lmgmk24",
			"tb_alfr1bn_soldier_a_marksman",
			"tb_alfr1bn_soldier_a_atgw",
			"tb_alfr1bn_soldier_a_atgwA",
			"tb_alfr1bn_soldier_a_eng",
			"tb_alfr1bn_soldier_a_mfc"
		};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"A3_Characters_F_INDEP"};
		author = "ALFR Mod";
		authors[] = {"ToadBall","Deathstrike"};
	};
};

#define ALFR_UNITS 1
class CfgFactionClasses {
	class tb_alfr_1bn {
		displayName = "AAF (1 Bn)";
		priority = 10;
		side = 2;
		icon = "\tb_alfr_units\data\alfr1BN_co.paa";
		flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
	};
	class tb_alfr_1bn_arid {
		displayName = "AAF (1 Bn Arid Kit)";
		priority = 11;
		side = 2;
		icon = "\tb_alfr_units\data\alfr1BN_co.paa";
		flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
	};	
	class tb_alfr_2bn {
		displayName = "AAF (2 Bn)";
		priority = 12;
		side = 2;
		icon = "\tb_alfr_units\data\alfr2BN_co.paa";
		flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
	};
	class tb_alfr_ac {
		displayName = "AAF (Air Corps)";
		priority = 13;
		side = 2;
		icon = "\tb_alfr_units\data\alfrAC_co.paa";
		flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
	};
	class tb_alfr_pf {
		displayName = "AAF (Pathfinder Company)";
		priority = 14;
		side = 2;
		icon = "\tb_alfr_units\data\alfrPF_co.paa";
		flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
	};	
	class tb_alfr_pf_arid {
		displayName = "AAF (Pathfinder Company Arid Kit)";
		priority = 15;
		side = 2;
		icon = "\tb_alfr_units\data\alfrPF_co.paa";
		flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
	};		
};


class CfgUnitInsignia {
	class ALFR1BN {
		displayName = "1 Bn. Deployment Readiness Group";
		author = "Toadball"; 
		texture = "\tb_alfr_units\data\alfr1BN_co.paa";
		textureVehicle = "";
	};
	class ALFR2BN {
		displayName = "2 Bn. Armoured Infantry"; 
		author = "Toadball"; 
		texture = "\tb_alfr_units\data\alfr2BN_co.paa"; 
		textureVehicle = ""; 
	};
	class ALFRAC {
		displayName = "Air Corps"; 
		author = "Toadball"; 
		texture = "\tb_alfr_units\data\alfrAC_co.paa"; 
		textureVehicle = ""; 
	};	
	class ALFRPFC {
		displayName = "Pathfinder Company"; 
		author = "Toadball"; 
		texture = "\tb_alfr_units\data\alfrPF_co.paa"; 
		textureVehicle = ""; 
	};		
};

class CfgVehicleClasses {
	class tb_alfr_men_arid {
		displayName = "Men (Arid)";
	};
};




class CfgVehicles {
	#include "baseUnits.hpp"	
	#include "alfr1bnUnits.hpp"
	#include "alfr1bnUnits_arid.hpp"
	#include "alfr2bnUnits.hpp"
	#include "alfrACUnits.hpp"
	//#include "alfrACUnits_arid.hpp"
	#include "alfrPFunits.hpp"
	#include "alfrPFunits_arid.hpp"
	#include "rucks.hpp"	
	#include "rucks_arid.hpp"
	#include "crates.hpp"
};

#include "CfgGroups.hpp"	
#include "CfgWeapons.hpp"	
