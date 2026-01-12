#pragma once
#include "../../EU/board_gacha_reward/AAA_board_gacha_reward_RecordBase.h"
#include "../../KR/board_gacha_reward/AAA_board_gacha_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using board_gacha_reward_Record = BnsTables::KR::board_gacha_reward_Record;
	#else
		using board_gacha_reward_Record = BnsTables::EU::board_gacha_reward_Record;
	#endif
}