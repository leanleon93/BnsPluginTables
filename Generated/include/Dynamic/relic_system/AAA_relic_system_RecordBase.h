#pragma once
#include "../../EU/relic_system/AAA_relic_system_RecordBase.h"
#include "../../KR/relic_system/AAA_relic_system_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using relic_system_Record = BnsTables::KR::relic_system_Record;
	#else
		using relic_system_Record = BnsTables::EU::relic_system_Record;
	#endif
}