#pragma once
#include "../../EU/duel_npc_challenge_strategic_skill/duel_npc_challenge_strategic_skill_active_Record.h"
#include "../../KR/duel_npc_challenge_strategic_skill/duel_npc_challenge_strategic_skill_active_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_npc_challenge_strategic_skill_active_Record = BnsTables::KR::duel_npc_challenge_strategic_skill_active_Record;
	#else
		using duel_npc_challenge_strategic_skill_active_Record = BnsTables::EU::duel_npc_challenge_strategic_skill_active_Record;
	#endif
}