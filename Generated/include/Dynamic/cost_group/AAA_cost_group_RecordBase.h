#pragma once
#include "../../EU/cost_group/AAA_cost_group_RecordBase.h"
#include "../../KR/cost_group/AAA_cost_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using cost_group_Record = BnsTables::KR::cost_group_Record;
	#else
		using cost_group_Record = BnsTables::EU::cost_group_Record;
	#endif
}