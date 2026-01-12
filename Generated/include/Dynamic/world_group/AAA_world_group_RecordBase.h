#pragma once
#include "../../EU/world_group/AAA_world_group_RecordBase.h"
#include "../../KR/world_group/AAA_world_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using world_group_Record = BnsTables::KR::world_group_Record;
	#else
		using world_group_Record = BnsTables::EU::world_group_Record;
	#endif
}