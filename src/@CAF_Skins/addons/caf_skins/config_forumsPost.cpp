	class CfgPatches
	{
		class MY_MOD
		{
			requiredVersion = 1;
			author[] = { "Me!" };
			authorUrl = "https://mywebpage.com";
			version = 0.0.0;
			versionStr = "0.0.0";
			versionAr[] = {0,0,0};
			requiredAddons[] = { "A3_Characters_F_BLUFOR" };
			weapons[] = { MY_MOD_UNIFORM };
			units[] = { MY_MOD_Soldier };
		};
	};

	class CfgFactionClasses
	{
		class MY_Base_Faction
		{
			displayName = "My Custom Faction";
			author = "Me!";
			priority = 8;
			side = 1;
			icon = "\caf_skins\factionLogo.paa";
			flag = "\a3\Data_f\Flags\flag_nato_co.paa";
		};
	};

	class CfgVehicleClasses
	{
		class MY_Vehicle_Class
		{
			displayName = "My Vehicle Class";
		};
	};

	class CfgVehicles
	{
		class B_Soldier_F;
		class B_Soldier_TL_F;
		class B_soldier_AR_F;
		
		class MY_MOD_Soldier : B_Soldier_F
		{
			scope = 2;
			scopeCurator = 2;
			_generalMacro  = "B_Soldier_F";
			faction = "MY_Base_Faction";
			vehicleClass = "MY_Vehicle_Class";
			displayName = "Rifleman";
			nakedUniform = "U_BasicBody"; //class for "naked" body
			uniformClass = "MY_MOD_UNIFORM"; //the uniform item
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = { "\caf_skins\CADPAT_Uniform1_TW.paa" };
		};
	};
	 
	class cfgWeapons
	{
		class U_B_CombatUniform_mcam;
		class UniformItem;
	 
		class MY_MOD_UNIFORM : U_B_CombatUniform_mcam
		{
			scope = 2;
			scopeCurator = 2;
			displayName = "My Custom Uniform Name";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
			
			author = "Me!";
	 
			class ItemInfo : UniformItem
			{
				uniformModel = "-";
				uniformClass = "MY_MOD_Soldier"; //would be same as our made soldier class
				containerClass = "Supply40"; //how much it can carry
				mass = 80; //how much it weights
			};
		};
	};