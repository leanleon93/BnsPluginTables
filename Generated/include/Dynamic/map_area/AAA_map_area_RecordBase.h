/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/map_area/AAA_map_area_RecordBase.h"
#include "../../KR/map_area/AAA_map_area_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using map_area_Record = BnsTables::KR::map_area_Record;
	#else
		using map_area_Record = BnsTables::EU::map_area_Record;
	#endif
}