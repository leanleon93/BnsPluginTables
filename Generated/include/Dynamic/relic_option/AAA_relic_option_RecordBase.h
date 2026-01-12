#pragma once
#include "../../EU/relic_option/AAA_relic_option_RecordBase.h"
#include "../../KR/relic_option/AAA_relic_option_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using relic_option_Record = BnsTables::KR::relic_option_Record;
	#else
		using relic_option_Record = BnsTables::EU::relic_option_Record;
	#endif
}