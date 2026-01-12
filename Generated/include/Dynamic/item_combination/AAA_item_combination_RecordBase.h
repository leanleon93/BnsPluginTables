#pragma once
#include "../../EU/item_combination/AAA_item_combination_RecordBase.h"
#include "../../KR/item_combination/AAA_item_combination_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_combination_Record = BnsTables::KR::item_combination_Record;
	#else
		using item_combination_Record = BnsTables::EU::item_combination_Record;
	#endif
}