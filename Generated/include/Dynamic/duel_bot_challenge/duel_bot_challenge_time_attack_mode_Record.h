#pragma once
#include "../../EU/duel_bot_challenge/duel_bot_challenge_time_attack_mode_Record.h"
#include "../../KR/duel_bot_challenge/duel_bot_challenge_time_attack_mode_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_bot_challenge_time_attack_mode_Record = BnsTables::KR::duel_bot_challenge_time_attack_mode_Record;
	#else
		using duel_bot_challenge_time_attack_mode_Record = BnsTables::EU::duel_bot_challenge_time_attack_mode_Record;
	#endif
}