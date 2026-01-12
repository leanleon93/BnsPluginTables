#pragma once
#include "../../EU/effect/effect_infinity_shot_Record.h"
#include "../../KR/effect/effect_infinity_shot_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_infinity_shot_Record = BnsTables::KR::effect_infinity_shot_Record;
	#else
		using effect_infinity_shot_Record = BnsTables::EU::effect_infinity_shot_Record;
	#endif
}