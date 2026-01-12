#pragma once
#include "../../EU/effect/effect_modify_ability_232_Record.h"
#include "../../KR/effect/effect_modify_ability_232_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_232_Record = BnsTables::KR::effect_modify_ability_232_Record;
	#else
		using effect_modify_ability_232_Record = BnsTables::EU::effect_modify_ability_232_Record;
	#endif
}