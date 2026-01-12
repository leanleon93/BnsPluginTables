#pragma once
#include "../../EU/field_zone/AAA_field_zone_RecordBase.h"
#include "../../KR/field_zone/AAA_field_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using field_zone_Record = BnsTables::KR::field_zone_Record;
	#else
		using field_zone_Record = BnsTables::EU::field_zone_Record;
	#endif
}