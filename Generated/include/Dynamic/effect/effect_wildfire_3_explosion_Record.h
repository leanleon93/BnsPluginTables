#pragma once
#include "../../EU/effect/effect_wildfire_3_explosion_Record.h"
#include "../../KR/effect/effect_wildfire_3_explosion_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_wildfire_3_explosion_Record = BnsTables::KR::effect_wildfire_3_explosion_Record;
	#else
		using effect_wildfire_3_explosion_Record = BnsTables::EU::effect_wildfire_3_explosion_Record;
	#endif
}