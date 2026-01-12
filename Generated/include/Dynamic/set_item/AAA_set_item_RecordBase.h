#pragma once
#include "../../EU/set_item/AAA_set_item_RecordBase.h"
#include "../../KR/set_item/AAA_set_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using set_item_Record = BnsTables::KR::set_item_Record;
	#else
		using set_item_Record = BnsTables::EU::set_item_Record;
	#endif
}