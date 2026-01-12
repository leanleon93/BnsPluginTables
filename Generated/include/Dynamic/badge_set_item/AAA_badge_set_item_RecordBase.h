#pragma once
#include "../../EU/badge_set_item/AAA_badge_set_item_RecordBase.h"
#include "../../KR/badge_set_item/AAA_badge_set_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using badge_set_item_Record = BnsTables::KR::badge_set_item_Record;
	#else
		using badge_set_item_Record = BnsTables::EU::badge_set_item_Record;
	#endif
}