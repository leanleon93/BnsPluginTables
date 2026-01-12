#pragma once
#include "../../EU/item_brand_tooltip/AAA_item_brand_tooltip_RecordBase.h"
#include "../../KR/item_brand_tooltip/AAA_item_brand_tooltip_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_brand_tooltip_Record = BnsTables::KR::item_brand_tooltip_Record;
	#else
		using item_brand_tooltip_Record = BnsTables::EU::item_brand_tooltip_Record;
	#endif
}