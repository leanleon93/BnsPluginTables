#pragma once
#include "../../EU/item_fusion/AAA_item_fusion_RecordBase.h"
#include "../../KR/item_fusion/AAA_item_fusion_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_fusion_Record = BnsTables::KR::item_fusion_Record;
	#else
		using item_fusion_Record = BnsTables::EU::item_fusion_Record;
	#endif
}