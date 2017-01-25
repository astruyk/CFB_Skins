class U_B_HelipilotCoveralls : Uniform_Base
{
	class ItemInfo;
};
class CFB_RCAF_Coveralls_Sage : U_B_HelipilotCoveralls
{
	scope = 2;
	scopeCurator = 2;
	displayName = "RCAF Flight Coveralls";
	picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	author = "Anton Struyk";

	class ItemInfo : ItemInfo
	{
		uniformClass = "CFB_RCAF_Helo_Pilot";
	};
};
