#pragma once
#include "../../EU/achievement_register/achievement_register_acquire_fish_count_Record.h"
#include "../../KR/achievement_register/achievement_register_acquire_fish_count_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_acquire_fish_count_Record = BnsTables::KR::achievement_register_acquire_fish_count_Record;
	#else
		using achievement_register_acquire_fish_count_Record = BnsTables::EU::achievement_register_acquire_fish_count_Record;
	#endif
}