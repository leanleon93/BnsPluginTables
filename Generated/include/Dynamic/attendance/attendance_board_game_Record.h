/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/attendance/attendance_board_game_Record.h"
#include "../../KR/attendance/attendance_board_game_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using attendance_board_game_Record = BnsTables::KR::attendance_board_game_Record;
	#else
		using attendance_board_game_Record = BnsTables::EU::attendance_board_game_Record;
	#endif
}