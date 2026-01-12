#pragma once
#include "../../EU/market_category_2_group/market_category_2_group_world_boss_Record.h"
#include "../../KR/market_category_2_group/market_category_2_group_world_boss_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using market_category_2_group_world_boss_Record = BnsTables::KR::market_category_2_group_world_boss_Record;
	#else
		using market_category_2_group_world_boss_Record = BnsTables::EU::market_category_2_group_world_boss_Record;
	#endif
}