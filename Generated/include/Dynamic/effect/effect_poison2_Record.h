#pragma once
#include "../../EU/effect/effect_poison2_Record.h"
#include "../../KR/effect/effect_poison2_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_poison2_Record = BnsTables::KR::effect_poison2_Record;
	#else
		using effect_poison2_Record = BnsTables::EU::effect_poison2_Record;
	#endif
}