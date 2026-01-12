#pragma once
#include "../../EU/treasure_board_page/AAA_treasure_board_page_RecordBase.h"
#include "../../KR/treasure_board_page/AAA_treasure_board_page_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using treasure_board_page_Record = BnsTables::KR::treasure_board_page_Record;
	#else
		using treasure_board_page_Record = BnsTables::EU::treasure_board_page_Record;
	#endif
}