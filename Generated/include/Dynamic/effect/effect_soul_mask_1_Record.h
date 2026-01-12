#pragma once
#include "../../EU/effect/effect_soul_mask_1_Record.h"
#include "../../KR/effect/effect_soul_mask_1_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_soul_mask_1_Record = BnsTables::KR::effect_soul_mask_1_Record;
	#else
		using effect_soul_mask_1_Record = BnsTables::EU::effect_soul_mask_1_Record;
	#endif
}