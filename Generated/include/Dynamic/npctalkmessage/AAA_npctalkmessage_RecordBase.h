#pragma once
#include "../../EU/npctalkmessage/AAA_npctalkmessage_RecordBase.h"
#include "../../KR/npctalkmessage/AAA_npctalkmessage_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npctalkmessage_Record = BnsTables::KR::npctalkmessage_Record;
	#else
		using npctalkmessage_Record = BnsTables::EU::npctalkmessage_Record;
	#endif
}