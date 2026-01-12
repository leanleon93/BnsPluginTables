#pragma once
#include "../../EU/discovery_area/AAA_discovery_area_RecordBase.h"
#include "../../KR/discovery_area/AAA_discovery_area_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using discovery_area_Record = BnsTables::KR::discovery_area_Record;
	#else
		using discovery_area_Record = BnsTables::EU::discovery_area_Record;
	#endif
}