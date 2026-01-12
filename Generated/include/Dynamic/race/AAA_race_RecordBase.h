/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/race/AAA_race_RecordBase.h"
#include "../../KR/race/AAA_race_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using race_Record = BnsTables::KR::race_Record;
	#else
		using race_Record = BnsTables::EU::race_Record;
	#endif
}