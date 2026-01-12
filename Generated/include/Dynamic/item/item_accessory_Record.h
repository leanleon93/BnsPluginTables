#pragma once
#include "../../EU/item/item_accessory_Record.h"
#include "../../KR/item/item_accessory_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_accessory_Record = BnsTables::KR::item_accessory_Record;
	#else
		using item_accessory_Record = BnsTables::EU::item_accessory_Record;
	#endif
}