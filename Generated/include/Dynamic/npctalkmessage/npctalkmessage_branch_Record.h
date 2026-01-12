#pragma once
#include "../../EU/npctalkmessage/npctalkmessage_branch_Record.h"
#include "../../KR/npctalkmessage/npctalkmessage_branch_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_branch_Record = BnsTables::KR::npctalkmessage_branch_Record;
	#else
		using npctalkmessage_branch_Record = BnsTables::EU::npctalkmessage_branch_Record;
	#endif
}