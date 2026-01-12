#pragma once
#include "../../EU/skill_modify_info/skill_modify_info_skill_Record.h"
#include "../../KR/skill_modify_info/skill_modify_info_skill_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_modify_info_skill_Record = BnsTables::KR::skill_modify_info_skill_Record;
	#else
		using skill_modify_info_skill_Record = BnsTables::EU::skill_modify_info_skill_Record;
	#endif
}