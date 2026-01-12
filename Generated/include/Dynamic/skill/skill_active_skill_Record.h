/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/skill/skill_active_skill_Record.h"
#include "../../KR/skill/skill_active_skill_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_active_skill_Record = BnsTables::KR::skill_active_skill_Record;
	#else
		using skill_active_skill_Record = BnsTables::EU::skill_active_skill_Record;
	#endif
}