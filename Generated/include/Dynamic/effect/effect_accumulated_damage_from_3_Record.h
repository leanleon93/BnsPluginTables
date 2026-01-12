#pragma once
#include "../../EU/effect/effect_accumulated_damage_from_3_Record.h"
#include "../../KR/effect/effect_accumulated_damage_from_3_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_accumulated_damage_from_3_Record = BnsTables::KR::effect_accumulated_damage_from_3_Record;
	#else
		using effect_accumulated_damage_from_3_Record = BnsTables::EU::effect_accumulated_damage_from_3_Record;
	#endif
}