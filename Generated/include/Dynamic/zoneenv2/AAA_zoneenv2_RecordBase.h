#pragma once
#include "../../EU/zoneenv2/AAA_zoneenv2_RecordBase.h"
#include "../../KR/zoneenv2/AAA_zoneenv2_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneenv2_Record = BnsTables::KR::zoneenv2_Record;
	#else
		using zoneenv2_Record = BnsTables::EU::zoneenv2_Record;
	#endif
}