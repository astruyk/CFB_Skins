class B_Soldier_F;
class CFB_TW_Soldier : B_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	_generalMacro  = "CFB_TW_Soldier";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Uniform";
	backpack = "CFB_Backpack_Assault_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };

	linkedItems[] = { "CFB_Vest_PlateCarrier2_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MX_Black_F", "Throw", "Put" };
};

class B_Soldier_TL_F;
class CFB_TW_Soldier_TL : B_Soldier_TL_F
{
	scope = 2;
	scopeCurator = 2;
	_generalMacro  = "CFB_TW_Soldier_TL";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Section Leader";
	icon="iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
	backpack = "CFB_Backpack_Assault_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = { "CFB_Vest_PlateCarrier1_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
};

class B_soldier_AR_F;
class CFB_TW_Soldier_AR : B_soldier_AR_F
{
	scope = 2;
	scopeCurator = 2;
	_generalMacro  = "CFB_TW_Soldier_AR";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Automatic Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Tshirt_Uniform";
	backpack = "CFB_Backpack_Kitbag_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = {"CFB_Vest_PlateCarrier1_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "LMG_Mk200_F", "Throw", "Put" };
};

class CFB_TW_Soldier_MMG : B_soldier_AR_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	_generalMacro  = "CFB_TW_Soldier_MMG";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Automatic Rifleman (MMG)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
	backpack = "CFB_Backpack_Kitbag_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = {"CFB_Vest_PlateCarrier1_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "LMG_Zafir_F", "Throw", "Put" };
};

class B_soldier_M_F;
class CFB_TW_Soldier_Marksman : B_soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	_generalMacro  = "CFB_TW_Soldier_Marksman";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Marksman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
	backpack = "CFB_Backpack_Assault_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = { "CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Boonie", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXM_Black_F", "Throw", "Put" };
};

class B_Soldier_GL_F;
class CFB_TW_Soldier_GL : B_Soldier_GL_F
{
	scope = 2;
	scopeCurator = 2;
	_generalMacro  = "CFB_TW_Soldier_GL";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Grenadier";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Uniform";
	backpack = "CFB_Backpack_Assault_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = { "CFB_Vest_PlateCarrier2_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MX_GL_Black_F", "Throw", "Put" };
};

class B_medic_F;
class CFB_TW_Soldier_Medic : B_medic_F
{
	scope = 2;
	scopeCurator = 2;
	_generalMacro  = "CFB_TW_Soldier_Medic";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Combat Medic";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Tshirt_Uniform";
	backpack = "CFB_Backpack_Kitbag_TW";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = { "CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

/*
class B_soldier_LAT_F; //Light AT
class B_Soldier_A_F; // Ammo bearer
class B_soldier_AT_F; // Heavy AT
class B_soldier_AA_F; // AAA
class B_engineer_F; // Engineer
// MMG
*/

