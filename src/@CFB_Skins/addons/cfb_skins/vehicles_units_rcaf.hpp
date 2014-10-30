class B_helicrew_F;
class CFB_RCAF_Helo_Pilot : B_helicrew_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	displayName = "Helicopter Pilot";
	
	uniformClass = "U_I_pilotCoveralls";
};

class CFB_RCAF_Helo_Crew : B_helicrew_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	displayName = "Helicopter Crew";
	
	uniformClass = "U_I_pilotCoveralls";
};

class I_Heli_light_03_F;
class CFB_Helo_Griffon : I_Heli_light_03_F
{
	_generalMacro  = "CFB_Helo_Griffon";
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-146 Griffon (armed)";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
};

class I_Heli_light_03_unarmed_F;
class CFB_Helo_Griffon_Unarmed : I_Heli_light_03_unarmed_F
{
	_generalMacro  = "CFB_Helo_Griffon_Unarmed";
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-146 Griffon Transport";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CH146_0.paa" };
};

class I_Heli_Transport_02_F;
class CFB_Helo_Cyclone : I_Heli_Transport_02_F
{
	_generalMacro  = "CFB_Helo_Cyclone";
	side = 1;
	scope = 2;
	scopeCurator = 2;
	displayName = "CH-148 Cyclone";
	faction = "CFB_Base_Faction";
	vehicleClass = "CFB_RCAF_VehicleClass";
	hiddenSelections[] = {"camo1", "camo2", "camo3"};
	hiddenSelectionsTextures[] = { "\cfb_skins\CH148_0.paa", "\cfb_skins\CH148_1.paa", "\cfb_skins\CH148_2.paa"};
};
