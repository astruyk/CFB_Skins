class B_Helipilot_F;
class CFB_RCAF_Helo_Pilot : B_Helipilot_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_RCAF";
	vehicleClass = "CFB_Crew_VehicleClass";
	displayName = "Helicopter Pilot";
	uniformClass = "CFB_RCAF_Coveralls_Sage";
	hiddenSelectionsTextures[] = { "\cfb_skins\RCAF_Coveralls_Sage.paa" };
	linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	respawnLinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
};

class B_Helicrew_F;
class CFB_RCAF_Helo_Crew : B_Helicrew_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_RCAF";
	vehicleClass = "CFB_Crew_VehicleClass";
	displayName = "Helicopter Crew";
	uniformClass = "CFB_RCAF_Coveralls_Sage";
	hiddenSelectionsTextures[] = { "\cfb_skins\RCAF_Coveralls_Sage.paa" };
	linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
};

class I_Heli_light_03_F;
class CFB_Helo_Griffon : I_Heli_light_03_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-146 Griffon (Armed)";
	faction = "CFB_RCAF";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
	
	class TextureSources
	{
		class RCAF_Camo
		{
			displayName = "RCAF Camo";
			factions[] = { "BLU_F" };
			textures[] = { "\cfb_skins\CH146_0.paa" };
		};
	};
};

class I_Heli_light_03_unarmed_F;
class CFB_Helo_Griffon_Unarmed : I_Heli_light_03_unarmed_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-146 Griffon (Transport)";
	faction = "CFB_RCAF";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
	
	// This vehicle seems to work without this specified - but this is an attempt to
	// future-proof in case the hiddenSelectionsTextures[] stops working in future versions.
	class TextureSources
	{
		class RCAF_Camo
		{
			displayName = "RCAF Camo";
			factions[] = { "BLU_F" };
			textures[] = { "\cfb_skins\CH146_0.paa" };
		};
	};
};

class I_Heli_Transport_02_F;
class CFB_Helo_Cyclone : I_Heli_Transport_02_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-148 Cyclone";
	faction = "CFB_RCAF";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH148_0.paa", "\cfb_skins\CH148_1.paa", "\cfb_skins\CH148_2.paa" };
	
	// This vehicle seems to work without this specified - but this is an attempt to
	// future-proof in case the hiddenSelectionsTextures[] stops working in future versions.
	class TextureSources
	{
		class RCAF_Camo
		{
			displayName = "RCAF Camo";
			factions[] = { "BLU_F" };
			textures[] = { "\cfb_skins\CH148_0.paa", "\cfb_skins\CH148_1.paa", "\cfb_skins\CH148_2.paa" };
		};
	};
};

class B_Heli_Transport_03_F;
class CFB_Helo_Chinook : B_Heli_Transport_03_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-147 Chinook (Armed)";
	faction = "CFB_RCAF";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH147_0.paa", "\cfb_skins\CH147_1.paa" };

	// This vehicle vehicle uses init[] script to automatically choose a skin from the texture sources
	// (overwriting the hiddenSelectionsTextures[]). This forces it to choose one of the custom skins.
	class TextureSources
	{
		class RCAF_Camo
		{
			displayName = "RCAF Camo";
			factions[] = { "BLU_F" };
			textures[] = { "\cfb_skins\CH147_0.paa", "\cfb_skins\CH147_1.paa" };
		};
	};
};

class B_Heli_Transport_03_unarmed_F;
class CFB_Helo_Chinook_Unarmed : B_Heli_Transport_03_unarmed_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-147 Chinook (Transport)";
	faction = "CFB_RCAF";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH147_0.paa", "\cfb_skins\CH147_1.paa" };
	
	// This vehicle vehicle uses init[] script to automatically choose a skin from the texture sources
	// (overwriting the hiddenSelectionsTextures[]). This forces it to choose one of the custom skins.
	class TextureSources
	{
		class RCAF_Camo
		{
			displayName = "RCAF Camo";
			factions[] = { "BLU_F" };
			textures[] = { "\cfb_skins\CH147_0.paa", "\cfb_skins\CH147_1.paa" };
		};
	};
};
