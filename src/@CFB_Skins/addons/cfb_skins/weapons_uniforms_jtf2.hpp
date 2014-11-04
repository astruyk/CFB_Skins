//class U_B_CombatUniform_mcam;
class CFB_JTF2_Uniform : U_B_CombatUniform_mcam
{
	scope = 2;
	scopeCurator = 2;
	displayName = "JTF2 Combat Uniform";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_JTF2_Soldier";
		containerClass = "Supply40";
		mass = 80;
	};
};

//class U_B_CombatUniform_mcam_vest;
class CFB_JTF2_Rolled_Uniform : U_B_CombatUniform_mcam_vest
{
	scope = 2;
	scopeCurator = 2;
	displayName = "JTF2 Combat Uniform (Rolled Up)";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_JTF2_Soldier_TL";
		containerClass = "Supply40";
		mass = 80;
	};
};

//class U_B_CombatUniform_mcam_tshirt;
class CFB_JTF2_Tshirt_Uniform : U_B_CombatUniform_mcam_tshirt
{
	scope = 2;
	scopeCurator = 2;
	displayName = "JTF2 Combat Uniform (Tee)";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_JTF2_Soldier_AR";
		containerClass = "Supply40";
		mass = 80;
	};
};