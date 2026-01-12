#pragma once
#include "../../EU/guild_battle_field_zone/AAA_guild_battle_field_zone_RecordBase.h"
#include "../../KR/guild_battle_field_zone/AAA_guild_battle_field_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guild_battle_field_zone_Record = BnsTables::KR::guild_battle_field_zone_Record;
	#else
		using guild_battle_field_zone_Record = BnsTables::EU::guild_battle_field_zone_Record;
	#endif
}