class CfgPatches
{
	class CFB_Skins
	{
		requiredVersion = 1;
		author[] = { "Anton Struyk" };
		authorUrl = "https://github.com/astruyk/";
		version = 2.2.0;
		versionStr = "2.2.0";
		versionAr[] = { 2,2,0 };
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
			"CFB_TW_Uniform",
			"CFB_TW_Rolled_Uniform",
			"CFB_TW_Tshirt_Uniform",
			"CFB_JTF2_Uniform",
			"CFB_JTF2_Rolled_Uniform",
			"CFB_JTF2_Tshirt_Uniform"
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
	
	class CFB_Rebel_Faction
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
	class CFB_TW_VehicleClass { displayName = "CADPAT TW"; };
	class CFB_AR_VehicleClass { displayName = "CADPAT AR"; };
	//class CFB_Arctic_VehicleClass { displayName = "CADPAT Arctic"; };
	class CFB_RCAF_VehicleClass { displayName = "RCAF"; };
	class CFB_JTF2_VehicleClass { displayName = "JTF2"; }
	
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
	class East
	{
		side = 0;
		class CFB_Groups_Rebel
		{
			name = "Rebels";
			#include "groups_rebel.hpp"
		};
	};
	class West
	{
		side = 1;
		class CFB_Groups
		{
			name = "Canadian Armed Forces";
			
			#include "groups_tw.hpp"
			#include "groups_ar.hpp"
			#include "groups_jtf2.hpp"
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
