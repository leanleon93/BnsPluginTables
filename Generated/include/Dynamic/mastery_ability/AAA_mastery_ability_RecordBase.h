#pragma once
#include "../../EU/mastery_ability/AAA_mastery_ability_RecordBase.h"
#include "../../KR/mastery_ability/AAA_mastery_ability_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mastery_ability_Record = BnsTables::KR::mastery_ability_Record;
	#else
		using mastery_ability_Record = BnsTables::EU::mastery_ability_Record;
	#endif
}