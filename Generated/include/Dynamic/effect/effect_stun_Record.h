#pragma once
#include "../../EU/effect/effect_stun_Record.h"
#include "../../KR/effect/effect_stun_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_stun_Record = BnsTables::KR::effect_stun_Record;
	#else
		using effect_stun_Record = BnsTables::EU::effect_stun_Record;
	#endif
}