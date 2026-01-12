#pragma once
#include "../../EU/summonedjobstylestandidle/AAA_summonedjobstylestandidle_RecordBase.h"
#include "../../KR/summonedjobstylestandidle/AAA_summonedjobstylestandidle_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using summonedjobstylestandidle_Record = BnsTables::KR::summonedjobstylestandidle_Record;
	#else
		using summonedjobstylestandidle_Record = BnsTables::EU::summonedjobstylestandidle_Record;
	#endif
}