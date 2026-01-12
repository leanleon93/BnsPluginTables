#pragma once
#include "../../EU/feedback_rank/AAA_feedback_rank_RecordBase.h"
#include "../../KR/feedback_rank/AAA_feedback_rank_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using feedback_rank_Record = BnsTables::KR::feedback_rank_Record;
	#else
		using feedback_rank_Record = BnsTables::EU::feedback_rank_Record;
	#endif
}