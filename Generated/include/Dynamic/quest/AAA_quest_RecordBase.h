#pragma once
#include "../../EU/quest/AAA_quest_RecordBase.h"
#include "../../KR/quest/AAA_quest_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_Record = BnsTables::KR::quest_Record;
	#else
		using quest_Record = BnsTables::EU::quest_Record;
	#endif
}