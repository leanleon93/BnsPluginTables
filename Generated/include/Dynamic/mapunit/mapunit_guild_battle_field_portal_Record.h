#pragma once
#include "../../EU/mapunit/mapunit_guild_battle_field_portal_Record.h"
#include "../../KR/mapunit/mapunit_guild_battle_field_portal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_guild_battle_field_portal_Record = BnsTables::KR::mapunit_guild_battle_field_portal_Record;
	#else
		using mapunit_guild_battle_field_portal_Record = BnsTables::EU::mapunit_guild_battle_field_portal_Record;
	#endif
}