#pragma once
#include "../../EU/effect/effect_duel_fighter_change_Record.h"
#include "../../KR/effect/effect_duel_fighter_change_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_duel_fighter_change_Record = BnsTables::KR::effect_duel_fighter_change_Record;
	#else
		using effect_duel_fighter_change_Record = BnsTables::EU::effect_duel_fighter_change_Record;
	#endif
}