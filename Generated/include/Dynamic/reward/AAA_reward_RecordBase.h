#pragma once
#include "../../EU/reward/AAA_reward_RecordBase.h"
#include "../../KR/reward/AAA_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using reward_Record = BnsTables::KR::reward_Record;
	#else
		using reward_Record = BnsTables::EU::reward_Record;
	#endif
}