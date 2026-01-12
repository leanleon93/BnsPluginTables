#pragma once
#include "../../EU/badge_synthesis_cost/AAA_badge_synthesis_cost_RecordBase.h"
#include "../../KR/badge_synthesis_cost/AAA_badge_synthesis_cost_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using badge_synthesis_cost_Record = BnsTables::KR::badge_synthesis_cost_Record;
	#else
		using badge_synthesis_cost_Record = BnsTables::EU::badge_synthesis_cost_Record;
	#endif
}