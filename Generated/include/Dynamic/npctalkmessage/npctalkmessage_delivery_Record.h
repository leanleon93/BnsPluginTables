#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_delivery_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_delivery_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_delivery_Record = BnsTables::KR::npctalkmessage_delivery_Record;
	#else
		using npctalkmessage_delivery_Record = BnsTables::EU::npctalkmessage_delivery_Record;
	#endif
}