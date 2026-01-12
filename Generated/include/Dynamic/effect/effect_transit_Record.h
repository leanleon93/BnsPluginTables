#pragma once
#include "../../EU/effect/effect_transit_Record.h"
#include "../../KR/effect/effect_transit_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_transit_Record = BnsTables::KR::effect_transit_Record;
	#else
		using effect_transit_Record = BnsTables::EU::effect_transit_Record;
	#endif
}