#pragma once
#include "../../EU/effect/effect_guard_gauge_heal_Record.h"
#include "../../KR/effect/effect_guard_gauge_heal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_guard_gauge_heal_Record = BnsTables::KR::effect_guard_gauge_heal_Record;
	#else
		using effect_guard_gauge_heal_Record = BnsTables::EU::effect_guard_gauge_heal_Record;
	#endif
}