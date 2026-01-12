#pragma once
#include "../../EU/achievement/AAA_achievement_RecordBase.h"
#include "../../KR/achievement/AAA_achievement_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_Record = BnsTables::KR::achievement_Record;
	#else
		using achievement_Record = BnsTables::EU::achievement_Record;
	#endif
}