#pragma once
#include "../../EU/achievement_register/achievement_register_kill_npc_Record.h"
#include "../../KR/achievement_register/achievement_register_kill_npc_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_kill_npc_Record = BnsTables::KR::achievement_register_kill_npc_Record;
	#else
		using achievement_register_kill_npc_Record = BnsTables::EU::achievement_register_kill_npc_Record;
	#endif
}