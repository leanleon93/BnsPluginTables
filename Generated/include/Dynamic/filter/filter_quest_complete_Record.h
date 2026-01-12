#pragma once
#include "../../EU/filter/filter_quest_complete_Record.h"
#include "../../KR/filter/filter_quest_complete_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_quest_complete_Record = BnsTables::KR::filter_quest_complete_Record;
	#else
		using filter_quest_complete_Record = BnsTables::EU::filter_quest_complete_Record;
	#endif
}