#pragma once
#include "../../EU/world_achievement/AAA_world_achievement_RecordBase.h"
#include "../../KR/world_achievement/AAA_world_achievement_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using world_achievement_Record = BnsTables::KR::world_achievement_Record;
	#else
		using world_achievement_Record = BnsTables::EU::world_achievement_Record;
	#endif
}