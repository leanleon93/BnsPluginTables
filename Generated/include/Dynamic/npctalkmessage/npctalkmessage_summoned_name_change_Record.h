#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_summoned_name_change_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_summoned_name_change_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_summoned_name_change_Record = BnsTables::KR::npctalkmessage_summoned_name_change_Record;
	#else
		using npctalkmessage_summoned_name_change_Record = BnsTables::EU::npctalkmessage_summoned_name_change_Record;
	#endif
}