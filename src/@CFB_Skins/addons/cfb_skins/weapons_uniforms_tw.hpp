class UniformItem;
 
class U_B_CombatUniform_mcam;
class CFB_CADPAT_TW_Uniform : U_B_CombatUniform_mcam
{
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAD Combat Uniform";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_TW_Soldier"; //would be same as our made soldier class
		containerClass = "Supply40"; //how much it can carry
		mass = 80; //how much it weights
	};
};

class U_B_CombatUniform_mcam_vest;
class CFB_CADPAT_TW_Rolled_Uniform : U_B_CombatUniform_mcam_vest
{
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAD Combat Uniform (Rolled Up)";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_TW_Soldier_TL"; //would be same as our made soldier class
		containerClass = "Supply40"; //how much it can carry
		mass = 80; //how much it weights
	};
};

class U_B_CombatUniform_mcam_tshirt;
class CFB_CADPAT_TW_Tshirt_Uniform : U_B_CombatUniform_mcam_tshirt
{
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAD Combat Uniform (Tee)";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_TW_Soldier_AR"; //would be same as our made soldier class
		containerClass = "Supply40"; //how much it can carry
		mass = 80; //how much it weights
	};
};
