#pragma once
#include "../../EU/effect/effect_vital_attacked_Record.h"
#include "../../KR/effect/effect_vital_attacked_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_vital_attacked_Record = BnsTables::KR::effect_vital_attacked_Record;
	#else
		using effect_vital_attacked_Record = BnsTables::EU::effect_vital_attacked_Record;
	#endif
}