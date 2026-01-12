#pragma once
#include "../../EU/item_combat/AAA_item_combat_RecordBase.h"
#include "../../KR/item_combat/AAA_item_combat_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_combat_Record = BnsTables::KR::item_combat_Record;
	#else
		using item_combat_Record = BnsTables::EU::item_combat_Record;
	#endif
}