#pragma once
#include "../../EU/zoneenv2/zoneenv2_enter_arena_dungeonlobby_Record.h"
#include "../../KR/zoneenv2/zoneenv2_enter_arena_dungeonlobby_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_enter_arena_dungeonlobby_Record = BnsTables::KR::zoneenv2_enter_arena_dungeonlobby_Record;
	#else
		using zoneenv2_enter_arena_dungeonlobby_Record = BnsTables::EU::zoneenv2_enter_arena_dungeonlobby_Record;
	#endif
}