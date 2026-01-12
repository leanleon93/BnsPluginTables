#pragma once
#include "../../EU/duel_bot_training_room_reward/AAA_duel_bot_training_room_reward_RecordBase.h"
#include "../../KR/duel_bot_training_room_reward/AAA_duel_bot_training_room_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using duel_bot_training_room_reward_Record = BnsTables::KR::duel_bot_training_room_reward_Record;
	#else
		using duel_bot_training_room_reward_Record = BnsTables::EU::duel_bot_training_room_reward_Record;
	#endif
}