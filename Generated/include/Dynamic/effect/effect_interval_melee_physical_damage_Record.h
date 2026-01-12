#pragma once
#include "../../EU/effect/effect_interval_melee_physical_damage_Record.h"
#include "../../KR/effect/effect_interval_melee_physical_damage_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_interval_melee_physical_damage_Record = BnsTables::KR::effect_interval_melee_physical_damage_Record;
	#else
		using effect_interval_melee_physical_damage_Record = BnsTables::EU::effect_interval_melee_physical_damage_Record;
	#endif
}