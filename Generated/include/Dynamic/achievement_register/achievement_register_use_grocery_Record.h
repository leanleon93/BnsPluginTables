#pragma once
#include "../../EU/achievement_register/achievement_register_use_grocery_Record.h"
#include "../../KR/achievement_register/achievement_register_use_grocery_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_use_grocery_Record = BnsTables::KR::achievement_register_use_grocery_Record;
	#else
		using achievement_register_use_grocery_Record = BnsTables::EU::achievement_register_use_grocery_Record;
	#endif
}