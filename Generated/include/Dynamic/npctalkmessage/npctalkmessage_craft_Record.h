#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_craft_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_craft_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_craft_Record = BnsTables::KR::npctalkmessage_craft_Record;
	#else
		using npctalkmessage_craft_Record = BnsTables::EU::npctalkmessage_craft_Record;
	#endif
}