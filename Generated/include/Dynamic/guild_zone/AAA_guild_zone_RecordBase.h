/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/guild_zone/AAA_guild_zone_RecordBase.h"
#include "../../KR/guild_zone/AAA_guild_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guild_zone_Record = BnsTables::KR::guild_zone_Record;
	#else
		using guild_zone_Record = BnsTables::EU::guild_zone_Record;
	#endif
}