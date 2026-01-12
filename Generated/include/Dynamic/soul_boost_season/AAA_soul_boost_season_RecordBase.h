#pragma once
#include "../../EU/soul_boost_season/AAA_soul_boost_season_RecordBase.h"
#include "../../KR/soul_boost_season/AAA_soul_boost_season_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using soul_boost_season_Record = BnsTables::KR::soul_boost_season_Record;
	#else
		using soul_boost_season_Record = BnsTables::EU::soul_boost_season_Record;
	#endif
}