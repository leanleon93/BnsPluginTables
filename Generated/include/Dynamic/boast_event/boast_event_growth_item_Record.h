#pragma once
#include "../../EU/boast_event/boast_event_growth_item_Record.h"
#include "../../KR/boast_event/boast_event_growth_item_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using boast_event_growth_item_Record = BnsTables::KR::boast_event_growth_item_Record;
	#else
		using boast_event_growth_item_Record = BnsTables::EU::boast_event_growth_item_Record;
	#endif
}