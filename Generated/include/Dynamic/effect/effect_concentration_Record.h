/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_concentration_Record.h"
#include "../../KR/effect/effect_concentration_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_concentration_Record = BnsTables::KR::effect_concentration_Record;
	#else
		using effect_concentration_Record = BnsTables::EU::effect_concentration_Record;
	#endif
}