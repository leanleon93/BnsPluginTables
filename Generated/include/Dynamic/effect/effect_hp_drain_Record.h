/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_hp_drain_Record.h"
#include "../../KR/effect/effect_hp_drain_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_hp_drain_Record = BnsTables::KR::effect_hp_drain_Record;
	#else
		using effect_hp_drain_Record = BnsTables::EU::effect_hp_drain_Record;
	#endif
}