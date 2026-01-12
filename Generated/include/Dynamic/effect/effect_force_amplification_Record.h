#pragma once
#include "../../EU/effect/effect_force_amplification_Record.h"
#include "../../KR/effect/effect_force_amplification_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_force_amplification_Record = BnsTables::KR::effect_force_amplification_Record;
	#else
		using effect_force_amplification_Record = BnsTables::EU::effect_force_amplification_Record;
	#endif
}