#pragma once
#include "../../EU/guild_combat/AAA_guild_combat_RecordBase.h"
#include "../../KR/guild_combat/AAA_guild_combat_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guild_combat_Record = BnsTables::KR::guild_combat_Record;
	#else
		using guild_combat_Record = BnsTables::EU::guild_combat_Record;
	#endif
}