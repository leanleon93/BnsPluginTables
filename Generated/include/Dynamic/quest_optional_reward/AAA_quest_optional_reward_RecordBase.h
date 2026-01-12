#pragma once
#include "../../EU/quest_optional_reward/AAA_quest_optional_reward_RecordBase.h"
#include "../../KR/quest_optional_reward/AAA_quest_optional_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using quest_optional_reward_Record = BnsTables::KR::quest_optional_reward_Record;
	#else
		using quest_optional_reward_Record = BnsTables::EU::quest_optional_reward_Record;
	#endif
}