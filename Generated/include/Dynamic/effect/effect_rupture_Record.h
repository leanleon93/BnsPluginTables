#pragma once
#include "../../EU/effect/effect_rupture_Record.h"
#include "../../KR/effect/effect_rupture_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_rupture_Record = BnsTables::KR::effect_rupture_Record;
	#else
		using effect_rupture_Record = BnsTables::EU::effect_rupture_Record;
	#endif
}