/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_marking_Record.h"
#include "../../KR/effect/effect_marking_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_marking_Record = BnsTables::KR::effect_marking_Record;
	#else
		using effect_marking_Record = BnsTables::EU::effect_marking_Record;
	#endif
}