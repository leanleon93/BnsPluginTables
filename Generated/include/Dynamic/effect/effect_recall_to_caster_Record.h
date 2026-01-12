#pragma once
#include "../../EU/effect/effect_recall_to_caster_Record.h"
#include "../../KR/effect/effect_recall_to_caster_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_recall_to_caster_Record = BnsTables::KR::effect_recall_to_caster_Record;
	#else
		using effect_recall_to_caster_Record = BnsTables::EU::effect_recall_to_caster_Record;
	#endif
}