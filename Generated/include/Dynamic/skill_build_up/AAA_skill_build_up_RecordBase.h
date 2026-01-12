#pragma once
#include "../../EU/skill_build_up/AAA_skill_build_up_RecordBase.h"
#include "../../KR/skill_build_up/AAA_skill_build_up_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_build_up_Record = BnsTables::KR::skill_build_up_Record;
	#else
		using skill_build_up_Record = BnsTables::EU::skill_build_up_Record;
	#endif
}