#pragma once
#include "../../EU/effect/effect_set_ghost_type_Record.h"
#include "../../KR/effect/effect_set_ghost_type_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_set_ghost_type_Record = BnsTables::KR::effect_set_ghost_type_Record;
	#else
		using effect_set_ghost_type_Record = BnsTables::EU::effect_set_ghost_type_Record;
	#endif
}