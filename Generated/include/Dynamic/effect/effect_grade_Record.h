#pragma once
#include "../../EU/effect/effect_grade_Record.h"
#include "../../KR/effect/effect_grade_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_grade_Record = BnsTables::KR::effect_grade_Record;
	#else
		using effect_grade_Record = BnsTables::EU::effect_grade_Record;
	#endif
}