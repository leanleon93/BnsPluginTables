#pragma once
#include "../../EU/effect/effect_duel_interference_Record.h"
#include "../../KR/effect/effect_duel_interference_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_duel_interference_Record = BnsTables::KR::effect_duel_interference_Record;
	#else
		using effect_duel_interference_Record = BnsTables::EU::effect_duel_interference_Record;
	#endif
}