#pragma once
#include "../../EU/effect/effect_applied_poison_Record.h"
#include "../../KR/effect/effect_applied_poison_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_applied_poison_Record = BnsTables::KR::effect_applied_poison_Record;
	#else
		using effect_applied_poison_Record = BnsTables::EU::effect_applied_poison_Record;
	#endif
}