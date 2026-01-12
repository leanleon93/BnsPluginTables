#pragma once
#include "../../EU/effect/effect_immune_attribute_Record.h"
#include "../../KR/effect/effect_immune_attribute_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_immune_attribute_Record = BnsTables::KR::effect_immune_attribute_Record;
	#else
		using effect_immune_attribute_Record = BnsTables::EU::effect_immune_attribute_Record;
	#endif
}