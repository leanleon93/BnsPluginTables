#pragma once
#include "../../EU/quest_basic_reward/AAA_quest_basic_reward_RecordBase.h"
#include "../../KR/quest_basic_reward/AAA_quest_basic_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_basic_reward_Record = BnsTables::KR::quest_basic_reward_Record;
	#else
		using quest_basic_reward_Record = BnsTables::EU::quest_basic_reward_Record;
	#endif
}