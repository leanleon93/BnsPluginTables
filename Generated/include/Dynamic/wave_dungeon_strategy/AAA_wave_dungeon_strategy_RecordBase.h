#pragma once
#include "../../EU/wave_dungeon_strategy/AAA_wave_dungeon_strategy_RecordBase.h"
#include "../../KR/wave_dungeon_strategy/AAA_wave_dungeon_strategy_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using wave_dungeon_strategy_Record = BnsTables::KR::wave_dungeon_strategy_Record;
	#else
		using wave_dungeon_strategy_Record = BnsTables::EU::wave_dungeon_strategy_Record;
	#endif
}