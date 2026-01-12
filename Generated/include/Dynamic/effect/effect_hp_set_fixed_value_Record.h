#pragma once
#include "../../EU/effect/effect_hp_set_fixed_value_Record.h"
#include "../../KR/effect/effect_hp_set_fixed_value_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hp_set_fixed_value_Record = BnsTables::KR::effect_hp_set_fixed_value_Record;
	#else
		using effect_hp_set_fixed_value_Record = BnsTables::EU::effect_hp_set_fixed_value_Record;
	#endif
}