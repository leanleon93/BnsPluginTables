#pragma once
#include "../../EU/effect/effect_modify_ability_21_Record.h"
#include "../../KR/effect/effect_modify_ability_21_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_21_Record = BnsTables::KR::effect_modify_ability_21_Record;
	#else
		using effect_modify_ability_21_Record = BnsTables::EU::effect_modify_ability_21_Record;
	#endif
}