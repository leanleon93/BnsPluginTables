#pragma once
#include "../../EU/effect/effect_hide_Record.h"
#include "../../KR/effect/effect_hide_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hide_Record = BnsTables::KR::effect_hide_Record;
	#else
		using effect_hide_Record = BnsTables::EU::effect_hide_Record;
	#endif
}