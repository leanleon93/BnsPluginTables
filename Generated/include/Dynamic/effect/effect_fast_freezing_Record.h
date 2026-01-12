#pragma once
#include "../../EU/effect/effect_fast_freezing_Record.h"
#include "../../KR/effect/effect_fast_freezing_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_fast_freezing_Record = BnsTables::KR::effect_fast_freezing_Record;
	#else
		using effect_fast_freezing_Record = BnsTables::EU::effect_fast_freezing_Record;
	#endif
}