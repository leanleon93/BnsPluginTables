#pragma once
#include "../../EU/field_zone/field_zone_guild_battle_field_entrance_Record.h"
#include "../../KR/field_zone/field_zone_guild_battle_field_entrance_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using field_zone_guild_battle_field_entrance_Record = BnsTables::KR::field_zone_guild_battle_field_entrance_Record;
	#else
		using field_zone_guild_battle_field_entrance_Record = BnsTables::EU::field_zone_guild_battle_field_entrance_Record;
	#endif
}