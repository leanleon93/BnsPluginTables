#pragma once
#include "../../EU/map_group_2/AAA_map_group_2_RecordBase.h"
#include "../../KR/map_group_2/AAA_map_group_2_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using map_group_2_Record = BnsTables::KR::map_group_2_Record;
	#else
		using map_group_2_Record = BnsTables::EU::map_group_2_Record;
	#endif
}