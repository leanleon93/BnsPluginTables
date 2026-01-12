#pragma once
#include "../../EU/duel_npc_challenge_group/AAA_duel_npc_challenge_group_RecordBase.h"
#include "../../KR/duel_npc_challenge_group/AAA_duel_npc_challenge_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_npc_challenge_group_Record = BnsTables::KR::duel_npc_challenge_group_Record;
	#else
		using duel_npc_challenge_group_Record = BnsTables::EU::duel_npc_challenge_group_Record;
	#endif
}