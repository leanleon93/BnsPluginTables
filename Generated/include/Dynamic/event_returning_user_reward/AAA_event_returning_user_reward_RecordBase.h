/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/event_returning_user_reward/AAA_event_returning_user_reward_RecordBase.h"
#include "../../KR/event_returning_user_reward/AAA_event_returning_user_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using event_returning_user_reward_Record = BnsTables::KR::event_returning_user_reward_Record;
	#else
		using event_returning_user_reward_Record = BnsTables::EU::event_returning_user_reward_Record;
	#endif
}