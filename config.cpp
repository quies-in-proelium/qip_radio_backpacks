// A total overhaul of "Talon's TFAR Radio Backpack Additions by Tablesalt"
//
// Compatible with TFAR 1.0 and the original "Talon's TFAR Radio Backpack Additions"
// NOT Compatible with TFAR below 1.0
//
// The mass of the kitbag was increased by 80 and the maximumload reduced by 80

class CfgPatches {
	class qip_radio_backpacks {
		units[] = {
			"talon_kitbag_coyote",
			"talon_kitbag_winter",
			"talon_kitbag_khaki",
			"qip_kitbag_khaki_west",
			"qip_kitbag_coyote_west",
			"qip_kitbag_winter_west",
			"qip_kitbag_khaki_east",
			"qip_kitbag_coyote_east",
			"qip_kitbag_winter_east",
			"qip_kitbag_khaki_independent",
			"qip_kitbag_coyote_independent",
			"qip_kitbag_winter_independent"
		};
		requiredVersion = 1;
		requiredAddons[] = {
			"A3_Modules_F",
			"A3_UI_F",
			"A3_Structures_F_Items_Electronics",
			"A3_Weapons_F_ItemHolders",
			"tfar_backpacks"
		};
		author[] = {"NemesisRE"};
		authorUrl = "";
		version = 1;
		versionStr = 1.0;
		versionAr[] = {1, 0, 0};
	};
};

class CfgVehicles {
	class TFAR_rt1523g;	// External class reference
	class TFAR_mr3000;
	class TFAR_anprc155;

	class qip_kitbag_khaki_west : TFAR_rt1523g {
		author = "NemesisRE";
		displayName = "[qip] Kitbag Radio Green (West)";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
		maximumLoad = 200;
		mass = 130;
	};

	class qip_kitbag_coyote_west : qip_kitbag_khaki_west {
		displayName = "[qip] Kitbag Radio Coyote (West)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};

	class qip_kitbag_winter_west : qip_kitbag_khaki_west {
		displayName = "[qip] Kitbag Radio Winter (West)";
		hiddenSelectionsTextures[] = {"qip_radio_backpacks\data\textures\kitbag_wte.paa"};
	};

	class qip_kitbag_khaki_east : TFAR_mr3000 {
		author = "NemesisRE";
		displayName = "[qip] Kitbag Radio Green (East)";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
		maximumLoad = 200;
		mass = 130;
	};

	class qip_kitbag_coyote_east : qip_kitbag_khaki_east {
		displayName = "[qip] Kitbag Radio Coyote (East)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};

	class qip_kitbag_winter_east : qip_kitbag_khaki_east {
		displayName = "[qip] Kitbag Radio Winter (East)";
		hiddenSelectionsTextures[] = {"qip_radio_backpacks\data\textures\kitbag_wte.paa"};
	};

	class qip_kitbag_khaki_independent : TFAR_anprc155 {
		author = "NemesisRE";
		displayName = "[qip] Kitbag Radio Green (Independent)";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
		maximumLoad = 200;
		mass = 130;
	};

	class qip_kitbag_coyote_independent : qip_kitbag_khaki_independent {
		displayName = "[qip] Kitbag Radio Coyote (Independent)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};

	class qip_kitbag_winter_independent : qip_kitbag_khaki_independent {
		displayName = "[qip] Kitbag Radio Winter (Independent)";
		hiddenSelectionsTextures[] = {"qip_radio_backpacks\data\textures\kitbag_wte.paa"};
	};

	// For older Missions
	class talon_kitbag_khaki: qip_kitbag_khaki_west {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
	};

	class talon_kitbag_coyote: qip_kitbag_coyote_west {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
	};

	class talon_kitbag_winter: qip_kitbag_winter_west {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
	};
};
