#pragma once
#include "../../EU/item_improve_option/AAA_item_improve_option_RecordBase.h"
#include "../../KR/item_improve_option/AAA_item_improve_option_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_improve_option_Record = BnsTables::KR::item_improve_option_Record;
	#else
		using item_improve_option_Record = BnsTables::EU::item_improve_option_Record;
	#endif
}