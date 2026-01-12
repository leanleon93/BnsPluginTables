#pragma once
#include "../../EU/mastery_grade/AAA_mastery_grade_RecordBase.h"
#include "../../KR/mastery_grade/AAA_mastery_grade_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mastery_grade_Record = BnsTables::KR::mastery_grade_Record;
	#else
		using mastery_grade_Record = BnsTables::EU::mastery_grade_Record;
	#endif
}