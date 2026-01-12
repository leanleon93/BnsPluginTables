/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/ranking2_season/AAA_ranking2_season_RecordBase.h"
#include "../../KR/ranking2_season/AAA_ranking2_season_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ranking2_season_Record = BnsTables::KR::ranking2_season_Record;
	#else
		using ranking2_season_Record = BnsTables::EU::ranking2_season_Record;
	#endif
}