#include "\sxp_tfar_cup_compat\main\script_mod.hpp"

class CfgPatches {
	class sxp_tfar_cup_compat {
		name = "TFAR CUP Compat - Main";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"CUP_Weapons_Backpacks","tfar_backpacks"};
		author = "Superxpdude";
		url = "https://github.com/Superxpdude/tfar_cup_compat";
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR); 
		versionAr[] = {VERSION_AR}
	};
};

#include "CfgVehicles.hpp"