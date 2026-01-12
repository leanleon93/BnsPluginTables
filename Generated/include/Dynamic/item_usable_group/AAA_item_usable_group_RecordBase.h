#pragma once
#include "../../EU/item_usable_group/AAA_item_usable_group_RecordBase.h"
#include "../../KR/item_usable_group/AAA_item_usable_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_usable_group_Record = BnsTables::KR::item_usable_group_Record;
	#else
		using item_usable_group_Record = BnsTables::EU::item_usable_group_Record;
	#endif
}