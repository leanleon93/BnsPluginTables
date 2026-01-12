#pragma once
#include "../../EU/effect/effect_common_condition_event_20_Record.h"
#include "../../KR/effect/effect_common_condition_event_20_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_common_condition_event_20_Record = BnsTables::KR::effect_common_condition_event_20_Record;
	#else
		using effect_common_condition_event_20_Record = BnsTables::EU::effect_common_condition_event_20_Record;
	#endif
}