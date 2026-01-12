#pragma once
#include "../../EU/market_category_3_group/AAA_market_category_3_group_RecordBase.h"
#include "../../KR/market_category_3_group/AAA_market_category_3_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using market_category_3_group_Record = BnsTables::KR::market_category_3_group_Record;
	#else
		using market_category_3_group_Record = BnsTables::EU::market_category_3_group_Record;
	#endif
}