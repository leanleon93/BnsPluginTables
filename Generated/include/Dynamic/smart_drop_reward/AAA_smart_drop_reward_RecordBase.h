/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/smart_drop_reward/AAA_smart_drop_reward_RecordBase.h"
#include "../../KR/smart_drop_reward/AAA_smart_drop_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using smart_drop_reward_Record = BnsTables::KR::smart_drop_reward_Record;
	#else
		using smart_drop_reward_Record = BnsTables::EU::smart_drop_reward_Record;
	#endif
}