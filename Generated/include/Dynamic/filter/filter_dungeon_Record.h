#pragma once
#include "../../EU/filter/filter_dungeon_Record.h"
#include "../../KR/filter/filter_dungeon_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_dungeon_Record = BnsTables::KR::filter_dungeon_Record;
	#else
		using filter_dungeon_Record = BnsTables::EU::filter_dungeon_Record;
	#endif
}