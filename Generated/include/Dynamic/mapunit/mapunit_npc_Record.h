#pragma once
#include "../../EU/mapunit/mapunit_npc_Record.h"
#include "../../KR/mapunit/mapunit_npc_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using mapunit_npc_Record = BnsTables::KR::mapunit_npc_Record;
	#else
		using mapunit_npc_Record = BnsTables::EU::mapunit_npc_Record;
	#endif
}