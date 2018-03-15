class CfgPatches {
	class tb_alfr_mk22 {
		author = "ALFR Mod";
		authors[] = {"Toadball"};
		units[] = {};
		weapons[] = {"tb_arifle_mk22_w","tb_arifle_mk22_w_lrps","tb_arifle_mk22_d","tb_arifle_mk22_d_lrps"};
		requiredaddons[] = {"A3_Weapons_F","cba_jr"};
		requiredversion = 0.1;
	};
};

/*external*/ class Mode_SemiAuto;
/*external*/ class asdg_FrontSideRail;
/*external*/ class asdg_OpticRail1913;
/*external*/ class asdg_UnderSlot;
/*external*/ class asdg_MuzzleSlot_338;
class CfgMagazines {
	class 10Rnd_338_Mag;
	class tb_5Rnd_338Lapua: 10Rnd_338_Mag {
		author = "Toadball";	
		scope = 2;
		displayName = "5Rnd .338 Lapua";
		descriptionShort = "Used in: Mk22";
		count = 5;
		picture = "\tb_alfr_mk22\data\M_lrr_CA.paa";
		mass = 12;
		tracersEvery = 0;
	};
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class LRR_base_f : Rifle_Long_Base_F {
		class Single : Mode_SemiAuto {};
	};
	class tb_arifle_mk22_base : LRR_base_f {
		author = "Toadball";
		cse_bipod = 1;
		descriptionshort = "Sniper Rifle<br />Caliber: .338";
		displayname = "Mk 22 LRR .338";	
		model = "\tb_alfr_mk22\LRR.p3d";
		picture = "\tb_alfr_mk22\data\w_mk22_ca.paa";
		magazines[] = {"tb_5Rnd_338Lapua"};
		hiddenselections[] = {"stock"};
		hiddenselectionstextures[] = {"\tb_alfr_mk22\data\lrr_scoped_co.paa"};
		//handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"};
		handanim[] = {};
		inertia = 0.7;
		dexterity = 1.3;
		recoil = "recoil_dmr_02";
		recoilprone = "assaultriflebase";
		deployedPivot = "bipod_pivot";
		
		class Single : Single {
		//	recoil = "recoil_dmr_02";
			//recoilprone = "assaultriflebase";
			reloadtime = 1.5;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"a3\sounds_f\weapons\Other\reload_bolt_3", 1, 1, 15};
				closure2[] = {"a3\sounds_f\weapons\Other\reload_bolt_3", 1, 1, 15};	
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"\tb_alfr_mk22\data\sounds\M24_single_shot_v1_A", 3.5, 1, 1800};
				begin2[] = {"\tb_alfr_mk22\data\sounds\M24_single_shot_v1_A", 3.5, 1, 1800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};	
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-17",1,1,600};
				soundBegin[] = {"begin1",1};
			};			
		};
		class far_optic1: Single {
			airateoffire = 5;
			airateoffiredistance = 700;
			maxrange = 1000;
			maxrangeprobab = 0.3;
			midrange = 500;
			midrangeprobab = 0.7;
			minrange = 150;
			minrangeprobab = 0.1;
			requiredoptictype = 1;
			showtoplayer = 0;
		};
		class medium_optic2: Single {
			airateoffire = 6;
			airateoffiredistance = 750;
			maxrange = 750;
			maxrangeprobab = 0.3;
			midrange = 500;
			midrangeprobab = 0.7;
			minrange = 250;
			minrangeprobab = 0.1;
			requiredoptictype = 2;
			showtoplayer = 0;
		};
		class far_optic2: far_optic1 {
			airateoffire = 8;
			airateoffiredistance = 1500;
			maxrange = 1500;
			maxrangeprobab = 0.3;
			midrange = 1000;
			midrangeprobab = 0.7;
			minrange = 500;
			minrangeprobab = 0.1;
			requiredoptictype = 2;
		};		
		
		
		class Library {
			libtextdesc = "Mk 22 Long Range Rifle is a .338 caliber sniper rifle. The Mk 22 LRR is a bolt-action rifle valued for its accuracy up to 2000m.";
		};
		
		class WeaponSlotsInfo {
			mass = 110;
			allowedSlots[] = {};
			class OpticRail_mk22: asdg_OpticRail1913 {};
			class UnderSlot_mk22 : asdg_UnderSlot {};
			class MuzzleSlot_mk22 : asdg_MuzzleSlot_338 {};
		};
	};
	class tb_arifle_mk22_w : tb_arifle_mk22_base {
		author = "Toadball";
		hiddenselections[] = {"stock"};
		hiddenselectionstextures[] = {"\tb_alfr_mk22\data\lrr_scoped_w_co.paa"};
		picture = "\tb_alfr_mk22\data\w_mk22W_ca.paa";
		scope = 2;
	};
	class tb_arifle_mk22_d : tb_arifle_mk22_base {
		author = "Toadball";
		hiddenselections[] = {"stock"};
		hiddenselectionstextures[] = {"\tb_alfr_mk22\data\lrr_scoped_co.paa"};
		scope = 2;
	};
	class tb_arifle_mk22_w_lrps : tb_arifle_mk22_w {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_LRPS";
				slot = "OpticRail_mk22";
			};
		};
	};
	class tb_arifle_mk22_d_lrps : tb_arifle_mk22_d {
		author = "Toadball";
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_LRPS";
				slot = "OpticRail_mk22";
			};
		};
	};	
	

};