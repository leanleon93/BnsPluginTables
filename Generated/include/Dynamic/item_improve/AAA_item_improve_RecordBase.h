#pragma once
#include "../../EU/item_improve/AAA_item_improve_RecordBase.h"
#include "../../KR/item_improve/AAA_item_improve_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_improve_Record = BnsTables::KR::item_improve_Record;
	#else
		using item_improve_Record = BnsTables::EU::item_improve_Record;
	#endif
}