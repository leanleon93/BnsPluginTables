#pragma once
#include "../../EU/effect/effect_modify_ability_310_Record.h"
#include "../../KR/effect/effect_modify_ability_310_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_modify_ability_310_Record = BnsTables::KR::effect_modify_ability_310_Record;
	#else
		using effect_modify_ability_310_Record = BnsTables::EU::effect_modify_ability_310_Record;
	#endif
}