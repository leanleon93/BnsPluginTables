#pragma once
#include "../../EU/effect/effect_hp_heal_Record.h"
#include "../../KR/effect/effect_hp_heal_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hp_heal_Record = BnsTables::KR::effect_hp_heal_Record;
	#else
		using effect_hp_heal_Record = BnsTables::EU::effect_hp_heal_Record;
	#endif
}