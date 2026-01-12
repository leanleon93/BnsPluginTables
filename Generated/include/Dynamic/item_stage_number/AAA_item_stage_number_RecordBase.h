#pragma once
#include "../../EU/item_stage_number/AAA_item_stage_number_RecordBase.h"
#include "../../KR/item_stage_number/AAA_item_stage_number_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_stage_number_Record = BnsTables::KR::item_stage_number_Record;
	#else
		using item_stage_number_Record = BnsTables::EU::item_stage_number_Record;
	#endif
}