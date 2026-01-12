#pragma once
#include "../../EU/benefit_reward_set/AAA_benefit_reward_set_RecordBase.h"
#include "../../KR/benefit_reward_set/AAA_benefit_reward_set_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using benefit_reward_set_Record = BnsTables::KR::benefit_reward_set_Record;
	#else
		using benefit_reward_set_Record = BnsTables::EU::benefit_reward_set_Record;
	#endif
}