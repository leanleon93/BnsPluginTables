#pragma once
#include "../../EU/effect/effect_knob_attack_Record.h"
#include "../../KR/effect/effect_knob_attack_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_knob_attack_Record = BnsTables::KR::effect_knob_attack_Record;
	#else
		using effect_knob_attack_Record = BnsTables::EU::effect_knob_attack_Record;
	#endif
}