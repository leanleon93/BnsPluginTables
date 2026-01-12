/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/skill/skill_action_Record.h"
#include "../../KR/skill/skill_action_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_action_Record = BnsTables::KR::skill_action_Record;
	#else
		using skill_action_Record = BnsTables::EU::skill_action_Record;
	#endif
}