#pragma once
#include "../../EU/map_group_1/AAA_map_group_1_RecordBase.h"
#include "../../KR/map_group_1/AAA_map_group_1_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using map_group_1_Record = BnsTables::KR::map_group_1_Record;
	#else
		using map_group_1_Record = BnsTables::EU::map_group_1_Record;
	#endif
}