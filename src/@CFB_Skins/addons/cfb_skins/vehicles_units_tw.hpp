class B_Soldier_F;
class CFB_TW_Soldier : B_Soldier_F
{
	_generalMacro  = "CFB_TW_Soldier";
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Uniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = { "CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MX_Black_F", "Throw", "Put" };
};

class B_Soldier_TL_F;
class CFB_TW_Soldier_TL : B_Soldier_TL_F
{
	_generalMacro  = "CFB_TW_Soldier_TL";
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Section Leader";
	icon="iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = {"CFB_Vest_Tactical_TW","CFB_CADPAT_TW_Patrol","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	weapons[] = {"arifle_MX_GL_Black_F", "Throw", "Put"};
};

class B_soldier_AR_F;
class CFB_TW_Soldier_AR : B_soldier_AR_F
{
	_generalMacro  = "CFB_TW_Soldier_AR";
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Automatic Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Tshirt_Uniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = {"CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MX_SW_Black_F", "Throw", "Put" };
};

class B_soldier_M_F;
class CFB_TW_Soldier_Marksman : B_soldier_M_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_CADPAT_TW_VehicleClass";
	displayName = "Automatic Rifleman";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFB_CADPAT_TW_Rolled_Uniform";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CADPAT_Uniform1_TW.paa" };
	
	linkedItems[] = { "CFB_Vest_Tactical_TW", "CFB_CADPAT_TW_Boonie", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP" };
	weapons[] = { "arifle_MXM_Black_F", "Throw", "Put" };
};
