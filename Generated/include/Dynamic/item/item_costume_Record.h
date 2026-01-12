#pragma once
#include "../../EU/item/item_costume_Record.h"
#include "../../KR/item/item_costume_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_costume_Record = BnsTables::KR::item_costume_Record;
	#else
		using item_costume_Record = BnsTables::EU::item_costume_Record;
	#endif
}