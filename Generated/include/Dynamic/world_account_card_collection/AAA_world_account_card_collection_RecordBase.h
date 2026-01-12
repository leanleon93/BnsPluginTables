#pragma once
#include "../../EU/world_account_card_collection/AAA_world_account_card_collection_RecordBase.h"
#include "../../KR/world_account_card_collection/AAA_world_account_card_collection_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using world_account_card_collection_Record = BnsTables::KR::world_account_card_collection_Record;
	#else
		using world_account_card_collection_Record = BnsTables::EU::world_account_card_collection_Record;
	#endif
}