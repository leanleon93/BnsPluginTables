#pragma once
#include "../../EU/expand_relic_page/AAA_expand_relic_page_RecordBase.h"
#include "../../KR/expand_relic_page/AAA_expand_relic_page_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using expand_relic_page_Record = BnsTables::KR::expand_relic_page_Record;
	#else
		using expand_relic_page_Record = BnsTables::EU::expand_relic_page_Record;
	#endif
}