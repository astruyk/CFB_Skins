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
	#include "vehicles_units_tw.hpp"
	#include "vehicles_units_rcaf.hpp"
	#include "vehicles_bacpacks_tw.hpp"
};
 
class cfgWeapons
{
	#include "weapons_uniforms_tw.hpp"
	#include "weapons_hats_tw.hpp"
	#include "weapons_vests_tw.hpp"
	#include "weapons_sights.hpp"
};

// To make ARCO skin work
class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail
{
	class compatibleItems
	{
		CFB_CADPAT_C97A3_Sight = 1;
	};
};
