#pragma once
#include "../../EU/npcresponse/AAA_npcresponse_RecordBase.h"
#include "../../KR/npcresponse/AAA_npcresponse_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npcresponse_Record = BnsTables::KR::npcresponse_Record;
	#else
		using npcresponse_Record = BnsTables::EU::npcresponse_Record;
	#endif
}