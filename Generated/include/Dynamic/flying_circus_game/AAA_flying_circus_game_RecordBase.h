#pragma once
#include "../../EU/flying_circus_game/AAA_flying_circus_game_RecordBase.h"
#include "../../KR/flying_circus_game/AAA_flying_circus_game_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using flying_circus_game_Record = BnsTables::KR::flying_circus_game_Record;
	#else
		using flying_circus_game_Record = BnsTables::EU::flying_circus_game_Record;
	#endif
}