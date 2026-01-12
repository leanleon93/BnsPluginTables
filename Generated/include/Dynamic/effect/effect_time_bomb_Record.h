#pragma once
#include "../../EU/effect/effect_time_bomb_Record.h"
#include "../../KR/effect/effect_time_bomb_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_time_bomb_Record = BnsTables::KR::effect_time_bomb_Record;
	#else
		using effect_time_bomb_Record = BnsTables::EU::effect_time_bomb_Record;
	#endif
}