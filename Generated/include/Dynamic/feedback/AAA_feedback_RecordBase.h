#pragma once
#include "../../EU/feedback/AAA_feedback_RecordBase.h"
#include "../../KR/feedback/AAA_feedback_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using feedback_Record = BnsTables::KR::feedback_Record;
	#else
		using feedback_Record = BnsTables::EU::feedback_Record;
	#endif
}