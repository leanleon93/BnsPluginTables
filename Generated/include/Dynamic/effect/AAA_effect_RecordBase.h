#pragma once
#include "../../EU/effect/AAA_effect_RecordBase.h"
#include "../../KR/effect/AAA_effect_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_Record = BnsTables::KR::effect_Record;
	#else
		using effect_Record = BnsTables::EU::effect_Record;
	#endif
}