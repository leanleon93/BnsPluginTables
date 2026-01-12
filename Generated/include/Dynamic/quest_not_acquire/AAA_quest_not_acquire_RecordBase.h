#pragma once
#include "../../EU/quest_not_acquire/AAA_quest_not_acquire_RecordBase.h"
#include "../../KR/quest_not_acquire/AAA_quest_not_acquire_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_not_acquire_Record = BnsTables::KR::quest_not_acquire_Record;
	#else
		using quest_not_acquire_Record = BnsTables::EU::quest_not_acquire_Record;
	#endif
}