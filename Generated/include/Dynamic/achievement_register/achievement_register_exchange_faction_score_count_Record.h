#pragma once
#include "../../EU/achievement_register/achievement_register_exchange_faction_score_count_Record.h"
#include "../../KR/achievement_register/achievement_register_exchange_faction_score_count_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_exchange_faction_score_count_Record = BnsTables::KR::achievement_register_exchange_faction_score_count_Record;
	#else
		using achievement_register_exchange_faction_score_count_Record = BnsTables::EU::achievement_register_exchange_faction_score_count_Record;
	#endif
}