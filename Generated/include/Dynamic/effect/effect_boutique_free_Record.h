#pragma once
#include "../../EU/effect/effect_boutique_free_Record.h"
#include "../../KR/effect/effect_boutique_free_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_boutique_free_Record = BnsTables::KR::effect_boutique_free_Record;
	#else
		using effect_boutique_free_Record = BnsTables::EU::effect_boutique_free_Record;
	#endif
}