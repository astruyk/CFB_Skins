class CfgPatches
{
	class CFB_Skins
	{
		requiredVersion = 1;
		author[] = { "Anton Struyk" };
		authorUrl = "https://github.com/astruyk/";
		version = 3.0.0;
		versionStr = "3.0.0";
		versionAr[] = { 3,0,0 };
		requiredAddons[] =
		{
			"A3_Characters_F_BLUFOR", // For units
			"A3_Air_F_EPB_Heli_Light_03", // Hellcats
			"A3_Air_F_Beta_Heli_Transport_02", // Mohawk
			"A3_Weapons_F_Ammoboxes", // For backpacks
			"A3_Weapons_F_Headgear", // For helmets & hats
			"A3_Weapons_F_Acc", // For weapon sights
			"A3_Weapons_F_NATO", // For rifles
		};
		
		weapons[] =
		{
			// Uniforms
			"CFB_TW_Uniform",
			"CFB_TW_Rolled_Uniform",
			"CFB_TW_Tshirt_Uniform",
			"CFB_AR_Uniform",
			"CFB_AR_Rolled_Uniform",
			"CFB_AR_Tshirt_Uniform",
			"CFB_JTF2_Uniform",
			"CFB_JTF2_Rolled_Uniform",
			"CFB_JTF2_Tshirt_Uniform",

			// Vests
			"CFB_TW_Vest_Tactical",
			"CFB_TW_Vest_PlateCarrier1",
			"CFB_TW_Vest_PlateCarrier2",
			"CFB_AR_Vest_Tactical",
			"CFB_AR_Vest_PlateCarrier1",
			"CFB_AR_Vest_PlateCarrier2",
			
			// Headgear
			"CFB_TW_Helmet",
			"CFB_TW_Helmet_ECH",
			"CFB_TW_Boonie",
			"CFB_TW_Patrol",
			"CFB_AR_Helmet",
			"CFB_AR_Helmet_ECH",
			"CFB_AR_Boonie",
			"CFB_AR_Patrol",
			"CFB_JTF2_Helmet",
			
			// Weapons
			// ... TODO
			
			// Optics
			//"CFB_CADPAT_C97A3_Sight"
		};
		
		units[] =
		{
			// CADPAT TW
			"CFB_TW_Soldier",
			"CFB_TW_Soldier_TL",
			"CFB_TW_Soldier_AR",
			"CFB_TW_Soldier_MMG",
			"CFB_TW_Soldier_Marksman",
			"CFB_TW_Soldier_GL",
			"CFB_TW_Soldier_Medic",
			"CFB_TW_Soldier_LAT",
			"CFB_TW_Soldier_AmmoBearer",
			"CFB_TW_Soldier_AmmoBearer_AT",
			"CFB_TW_Soldier_AmmoBearer_AA",
			"CFB_TW_Soldier_AmmoBearer_AR",
			"CFB_TW_Soldier_AmmoBearer_MMG",
			"CFB_TW_Soldier_AT",
			"CFB_TW_Soldier_AA",
			"CFB_TW_Soldier_Engineer",
			
			// CADPAT AR
			"CFB_AR_Soldier",
			"CFB_AR_Soldier_TL",
			"CFB_AR_Soldier_AR",
			"CFB_AR_Soldier_MMG",
			"CFB_AR_Soldier_Marksman",
			"CFB_AR_Soldier_GL",
			"CFB_AR_Soldier_Medic",
			"CFB_AR_Soldier_LAT",
			"CFB_AR_Soldier_AmmoBearer",
			"CFB_AR_Soldier_AmmoBearer_AT",
			"CFB_AR_Soldier_AmmoBearer_AA",
			"CFB_AR_Soldier_AmmoBearer_AR",
			"CFB_AR_Soldier_AmmoBearer_MMG",
			"CFB_AR_Soldier_AT",
			"CFB_AR_Soldier_AA",
			"CFB_AR_Soldier_Engineer",
			
			// JTF2
			"CFB_JTF2_Soldier",
			"CFB_JTF2_Soldier_TL",
			"CFB_JTF2_Soldier_AR",
			"CFB_JTF2_Soldier_MMG",
			"CFB_JTF2_Soldier_Marksman",
			"CFB_JTF2_Soldier_GL",
			"CFB_JTF2_Soldier_Medic",
			"CFB_JTF2_Soldier_LAT",
			"CFB_JTF2_Soldier_AmmoBearer",
			"CFB_JTF2_Soldier_AmmoBearer_AT",
			"CFB_JTF2_Soldier_AmmoBearer_AA",
			"CFB_JTF2_Soldier_AmmoBearer_AR",
			"CFB_JTF2_Soldier_AmmoBearer_MMG",
			"CFB_JTF2_Soldier_AT",
			"CFB_JTF2_Soldier_AA",
			"CFB_JTF2_Soldier_Engineer",
			
			// RCAF
			"CFB_RCAF_Helo_Pilot",
			"CFB_RCAF_Helo_Crew",
			"CFB_Helo_Griffon",
			"CFB_Helo_Griffon_Unarmed",
			"CFB_Helo_Cyclone",
			"CFB_Helo_Chinook",
			"CFB_Helo_Chinook_Unarmed",
			
			// Rebels
			"CFB_Rebel_Officer",
			"CFB_Rebel_GL_RPG",
			"CFB_Rebel_Marksman",
			"CFB_Rebel_GL",
			"CFB_Rebel_Medic",
			"CFB_Rebel_AR",
			"CFB_Rebel_Soldier_Lite",
			"CFB_Rebel_Marksman_Lite",
			"CFB_Rebel_LAT",
			"CFB_Rebel_AmmoBearer",
			"CFB_Rebel_SL",
			"CFB_Rebel_Soldier",
			"CFB_Rebel_TL",
			"CFB_Rebel_Technical",
			"CFB_Rebel_Technical_Armed",
			"CFB_Rebel_Quadbike",
			"CFB_Rebel_HMG",
			"CFB_Rebel_HMG_High",
			"CFB_Rebel_GMG",
			"CFB_Rebel_GMG_High",
			"CFB_Rebel_Mortar",
			"CFB_Rebel_Static_AA",
			"CFB_Rebel_Static_AT",
			
			// Vehicles
			"CFB_TW_LSSV",
			"CFB_TW_LSSV_Armed",
			"CFB_AR_LSSV",
			"CFB_AR_LSSV_Armed",
			"CFB_CANSOFCOM_LSSV",
			"CFB_CANSOFCOM_LSSV_Armed",

			// Backpacks
			"CFB_TW_Backpack_Assault",
			"CFB_TW_Backpack_Kitbag",
			"CFB_AR_Backpack_Assault",
			"CFB_AR_Backpack_Kitbag",
			
			// Flags
			"CFB_Flag_Canada",
			"CFB_Flag_Canadian_Armed_Forces",
			"CFB_Flag_Canadian_Army",
			"CFB_Flag_RCAF",
			"CFB_Flag_RCN",
			"CFB_Flag_RMC",
			"CFB_Flag_RMC_Saint_Jean",
		};
	};
};

class CfgFactionClasses
{
	class CFB_CAF_TW
	{
		displayName = "Canadian Armed Forces (TW)";
		author = "Anton Struyk";
		icon = "\cfb_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 1; //Blufor
	};
	
	class CFB_CAF_AR
	{
		displayName = "Canadian Armed Forces (AR)";
		author = "Anton Struyk";
		icon = "\cfb_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 1; //Blufor
	};
	
	class CFB_CANSOFCOM
	{
		displayName = "Canadian Special Operations Forces Command";
		author = "Anton Struyk";
		icon = "\cfb_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 1; //Blufor
	};
	
	class CFB_RCAF
	{
		displayName = "Royal Canadian Air Force";
		author = "Anton Struyk";
		icon = "\cfb_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 1; //Blufor
	};
	
	class CFB_Rebels
	{
		displayName = "Rebels";
		author = "Anton Struyk";
		icon = "\cfb_skins\factionLogo.paa";
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		priority = 8;
		side = 0; // Opfor
	};
};

class CfgVehicleClasses
{
	class CFB_Infantry_VehicleClass { displayName = "Infantry"; };
	class CFB_Crew_VehicleClass { displayName = "Pilots"; };
	class CFB_RCAF_VehicleClass { displayName = "Air"; };
	class CFB_Utility_VehicleClass { displayName = "Vehicles"; };
	
	class CFB_Rebel_VehicleClass { displayName = "Infantry"; }
	class CFB_Rebel_Vehicles_VehicleClass { displayName = "Vehicles"; }
	class CFB_Rebel_Static_VehicleClass { displayName = "Static Weapons"; }
};

class CfgVehicles
{
	#include "vehicles_units_tw.hpp"
	#include "vehicles_units_ar.hpp"
	#include "vehicles_units_rcaf.hpp"
	#include "vehicles_units_jtf2.hpp"
	#include "vehicles_units_rebels.hpp"
	#include "vehicles_backpacks_tw.hpp"
	#include "vehicles_backpacks_ar.hpp"
	#include "vehicles_backpacks_jtf2.hpp"
	#include "vehicles_ground.hpp"
	#include "vehicles_flags.hpp"
};
 
class cfgWeapons
{
	// Forward declarations for multiple files.
	class UniformItem;
	class ItemInfo;

	//#include "weapons_optics.hpp"
	#include "weapons_rifles.hpp"
	#include "weapons_uniforms_tw.hpp"
	#include "weapons_uniforms_ar.hpp"
	#include "weapons_uniforms_rcaf.hpp"
	#include "weapons_uniforms_jtf2.hpp"
	#include "weapons_headgear_tw.hpp"
	#include "weapons_headgear_ar.hpp"
	#include "weapons_headgear_jtf2.hpp"
	#include "weapons_vests_tw.hpp"
	#include "weapons_vests_ar.hpp"
};

class CfgGroups
{
	class West
	{
		side = 1;
		class CFB_CAF_TW
		{
			name = "Canadian Armed Forces (TW)";
			class Infantry
			{
				name = "Infantry";
				#include "groups_tw_infantry.hpp"
			};
		};
		class CFB_CAF_AR
		{
			name = "Canadian Armed Forces (AR)";
			class Infantry
			{
				name = "Infantry";
				#include "groups_ar_infantry.hpp"
			};
		};
		class CFB_CANSOFCOM
		{
			name = "Canadian Special Operations Forces Command";
			class Infantry
			{
				name = "Infantry";
				#include "groups_jtf2_infantry.hpp"
			};
		};
		class CFB_RCAF
		{
			name = "Royal Canadian Air Force";
		};
	};
	class East
	{
		side = 0;
		class CFB_Rebels
		{
			name = "Rebels";
			class Infantry
			{
				name = "Infantry";
				#include "groups_rebel_infantry.hpp"
			};
			class Motorized
			{
				name = "Motorized";
				#include "groups_rebel_motorized.hpp"
			};
		};
	};
};

class CfgFunctions
{
	class CFB
	{
		class WeaponSwap
		{
			file = "\cfb_skins\functions";
			class hlcWeaponSwap {};
		};
	};
};

class CfgUnitInsignia
{
	class CFB_Medic
	{
		displayName = "CAF Medic"; // Name displayed in Arsenal
		author = "Anton Struyk"; // Author displayed in Arsenal
		texture = "\cfb_skins\CFB_Patch_Medic.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};