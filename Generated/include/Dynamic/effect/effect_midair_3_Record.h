#pragma once
#include "../../EU/effect/effect_midair_3_Record.h"
#include "../../KR/effect/effect_midair_3_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_midair_3_Record = BnsTables::KR::effect_midair_3_Record;
	#else
		using effect_midair_3_Record = BnsTables::EU::effect_midair_3_Record;
	#endif
}