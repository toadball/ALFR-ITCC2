class CfgWeapons {
	class H_HelmetIA;
	class tb_alfr_mich_AFPAT: H_HelmetIA {
		author = "Deathstrike";	
		displayName = "MICH (AFPAT)";
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_ia_helmet_co.paa"};
	};

	class H_Booniehat_khk;
	class tb_alfr_booniehat : H_Booniehat_khk {
		author = "Deathstrike";
		_generalMacro = "tb_alfr_booniehat";
		displayName = "Booniehat (AFPAT)";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_boonie_co.paa"};
	};

	class H_Booniehat_khk_hs;
	class tb_alfr_booniehat_hs : H_Booniehat_khk_hs {
		author = "Deathstrike";
		_generalMacro = "tb_alfr_booniehat_hs";
		displayName = "Booniehat (AFPAT w/ Headset)";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_boonie_co.paa"};
	};
	
	class UniformItem;
	class Uniform_Base;
	class U_I_CombatUniform;
	class tb_alfr_CombatUniform_AFPAT: U_I_CombatUniform {
		author = "Deathstrike";
		displayname = "AFCU25 (AFPAT)";
		class ItemInfo: UniformItem {
			containerclass = "Supply40";
			mass = 40;
			uniformclass = "tb_alfr_soldier_base";
			uniformmodel = "-";
		};
	};
	class U_I_CombatUniform_shortsleeve;
	class tb_alfr_CombatUniform_shortsleeve_AFPAT: U_I_CombatUniform_shortsleeve {
		author = "Deathstrike";
		displayname = "AFCU25 (AFPAT) (Rolled-up)";
		class ItemInfo: UniformItem {
			containerclass = "Supply40";
			mass = 40;
			uniformclass = "tb_alfr_soldier_shortsleeve_base";
			uniformmodel = "-";
		};
	};
	
	
	class tb_alfr_SOFCombatUniform_AFPAT: Uniform_Base {
		//U_B_CombatUniform_sgg
		author = "Deathstrike";
		scope = 2;
		displayName = "AFCU25-SOF (AFPAT)";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CombatUniform_rucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "tb_alfrPF_soldier_base";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class tb_alfr_SOFCombatUniform_GRNAFPAT: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";	
		displayName = "AFCU25-SOF (OD/AFPAT)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "tb_alfrPF_soldier_GRN_base";
		};
	};
	class tb_alfr_SOFCombatUniform_BLKAFPAT: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (BLK/AFPAT)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "tb_alfrPF_soldier_BLK_base";
		};	
	};
	class tb_alfr_SOFCombatUniform_shortsleeve_AFPAT: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (AFPAT) (Rolled-up)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "tb_alfrPF_soldier_shortsleeve_base";
		};
	};	
	class tb_alfr_SOFCombatUniform_shortsleeve_GRNAFPAT: tb_alfr_SOFCombatUniform_shortsleeve_AFPAT {
		author = "Deathstrike";	
		displayName = "AFCU25-SOF (OD/AFPAT) (Rolled-up)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "tb_alfrPF_soldier_shortsleeve_GRN_base";
		};		
	};	
	class tb_alfr_SOFCombatUniform_shortsleeve_BLKAFPAT: tb_alfr_SOFCombatUniform_shortsleeve_AFPAT {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (BLK/AFPAT) (Rolled-up)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "tb_alfrPF_soldier_shortsleeve_BLK_base";
		};			
	};	
	class tb_alfr_SOFCombatUniform_tshirt_AFPAT: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (AFPAT) (Tee)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "tb_alfrPF_soldier_tshirt_base";
		};
	};		

	class VestItem;
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;
	class V_PlateCarrierIAGL_dgtl;
	
	class tb_alfr_platecarrier_01: V_PlateCarrierIA1_dgtl {
		scope = 2;
		author = "Deathstrike";		
		displayName = "AFBPC (AFPAT)";
		picture = "\A3\Characters_F_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_vest01_co.paa"};
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
			mass = 60;
			armor = 30;
			passThrough = 0.5;				
		};
	};
	class tb_alfr_platecarrier_02: V_PlateCarrierIA2_dgtl {
		scope = 2;
		author = "Deathstrike";		
		displayName = "AFBPC (AFPAT)";
		picture = "\A3\Characters_F_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_vest01_co.paa"};
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
			mass = 80;
			armor = 30;
			passThrough = 0.5;		
			containerClass = "Supply120";			
		};
	};
	class tb_alfr_platecarrier_02GL: V_PlateCarrierIAGL_dgtl {
		scope = 2;
		author = "Deathstrike";		
		displayName = "AFBPC UGL (AFPAT)";
		picture = "\A3\Characters_F_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_vest01_co.paa"};
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
			mass = 80;
			armor = 30;
			passThrough = 0.5;	
			containerClass = "Supply120";			
		};
	};	


	// arid headgear
	class tb_alfr_mich_AFPATA: H_HelmetIA {
		author = "Deathstrike";	
		displayName = "MICH (AFPAT-A)";
		hiddenselectionstextures[] = {"\tb_alfr_units\data\deth_alfr_ia_helmet_a_co.paa"};
		scope = 2;
	};
	class tb_alfr_booniehat_AFPATA : H_Booniehat_khk {
		author = "Deathstrike";
		_generalMacro = "tb_alfr_booniehat_arid";
		displayName = "Booniehat (AFPAT-A)";
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_boonie_a_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_tan_ca.paa";
		scope = 2;
	};		
	class tb_alfr_booniehat_hs_AFPATA : H_Booniehat_khk_hs {
		author = "Deathstrike";
		_generalMacro = "tb_alfr_booniehat_hs_arid";
		displayName = "Booniehat (AFPAT-A w/ Headset)";
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_boonie_a_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_tan_ca.paa";		
		scope = 2;
	};	

	//arid uniforms
	class tb_alfr_CombatUniform_AFPATA: tb_alfr_CombatUniform_AFPAT {
		author = "Deathstrike";
		displayname = "AFCU25 (AFPAT-A)";
		scope = 2;
		class ItemInfo: ItemInfo {
			uniformclass = "tb_alfr_soldier_a_base";
		};
	};
	class tb_alfr_CombatUniform_shortsleeve_AFPATA: tb_alfr_CombatUniform_shortsleeve_AFPAT {
		author = "Deathstrike";
		displayname = "AFCU25 (AFPAT-A) (Rolled-up)";
		scope = 2;
		class ItemInfo: ItemInfo {
			uniformclass = "tb_alfr_soldier_shortsleeve_a_base";
		};
	};
	
	class tb_alfr_SOFCombatUniform_AFPATA: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";
		scope = 2;
		displayName = "AFCU25-SOF (AFPAT-A)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform1_a_co.paa"};
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_a_base";
		};
	};
	class tb_alfr_SOFCombatUniform_TANAFPATA: tb_alfr_SOFCombatUniform_AFPATA {
		author = "Deathstrike";
		scope = 2;
		displayName = "AFCU25-SOF (TAN/AFPAT-A)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_unformt_a_co.paa"};
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_TANa_base";
		};
	};	
	class tb_alfr_SOFCombatUniform_BLKAFPATA: tb_alfr_SOFCombatUniform_AFPATA {
		author = "Deathstrike";
		scope = 2;
		displayName = "AFCU25-SOF (BLK/AFPAT-A)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_a_co.paa"};
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_BLKa_base";
		};
	};		
	class tb_alfr_SOFCombatUniform_shortsleeve_AFPATA: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (AFPAT-A) (Rolled-up)";
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_shortsleeve_a_base";
		};
	};	
	class tb_alfr_SOFCombatUniform_shortsleeve_TANAFPATA: tb_alfr_SOFCombatUniform_shortsleeve_AFPATA {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (TAN/AFPAT-A) (Rolled-up)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_unformt_a_co.paa"};		
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_shortsleeve_TANa_base";
		};
	};	
	class tb_alfr_SOFCombatUniform_shortsleeve_BLKAFPATA: tb_alfr_SOFCombatUniform_shortsleeve_AFPATA {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (BLK/AFPAT-A) (Rolled-up)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_sof_uniform3_a_co.paa"};		
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_shortsleeve_BLKa_base";
		};
	};			
	
	class tb_alfr_SOFCombatUniform_tshirt_AFPATA: tb_alfr_SOFCombatUniform_AFPAT {
		author = "Deathstrike";
		displayName = "AFCU25-SOF (AFPAT-A) (Tee)";
		class ItemInfo: ItemInfo {
			uniformClass = "tb_alfrPF_soldier_tshirt_a_base";
		};
	};	

	
	//PC
	class tb_alfr_platecarrier_01_AFPATA: tb_alfr_platecarrier_01 {
		scope = 2;
		author = "Deathstrike";		
		displayName = "AFBPC (AFPAT-A)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_vest01_a_co.paa"};
		class ItemInfo: ItemInfo {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};					
		};
	};
	class tb_alfr_platecarrier_02_AFPATA: tb_alfr_platecarrier_02 {
		scope = 2;
		author = "Deathstrike";		
		displayName = "AFBPC (AFPAT-A)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_vest01_a_co.paa"};
		class ItemInfo: ItemInfo {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
		};		
	};
	class tb_alfr_platecarrier_02GL_AFPATA: tb_alfr_platecarrier_02GL {
		scope = 2;
		author = "Deathstrike";		
		displayName = "AFBPC UGL (AFPAT-A)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\tb_alfr_units\data\deth_alfr_ia_vest01_a_co.paa"};
		class ItemInfo: ItemInfo {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
		};		
	};	
	
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem;
	class tb_alfr_headset_01: ItemCore {
		author = "Toadball";
		scope =2;
		displayName  = "Headset";
		picture = "\tb_alfr_units\data\headsets\1\hs1P_ca.paa";
		model = "\tb_alfr_units\headset1.p3d";	
		class ItemInfo : HeadgearItem {
			uniformModel = "\tb_alfr_units\headset1.p3d";
		};		
	};		
};