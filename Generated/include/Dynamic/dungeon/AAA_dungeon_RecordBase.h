#pragma once
#include "../../EU/dungeon/AAA_dungeon_RecordBase.h"
#include "../../KR/dungeon/AAA_dungeon_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using dungeon_Record = BnsTables::KR::dungeon_Record;
	#else
		using dungeon_Record = BnsTables::EU::dungeon_Record;
	#endif
}