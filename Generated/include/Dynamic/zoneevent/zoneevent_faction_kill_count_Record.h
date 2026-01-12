/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/zoneevent/zoneevent_faction_kill_count_Record.h"
#include "../../KR/zoneevent/zoneevent_faction_kill_count_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneevent_faction_kill_count_Record = BnsTables::KR::zoneevent_faction_kill_count_Record;
	#else
		using zoneevent_faction_kill_count_Record = BnsTables::EU::zoneevent_faction_kill_count_Record;
	#endif
}