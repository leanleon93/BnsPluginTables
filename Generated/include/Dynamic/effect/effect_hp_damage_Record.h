#pragma once
#include "../../EU/effect/effect_hp_damage_Record.h"
#include "../../KR/effect/effect_hp_damage_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hp_damage_Record = BnsTables::KR::effect_hp_damage_Record;
	#else
		using effect_hp_damage_Record = BnsTables::EU::effect_hp_damage_Record;
	#endif
}