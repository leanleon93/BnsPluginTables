#pragma once
#include "../../EU/content_quota/content_quota_item_buy_589_Record.h"
#include "../../KR/content_quota/content_quota_item_buy_589_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_item_buy_589_Record = BnsTables::KR::content_quota_item_buy_589_Record;
	#else
		using content_quota_item_buy_589_Record = BnsTables::EU::content_quota_item_buy_589_Record;
	#endif
}