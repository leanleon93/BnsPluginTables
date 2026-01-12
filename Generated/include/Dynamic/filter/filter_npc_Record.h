/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/filter/filter_npc_Record.h"
#include "../../KR/filter/filter_npc_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using filter_npc_Record = BnsTables::KR::filter_npc_Record;
	#else
		using filter_npc_Record = BnsTables::EU::filter_npc_Record;
	#endif
}