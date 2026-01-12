#pragma once
#include "../../EU/effect/effect_resurrection_Record.h"
#include "../../KR/effect/effect_resurrection_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_resurrection_Record = BnsTables::KR::effect_resurrection_Record;
	#else
		using effect_resurrection_Record = BnsTables::EU::effect_resurrection_Record;
	#endif
}