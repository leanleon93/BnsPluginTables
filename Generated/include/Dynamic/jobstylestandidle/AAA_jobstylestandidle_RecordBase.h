#pragma once
#include "../../EU/jobstylestandidle/AAA_jobstylestandidle_RecordBase.h"
#include "../../KR/jobstylestandidle/AAA_jobstylestandidle_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using jobstylestandidle_Record = BnsTables::KR::jobstylestandidle_Record;
	#else
		using jobstylestandidle_Record = BnsTables::EU::jobstylestandidle_Record;
	#endif
}