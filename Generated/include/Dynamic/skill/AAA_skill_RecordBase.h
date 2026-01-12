#pragma once
#include "../../EU/skill/AAA_skill_RecordBase.h"
#include "../../KR/skill/AAA_skill_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_Record = BnsTables::KR::skill_Record;
	#else
		using skill_Record = BnsTables::EU::skill_Record;
	#endif
}