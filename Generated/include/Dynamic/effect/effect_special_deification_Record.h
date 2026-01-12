#pragma once
#include "../../EU/effect/effect_special_deification_Record.h"
#include "../../KR/effect/effect_special_deification_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_special_deification_Record = BnsTables::KR::effect_special_deification_Record;
	#else
		using effect_special_deification_Record = BnsTables::EU::effect_special_deification_Record;
	#endif
}