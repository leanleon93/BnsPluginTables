#pragma once
#include "../../EU/tencent_quest/AAA_tencent_quest_RecordBase.h"
#include "../../KR/tencent_quest/AAA_tencent_quest_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using tencent_quest_Record = BnsTables::KR::tencent_quest_Record;
	#else
		using tencent_quest_Record = BnsTables::EU::tencent_quest_Record;
	#endif
}