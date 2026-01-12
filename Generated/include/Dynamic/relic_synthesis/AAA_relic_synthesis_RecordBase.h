#pragma once
#include "../../EU/relic_synthesis/AAA_relic_synthesis_RecordBase.h"
#include "../../KR/relic_synthesis/AAA_relic_synthesis_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using relic_synthesis_Record = BnsTables::KR::relic_synthesis_Record;
	#else
		using relic_synthesis_Record = BnsTables::EU::relic_synthesis_Record;
	#endif
}