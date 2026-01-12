#pragma once
#include "../../EU/content_quota/content_quota_item_buy_25_Record.h"
#include "../../KR/content_quota/content_quota_item_buy_25_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_item_buy_25_Record = BnsTables::KR::content_quota_item_buy_25_Record;
	#else
		using content_quota_item_buy_25_Record = BnsTables::EU::content_quota_item_buy_25_Record;
	#endif
}