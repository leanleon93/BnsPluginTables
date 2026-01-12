#pragma once
#include "../../EU/effect/effect_safety_area_Record.h"
#include "../../KR/effect/effect_safety_area_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_safety_area_Record = BnsTables::KR::effect_safety_area_Record;
	#else
		using effect_safety_area_Record = BnsTables::EU::effect_safety_area_Record;
	#endif
}