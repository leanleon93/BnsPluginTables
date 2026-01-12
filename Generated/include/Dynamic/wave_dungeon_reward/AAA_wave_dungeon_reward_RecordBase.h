#pragma once
#include "../../EU/wave_dungeon_reward/AAA_wave_dungeon_reward_RecordBase.h"
#include "../../KR/wave_dungeon_reward/AAA_wave_dungeon_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using wave_dungeon_reward_Record = BnsTables::KR::wave_dungeon_reward_Record;
	#else
		using wave_dungeon_reward_Record = BnsTables::EU::wave_dungeon_reward_Record;
	#endif
}