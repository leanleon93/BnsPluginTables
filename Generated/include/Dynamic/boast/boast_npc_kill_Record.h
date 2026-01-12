#pragma once
#include "../../EU/boast/boast_npc_kill_Record.h"
#include "../../KR/boast/boast_npc_kill_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using boast_npc_kill_Record = BnsTables::KR::boast_npc_kill_Record;
	#else
		using boast_npc_kill_Record = BnsTables::EU::boast_npc_kill_Record;
	#endif
}