#pragma once
#include "../../EU/expand_random_store/AAA_expand_random_store_RecordBase.h"
#include "../../KR/expand_random_store/AAA_expand_random_store_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using expand_random_store_Record = BnsTables::KR::expand_random_store_Record;
	#else
		using expand_random_store_Record = BnsTables::EU::expand_random_store_Record;
	#endif
}