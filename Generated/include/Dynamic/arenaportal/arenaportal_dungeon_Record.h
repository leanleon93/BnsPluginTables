#pragma once
#include "../../EU/arenaportal/arenaportal_dungeon_Record.h"
#include "../../KR/arenaportal/arenaportal_dungeon_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using arenaportal_dungeon_Record = BnsTables::KR::arenaportal_dungeon_Record;
	#else
		using arenaportal_dungeon_Record = BnsTables::EU::arenaportal_dungeon_Record;
	#endif
}