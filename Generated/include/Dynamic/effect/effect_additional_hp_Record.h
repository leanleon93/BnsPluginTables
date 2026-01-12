#pragma once
#include "../../EU/effect/effect_additional_hp_Record.h"
#include "../../KR/effect/effect_additional_hp_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_additional_hp_Record = BnsTables::KR::effect_additional_hp_Record;
	#else
		using effect_additional_hp_Record = BnsTables::EU::effect_additional_hp_Record;
	#endif
}