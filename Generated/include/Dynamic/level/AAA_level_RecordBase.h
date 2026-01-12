#pragma once
#include "../../EU/level/AAA_level_RecordBase.h"
#include "../../KR/level/AAA_level_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using level_Record = BnsTables::KR::level_Record;
	#else
		using level_Record = BnsTables::EU::level_Record;
	#endif
}