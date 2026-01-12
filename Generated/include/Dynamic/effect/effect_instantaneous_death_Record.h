/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/effect/effect_instantaneous_death_Record.h"
#include "../../KR/effect/effect_instantaneous_death_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_instantaneous_death_Record = BnsTables::KR::effect_instantaneous_death_Record;
	#else
		using effect_instantaneous_death_Record = BnsTables::EU::effect_instantaneous_death_Record;
	#endif
}