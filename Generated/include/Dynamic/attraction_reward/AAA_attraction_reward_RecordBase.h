#pragma once
#include "../../EU/attraction_reward/AAA_attraction_reward_RecordBase.h"
#include "../../KR/attraction_reward/AAA_attraction_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attraction_reward_Record = BnsTables::KR::attraction_reward_Record;
	#else
		using attraction_reward_Record = BnsTables::EU::attraction_reward_Record;
	#endif
}