#pragma once
#include "../../EU/filter/filter_not_npc_Record.h"
#include "../../KR/filter/filter_not_npc_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_not_npc_Record = BnsTables::KR::filter_not_npc_Record;
	#else
		using filter_not_npc_Record = BnsTables::EU::filter_not_npc_Record;
	#endif
}