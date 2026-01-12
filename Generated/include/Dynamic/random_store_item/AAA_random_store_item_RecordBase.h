#pragma once
#include "../../EU/random_store_item/AAA_random_store_item_RecordBase.h"
#include "../../KR/random_store_item/AAA_random_store_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using random_store_item_Record = BnsTables::KR::random_store_item_Record;
	#else
		using random_store_item_Record = BnsTables::EU::random_store_item_Record;
	#endif
}