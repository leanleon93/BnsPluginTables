#pragma once
#include "../../EU/standidle/AAA_standidle_RecordBase.h"
#include "../../KR/standidle/AAA_standidle_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using standidle_Record = BnsTables::KR::standidle_Record;
	#else
		using standidle_Record = BnsTables::EU::standidle_Record;
	#endif
}