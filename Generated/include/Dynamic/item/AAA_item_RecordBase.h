#pragma once
#include "../../EU/item/AAA_item_RecordBase.h"
#include "../../KR/item/AAA_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_Record = BnsTables::KR::item_Record;
	#else
		using item_Record = BnsTables::EU::item_Record;
	#endif
}