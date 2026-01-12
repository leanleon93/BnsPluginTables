#pragma once
#include "../../EU/effect/effect_detect_hiding_Record.h"
#include "../../KR/effect/effect_detect_hiding_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_detect_hiding_Record = BnsTables::KR::effect_detect_hiding_Record;
	#else
		using effect_detect_hiding_Record = BnsTables::EU::effect_detect_hiding_Record;
	#endif
}