#pragma once
#include "../../EU/effect/effect_modify_ability_572_Record.h"
#include "../../KR/effect/effect_modify_ability_572_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_572_Record = BnsTables::KR::effect_modify_ability_572_Record;
	#else
		using effect_modify_ability_572_Record = BnsTables::EU::effect_modify_ability_572_Record;
	#endif
}