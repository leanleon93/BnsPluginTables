#pragma once
#include "../../EU/ranking2_effect_reward/AAA_ranking2_effect_reward_RecordBase.h"
#include "../../KR/ranking2_effect_reward/AAA_ranking2_effect_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using ranking2_effect_reward_Record = BnsTables::KR::ranking2_effect_reward_Record;
	#else
		using ranking2_effect_reward_Record = BnsTables::EU::ranking2_effect_reward_Record;
	#endif
}