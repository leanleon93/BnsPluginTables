#pragma once
#include "../../EU/filter/filter_npc_id_Record.h"
#include "../../KR/filter/filter_npc_id_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_npc_id_Record = BnsTables::KR::filter_npc_id_Record;
	#else
		using filter_npc_id_Record = BnsTables::EU::filter_npc_id_Record;
	#endif
}