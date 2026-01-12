#pragma once
#include "../../EU/default_rating_score_group/AAA_default_rating_score_group_RecordBase.h"
#include "../../KR/default_rating_score_group/AAA_default_rating_score_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using default_rating_score_group_Record = BnsTables::KR::default_rating_score_group_Record;
	#else
		using default_rating_score_group_Record = BnsTables::EU::default_rating_score_group_Record;
	#endif
}