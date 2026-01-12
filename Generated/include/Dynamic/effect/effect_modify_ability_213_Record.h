#pragma once
#include "../../EU/effect/effect_modify_ability_213_Record.h"
#include "../../KR/effect/effect_modify_ability_213_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_213_Record = BnsTables::KR::effect_modify_ability_213_Record;
	#else
		using effect_modify_ability_213_Record = BnsTables::EU::effect_modify_ability_213_Record;
	#endif
}