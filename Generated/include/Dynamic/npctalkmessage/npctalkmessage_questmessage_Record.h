#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_questmessage_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_questmessage_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_questmessage_Record = BnsTables::KR::npctalkmessage_questmessage_Record;
	#else
		using npctalkmessage_questmessage_Record = BnsTables::EU::npctalkmessage_questmessage_Record;
	#endif
}