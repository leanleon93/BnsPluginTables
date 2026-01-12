#pragma once
#include "../../EU/achievement_register/achievement_register_complete_star_words_Record.h"
#include "../../KR/achievement_register/achievement_register_complete_star_words_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_complete_star_words_Record = BnsTables::KR::achievement_register_complete_star_words_Record;
	#else
		using achievement_register_complete_star_words_Record = BnsTables::EU::achievement_register_complete_star_words_Record;
	#endif
}