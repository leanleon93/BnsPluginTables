#pragma once
#include "../../EU/expand_relic_inventory/AAA_expand_relic_inventory_RecordBase.h"
#include "../../KR/expand_relic_inventory/AAA_expand_relic_inventory_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using expand_relic_inventory_Record = BnsTables::KR::expand_relic_inventory_Record;
	#else
		using expand_relic_inventory_Record = BnsTables::EU::expand_relic_inventory_Record;
	#endif
}