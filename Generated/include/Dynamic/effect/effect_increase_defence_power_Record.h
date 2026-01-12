#pragma once
#include "../../EU/effect/effect_increase_defence_power_Record.h"
#include "../../KR/effect/effect_increase_defence_power_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_increase_defence_power_Record = BnsTables::KR::effect_increase_defence_power_Record;
	#else
		using effect_increase_defence_power_Record = BnsTables::EU::effect_increase_defence_power_Record;
	#endif
}