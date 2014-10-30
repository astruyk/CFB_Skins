class U_B_HelipilotCoveralls;
class CFB_RCAF_Coveralls_Sage : U_B_HelipilotCoveralls
{
	scope = 2;
	scopeCurator = 2;
	displayName = "RCAF Flight Coveralls";
	picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	author = "Anton Struyk";

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "CFB_RCAF_Helo_Pilot";
		containerClass = "Supply40";
		mass = 60;
	};
};
