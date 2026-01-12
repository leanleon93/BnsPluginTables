/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_knockback_Record.h"
#include "../../KR/effect/effect_knockback_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_knockback_Record = BnsTables::KR::effect_knockback_Record;
	#else
		using effect_knockback_Record = BnsTables::EU::effect_knockback_Record;
	#endif
}