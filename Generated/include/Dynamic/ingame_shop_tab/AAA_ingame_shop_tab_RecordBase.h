#pragma once
#include "../../EU/ingame_shop_tab/AAA_ingame_shop_tab_RecordBase.h"
#include "../../KR/ingame_shop_tab/AAA_ingame_shop_tab_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ingame_shop_tab_Record = BnsTables::KR::ingame_shop_tab_Record;
	#else
		using ingame_shop_tab_Record = BnsTables::EU::ingame_shop_tab_Record;
	#endif
}