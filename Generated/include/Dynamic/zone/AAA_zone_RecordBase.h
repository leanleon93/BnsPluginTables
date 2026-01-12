/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/zone/AAA_zone_RecordBase.h"
#include "../../KR/zone/AAA_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zone_Record = BnsTables::KR::zone_Record;
	#else
		using zone_Record = BnsTables::EU::zone_Record;
	#endif
}