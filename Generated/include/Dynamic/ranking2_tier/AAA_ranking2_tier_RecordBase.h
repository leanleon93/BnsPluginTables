#pragma once
#include "../../EU/ranking2_tier/AAA_ranking2_tier_RecordBase.h"
#include "../../KR/ranking2_tier/AAA_ranking2_tier_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ranking2_tier_Record = BnsTables::KR::ranking2_tier_Record;
	#else
		using ranking2_tier_Record = BnsTables::EU::ranking2_tier_Record;
	#endif
}