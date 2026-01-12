#pragma once
#include "../../EU/achievement_register/achievement_register_duel_npc_challenge_finished_floor_Record.h"
#include "../../KR/achievement_register/achievement_register_duel_npc_challenge_finished_floor_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_duel_npc_challenge_finished_floor_Record = BnsTables::KR::achievement_register_duel_npc_challenge_finished_floor_Record;
	#else
		using achievement_register_duel_npc_challenge_finished_floor_Record = BnsTables::EU::achievement_register_duel_npc_challenge_finished_floor_Record;
	#endif
}