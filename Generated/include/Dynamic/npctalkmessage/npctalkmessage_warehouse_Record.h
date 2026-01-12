#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_warehouse_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_warehouse_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_warehouse_Record = BnsTables::KR::npctalkmessage_warehouse_Record;
	#else
		using npctalkmessage_warehouse_Record = BnsTables::EU::npctalkmessage_warehouse_Record;
	#endif
}