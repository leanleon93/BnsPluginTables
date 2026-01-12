#pragma once
#include "../../EU/attendance/attendance_continual_board_game_Record.h"
#include "../../KR/attendance/attendance_continual_board_game_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attendance_continual_board_game_Record = BnsTables::KR::attendance_continual_board_game_Record;
	#else
		using attendance_continual_board_game_Record = BnsTables::EU::attendance_continual_board_game_Record;
	#endif
}