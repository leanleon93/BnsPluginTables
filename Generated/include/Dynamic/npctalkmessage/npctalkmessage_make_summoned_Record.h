#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_make_summoned_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_make_summoned_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_make_summoned_Record = BnsTables::KR::npctalkmessage_make_summoned_Record;
	#else
		using npctalkmessage_make_summoned_Record = BnsTables::EU::npctalkmessage_make_summoned_Record;
	#endif
}