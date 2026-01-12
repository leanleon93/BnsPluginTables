#pragma once
#include "../../EU/content_quota/content_quota_market_targeted_sale_Record.h"
#include "../../KR/content_quota/content_quota_market_targeted_sale_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_market_targeted_sale_Record = BnsTables::KR::content_quota_market_targeted_sale_Record;
	#else
		using content_quota_market_targeted_sale_Record = BnsTables::EU::content_quota_market_targeted_sale_Record;
	#endif
}