#pragma once
#include "../../EU/effect/effect_struggle_Record.h"
#include "../../KR/effect/effect_struggle_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_struggle_Record = BnsTables::KR::effect_struggle_Record;
	#else
		using effect_struggle_Record = BnsTables::EU::effect_struggle_Record;
	#endif
}