class B_AssaultPack_cbr;
class CFB_TW_Backpack_Assault : B_AssaultPack_cbr
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Assault Backpack";
	author = "Anton Struyk";
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Backpack_Assault.paa"};
};

class B_Kitbag_cbr;
class CFB_TW_Backpack_Kitbag : B_Kitbag_cbr
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CADPAT TW Kitbag";
	author = "Anton Struyk";
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Backpack_Fast.paa"};
};

class CFB_TW_Backpack_Kitbag_LAT : CFB_TW_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportMagazines
	{
		class _xx_NLAW_F
		{
			magazine = "NLAW_F";
			count = 2;
		};
	};
};

class CFB_TW_Backpack_Kitbag_Ammo : CFB_TW_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportMagazines
	{
		class _xx_NLAW_F
		{
			magazine = "NLAW_F";
			count = 1;
		};
		class _xx_200Rnd_65x39_cased_Box
		{
			magazine = "200Rnd_65x39_cased_Box";
			count = 2;
		};
		class _xx_200Rnd_65x39_cased_Box_Tracer
		{
			magazine = "200Rnd_65x39_cased_Box_Tracer";
			count = 1;
		};
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine = "30Rnd_65x39_caseless_mag";
			count = 1;
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_mag_Tracer";
			count = 1;
		};
		class _xx_30Rnd_65x39_caseless_green_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_green_mag_Tracer";
			count = 1;
		};
	};
};

class CFB_TW_Backpack_Kitbag_AT : CFB_TW_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportMagazines
	{
		class _xx_Titan_AT
		{
			magazine = "Titan_AT";
			count = 1;
		};
		class _xx_Titan_AP
		{
			magazine = "Titan_AP";
			count = 1;
		};
	};
};

class CFB_TW_Backpack_Kitbag_AA : CFB_TW_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportMagazines
	{
		class _xx_Titan_AA
		{
			magazine = "Titan_AA";
			count = 2;
		};
	};
};

class CFB_TW_Backpack_Kitbag_AR : CFB_TW_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportMagazines
	{
		class _xx_200Rnd_65x39_cased_Box
		{
			magazine = "200Rnd_65x39_cased_Box";
			count = 4;
		};
		class _xx_200Rnd_65x39_cased_Box_Tracer
		{
			magazine = "200Rnd_65x39_cased_Box_Tracer";
			count = 2;
		};
	};
};

class CFB_TW_Backpack_Kitbag_MMG : CFB_TW_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportMagazines
	{
		class _xx_150Rnd_762x51_Box
		{
			magazine = "150Rnd_762x51_Box";
			count = 4;
		};
		class _xx_150Rnd_762x51_Box_Tracer
		{
			magazine = "150Rnd_762x51_Box_Tracer";
			count = 2;
		};
	};
};