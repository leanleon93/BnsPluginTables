#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_contribute_guild_reputation_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_contribute_guild_reputation_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_contribute_guild_reputation_Record = BnsTables::KR::npctalkmessage_contribute_guild_reputation_Record;
	#else
		using npctalkmessage_contribute_guild_reputation_Record = BnsTables::EU::npctalkmessage_contribute_guild_reputation_Record;
	#endif
}