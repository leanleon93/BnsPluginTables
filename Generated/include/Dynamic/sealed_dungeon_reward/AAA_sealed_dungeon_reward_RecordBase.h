#pragma once
#include "../../EU/sealed_dungeon_reward/AAA_sealed_dungeon_reward_RecordBase.h"
#include "../../KR/sealed_dungeon_reward/AAA_sealed_dungeon_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using sealed_dungeon_reward_Record = BnsTables::KR::sealed_dungeon_reward_Record;
	#else
		using sealed_dungeon_reward_Record = BnsTables::EU::sealed_dungeon_reward_Record;
	#endif
}