#pragma once
#include "../../EU/content_quota/content_quota_item_buy_512_Record.h"
#include "../../KR/content_quota/content_quota_item_buy_512_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_item_buy_512_Record = BnsTables::KR::content_quota_item_buy_512_Record;
	#else
		using content_quota_item_buy_512_Record = BnsTables::EU::content_quota_item_buy_512_Record;
	#endif
}