#pragma once
#include "../../EU/effect/effect_air_knockback_Record.h"
#include "../../KR/effect/effect_air_knockback_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_air_knockback_Record = BnsTables::KR::effect_air_knockback_Record;
	#else
		using effect_air_knockback_Record = BnsTables::EU::effect_air_knockback_Record;
	#endif
}