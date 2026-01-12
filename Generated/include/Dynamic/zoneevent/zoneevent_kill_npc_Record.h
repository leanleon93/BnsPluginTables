#pragma once
#include "../../EU/zoneevent/zoneevent_kill_npc_Record.h"
#include "../../KR/zoneevent/zoneevent_kill_npc_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using zoneevent_kill_npc_Record = BnsTables::KR::zoneevent_kill_npc_Record;
	#else
		using zoneevent_kill_npc_Record = BnsTables::EU::zoneevent_kill_npc_Record;
	#endif
}