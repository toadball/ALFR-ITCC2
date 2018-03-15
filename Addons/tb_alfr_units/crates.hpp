	class Box_IND_Wps_F;
	class tb_alfr_mk21_crate : Box_IND_Wps_F {
		mapSize = 1.81;
		author = "Toadball";
		_generalMacro = "Box_IND_Wps_F";
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		displayName = "ALFR Weapons - Mk 21";
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 39;
			};
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 25;
			};			

		};
		class TransportWeapons {
			class _xx_tb_arifle_mk21c_rco
			{
				weapon = "tb_arifle_mk21c_rco";
				count = 3;
			};
			class _xx_tb_arifle_mk21_rco
			{
				weapon = "tb_arifle_mk21_rco";
				count = 3;
			};
			class _xx_tb_arifle_mk21c_m203_rco
			{
				weapon = "tb_arifle_mk21c_m203_rco";
				count = 3;
			};
			class _xx_tb_arifle_mk21_m203_rco
			{
				weapon = "tb_arifle_mk21_m203_rco";
				count = 3;
			};			

		};
		class TransportItems {
			class _xx_optic_NVS {
				name = "optic_NVS";
				count = 2;
			};
		};
	};
	class Box_IND_WpsLaunch_F;
	class tb_alfr_mk13_crate: Box_IND_WpsLaunch_F {
		mapSize = 2.34;
		author = "Toadball";
		_generalMacro = "tb_alfr_mk13_crate";
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon = "iconCrateLong";
		displayName = "ALFR Weapons - Mk 13";
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		class TransportMagazines {
			class _xx_tb_mk13_heat
			{
				magazine = "tb_mk13_heat";
				count = 5;
			};
			class _xx_tb_mk13_hedp
			{
				magazine = "tb_mk13_hedp";
				count = 5;
			};
			class _xx_tb_mk13_smoke
			{
				magazine = "tb_mk13_smoke";
				count = 2;
			};
		};
		class TransportWeapons {
			class _xx_tb_launcher_mk13
			{
				weapon = "tb_launcher_mk13";
				count = 3;
			};
		};
		class TransportItems {};
	};
	class Box_IND_WpsSpecial_F;
	class tb_alfr_lmg_crate: Box_IND_WpsSpecial_F {
		mapSize = 2.34;
		author = "Toadball";
		_generalMacro = "tb_alfr_lmg_crate";
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon = "iconCrateLarge";
		displayName = "ALFR Weapons - Light Machine Guns";
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		class TransportMagazines {
			class _xx_tb_200Rnd_556x45_box {
				magazine = "tb_200Rnd_556x45_box";
				count = 12;
			};
			class _xx_tb_200Rnd_556x45_box_tracer_yellow {
				magazine = "tb_200Rnd_556x45_box_tracer_yellow";
				count = 12;
			};			
			class _xx_150Rnd_762x51_Box {
				magazine = "150Rnd_762x51_Box";
				count = 12;
			};
			class _xx_tb_150Rnd_762x51_Box_Tracer_yellow {
				magazine = "tb_150Rnd_762x51_Box_Tracer_yellow";
				count = 12;
			};			
		};
		class TransportWeapons {
			class _xx_tb_lmg_mk23_rco {
				weapon = "tb_lmg_mk23_rco";
				count = 2;
			};
			class _xx_tb_lmg_mk24_rco {
				weapon = "tb_lmg_mk24_rco";
				count = 2;
			};
		};
		class TransportItems {
			class _xx_optic_NVS {
				name = "optic_NVS";
				count = 2;
			};
		};
	};	
	class tb_alfr_scout_crate: Box_IND_WpsSpecial_F {
		mapSize = 2.34;
		author = "Toadball";
		_generalMacro = "tb_alfr_scout_crate";
		scope = 2;
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon = "iconCrateLarge";
		displayName = "ALFR Weapons - Scout Weapons";
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		class TransportMagazines {
			class _xx_tb_20rnd_762x51_mk25_mag {
				magazine = "tb_20rnd_762x51_mk25_mag";
				count = 12;
			};
			class _xx_tb_5Rnd_338Lapua {
				magazine = "tb_5Rnd_338Lapua";
				count = 12;
			};
		};
		class TransportWeapons {
			class _xx_tb_arifle_mk25_rco {
				weapon = "tb_arifle_mk25_rco";
				count = 2;
			};
			class _xx_tb_arifle_mk22_w_lrps {
				weapon = "tb_arifle_mk22_w_lrps";
				count = 2;
			};
		};
		class TransportItems {
			class _xx_optic_SOS {
				name = "optic_SOS";
				count = 2;
			};
			class _xx_optic_NVS {
				name = "optic_NVS";
				count = 2;
			};
			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 2;
			};
		};
	};	