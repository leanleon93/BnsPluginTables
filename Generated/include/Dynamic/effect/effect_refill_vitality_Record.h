#pragma once
#include "../../EU/effect/effect_refill_vitality_Record.h"
#include "../../KR/effect/effect_refill_vitality_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_refill_vitality_Record = BnsTables::KR::effect_refill_vitality_Record;
	#else
		using effect_refill_vitality_Record = BnsTables::EU::effect_refill_vitality_Record;
	#endif
}