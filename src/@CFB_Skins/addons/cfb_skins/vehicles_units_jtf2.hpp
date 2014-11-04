// class B_Soldier_F;
class CFB_JTF2_Soldier : B_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Uniform";
	backpack = "B_AssaultPack_blk";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };

	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MX_Black_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MX_Black_F", "Throw", "Put" };
};

// class B_Soldier_TL_F;
class CFB_JTF2_Soldier_TL : B_Soldier_TL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Section Leader";
	icon="iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_AssaultPack_blk";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
	respawnWeapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
};

// class B_soldier_AR_F;
class CFB_JTF2_Soldier_AR : B_soldier_AR_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Autorifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_AssaultPack_blk";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = {"V_Chestrig_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "LMG_Mk200_F", "Throw", "Put" };
	respawnWeapons[] = { "LMG_Mk200_F", "Throw", "Put" };
	magazines[] = { "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "HandGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
	respawnMagazines[] = { "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "HandGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
};
class CFB_JTF2_Soldier_MMG : CFB_JTF2_Soldier_AR
{
	displayName = "Autorifleman (MMG)";
	linkedItems[] = {"V_Chestrig_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "LMG_Zafir_F", "Throw", "Put" };
	respawnWeapons[] = { "LMG_Zafir_F", "Throw", "Put" };
	magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
	respawnMagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
};

// class B_soldier_M_F;
class CFB_JTF2_Soldier_Marksman : B_soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Marksman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_AssaultPack_blk";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_TacVestIR_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXM_Black_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXM_Black_F", "Throw", "Put" };
};

// class B_Soldier_GL_F;
class CFB_JTF2_Soldier_GL : B_Soldier_GL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Grenadier";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Uniform";
	backpack = "B_AssaultPack_blk";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MX_GL_Black_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MX_GL_Black_F", "Throw", "Put" };
};

// class B_medic_F;
class CFB_JTF2_Soldier_Medic : B_medic_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Combat Medic";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_Kitbag_rgr";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_TacVestIR_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

// class B_soldier_LAT_F;
class CFB_JTF2_Soldier_LAT : B_soldier_LAT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Rifleman (AT)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_Kitbag_rgr";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXC_Black_F", "launch_NLAW_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXC_Black_F", "launch_NLAW_F", "Throw", "Put" };
	magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "NLAW_F", "SmokeShell", "SmokeShellGreen", "Chemlight_green" };
	respawnWagazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "NLAW_F", "SmokeShell", "SmokeShellGreen", "Chemlight_green" };
};

// class B_Soldier_A_F;
class CFB_JTF2_Soldier_AmmoBearer : B_Soldier_A_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Ammo Bearer (Rifle)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_Kitbag_rgr";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};
class CFB_JTF2_Soldier_AmmoBearer_AT : CFB_JTF2_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AT)";
};
class CFB_JTF2_Soldier_AmmoBearer_AA : CFB_JTF2_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AA)";
};
class CFB_JTF2_Soldier_AmmoBearer_AR : CFB_JTF2_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AR)";
};
class CFB_JTF2_Soldier_AmmoBearer_MMG : CFB_JTF2_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (MMG)";
};

// class B_soldier_AT_F;
class CFB_JTF2_Soldier_AT : B_soldier_AT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Missile Specialist (AT)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_Kitbag_rgr";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXC_Black_F", "launch_I_Titan_short_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXC_Black_F", "launch_I_Titan_short_F", "Throw", "Put" };
};

// class B_soldier_AA_F;
class CFB_JTF2_Soldier_AA : B_soldier_AA_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Missile Specialist (AA)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_Kitbag_rgr";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_PlateCarrier1_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXC_Black_F", "launch_I_Titan_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXC_Black_F", "launch_I_Titan_F", "Throw", "Put" };
	magazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AT", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
	respawnWagazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AT", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
};

// class B_engineer_F;
class CFB_JTF2_Soldier_Engineer : B_engineer_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Engineer";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_JTF2_Rolled_Uniform";
	backpack = "B_Kitbag_rgr";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "V_TacVestIR_blk", "CFB_JTF2_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
	respawnWeapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
	magazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AA", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
	respawnWagazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AA", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
};


