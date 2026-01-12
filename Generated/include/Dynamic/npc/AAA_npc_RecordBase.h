#pragma once
#include "../../EU/npc/AAA_npc_RecordBase.h"
#include "../../KR/npc/AAA_npc_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using npc_Record = BnsTables::KR::npc_Record;
	#else
		using npc_Record = BnsTables::EU::npc_Record;
	#endif
}