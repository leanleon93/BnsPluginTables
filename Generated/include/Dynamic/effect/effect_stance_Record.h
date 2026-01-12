#pragma once
#include "../../EU/effect/effect_stance_Record.h"
#include "../../KR/effect/effect_stance_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_stance_Record = BnsTables::KR::effect_stance_Record;
	#else
		using effect_stance_Record = BnsTables::EU::effect_stance_Record;
	#endif
}