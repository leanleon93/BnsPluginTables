#pragma once
#include "../../EU/surveyquestions_questionexample/AAA_surveyquestions_questionexample_RecordBase.h"
#include "../../KR/surveyquestions_questionexample/AAA_surveyquestions_questionexample_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using surveyquestions_questionexample_Record = BnsTables::KR::surveyquestions_questionexample_Record;
	#else
		using surveyquestions_questionexample_Record = BnsTables::EU::surveyquestions_questionexample_Record;
	#endif
}