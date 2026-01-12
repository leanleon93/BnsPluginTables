#pragma once
#include "../../EU/effect/effect_external_injury_Record.h"
#include "../../KR/effect/effect_external_injury_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_external_injury_Record = BnsTables::KR::effect_external_injury_Record;
	#else
		using effect_external_injury_Record = BnsTables::EU::effect_external_injury_Record;
	#endif
}