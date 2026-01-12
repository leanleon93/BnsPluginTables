#pragma once
#include "../../EU/racoon_store/AAA_racoon_store_RecordBase.h"
#include "../../KR/racoon_store/AAA_racoon_store_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using racoon_store_Record = BnsTables::KR::racoon_store_Record;
	#else
		using racoon_store_Record = BnsTables::EU::racoon_store_Record;
	#endif
}