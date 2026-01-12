#pragma once
#include "../../EU/effect/effect_tumbling_Record.h"
#include "../../KR/effect/effect_tumbling_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_tumbling_Record = BnsTables::KR::effect_tumbling_Record;
	#else
		using effect_tumbling_Record = BnsTables::EU::effect_tumbling_Record;
	#endif
}