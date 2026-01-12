#pragma once
#include "../../EU/filter/filter_npc_convoy_Record.h"
#include "../../KR/filter/filter_npc_convoy_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_npc_convoy_Record = BnsTables::KR::filter_npc_convoy_Record;
	#else
		using filter_npc_convoy_Record = BnsTables::EU::filter_npc_convoy_Record;
	#endif
}