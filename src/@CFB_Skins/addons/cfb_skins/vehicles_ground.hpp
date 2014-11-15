class Offroad_01_base_F;
class CFB_LSSV_Olive : Offroad_01_base_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_Utility_VehicleClass";
	displayName = "LSSV (Olive)";
	crew = "CFB_TW_Soldier";
	hiddenSelectionsTextures[] = { "\cfb_skins\LSSV_Olive.paa", "\cfb_skins\LSSV_Olive.paa" };
};

class I_G_Offroad_01_armed_F;
class CFB_LSSV_Olive_Armed : I_G_Offroad_01_armed_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_Utility_VehicleClass";
	displayName = "LSSV (Olive, Armed)";
	crew = "CFB_TW_Soldier";
	hiddenSelectionsTextures[] = { "\cfb_skins\LSSV_Olive.paa", "\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa" };
};
