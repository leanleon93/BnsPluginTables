#pragma once
#include "../../EU/achievement_register/achievement_register_accumulate_life_contents_point_by_fishing_Record.h"
#include "../../KR/achievement_register/achievement_register_accumulate_life_contents_point_by_fishing_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_accumulate_life_contents_point_by_fishing_Record = BnsTables::KR::achievement_register_accumulate_life_contents_point_by_fishing_Record;
	#else
		using achievement_register_accumulate_life_contents_point_by_fishing_Record = BnsTables::EU::achievement_register_accumulate_life_contents_point_by_fishing_Record;
	#endif
}