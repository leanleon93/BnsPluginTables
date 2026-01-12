#pragma once
#include "../../EU/content_quota/content_quota_quest_reward_membership_Record.h"
#include "../../KR/content_quota/content_quota_quest_reward_membership_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_quest_reward_membership_Record = BnsTables::KR::content_quota_quest_reward_membership_Record;
	#else
		using content_quota_quest_reward_membership_Record = BnsTables::EU::content_quota_quest_reward_membership_Record;
	#endif
}