class O_G_officer_F;
class CFB_Rebel_Officer : O_G_officer_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Officer";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};

	uniformClass = "U_I_OfficerUniform";
	backpack = "";
	weapons[] = {"hgun_PDW2000_F","Binocular","Throw","Put"};
	magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","SmokeShellBlue","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	items[] = {};
	linkedItems[] = {"V_BandollierB_blk","H_Shemag_olive","G_Aviator","ItemMap","ItemCompass","ItemWatch"};
};

class O_G_Soldier_LAT_F;
class CFB_Rebel_GL_RPG : O_G_Soldier_LAT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Grenadier (RPG)";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};

	uniformClass = "U_BG_Guerilla3_1";
	backpack = "B_Kitbag_cbr";
	weapons[] = {"arifle_Mk20C_plain_F","launch_RPG32_F","Binocular","Throw","Put"};
	magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","RPG32_HE_F","RPG32_HE_F","RPG32_HE_F","RPG32_HE_F","RPG32_HE_F","RPG32_HE_F","RPG32_HE_F"};
	items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
	linkedItems[] = {"V_HarnessOSpec_brn","H_Cap_blk_Raven","G_Bandanna_shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

};

class O_G_Soldier_M_F;
class CFB_Rebel_Marksman : O_G_Soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Marksman";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
	
	uniformClass = "U_BG_Guerilla3_1";
	backpack = "";
	weapons[] = {"Binocular","srifle_DMR_01_F","Throw","Put"};
	magazines[] = {"10Rnd_762x51_Mag","10Rnd_762x51_Mag","10Rnd_762x51_Mag","10Rnd_762x51_Mag","10Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","Chemlight_green","Chemlight_green","SmokeShell","10Rnd_762x51_Mag","10Rnd_762x51_Mag","10Rnd_762x51_Mag","10Rnd_762x51_Mag"};
	items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
	linkedItems[] = {"V_BandollierB_oli","H_Booniehat_oli","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class O_G_Soldier_GL_F;
class CFB_Rebel_GL : O_G_Soldier_GL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_medic_F;
class CFB_Rebel_Medic : O_G_medic_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_Soldier_AR_F;
class CFB_Rebel_AR : O_G_Soldier_AR_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_Soldier_lite_F;
class CFB_Rebel_Soldier_Lite : O_G_Soldier_lite_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

//class O_G_Soldier_M_F;
class CFB_Rebel_Marksman_Lite : O_G_Soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

//class O_G_Soldier_LAT_F;
class CFB_Rebel_LAT : O_G_Soldier_LAT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_Soldier_A_F;
class CFB_Rebel_AmmoBearer : O_G_Soldier_A_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_Soldier_SL_F;
class CFB_Rebel_SL : O_G_Soldier_SL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_Soldier_F;
class CFB_Rebel_Soldier : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};

class O_G_Soldier_TL_F;
class CFB_Rebel_TL : O_G_Soldier_TL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""; [(_this select 0)] call CFB_fnc_hlcWeaponSwap;";
	};
};