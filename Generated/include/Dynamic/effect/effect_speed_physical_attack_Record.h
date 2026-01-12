#pragma once
#include "../../EU/effect/effect_speed_physical_attack_Record.h"
#include "../../KR/effect/effect_speed_physical_attack_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_speed_physical_attack_Record = BnsTables::KR::effect_speed_physical_attack_Record;
	#else
		using effect_speed_physical_attack_Record = BnsTables::EU::effect_speed_physical_attack_Record;
	#endif
}