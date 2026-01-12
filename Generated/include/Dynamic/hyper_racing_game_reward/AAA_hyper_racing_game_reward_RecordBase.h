#pragma once
#include "../../EU/hyper_racing_game_reward/AAA_hyper_racing_game_reward_RecordBase.h"
#include "../../KR/hyper_racing_game_reward/AAA_hyper_racing_game_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using hyper_racing_game_reward_Record = BnsTables::KR::hyper_racing_game_reward_Record;
	#else
		using hyper_racing_game_reward_Record = BnsTables::EU::hyper_racing_game_reward_Record;
	#endif
}