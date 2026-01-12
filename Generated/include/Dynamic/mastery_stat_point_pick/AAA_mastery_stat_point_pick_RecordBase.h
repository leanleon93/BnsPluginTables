#pragma once
#include "../../EU/mastery_stat_point_pick/AAA_mastery_stat_point_pick_RecordBase.h"
#include "../../KR/mastery_stat_point_pick/AAA_mastery_stat_point_pick_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mastery_stat_point_pick_Record = BnsTables::KR::mastery_stat_point_pick_Record;
	#else
		using mastery_stat_point_pick_Record = BnsTables::EU::mastery_stat_point_pick_Record;
	#endif
}