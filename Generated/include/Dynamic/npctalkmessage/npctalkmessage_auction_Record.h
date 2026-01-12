#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_auction_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_auction_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_auction_Record = BnsTables::KR::npctalkmessage_auction_Record;
	#else
		using npctalkmessage_auction_Record = BnsTables::EU::npctalkmessage_auction_Record;
	#endif
}