//class U_B_CombatUniform_mcam;
class CFB_JTF2_Uniform : U_B_CombatUniform_mcam
{
	scope = 2;
	scopeCurator = 2;
	displayName = "JTF2 Combat Uniform";
	picture = "\cfb_skins\ui\CFB_JTF2_Uniform.paa";
	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_JTF2_Soldier";
	};
};

//class U_B_CombatUniform_mcam_vest;
class CFB_JTF2_Rolled_Uniform : U_B_CombatUniform_mcam_vest
{
	scope = 2;
	scopeCurator = 2;
	displayName = "JTF2 Combat Uniform (Rolled Up)";
	picture = "\cfb_skins\ui\CFB_JTF2_Rolled_Uniform.paa";
	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_JTF2_Soldier_TL";
	};
};

//class U_B_CombatUniform_mcam_tshirt;
class CFB_JTF2_Tshirt_Uniform : U_B_CombatUniform_mcam_tshirt
{
	scope = 2;
	scopeCurator = 2;
	displayName = "JTF2 Combat Uniform (Tee)";
	picture = "\cfb_skins\ui\CFB_JTF2_Tshirt_Uniform.paa";
	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_JTF2_Soldier_AR";
	};
};
