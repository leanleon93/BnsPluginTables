#pragma once
#include "../../EU/effect/effect_internal_force_attack_Record.h"
#include "../../KR/effect/effect_internal_force_attack_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_internal_force_attack_Record = BnsTables::KR::effect_internal_force_attack_Record;
	#else
		using effect_internal_force_attack_Record = BnsTables::EU::effect_internal_force_attack_Record;
	#endif
}