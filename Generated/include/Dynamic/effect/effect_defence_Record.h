#pragma once
#include "../../EU/effect/effect_defence_Record.h"
#include "../../KR/effect/effect_defence_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_defence_Record = BnsTables::KR::effect_defence_Record;
	#else
		using effect_defence_Record = BnsTables::EU::effect_defence_Record;
	#endif
}