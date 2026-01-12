#pragma once
#include "../../EU/soul_boost_mission/AAA_soul_boost_mission_RecordBase.h"
#include "../../KR/soul_boost_mission/AAA_soul_boost_mission_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using soul_boost_mission_Record = BnsTables::KR::soul_boost_mission_Record;
	#else
		using soul_boost_mission_Record = BnsTables::EU::soul_boost_mission_Record;
	#endif
}