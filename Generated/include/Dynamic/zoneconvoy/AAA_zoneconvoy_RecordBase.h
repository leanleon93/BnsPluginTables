#pragma once
#include "../../EU/zoneconvoy/AAA_zoneconvoy_RecordBase.h"
#include "../../KR/zoneconvoy/AAA_zoneconvoy_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneconvoy_Record = BnsTables::KR::zoneconvoy_Record;
	#else
		using zoneconvoy_Record = BnsTables::EU::zoneconvoy_Record;
	#endif
}