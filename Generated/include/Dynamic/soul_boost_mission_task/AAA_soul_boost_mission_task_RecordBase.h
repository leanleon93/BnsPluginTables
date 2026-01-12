#pragma once
#include "../../EU/soul_boost_mission_task/AAA_soul_boost_mission_task_RecordBase.h"
#include "../../KR/soul_boost_mission_task/AAA_soul_boost_mission_task_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using soul_boost_mission_task_Record = BnsTables::KR::soul_boost_mission_task_Record;
	#else
		using soul_boost_mission_task_Record = BnsTables::EU::soul_boost_mission_task_Record;
	#endif
}