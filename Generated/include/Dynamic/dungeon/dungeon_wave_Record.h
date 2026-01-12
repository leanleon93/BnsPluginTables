#pragma once
#include "../../EU/dungeon/dungeon_wave_Record.h"
#include "../../KR/dungeon/dungeon_wave_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using dungeon_wave_Record = BnsTables::KR::dungeon_wave_Record;
	#else
		using dungeon_wave_Record = BnsTables::EU::dungeon_wave_Record;
	#endif
}