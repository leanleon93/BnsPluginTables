#pragma once
#include "../../EU/achievement_register/AAA_achievement_register_RecordBase.h"
#include "../../KR/achievement_register/AAA_achievement_register_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_Record = BnsTables::KR::achievement_register_Record;
	#else
		using achievement_register_Record = BnsTables::EU::achievement_register_Record;
	#endif
}