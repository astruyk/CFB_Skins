class CfgPatches
{
	class CFB_Skins
	{
		requiredVersion = 1;
		author[] = { "Anton Struyk" };
		authorUrl = "https://github.com/astruyk/";
		version = 1.0.1;
		versionStr = "1.0.1";
		versionAr[] = {1,0,1};
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
			"CFB_CADPAT_TW_Uniform",
			"CFB_CADPAT_TW_Rolled_Uniform",
			"CFB_CADPAT_TW_Tshirt_Uniform"
			//"CFB_CADPAT_C97A3_Sight"
		};
		
		units[] =
		{
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
	#include "vehicles_units_tw.hpp"
	#include "vehicles_units_rcaf.hpp"
	#include "vehicles_backpacks_tw.hpp"
};
 
class cfgWeapons
{
	// Forward declarations for multiple files.
	class UniformItem;
	class ItemInfo;

	#include "weapons_uniforms_tw.hpp"
	#include "weapons_uniforms_rcaf.hpp"
	#include "weapons_headgear_tw.hpp"
	#include "weapons_vests_tw.hpp"
	//#include "weapons_optics.hpp"
};

class CfgGroups
{
	class West
	{
		side = 1;
		class CFB_Groups
		{
			name = "Canadian Armed Forces";
			
			#include "cfgGroups.hpp"
		};
	};
};
