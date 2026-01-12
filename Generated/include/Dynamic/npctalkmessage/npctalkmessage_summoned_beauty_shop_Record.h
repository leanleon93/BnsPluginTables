#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_summoned_beauty_shop_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_summoned_beauty_shop_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_summoned_beauty_shop_Record = BnsTables::KR::npctalkmessage_summoned_beauty_shop_Record;
	#else
		using npctalkmessage_summoned_beauty_shop_Record = BnsTables::EU::npctalkmessage_summoned_beauty_shop_Record;
	#endif
}