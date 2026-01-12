#pragma once
#include "../../EU/effect/effect_difficulty_type_dispel_attribute_hp_damage_Record.h"
#include "../../KR/effect/effect_difficulty_type_dispel_attribute_hp_damage_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_difficulty_type_dispel_attribute_hp_damage_Record = BnsTables::KR::effect_difficulty_type_dispel_attribute_hp_damage_Record;
	#else
		using effect_difficulty_type_dispel_attribute_hp_damage_Record = BnsTables::EU::effect_difficulty_type_dispel_attribute_hp_damage_Record;
	#endif
}