#pragma once
#include "../../EU/dungeon/dungeon_normal_Record.h"
#include "../../KR/dungeon/dungeon_normal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using dungeon_normal_Record = BnsTables::KR::dungeon_normal_Record;
	#else
		using dungeon_normal_Record = BnsTables::EU::dungeon_normal_Record;
	#endif
}