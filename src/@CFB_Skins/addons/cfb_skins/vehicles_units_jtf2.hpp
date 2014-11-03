//class B_Soldier_F;
class CFB_JTF2_Soldier : B_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Uniform";
	//backpack = "CFB_TW_Backpack_Assault";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };

	linkedItems[] = { "CFB_TW_Vest_PlateCarrier2", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };
	weapons[] = { "arifle_MX_Black_F", "Throw", "Put" };
};

//class B_Soldier_TL_F;
class CFB_JTF2_Soldier_TL : B_Soldier_TL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Section Leader";
	icon="iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Rolled_Uniform";
	//backpack = "CFB_TW_Backpack_Assault";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };
	weapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
};

//class B_soldier_AR_F;
class CFB_JTF2_Soldier_AR : B_soldier_AR_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_JTF2_VehicleClass";
	displayName = "Autorifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	//backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\JTF2_Uniform_NATO.paa" };
	
	linkedItems[] = {"CFB_TW_Vest_PlateCarrier1", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };
	weapons[] = { "LMG_Mk200_F", "Throw", "Put" };
};
/*
class CFB_TW_Soldier_MMG : CFB_TW_Soldier_AR
{
	displayName = "Autorifleman (MMG)";
	linkedItems[] = {"CFB_TW_Vest_PlateCarrier1", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "LMG_Zafir_F", "Throw", "Put" };
};

class B_soldier_M_F;
class CFB_TW_Soldier_Marksman : B_soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Marksman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Rolled_Uniform";
	backpack = "CFB_TW_Backpack_Assault";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_Tactical", "CFB_TW_Boonie", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXM_Black_F", "Throw", "Put" };
};

class B_Soldier_GL_F;
class CFB_TW_Soldier_GL : B_Soldier_GL_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Grenadier";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Uniform";
	backpack = "CFB_TW_Backpack_Assault";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier2", "CFB_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MX_GL_Black_F", "Throw", "Put" };
};

class B_medic_F;
class CFB_TW_Soldier_Medic : B_medic_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Combat Medic";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_Tactical", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

class B_soldier_LAT_F;
class CFB_TW_Soldier_LAT : B_soldier_LAT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Rifleman (AT)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

class B_Soldier_A_F;
class CFB_TW_Soldier_AmmoBearer : B_Soldier_A_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Ammo Bearer (Rifle)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};
class CFB_TW_Soldier_AmmoBearer_AT : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AT)";
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};
class CFB_TW_Soldier_AmmoBearer_AA : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AA)";
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};
class CFB_TW_Soldier_AmmoBearer_AR : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (AR)";
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};
class CFB_TW_Soldier_AmmoBearer_MMG : CFB_TW_Soldier_AmmoBearer
{
	displayName = "Ammo Bearer (MMG)";
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

class B_soldier_AT_F;
class CFB_TW_Soldier_AT : B_soldier_AT_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Missile Specialist (AT)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

class B_soldier_AA_F;
class CFB_TW_Soldier_AA : B_soldier_AA_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Missile Specialist (AA)";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_PlateCarrier1", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};

class B_engineer_F;
class CFB_TW_Soldier_Engineer : B_engineer_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_TW_VehicleClass";
	displayName = "Engineer";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_TW_Tshirt_Uniform";
	backpack = "CFB_TW_Backpack_Kitbag";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_TW_Uniform_NATO.paa" };
	
	linkedItems[] = { "CFB_TW_Vest_Tactical", "CFB_TW_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXC_Black_F", "Throw", "Put" };
};
*/
