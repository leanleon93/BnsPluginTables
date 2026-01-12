#pragma once
#include "../../EU/jackpot_boss_zone/AAA_jackpot_boss_zone_RecordBase.h"
#include "../../KR/jackpot_boss_zone/AAA_jackpot_boss_zone_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using jackpot_boss_zone_Record = BnsTables::KR::jackpot_boss_zone_Record;
	#else
		using jackpot_boss_zone_Record = BnsTables::EU::jackpot_boss_zone_Record;
	#endif
}