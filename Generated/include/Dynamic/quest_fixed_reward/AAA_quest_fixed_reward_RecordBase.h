#pragma once
#include "../../EU/quest_fixed_reward/AAA_quest_fixed_reward_RecordBase.h"
#include "../../KR/quest_fixed_reward/AAA_quest_fixed_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_fixed_reward_Record = BnsTables::KR::quest_fixed_reward_Record;
	#else
		using quest_fixed_reward_Record = BnsTables::EU::quest_fixed_reward_Record;
	#endif
}