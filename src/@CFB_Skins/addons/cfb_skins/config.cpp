class CfgPatches
{
	class CFB_Skins
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
			"A3_Air_F_Beta_Heli_Transport_02",
			"asdg_jointrails"
		};
		
		weapons[] =
		{
			"CFB_CADPAT_TW_Uniform",
			"CFB_CADPAT_TW_Rolled_Uniform",
			"CFB_CADPAT_TW_Tshirt_Uniform",
			"CFB_CADPAT_C97A3_Sight"
		};
		
		units[] =
		{
			"CFB_TW_Soldier",
			"CFB_TW_Soldier_TL",
			"CFB_TW_Soldier_AR",
			"CFB_TW_Soldier_Marksman",
			"CFB_RCAF_Helo_Pilot",
			"CFB_RCAF_Helo_Crew",
			"CFB_Helo_Griffon",
			"CFB_Helo_Griffon_Unarmed",
			"CFB_Helo_Cyclone"
		};
	};
};

class CfgFactionClasses
{
	class CFB_Base_Faction
	{
		displayName = "Canadian Armed Forces";
		author = "Anton Struyk";
		icon = "\cfb_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 1; //Blufor
	};
};

class CfgVehicleClasses
{
	class CFB_CADPAT_TW_VehicleClass
	{
		displayName = "CADPAT TW";
	};
	
	class CFB_CADPAT_AR_VehicleClass
	{
		displayName = "CADPAT AR";
	};
	
	class CFB_CADPAT_Arctic_VehicleClass
	{
		displayName = "CADPAT Arctic";
	};
	
	class CFB_RCAF_VehicleClass
	{
		displayName = "RCAF";
	};
};

class CfgVehicles
{
	class B_Soldier_F;
	class CFB_TW_Soldier : B_Soldier_F
	{
		_generalMacro  = "CFB_TW_Soldier";
		scope = 2;
		scopeCurator = 2;
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_CADPAT_TW_VehicleClass";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "CFB_CADPAT_TW_Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = { "CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
		weapons[] = { "arifle_MX_Black_F", "Throw", "Put" };
	};
	
	class B_Soldier_TL_F;
	class CFB_TW_Soldier_TL : B_Soldier_TL_F
	{
		_generalMacro  = "CFB_TW_Soldier_TL";
		scope = 2;
		scopeCurator = 2;
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_CADPAT_TW_VehicleClass";
		displayName = "Section Leader";
		icon="iconManLeader";
		nakedUniform = "U_BasicBody";
		uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = {"CFB_Vest_Tactical_TW","CFB_CADPAT_TW_Patrol","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
	};
	
	class B_soldier_AR_F;
	class CFB_TW_Soldier_AR : B_soldier_AR_F
	{
		_generalMacro  = "CFB_TW_Soldier_AR";
		scope = 2;
		scopeCurator = 2;
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_CADPAT_TW_VehicleClass";
		displayName = "Automatic Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "CFB_CADPAT_TW_Tshirt_Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = {"CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
		weapons[] = { "arifle_MX_SW_Black_F", "Throw", "Put" };
	};
	
	class B_soldier_M_F;
	class CFB_TW_Soldier_Marksman : B_soldier_M_F
	{
		scope = 2;
		scopeCurator = 2;
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_CADPAT_TW_VehicleClass";
		displayName = "Automatic Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
		
		linkedItems[] = { "CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Boonie", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
		weapons[] = { "arifle_MXM_Black_F", "Throw", "Put" };
	};
	
	// Air Force
	class B_helicrew_F;
	class CFB_RCAF_Helo_Pilot : B_helicrew_F
	{
		scope = 2;
		scopeCurator = 2;
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_RCAF_VehicleClass";
		displayName = "Helicopter Pilot";
		
		uniformClass = "U_I_pilotCoveralls";
	};
	
	class CFB_RCAF_Helo_Crew : B_helicrew_F
	{
		scope = 2;
		scopeCurator = 2;
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_RCAF_VehicleClass";
		displayName = "Helicopter Crew";
		
		uniformClass = "U_I_pilotCoveralls";
	};

	class I_Heli_light_03_F;
	class CFB_Helo_Griffon : I_Heli_light_03_F
	{
		_generalMacro  = "CFB_Helo_Griffon";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-146 Griffon (armed)";
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_RCAF_VehicleClass";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
	};

	class I_Heli_light_03_unarmed_F;
	class CFB_Helo_Griffon_Unarmed : I_Heli_light_03_unarmed_F
	{
		_generalMacro  = "CFB_Helo_Griffon_Unarmed";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-146 Griffon Transport";
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_RCAF_VehicleClass";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
	};

	class I_Heli_Transport_02_F;
	class CFB_Helo_Cyclone : I_Heli_Transport_02_F
	{
		_generalMacro  = "CFB_Helo_Cyclone";
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-148 Cyclone";
		faction = "CFB_Base_Faction";
		vehicleClass = "CFB_RCAF_VehicleClass";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = { "\cfb_skins\CH148_0.paa", "\cfb_skins\CH148_1.paa", "\cfb_skins\CH148_2.paa"};
	};
	
	// Backpacks
	class B_AssaultPack_cbr;
	class CFB_Backpack_Assault_TW : B_AssaultPack_cbr
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAT TW Assault Backpack";
		author = "Anton Struyk";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_Backpack_Assault_TW.paa"};
	};
};
 
class cfgWeapons
{
	class UniformItem;
 
	class U_B_CombatUniform_mcam;
	class CFB_CADPAT_TW_Uniform : U_B_CombatUniform_mcam
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
			uniformClass = "CFB_TW_Soldier"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	
	class U_B_CombatUniform_mcam_vest;
	class CFB_CADPAT_TW_Rolled_Uniform : U_B_CombatUniform_mcam_vest
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAD Combat Uniform (Rolled Up)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "Anton Struyk";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "CFB_TW_Soldier_TL"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	
	class U_B_CombatUniform_mcam_tshirt;
	class CFB_CADPAT_TW_Tshirt_Uniform : U_B_CombatUniform_mcam_tshirt
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAD Combat Uniform (Tee)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "Anton Struyk";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "CFB_TW_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	
	class H_HelmetIA;
	class CFB_CADPAT_TW_Helmet : H_HelmetIA
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAT TW Helmet";
		author = "Anton Struyk";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_Helmet1_TW.paa"};
	};
	
	class H_Booniehat_tan;
	class CFB_CADPAT_TW_Boonie : H_Booniehat_tan
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAT TW Boonie Hat";
		author = "Anton Struyk";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_Hat_Boonie_TW.paa"};
	};
	
	class H_MilCap_gry;
	class CFB_CADPAT_TW_Patrol : H_MilCap_gry
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAT TW Patrol Hat";
		author = "Anton Struyk";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_Hat_Patrol_TW.paa"};
	};
	
	class V_TacVest_oli;
	class CFB_Vest_Tactical_TW : V_TacVest_oli
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "CADPAT TW Tactical Vest";
		author = "Anton Struyk";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_Vest_Tactical_TW.paa"};
	};

	// TODO doesn't work :(
	class optic_Arco;
	class CFB_CADPAT_C97A3_Sight : optic_Arco
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayName = "Elcan C97A3";
		author = "Anton Struyk";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cfb_skins\Elcan_C97A3_Sight.paa"};
	};
};

// To make ARCO skin work
class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail
{
	class compatibleItems
	{
		CAF_CADPAT_C97A3_Sight = 1;
	};
};
