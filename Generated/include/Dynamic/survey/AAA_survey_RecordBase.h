#pragma once
#include "../../EU/survey/AAA_survey_RecordBase.h"
#include "../../KR/survey/AAA_survey_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using survey_Record = BnsTables::KR::survey_Record;
	#else
		using survey_Record = BnsTables::EU::survey_Record;
	#endif
}