class B_Helipilot_F;
class CFB_RCAF_Helo_Pilot : B_Helipilot_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
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
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
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
	displayName = "CH-146 Griffon (armed)";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
};

class I_Heli_light_03_unarmed_F;
class CFB_Helo_Griffon_Unarmed : I_Heli_light_03_unarmed_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-146 Griffon (transport)";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
};

class I_Heli_Transport_02_F;
class CFB_Helo_Cyclone : I_Heli_Transport_02_F
{
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-148 Cyclone";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	crew = "CFB_RCAF_Helo_Pilot";
	hiddenSelectionsTextures[] = { "\cfb_skins\CH148_0.paa", "\cfb_skins\CH148_1.paa", "\cfb_skins\CH148_2.paa"};
};
