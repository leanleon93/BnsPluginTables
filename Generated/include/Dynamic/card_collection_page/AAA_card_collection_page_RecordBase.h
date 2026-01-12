#pragma once
#include "../../EU/card_collection_page/AAA_card_collection_page_RecordBase.h"
#include "../../KR/card_collection_page/AAA_card_collection_page_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using card_collection_page_Record = BnsTables::KR::card_collection_page_Record;
	#else
		using card_collection_page_Record = BnsTables::EU::card_collection_page_Record;
	#endif
}