#pragma once
#include "../../EU/gradebenefits/AAA_gradebenefits_RecordBase.h"
#include "../../KR/gradebenefits/AAA_gradebenefits_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using gradebenefits_Record = BnsTables::KR::gradebenefits_Record;
	#else
		using gradebenefits_Record = BnsTables::EU::gradebenefits_Record;
	#endif
}