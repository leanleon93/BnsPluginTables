#pragma once
#include "../../EU/effect/effect_binding_skill_step_Record.h"
#include "../../KR/effect/effect_binding_skill_step_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using effect_binding_skill_step_Record = BnsTables::KR::effect_binding_skill_step_Record;
	#else
		using effect_binding_skill_step_Record = BnsTables::EU::effect_binding_skill_step_Record;
	#endif
}