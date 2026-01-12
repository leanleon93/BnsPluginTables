#pragma once
#include "../../EU/time_limit_field_zone/AAA_time_limit_field_zone_RecordBase.h"
#include "../../KR/time_limit_field_zone/AAA_time_limit_field_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using time_limit_field_zone_Record = BnsTables::KR::time_limit_field_zone_Record;
	#else
		using time_limit_field_zone_Record = BnsTables::EU::time_limit_field_zone_Record;
	#endif
}