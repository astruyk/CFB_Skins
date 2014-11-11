class O_G_Soldier_F;

class CFB_Rebel_Officer : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Officer";
	
	uniform = "U_I_OfficerUniform";
	backpack = "";
	weapons[] = {"hgun_PDW2000_F","Binocular","Throw","Put"};
	magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","SmokeShellBlue","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	items[] = {};
	linkedItems[] = {"V_BandollierB_blk","H_Shemag_olive","G_Aviator","ItemMap","ItemCompass","ItemWatch"};
};

class CFB_Rebel_GL_RPG : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Grenadier (RPG)";
};

class CFB_Rebel_AT : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Medic";
};

class CFB_Rebel_AA : O_G_Soldier_F
{
	scope = 2;
	scopeCurator = 2;
	faction = "CFB_Rebel_Faction";
	vehicleClass = "CFB_Rebel_VehicleClass";
	displayName = "Missile Specialist (AA)";
};
