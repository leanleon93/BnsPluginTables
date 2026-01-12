#pragma once
#include "../../EU/attractionrewardsummary/AAA_attractionrewardsummary_RecordBase.h"
#include "../../KR/attractionrewardsummary/AAA_attractionrewardsummary_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attractionrewardsummary_Record = BnsTables::KR::attractionrewardsummary_Record;
	#else
		using attractionrewardsummary_Record = BnsTables::EU::attractionrewardsummary_Record;
	#endif
}