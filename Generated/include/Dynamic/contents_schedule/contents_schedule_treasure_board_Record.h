#pragma once
#include "../../EU/contents_schedule/contents_schedule_treasure_board_Record.h"
#include "../../KR/contents_schedule/contents_schedule_treasure_board_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using contents_schedule_treasure_board_Record = BnsTables::KR::contents_schedule_treasure_board_Record;
	#else
		using contents_schedule_treasure_board_Record = BnsTables::EU::contents_schedule_treasure_board_Record;
	#endif
}