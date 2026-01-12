/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_kneel_Record.h"
#include "../../KR/effect/effect_kneel_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_kneel_Record = BnsTables::KR::effect_kneel_Record;
	#else
		using effect_kneel_Record = BnsTables::EU::effect_kneel_Record;
	#endif
}