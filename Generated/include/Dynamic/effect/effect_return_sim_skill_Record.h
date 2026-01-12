#pragma once
#include "../../EU/effect/effect_return_sim_skill_Record.h"
#include "../../KR/effect/effect_return_sim_skill_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_return_sim_skill_Record = BnsTables::KR::effect_return_sim_skill_Record;
	#else
		using effect_return_sim_skill_Record = BnsTables::EU::effect_return_sim_skill_Record;
	#endif
}