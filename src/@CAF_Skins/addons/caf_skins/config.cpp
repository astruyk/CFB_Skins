class CfgPatches
{
	class CAF_Skins
	{
		requiredVersion = 1;
		author[] = { "Anton Struyk" };
		authorUrl = "https://github.com/astruyk/";
		version = 0.0.0;
		versionStr = "0.0.0";
		versionAr[] = {0,0,0};
		requiredAddons[] =
		{
			"A3_Characters_F_BLUFOR",
			"A3_Air_F_EPB_Heli_Light_03",
			"A3_Air_F_Beta_Heli_Transport_02"
		};
		
		weapons[] =
		{
			CAF_CADPAT_Uniform,
			CAF_CADPAT_TL_Uniform,
			CAF_CADPAT_AR_Uniform,
			CAF_CADPAT_C97A3_Sight
		};
		
		units[] =
		{
			CAF_TW_Soldier,
			CAF_TW_Soldier_TL,
			CAF_TW_Soldier_AR,
			CAF_Helo_Griffon,
			CAF_Helo_Griffon_Unarmed,
			CAF_Helo_Cyclone
		};
	};
};

class CfgFactionClasses
{
	class CAF_Base_Faction
	{
		displayName = "Canadian Armed Forces";
		author = "Anton Struyk";
		icon = "\caf_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 1; //Blufor
	};
};

class CfgVehicleClasses
{
	class CAF_CADPAT_TW_VehicleClass
	{
		displayName = "CADPAT TW";
	};
	
	class CAF_CADPAT_AR_VehicleClass
	{
		displayName = "CADPAT AR";
	};
	
	class CAF_CADPAT_Arctic_VehicleClass
	{
		displayName = "CADPAT Arctic";
	};
	
	class CAF_RCAF_VehicleClass
	{
		displayName = "RCAF";
	};
};

class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_TL_F;
	class B_soldier_AR_F;
	
	class CAF_TW_Soldier : B_Soldier_F
	{
		_generalMacro  = "CAF_TW_Soldier";
		scope = 2;
		scopeCurator = 2;
		faction = "CAF_Base_Faction";
		vehicleClass = "CAF_CADPAT_TW_VehicleClass";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "CAF_CADPAT_Uniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\caf_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = {"V_TacVest_oli","CAF_CADPAT_TW_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	
	class CAF_TW_Soldier_TL : B_Soldier_TL_F
	{
		_generalMacro  = "CAF_TW_Soldier_TL";
		scope = 2;
		scopeCurator = 2;
		faction = "CAF_Base_Faction";
		vehicleClass = "CAF_CADPAT_TW_VehicleClass";
		displayName = "Section Leader";
		icon="iconManLeader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "CAF_CADPAT_TL_Uniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\caf_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = {"V_TacVest_oli","CAF_CADPAT_TW_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
	};
	
	class CAF_TW_Soldier_AR : B_soldier_AR_F
	{
		_generalMacro  = "CAF_TW_Soldier_AR";
		scope = 2;
		scopeCurator = 2;
		faction = "CAF_Base_Faction";
		vehicleClass = "CAF_CADPAT_TW_VehicleClass";
		displayName = "Automatic Rifleman";
		//icon="iconManLeader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "CAF_CADPAT_AR_Uniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\caf_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = {"V_Chestrig_oli","CAF_CADPAT_TW_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	
	// Helicopters
	class I_Heli_light_03_unarmed_F;
	class I_Heli_light_03_F;
	class I_Heli_Transport_02_F;

	class CAF_Helo_Griffon : I_Heli_light_03_F
	{
		_generalMacro  = "CAF_Helo_Griffon";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-146 Griffon (armed)";
		faction = "CAF_Base_Faction";
		vehicleClass = "CAF_RCAF_VehicleClass";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\caf_skins\CH146_0.paa" };
	};

	class CAF_Helo_Griffon_Unarmed : I_Heli_light_03_unarmed_F
	{
		_generalMacro  = "CAF_Helo_Griffon_Unarmed";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-146 Griffon Transport";
		faction = "CAF_Base_Faction";
		vehicleClass = "CAF_RCAF_VehicleClass";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\caf_skins\CH146_0.paa" };
	};

	class CAF_Helo_Cyclone : I_Heli_Transport_02_F
	{
		_generalMacro  = "CAF_Helo_Cyclone";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-148 Cyclone";
		faction = "CAF_Base_Faction";
		vehicleClass = "CAF_RCAF_VehicleClass";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = { "\caf_skins\CH148_0.paa", "\caf_skins\CH148_1.paa", "\caf_skins\CH148_2.paa"};
	};
};
 
class cfgWeapons
{
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_vest;
	class U_B_CombatUniform_mcam_tshirt;
	class UniformItem;
	class H_HelmetIA;
	class optic_Arco;
 
	class CAF_CADPAT_Uniform : U_B_CombatUniform_mcam
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAD Combat Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		author = "Anton Struyk";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_TW_Soldier"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	
	class CAF_CADPAT_TL_Uniform : U_B_CombatUniform_mcam_vest
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAD Combat Uniform (Rolled Up)";
		picture = "\A3\characters_f\data\ui\U_B_CombatUniform_mcam_vest.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "Anton Struyk";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_TW_Soldier_TL"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	
	class CAF_CADPAT_AR_Uniform : U_B_CombatUniform_mcam_vest
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAD Combat Uniform (Tee)";
		picture = "\A3\characters_f\data\ui\U_B_CombatUniform_mcam_tshirt.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "Anton Struyk";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_TW_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	
	class CAF_CADPAT_TW_Helmet : H_HelmetIA
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "Combat Helmet (CADPAD TW)";
		author = "Anton Struyk";
		//model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		//picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_skins\CADPAT_Helmet1_TW.paa"};
	};
	
	class CAF_CADPAT_C97A3_Sight : optic_Arco
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan C97A3";
		author = "Anton Struyk";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\caf_skins\Elcan_C97A3_Sight.paa"};
	};
};