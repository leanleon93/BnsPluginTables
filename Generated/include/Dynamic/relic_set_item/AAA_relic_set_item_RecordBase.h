#pragma once
#include "../../EU/relic_set_item/AAA_relic_set_item_RecordBase.h"
#include "../../KR/relic_set_item/AAA_relic_set_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using relic_set_item_Record = BnsTables::KR::relic_set_item_Record;
	#else
		using relic_set_item_Record = BnsTables::EU::relic_set_item_Record;
	#endif
}