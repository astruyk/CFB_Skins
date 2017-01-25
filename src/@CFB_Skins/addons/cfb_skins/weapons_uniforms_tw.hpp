class CFB_TW_Uniform : U_B_CombatUniform_mcam
{
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Uniform";
	picture = "\cfb_skins\ui\CFB_TW_Uniform.paa";

	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_TW_Soldier";
	};
};

class CFB_TW_Rolled_Uniform : U_B_CombatUniform_mcam_vest
{
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Uniform (Rolled Up)";
	picture = "\cfb_skins\ui\CFB_TW_Rolled_Uniform.paa";
	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_TW_Soldier_TL";
	};
};

class CFB_TW_Tshirt_Uniform : U_B_CombatUniform_mcam_tshirt
{
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Uniform (Tee)";
	picture = "\cfb_skins\ui\CFB_TW_Tshirt_Uniform.paa";
	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_TW_Soldier_AR";
	};
};
