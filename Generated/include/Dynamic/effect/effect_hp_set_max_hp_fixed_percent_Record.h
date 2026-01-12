#pragma once
#include "../../EU/effect/effect_hp_set_max_hp_fixed_percent_Record.h"
#include "../../KR/effect/effect_hp_set_max_hp_fixed_percent_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hp_set_max_hp_fixed_percent_Record = BnsTables::KR::effect_hp_set_max_hp_fixed_percent_Record;
	#else
		using effect_hp_set_max_hp_fixed_percent_Record = BnsTables::EU::effect_hp_set_max_hp_fixed_percent_Record;
	#endif
}