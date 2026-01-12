#pragma once
#include "../../EU/effect/effect_dull_Record.h"
#include "../../KR/effect/effect_dull_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_dull_Record = BnsTables::KR::effect_dull_Record;
	#else
		using effect_dull_Record = BnsTables::EU::effect_dull_Record;
	#endif
}