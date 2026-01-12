#pragma once
#include "../../EU/content_quota/content_quota_item_buy_255_Record.h"
#include "../../KR/content_quota/content_quota_item_buy_255_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_item_buy_255_Record = BnsTables::KR::content_quota_item_buy_255_Record;
	#else
		using content_quota_item_buy_255_Record = BnsTables::EU::content_quota_item_buy_255_Record;
	#endif
}