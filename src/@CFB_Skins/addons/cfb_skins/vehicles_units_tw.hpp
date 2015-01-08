class B_Soldier_F;
class CFB_TW_Soldier : B_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Rifleman";
	uniformClass = "CFB_TW_Uniform";
	backpack = "CFB_TW_Backpack_Assault_Rifleman";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };

	linkedItems[] = { "CFB_TW_Vest_PlateCarrier2", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MX_Black_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MX_Black_MRCO", "Throw", "Put" };
};

class B_Soldier_TL_F;
class CFB_TW_Soldier_TL : B_Soldier_TL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Section Leader";
	uniformClass = "CFB_TW_Rolled_Uniform";
	backpack = "CFB_TW_Backpack_Assault_GL";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = {"CFB_MX_Black_MRCO", "Throw", "Put"};
	respawnWeapons[] = {"CFB_MX_Black_MRCO", "Throw", "Put"};
};

class B_soldier_AR_F;
class CFB_TW_Soldier_AR : B_soldier_AR_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Autorifleman";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Assault_AR";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = {"CFB_TW_Vest_PlateCarrier1", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_Mk200_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_Mk200_MRCO", "Throw", "Put" };
	magazines[] = { "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "HandGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
	respawnMagazines[] = { "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "HandGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
};
class CFB_TW_Soldier_MMG : CFB_TW_Soldier_AR
{
	displayName = "Autorifleman (MMG)";
	backpack = "CFB_TW_Backpack_Assault_MMG";
	linkedItems[] = {"CFB_TW_Vest_PlateCarrier1", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_Zafir_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_Zafir_MRCO", "Throw", "Put" };
	magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
	respawnMagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green" };
};

class B_soldier_M_F;
class CFB_TW_Soldier_Marksman : B_soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Marksman";
	uniformClass = "CFB_TW_Rolled_Uniform";
	backpack = "CFB_TW_Backpack_Assault_Rifleman";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_Tactical", "CFB_TW_Boonie", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXM_Black_SOS", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXM_Black_SOS", "Throw", "Put" };
};

class B_Soldier_GL_F;
class CFB_TW_Soldier_GL : B_Soldier_GL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Grenadier";
	uniformClass = "CFB_TW_Uniform";
	backpack = "CFB_TW_Backpack_Assault_GL";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier2", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MX_GL_Black_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MX_GL_Black_MRCO", "Throw", "Put" };
};

class B_medic_F;
class CFB_TW_Soldier_Medic : B_medic_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Combat Medic";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag_Medic";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_Tactical", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXC_Black_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXC_Black_MRCO", "Throw", "Put" };
};

class B_soldier_LAT_F;
class CFB_TW_Soldier_LAT : B_soldier_LAT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Rifleman (AT)";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag_LAT";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXC_Black_MRCO", "launch_NLAW_F", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXC_Black_MRCO", "launch_NLAW_F", "Throw", "Put" };
	magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "NLAW_F", "SmokeShell", "SmokeShellGreen", "Chemlight_green" };
	respawnWagazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "NLAW_F", "SmokeShell", "SmokeShellGreen", "Chemlight_green" };
};

class B_Soldier_A_F;
class CFB_TW_Soldier_AmmoBearer : B_Soldier_A_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Ammo Bearer (Rifle)";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag_Ammo";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXC_Black_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXC_Black_MRCO", "Throw", "Put" };
};
class CFB_TW_Soldier_AmmoBearer_AT : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AT)";
	backpack = "CFB_TW_Backpack_Carryall_AT";
};
class CFB_TW_Soldier_AmmoBearer_AA : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AA)";
	backpack = "CFB_TW_Backpack_Carryall_AA";
};
class CFB_TW_Soldier_AmmoBearer_AR : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AR)";
	backpack = "CFB_TW_Backpack_Kitbag_AR";
};
class CFB_TW_Soldier_AmmoBearer_MMG : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (MMG)";
	backpack = "CFB_TW_Backpack_Kitbag_MMG";
};

class B_soldier_AT_F;
class CFB_TW_Soldier_AT : B_soldier_AT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Missile Specialist (AT)";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag_AT";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXC_Black_MRCO", "launch_I_Titan_short_F", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXC_Black_MRCO", "launch_I_Titan_short_F", "Throw", "Put" };
	magazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AT", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
	respawnWagazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AT", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
};

class B_soldier_AA_F;
class CFB_TW_Soldier_AA : B_soldier_AA_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Missile Specialist (AA)";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag_AA";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXC_Black_MRCO", "launch_I_Titan_F", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXC_Black_MRCO", "launch_I_Titan_F", "Throw", "Put" };
	magazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AA", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
	respawnWagazines[] = { "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "Titan_AA", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
};

class B_engineer_F;
class CFB_TW_Soldier_Engineer : B_engineer_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Infantry_VehicleClass";
	displayName = "Engineer";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag_Engineer";
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_Tactical", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "CFB_MXC_Black_MRCO", "Throw", "Put" };
	respawnWeapons[] = { "CFB_MXC_Black_MRCO", "Throw", "Put" };
};


