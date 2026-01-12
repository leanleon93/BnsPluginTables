#pragma once
#include "../../EU/achievement_register/achievement_register_accumulate_field_play_point_by_simple_tendency_quest_Record.h"
#include "../../KR/achievement_register/achievement_register_accumulate_field_play_point_by_simple_tendency_quest_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_accumulate_field_play_point_by_simple_tendency_quest_Record = BnsTables::KR::achievement_register_accumulate_field_play_point_by_simple_tendency_quest_Record;
	#else
		using achievement_register_accumulate_field_play_point_by_simple_tendency_quest_Record = BnsTables::EU::achievement_register_accumulate_field_play_point_by_simple_tendency_quest_Record;
	#endif
}