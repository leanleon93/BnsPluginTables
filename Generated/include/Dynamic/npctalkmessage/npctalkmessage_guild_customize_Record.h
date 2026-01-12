#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_guild_customize_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_guild_customize_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_guild_customize_Record = BnsTables::KR::npctalkmessage_guild_customize_Record;
	#else
		using npctalkmessage_guild_customize_Record = BnsTables::EU::npctalkmessage_guild_customize_Record;
	#endif
}