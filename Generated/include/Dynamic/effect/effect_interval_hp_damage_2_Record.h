#pragma once
#include "../../EU/effect/effect_interval_hp_damage_2_Record.h"
#include "../../KR/effect/effect_interval_hp_damage_2_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_interval_hp_damage_2_Record = BnsTables::KR::effect_interval_hp_damage_2_Record;
	#else
		using effect_interval_hp_damage_2_Record = BnsTables::EU::effect_interval_hp_damage_2_Record;
	#endif
}