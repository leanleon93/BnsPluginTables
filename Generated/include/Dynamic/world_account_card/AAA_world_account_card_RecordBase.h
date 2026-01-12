#pragma once
#include "../../EU/world_account_card/AAA_world_account_card_RecordBase.h"
#include "../../KR/world_account_card/AAA_world_account_card_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using world_account_card_Record = BnsTables::KR::world_account_card_Record;
	#else
		using world_account_card_Record = BnsTables::EU::world_account_card_Record;
	#endif
}