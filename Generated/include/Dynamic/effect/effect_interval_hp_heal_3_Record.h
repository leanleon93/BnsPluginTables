#pragma once
#include "../../EU/effect/effect_interval_hp_heal_3_Record.h"
#include "../../KR/effect/effect_interval_hp_heal_3_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_interval_hp_heal_3_Record = BnsTables::KR::effect_interval_hp_heal_3_Record;
	#else
		using effect_interval_hp_heal_3_Record = BnsTables::EU::effect_interval_hp_heal_3_Record;
	#endif
}