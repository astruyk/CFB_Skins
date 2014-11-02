class CfgGroups
{
	class West
	{
		side = 1;
		class CFB_Groups
		{
			name = "Canadian Armed Forces";
			class CFB_Groups_CADPAT_TW
			{
				name = "Infantry Sections";
				class CFB_Groups_CADPAT_TW_Rifle_Section
				{
					faction = "CFB_Base_Faction";
					name = "Rifle Section";
					side = 1;

					class Unit0 { side = 1; vehicle = "CFB_TW_Soldier_TL"; rank = "CORPORAL"; position[] = {0,0,0}; };
					class Unit1 { side = 1; vehicle = "CFB_TW_Soldier"; rank = "CORPORAL"; position[] = {5,-5,0}; };
					class Unit2 { side = 1; vehicle = "CFB_TW_Soldier"; rank = "CORPORAL"; position[] = {-5,-5,0}; };
					class Unit3 { side = 1; vehicle = "CFB_TW_Soldier_AR"; rank = "CORPORAL"; position[] = {10,-10,0}; };
				};
			};
		};
	};
};

