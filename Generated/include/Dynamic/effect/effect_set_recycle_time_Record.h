#pragma once
#include "../../EU/effect/effect_set_recycle_time_Record.h"
#include "../../KR/effect/effect_set_recycle_time_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_set_recycle_time_Record = BnsTables::KR::effect_set_recycle_time_Record;
	#else
		using effect_set_recycle_time_Record = BnsTables::EU::effect_set_recycle_time_Record;
	#endif
}