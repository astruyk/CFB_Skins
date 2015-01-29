class FlagCarrier;

class CFB_Flag_Canada : FlagCarrier
{
	_generalMacro = "Flag_FD_Orange_F";
	author = "Bohemia Interactive";
	displayName = "Flag (Canada)";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\cfb_skins\CFB_Flag_Canada.paa'";
	};
};