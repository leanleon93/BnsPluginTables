#pragma once
#include "../../EU/effect/effect_accumulated_damage_from_2_Record.h"
#include "../../KR/effect/effect_accumulated_damage_from_2_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_accumulated_damage_from_2_Record = BnsTables::KR::effect_accumulated_damage_from_2_Record;
	#else
		using effect_accumulated_damage_from_2_Record = BnsTables::EU::effect_accumulated_damage_from_2_Record;
	#endif
}