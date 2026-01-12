#pragma once
#include "../../EU/content_quota/content_quota_item_buy_349_Record.h"
#include "../../KR/content_quota/content_quota_item_buy_349_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_item_buy_349_Record = BnsTables::KR::content_quota_item_buy_349_Record;
	#else
		using content_quota_item_buy_349_Record = BnsTables::EU::content_quota_item_buy_349_Record;
	#endif
}