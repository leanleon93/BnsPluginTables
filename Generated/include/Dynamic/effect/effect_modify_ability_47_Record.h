#pragma once
#include "../../EU/effect/effect_modify_ability_47_Record.h"
#include "../../KR/effect/effect_modify_ability_47_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_47_Record = BnsTables::KR::effect_modify_ability_47_Record;
	#else
		using effect_modify_ability_47_Record = BnsTables::EU::effect_modify_ability_47_Record;
	#endif
}