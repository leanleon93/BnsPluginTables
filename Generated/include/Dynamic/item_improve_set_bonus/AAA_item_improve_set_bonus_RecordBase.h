#pragma once
#include "../../EU/item_improve_set_bonus/AAA_item_improve_set_bonus_RecordBase.h"
#include "../../KR/item_improve_set_bonus/AAA_item_improve_set_bonus_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_improve_set_bonus_Record = BnsTables::KR::item_improve_set_bonus_Record;
	#else
		using item_improve_set_bonus_Record = BnsTables::EU::item_improve_set_bonus_Record;
	#endif
}