#pragma once
#include "../../EU/effect/effect_modify_ability_256_Record.h"
#include "../../KR/effect/effect_modify_ability_256_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_256_Record = BnsTables::KR::effect_modify_ability_256_Record;
	#else
		using effect_modify_ability_256_Record = BnsTables::EU::effect_modify_ability_256_Record;
	#endif
}