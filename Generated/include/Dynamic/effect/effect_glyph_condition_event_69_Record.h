#pragma once
#include "../../EU/effect/effect_glyph_condition_event_69_Record.h"
#include "../../KR/effect/effect_glyph_condition_event_69_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_glyph_condition_event_69_Record = BnsTables::KR::effect_glyph_condition_event_69_Record;
	#else
		using effect_glyph_condition_event_69_Record = BnsTables::EU::effect_glyph_condition_event_69_Record;
	#endif
}