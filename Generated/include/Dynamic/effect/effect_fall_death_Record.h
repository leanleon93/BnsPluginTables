#pragma once
#include "../../EU/effect/effect_fall_death_Record.h"
#include "../../KR/effect/effect_fall_death_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_fall_death_Record = BnsTables::KR::effect_fall_death_Record;
	#else
		using effect_fall_death_Record = BnsTables::EU::effect_fall_death_Record;
	#endif
}