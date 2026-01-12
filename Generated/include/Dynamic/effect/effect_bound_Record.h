#pragma once
#include "../../EU/effect/effect_bound_Record.h"
#include "../../KR/effect/effect_bound_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_bound_Record = BnsTables::KR::effect_bound_Record;
	#else
		using effect_bound_Record = BnsTables::EU::effect_bound_Record;
	#endif
}