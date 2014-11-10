// class B_AssaultPack_cbr;
class CFB_JTF2_Backpack_Assault : B_AssaultPack_blk
{
	side = 1;
	scope = 1;
	scopeCurator = 1;
	displayName = "CADPAT TW Assault Backpack";
	author = "Anton Struyk";

	// hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Backpack_Assault.paa"};
};

// class B_Kitbag_cbr;
class CFB_JTF2_Backpack_Kitbag : B_Kitbag_sgg
{
	side = 1;
	scope = 1;
	scopeCurator = 1;
	displayName = "CADPAT TW Kitbag";
	author = "Anton Struyk";
	
	// hiddenSelectionsTextures[] = {"\cfb_skins\CADPAT_TW_Backpack_Fast.paa"};
};

class CFB_JTF2_Backpack_Kitbag_LAT : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_NLAW_F
		{
			magazine = "NLAW_F";
			count = 2;
		};
	};
};

class CFB_JTF2_Backpack_Kitbag_Ammo : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
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
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine = "30Rnd_65x39_caseless_mag";
			count = 7;
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_mag_Tracer";
			count = 3;
		};
	};
};

class CFB_JTF2_Backpack_Kitbag_AT : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 1;
		};
	};
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

class CFB_JTF2_Backpack_Kitbag_AA : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_Titan_AA
		{
			magazine = "Titan_AA";
			count = 2;
		};
	};
};

class CFB_JTF2_Backpack_Kitbag_AR : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
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

class CFB_JTF2_Backpack_Kitbag_MMG : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
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

class CFB_JTF2_Backpack_Kitbag_Medic : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 15;
		};
		class _xx_Medikit
		{
			name = "Medikit";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine = "30Rnd_65x39_caseless_mag";
			count = 2;
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_mag_Tracer";
			count = 2;
		};
	};
};

class CFB_JTF2_Backpack_Assault_Rifleman : CFB_JTF2_Backpack_Assault
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 3;
		};
	};
	class TransportMagazines
	{
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine = "30Rnd_65x39_caseless_mag";
			count = 4;
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_mag_Tracer";
			count = 3;
		};
	};
};

class CFB_JTF2_Backpack_Assault_GL : CFB_JTF2_Backpack_Assault
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine = "30Rnd_65x39_caseless_mag";
			count = 2;
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_mag_Tracer";
			count = 1;
		};
		class _xx_1Rnd_HE_Grenade_shell
		{
			magazine = "1Rnd_HE_Grenade_shell";
			count = 15;
		};
		class _xxx_1Rnd_Smoke_Grenade_shell
		{
			magazine = "1Rnd_Smoke_Grenade_shell";
			count  = 5;
		};
		class _xxx_1Rnd_SmokeRed_Grenade_shell
		{
			magazine = "1Rnd_SmokeRed_Grenade_shell";
			count  = 3;
		};
		class _xxx_1Rnd_SmokeGreen_Grenade_shell
		{
			magazine = "1Rnd_SmokeGreen_Grenade_shell";
			count  = 3;
		};
	};
};

class CFB_JTF2_Backpack_Assault_AR : CFB_JTF2_Backpack_Assault
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
	class TransportMagazines
	{
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
	};
};

class CFB_JTF2_Backpack_Assault_MMG : CFB_JTF2_Backpack_Assault
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_150Rnd_762x51_Box
		{
			magazine = "150Rnd_762x51_Box";
			count = 3;
		};
	};
};

class CFB_JTF2_Backpack_Kitbag_Engineer : CFB_JTF2_Backpack_Kitbag
{
	scope = 1;
	scopeCurator = 1;
	class TransportItems
	{
		class _xx_MineDetector
		{
			name = "MineDetector";
			count = 1;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine = "30Rnd_65x39_caseless_mag";
			count = 2;
		};
		class _xx_30Rnd_65x39_caseless_mag_Tracer
		{
			magazine = "30Rnd_65x39_caseless_mag_Tracer";
			count = 2;
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			magazine = "ClaymoreDirectionalMine_Remote_Mag";
			count = 2;
		};
		class _xx_DemoCharge_Remote_Mag
		{
			magazine = "DemoCharge_Remote_Mag";
			count = 3;
		};
	};
};