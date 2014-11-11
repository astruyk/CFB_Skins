class O_G_Soldier_F;
class CFB_Rebel_Soldier : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Rifleman";
	
	uniform = "U_BG_Guerilla2_2";
	backpack = "";
	weapons[] = {"arifle_Mk20_plain_F","hgun_Rook40_F","Throw","Put"};
	magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	items[] = {};
	linkedItems[] = {"V_Chestrig_khk","H_Cap_tan","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
};

class CFB_Rebel_Officer : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Officer";
	
	uniform = "U_I_OfficerUniform";
	backpack = "";
	weapons[] = {"hgun_PDW2000_F","Binocular","Throw","Put"};
	magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","SmokeShellBlue","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	items[] = {};
	linkedItems[] = {"V_BandollierB_blk","H_Shemag_olive","G_Aviator","ItemMap","ItemCompass","ItemWatch"};
};

class CFB_Rebel_TL : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Team Leader";
	uniform = "U_BG_Guerrilla_6_1";
	backpack = "B_AssaultPack_cbr";
	weapons[] = {"arifle_Mk20_GL_F","Rangefinder","hgun_Pistol_heavy_02_F","Throw","Put"};
	magazines[] = {"30Rnd_556x45_Stanag","HandGrenade","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	items[] = {"FirstAidKit"};
	linkedItems[] = {"V_BandollierB_blk","H_HelmetIA","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
};

class CFB_Rebel_AR : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Autorifle";
	uniform = "U_BG_Guerilla2_1";
	backpack = "B_AssaultPack_rgr";
	weapons[] = {"hgun_Pistol_heavy_02_F","arifle_MX_SW_F","Binocular","Throw","Put"};
	magazines[] = {"HandGrenade","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","30Rnd_65x39_caseless_mag_Tracer"};
	items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	linkedItems[] = {"V_Chestrig_khk","H_HelmetB_light","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
};

class CFB_Rebel_GL : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Grenadier";
};

class CFB_Rebel_GL_RPG : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Grenadier (RPG)";
};

class CFB_Rebel_LAT : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Rifleman (AT)";
};

class CFB_Rebel_Marksman : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Marksman";
	
};

class CFB_Rebel_Medic : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Medic";
};

class CFB_Rebel_AA : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Missile Specialist (AA)";
};

class CFB_Rebel_Sniper : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Missile Specialist (AA)";
};