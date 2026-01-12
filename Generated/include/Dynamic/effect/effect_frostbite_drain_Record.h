#pragma once
#include "../../EU/effect/effect_frostbite_drain_Record.h"
#include "../../KR/effect/effect_frostbite_drain_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_frostbite_drain_Record = BnsTables::KR::effect_frostbite_drain_Record;
	#else
		using effect_frostbite_drain_Record = BnsTables::EU::effect_frostbite_drain_Record;
	#endif
}