#pragma once
#include "../../EU/classic_field_zone/AAA_classic_field_zone_RecordBase.h"
#include "../../KR/classic_field_zone/AAA_classic_field_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using classic_field_zone_Record = BnsTables::KR::classic_field_zone_Record;
	#else
		using classic_field_zone_Record = BnsTables::EU::classic_field_zone_Record;
	#endif
}