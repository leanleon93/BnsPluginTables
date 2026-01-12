#pragma once
#include "../../EU/item_buy_price/AAA_item_buy_price_RecordBase.h"
#include "../../KR/item_buy_price/AAA_item_buy_price_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_buy_price_Record = BnsTables::KR::item_buy_price_Record;
	#else
		using item_buy_price_Record = BnsTables::EU::item_buy_price_Record;
	#endif
}