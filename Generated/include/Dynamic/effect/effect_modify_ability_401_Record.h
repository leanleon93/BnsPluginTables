#pragma once
#include "../../EU/effect/effect_modify_ability_401_Record.h"
#include "../../KR/effect/effect_modify_ability_401_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_401_Record = BnsTables::KR::effect_modify_ability_401_Record;
	#else
		using effect_modify_ability_401_Record = BnsTables::EU::effect_modify_ability_401_Record;
	#endif
}