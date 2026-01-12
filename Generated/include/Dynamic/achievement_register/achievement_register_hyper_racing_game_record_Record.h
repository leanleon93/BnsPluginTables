#pragma once
#include "../../EU/achievement_register/achievement_register_hyper_racing_game_record_Record.h"
#include "../../KR/achievement_register/achievement_register_hyper_racing_game_record_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_hyper_racing_game_record_Record = BnsTables::KR::achievement_register_hyper_racing_game_record_Record;
	#else
		using achievement_register_hyper_racing_game_record_Record = BnsTables::EU::achievement_register_hyper_racing_game_record_Record;
	#endif
}