#pragma once
#include "../../EU/skill/skill_passive_skill_Record.h"
#include "../../KR/skill/skill_passive_skill_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_passive_skill_Record = BnsTables::KR::skill_passive_skill_Record;
	#else
		using skill_passive_skill_Record = BnsTables::EU::skill_passive_skill_Record;
	#endif
}