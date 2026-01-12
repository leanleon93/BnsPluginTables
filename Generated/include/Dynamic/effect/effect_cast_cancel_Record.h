#pragma once
#include "../../EU/effect/effect_cast_cancel_Record.h"
#include "../../KR/effect/effect_cast_cancel_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_cast_cancel_Record = BnsTables::KR::effect_cast_cancel_Record;
	#else
		using effect_cast_cancel_Record = BnsTables::EU::effect_cast_cancel_Record;
	#endif
}