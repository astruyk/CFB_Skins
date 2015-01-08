class Offroad_01_base_F;
class CFB_Base_LSSV : Offroad_01_base_F
{
	side = 1;
	scope = 0;
	scopeCurator = 0;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Utility_VehicleClass";
	displayName = "LSSV (Olive)";
	crew = "CFB_TW_Soldier";
	hiddenSelectionsTextures[] = { "\cfb_skins\LSSV_Olive.paa", "\cfb_skins\LSSV_Olive.paa" };
};

class Offroad_01_armed_base_F;
class CFB_Base_LSSV_Armed : Offroad_01_armed_base_F
{
	side = 1;
	scope = 0;
	scopeCurator = 0;
	faction = "CFB_CAF_TW";
	vehicleClass = "CFB_Utility_VehicleClass";
	displayName = "LSSV (Olive, Armed)";
	crew = "CFB_TW_Soldier";
	hiddenSelectionsTextures[] = { "\cfb_skins\LSSV_Olive.paa", "\cfb_skins\LSSV_Olive.paa" };
};

class CFB_TW_LSSV : CFB_Base_LSSV
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
};

class CFB_AR_LSSV : CFB_Base_LSSV
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_AR";
};

class CFB_CANSOFCOM_LSSV : CFB_Base_LSSV
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CANSOFCOM";
};

class CFB_TW_LSSV_Armed : CFB_Base_LSSV_Armed
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_TW";
};

class CFB_AR_LSSV_Armed : CFB_Base_LSSV_Armed
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CAF_AR";
};

class CFB_CANSOFCOM_LSSV_Armed : CFB_Base_LSSV_Armed
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_CANSOFCOM";
};