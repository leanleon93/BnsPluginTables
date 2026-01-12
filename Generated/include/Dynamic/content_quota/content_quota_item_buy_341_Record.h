#pragma once
#include "../../EU/content_quota/content_quota_item_buy_341_Record.h"
#include "../../KR/content_quota/content_quota_item_buy_341_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_item_buy_341_Record = BnsTables::KR::content_quota_item_buy_341_Record;
	#else
		using content_quota_item_buy_341_Record = BnsTables::EU::content_quota_item_buy_341_Record;
	#endif
}