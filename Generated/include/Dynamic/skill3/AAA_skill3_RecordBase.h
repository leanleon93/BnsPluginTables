#pragma once
#include "../../EU/skill3/AAA_skill3_RecordBase.h"
#include "../../KR/skill3/AAA_skill3_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill3_Record = BnsTables::KR::skill3_Record;
	#else
		using skill3_Record = BnsTables::EU::skill3_Record;
	#endif
}