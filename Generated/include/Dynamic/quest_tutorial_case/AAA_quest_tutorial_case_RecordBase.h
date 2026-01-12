#pragma once
#include "../../EU/quest_tutorial_case/AAA_quest_tutorial_case_RecordBase.h"
#include "../../KR/quest_tutorial_case/AAA_quest_tutorial_case_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_tutorial_case_Record = BnsTables::KR::quest_tutorial_case_Record;
	#else
		using quest_tutorial_case_Record = BnsTables::EU::quest_tutorial_case_Record;
	#endif
}