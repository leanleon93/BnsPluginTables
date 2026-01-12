#pragma once
#include "../../EU/special_skill_gauge/AAA_special_skill_gauge_RecordBase.h"
#include "../../KR/special_skill_gauge/AAA_special_skill_gauge_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using special_skill_gauge_Record = BnsTables::KR::special_skill_gauge_Record;
	#else
		using special_skill_gauge_Record = BnsTables::EU::special_skill_gauge_Record;
	#endif
}