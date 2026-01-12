#pragma once
#include "../../EU/content_quota/content_quota_quest_reward_pccafe_Record.h"
#include "../../KR/content_quota/content_quota_quest_reward_pccafe_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_quest_reward_pccafe_Record = BnsTables::KR::content_quota_quest_reward_pccafe_Record;
	#else
		using content_quota_quest_reward_pccafe_Record = BnsTables::EU::content_quota_quest_reward_pccafe_Record;
	#endif
}