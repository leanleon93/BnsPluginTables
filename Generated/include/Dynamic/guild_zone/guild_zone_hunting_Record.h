/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/guild_zone/guild_zone_hunting_Record.h"
#include "../../KR/guild_zone/guild_zone_hunting_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guild_zone_hunting_Record = BnsTables::KR::guild_zone_hunting_Record;
	#else
		using guild_zone_hunting_Record = BnsTables::EU::guild_zone_hunting_Record;
	#endif
}