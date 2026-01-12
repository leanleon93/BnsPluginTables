#pragma once
#include "../../EU/effect/effect_increase_heal_Record.h"
#include "../../KR/effect/effect_increase_heal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_increase_heal_Record = BnsTables::KR::effect_increase_heal_Record;
	#else
		using effect_increase_heal_Record = BnsTables::EU::effect_increase_heal_Record;
	#endif
}