#pragma once
#include "../../EU/ingame_shop_item/AAA_ingame_shop_item_RecordBase.h"
#include "../../KR/ingame_shop_item/AAA_ingame_shop_item_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ingame_shop_item_Record = BnsTables::KR::ingame_shop_item_Record;
	#else
		using ingame_shop_item_Record = BnsTables::EU::ingame_shop_item_Record;
	#endif
}