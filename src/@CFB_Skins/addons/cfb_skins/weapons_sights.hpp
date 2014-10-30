// TODO doesn't work :(
class optic_Arco;
class CFB_C97A3_Sight : optic_Arco
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "Elcan C97A3";
	author = "Anton Struyk";
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cfb_skins\Elcan_C97A3_Sight.paa"};
};

// Test make the normal rifle compatible with our new sight.

class arifle_MX_Base_F;
class WeaponSlotsInfo;
class CowsSlot;
class arifle_MX_F : arifle_MX_Base_F
{
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class CowsSlot : CowsSlot
		{
			compatibleItems[] = {"CFB_C97A3_Sight", "optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg"};
		};
	};
};

