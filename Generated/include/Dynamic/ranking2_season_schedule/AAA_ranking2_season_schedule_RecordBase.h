#pragma once
#include "../../EU/ranking2_season_schedule/AAA_ranking2_season_schedule_RecordBase.h"
#include "../../KR/ranking2_season_schedule/AAA_ranking2_season_schedule_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ranking2_season_schedule_Record = BnsTables::KR::ranking2_season_schedule_Record;
	#else
		using ranking2_season_schedule_Record = BnsTables::EU::ranking2_season_schedule_Record;
	#endif
}