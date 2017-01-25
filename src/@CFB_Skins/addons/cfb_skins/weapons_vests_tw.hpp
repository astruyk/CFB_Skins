class V_TacVest_oli;
class CFB_TW_Vest_Tactical : V_TacVest_oli
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Tactical Vest";
	author = "Anton Struyk";
	picture = "\cfb_skins\ui\CFB_TW_Vest_Tactical.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Vest_Tactical.paa"};
};

class CFB_TW_Vest_PlateCarrier1 : V_PlateCarrier1_rgr
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Plate Carrier Lite";
	author = "Anton Struyk";
	picture = "\cfb_skins\ui\CFB_TW_Vest_PlateCarrier1.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Vest_NATO.paa"};
	
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
	};
};

class CFB_TW_Vest_PlateCarrier2 : V_PlateCarrier2_rgr
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Plate Carrier";
	author = "Anton Struyk";
	picture = "\cfb_skins\ui\CFB_TW_Vest_PlateCarrier2.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Vest_NATO.paa"};
	
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo"};
	};
};
