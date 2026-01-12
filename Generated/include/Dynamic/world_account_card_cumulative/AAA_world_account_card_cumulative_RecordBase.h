#pragma once
#include "../../EU/world_account_card_cumulative/AAA_world_account_card_cumulative_RecordBase.h"
#include "../../KR/world_account_card_cumulative/AAA_world_account_card_cumulative_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using world_account_card_cumulative_Record = BnsTables::KR::world_account_card_cumulative_Record;
	#else
		using world_account_card_cumulative_Record = BnsTables::EU::world_account_card_cumulative_Record;
	#endif
}